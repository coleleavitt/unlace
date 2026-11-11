//! c_printer: suppression.

use super::*;

pub(super) fn is_stack_canary_compare_artifact(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if matches!(
        insn.op,
        IrOp::Call | IrOp::Callind | IrOp::Store | IrOp::Return
    ) {
        return false;
    }
    if !ctx
        .stmt_insns
        .values()
        .any(|candidate| insn_calls_symbol(candidate, "__stack_chk_fail", ctx))
    {
        return false;
    }
    let mut seen = BTreeSet::new();
    if !expr_tree_has_fs_canary_load(insn, stmt_idx, ctx, &mut seen, 0) {
        return false;
    }
    tracing::debug!(target: "unlace::cprinter",
        "stmt={stmt_idx} addr=0x{:x} op={:?} decision=suppress-stack-canary-artifact",
        insn.addr, insn.op
    );
    true
}

pub(super) fn expr_tree_has_fs_canary_load(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
    seen: &mut BTreeSet<SsaVarnode>,
    depth: u8,
) -> bool {
    if depth > 8 {
        return false;
    }
    if insn_is_fs_canary_load(insn) {
        return true;
    }
    if insn.op == IrOp::Load && insn.inputs.len() >= 2 {
        let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
        if resolve_stack_offset_for_addr(&insn.inputs[addr_idx], Some(addr_idx), stmt_idx, ctx, 0)
            .is_some_and(|offset| ctx.canary_stack_offsets.contains(&offset))
        {
            trace_decision(format_args!(
                "canary-stack-load stmt={stmt_idx} decision=artifact addr={:?}",
                insn.inputs[addr_idx]
            ));
            return true;
        }
    }
    for (input_idx, input) in insn.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        let Some(sv) = input_or_latest_sv_for_operand(input, Some(input_idx), stmt_idx, ctx) else {
            continue;
        };
        if !seen.insert(sv) {
            continue;
        }
        let Some(def_stmt) = defining_stmt_for_sv(&sv, ctx) else {
            continue;
        };
        let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
            continue;
        };
        if expr_tree_has_fs_canary_load(def_insn, def_stmt, ctx, seen, depth + 1) {
            return true;
        }
    }
    false
}

pub(super) fn operand_tree_has_fs_canary_load(
    operand: &Varnode,
    raw_idx: Option<usize>,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if operand.space == SpaceId::Const {
        return false;
    }
    let Some(sv) = input_or_latest_sv_for_operand(operand, raw_idx, stmt_idx, ctx) else {
        return false;
    };
    let Some(def_stmt) = defining_stmt_for_sv(&sv, ctx) else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    let mut seen = BTreeSet::new();
    seen.insert(sv);
    expr_tree_has_fs_canary_load(def_insn, def_stmt, ctx, &mut seen, 0)
}

pub(super) fn insn_is_fs_canary_load(insn: &IrInsn) -> bool {
    if insn.op != IrOp::Load || insn.inputs.is_empty() {
        return false;
    }
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    let load_size = insn.output.map_or(8, |out| out.size);
    try_fs_canary_load(&insn.inputs[addr_idx], load_size).is_some()
}

/// `true` when the `If`/`IfCmp` condition `cond_sv` is the stack-canary guard
/// comparison — i.e. its defining expression tree reaches a `fs:0x28` canary
/// load. The compiler emits `if (canary != reloaded) __stack_chk_fail();` in
/// the epilogue; IDA/Hex-Rays elide this guard entirely. Detecting it by the
/// *condition* (rather than the branch body) lets the printer drop the whole
/// `if` even when the fail branch carries an extra `goto` to a shared exit
/// label, which is the shape produced for canary checks inside irreducible
/// regions.
pub(super) fn cond_sv_is_stack_canary_compare(cond_sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    // The canary guard only exists when the function actually calls
    // __stack_chk_fail; gate on that to avoid mis-eliding an unrelated
    // comparison that happens to read TLS.
    if !ctx
        .stmt_insns
        .values()
        .any(|candidate| insn_calls_symbol(candidate, "__stack_chk_fail", ctx))
    {
        return false;
    }
    let Some(def_stmt) = defining_stmt_for_sv(cond_sv, ctx) else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    let mut seen = BTreeSet::new();
    expr_tree_has_fs_canary_load(def_insn, def_stmt, ctx, &mut seen, 0)
}

/// 2-level dead-variable chain propagation (Batch 3 / Wave 4).
///
/// After `compute_foldable` sets `sv_use_counts`, this pass iterates to
/// a fixpoint: for each statement whose output has `use_count == 0` AND
/// is suppressible storage AND has no side effects, decrement the use
/// counts of its inputs. This propagates "dead-ness" backward through
/// chains like:
///
/// ```text
/// v2 = LOAD(addr)     // only used by v3
/// v3 = v2 + 1         // never read → dead
/// ```
///
/// After propagation, `v2` also becomes dead (use_count drops to 0),
/// so both declarations are suppressed.
pub(super) fn propagate_dead_chains(ctx: &mut PrintCtx) {
    // Build a reverse map: input_sv → list of (stmt_idx) that read it.
    // We don't need it for the algorithm — we iterate stmt_outputs directly.

    // A dead statement stays dead in later rounds; it must release its
    // inputs only once, or every extra round steals a use from a value
    // that a live statement still reads.
    let mut retired: BTreeSet<u32> = BTreeSet::new();
    let max_rounds = 8; // safety cap
    for _round in 0..max_rounds {
        let mut changed = false;

        // Collect dead stmts in this round (can't mutate while iterating).
        let dead_stmts: Vec<u32> = ctx
            .stmt_outputs
            .iter()
            .filter(|(stmt_idx, _)| !retired.contains(stmt_idx))
            .filter_map(|(&stmt_idx, output_sv_opt)| {
                let out_sv = (*output_sv_opt)?;
                // Already folded → skip (handled by expression folding).
                if ctx.foldable_stmts.contains(&stmt_idx) {
                    return None;
                }
                // Must have zero uses.
                if ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0) != 0 {
                    return None;
                }
                let insn = ctx.stmt_insns.get(&stmt_idx)?;
                // Pure AArch64 conditional-select callothers (CSEL family)
                // are side-effect-free value computations: a dead-output one
                // is genuinely dead even though its destination is a register
                // (not "suppressible storage"). Retiring it here lets the
                // predicate comparison that fed it become dead too, so no
                // orphan `__unlace_int_*` statement leaks downstream.
                if is_dead_suppressible_csel(insn, stmt_idx, ctx) {
                    return Some(stmt_idx);
                }
                // Output must be suppressible storage.
                if !is_suppressible_storage(&out_sv.base, ctx) {
                    return None;
                }
                // Statement must not have side effects.
                if snapshot_assignment_must_be_materialized(&out_sv, insn, stmt_idx, ctx) {
                    return None;
                }
                if instr_has_side_effects(insn) {
                    return None;
                }
                Some(stmt_idx)
            })
            .collect();

        for stmt_idx in dead_stmts {
            retired.insert(stmt_idx);
            let Some(inputs) = ctx.stmt_inputs.get(&stmt_idx).cloned() else {
                continue;
            };
            for input_sv in inputs {
                if let Some(count) = ctx.sv_use_counts.get_mut(&input_sv)
                    && *count > 0
                {
                    *count -= 1;
                    changed = true;
                }
            }
        }

        if !changed {
            break;
        }
    }
}

/// Recognise `vN = 0` whose result is never read.
///
/// Conservatively limited to plain `COPY` of a constant 0 — extending to
/// other ops (e.g. `IntAnd x, 0`) is unsafe because the source operand may
/// have side effects via memory aliasing.
pub(super) fn is_dead_zero_init(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.op != IrOp::Copy || insn.inputs.len() != 1 {
        return false;
    }
    let rhs = &insn.inputs[0];
    if rhs.space != SpaceId::Const {
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx) else {
        return false;
    };
    ctx.sv_use_counts.get(out_sv).copied().unwrap_or(0) == 0
}

pub(super) fn is_dead_suppressible_store(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.output.is_none()
        || instr_has_side_effects(insn)
        || ctx.foldable_stmts.contains(&stmt_idx)
    {
        trace_dead_suppress_decision(stmt_idx, insn, None, false, "not-eligible", ctx);
        return false;
    }
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        trace_dead_suppress_decision(stmt_idx, insn, None, false, "missing-ssa-output", ctx);
        return false;
    };
    if ctx.byref_bases.contains(&out_sv.base) || ctx.cond_uses.contains(&out_sv) {
        trace_dead_suppress_decision(stmt_idx, insn, Some(out_sv), false, "byref-or-cond", ctx);
        return false;
    }
    if is_redundant_inverted_control_compare(insn, stmt_idx, &out_sv, ctx) {
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            true,
            "redundant-inverted-control-compare",
            ctx,
        );
        return true;
    }
    if is_transient_x86_frame_base_update(insn, stmt_idx, ctx) {
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            true,
            "transient-frame-base-update",
            ctx,
        );
        return true;
    }
    if snapshot_assignment_must_be_materialized(&out_sv, insn, stmt_idx, ctx) {
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            false,
            "snapshot-materialized",
            ctx,
        );
        return false;
    }
    if insn.op == IrOp::Load {
        let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
        if use_count == 0 {
            trace_dead_suppress_decision(stmt_idx, insn, Some(out_sv), true, "dead-load", ctx);
            return true;
        }
        let load_size = insn.output.map_or(8, |o| o.size);
        let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
        let readonly = insn.inputs.get(addr_idx).is_some_and(|addr| {
            try_readonly_scalar_load(addr, Some(addr_idx), stmt_idx, load_size, ctx).is_some()
        });
        let inlineable = stable_load_expr_is_inlineable(insn, stmt_idx, ctx) || readonly;
        let decision = inlineable && use_count <= 1;
        trace_dead_suppress_decision(
            stmt_idx,
            insn,
            Some(out_sv),
            decision,
            if decision {
                "inlineable-load"
            } else {
                "materialized-load"
            },
            ctx,
        );
        return decision;
    }
    let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
    let decision = is_suppressible_storage(&out_sv.base, ctx) && use_count == 0;
    trace_dead_suppress_decision(
        stmt_idx,
        insn,
        Some(out_sv),
        decision,
        if decision {
            "dead-suppressible-storage"
        } else if use_count > 0 {
            "live-storage"
        } else {
            "visible-storage"
        },
        ctx,
    );
    decision
}

pub(super) fn trace_dead_suppress_decision(
    stmt_idx: u32,
    insn: &IrInsn,
    out_sv: Option<SsaVarnode>,
    decision: bool,
    reason: &str,
    ctx: &PrintCtx,
) {
    if !c_printer_trace_enabled() {
        return;
    }
    let out_name = out_sv.and_then(|sv| known_name_of_sv(ctx, &sv));
    let uses = out_sv
        .map(|sv| ctx.sv_use_counts.get(&sv).copied().unwrap_or(0))
        .unwrap_or(0);
    let phi = out_sv.is_some_and(|sv| ctx.ssa_phi_uses.contains(&sv));
    let inputs = ctx
        .stmt_input_slots
        .get(&stmt_idx)
        .map(|slots| {
            slots
                .iter()
                .map(|(slot, sv)| {
                    format!(
                        "{slot}:{sv:?}:{:?}",
                        known_name_of_sv(ctx, sv).unwrap_or_default()
                    )
                })
                .collect::<Vec<_>>()
                .join(",")
        })
        .unwrap_or_default();
    tracing::debug!(target: "unlace::cprinter",
        "dead-suppress stmt={stmt_idx} addr=0x{:x} op={:?} out={out_sv:?} name={out_name:?} uses={uses} phi={phi} inputs=[{inputs}] decision={decision} reason={reason}",
        insn.addr, insn.op
    );
}

pub(super) fn snapshot_assignment_must_be_materialized(
    output_sv: &SsaVarnode,
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    ctx.stmt_inputs
        .range((stmt_idx + 1)..)
        .any(|(&use_stmt, inputs)| {
            inputs.contains(output_sv)
                && copy_like_snapshot_source_redefined_before_consumer(
                    output_sv, insn, stmt_idx, use_stmt, ctx,
                )
        })
}

pub(super) fn should_suppress_var_decl(sv: &SsaVarnode, ctx: &PrintCtx) -> bool {
    if is_instruction_pointer_reg(&sv.base) {
        return true;
    }
    if !is_suppressible_storage(&sv.base, ctx) {
        return false;
    }
    if ctx.byref_bases.contains(&sv.base) || ctx.cond_uses.contains(sv) {
        return false;
    }
    ctx.sv_use_counts.get(sv).copied().unwrap_or(0) == 0
}

pub(super) fn is_redundant_inverted_control_compare(
    insn: &IrInsn,
    stmt_idx: u32,
    out_sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> bool {
    let Some(inverse_op) = inverse_equality_op(insn.op) else {
        return false;
    };
    if insn.inputs.len() != 2 {
        return false;
    }
    if ctx.var_names.get(out_sv).is_none_or(|name| name != "cond") {
        return false;
    }

    ctx.stmt_outputs
        .range((stmt_idx + 1)..)
        .any(|(&later_idx, later_output)| {
            let Some(later_sv) = later_output else {
                return false;
            };
            let Some(later_insn) = ctx.stmt_insns.get(&later_idx) else {
                return false;
            };
            later_insn.op == inverse_op
                && later_insn.inputs == insn.inputs
                && is_control_only_condition_assignment(later_idx, later_sv, later_insn, ctx)
        })
}

pub(super) fn inverse_equality_op(op: IrOp) -> Option<IrOp> {
    match op {
        IrOp::IntEqual => Some(IrOp::IntNotequal),
        IrOp::IntNotequal => Some(IrOp::IntEqual),
        IrOp::FloatEqual => Some(IrOp::FloatNotequal),
        IrOp::FloatNotequal => Some(IrOp::FloatEqual),
        _ => None,
    }
}

pub(super) fn is_suppressible_storage(vn: &Varnode, ctx: &PrintCtx) -> bool {
    is_temp_varnode(vn)
        || is_flag_register(vn)
        || is_instruction_pointer_reg(vn)
        || is_frame_base_reg_ctx(vn, ctx)
        || is_synthetic_suppressed_name(vn, ctx)
        || matches!(
            ctx.base_names.get(vn).map(String::as_str),
            Some("rip") | Some("eip")
        )
}

pub(super) fn is_temp_varnode(vn: &Varnode) -> bool {
    vn.space == SpaceId::Unique
}

pub(super) fn is_synthetic_suppressed_name(vn: &Varnode, ctx: &PrintCtx) -> bool {
    let Some(name) = ctx.base_names.get(vn).map(String::as_str) else {
        return false;
    };
    matches!(
        name,
        "v_cf"
            | "v_zf"
            | "v_sf"
            | "v_of"
            | "v_pf"
            | "v_af"
            | "v_CF"
            | "v_ZF"
            | "v_SF"
            | "v_OF"
            | "v_PF"
            | "v_AF"
    ) || name.starts_with("v_tmp_")
        || name.starts_with("v_unique_")
        || name.starts_with("v_UNNAMED_")
}

pub(super) fn is_flag_register(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register
        && matches!(
            x86_64_register_name(vn.offset, vn.size),
            "CF" | "ZF" | "SF" | "OF" | "PF" | "AF"
        )
}

pub(super) fn instr_has_side_effects(insn: &IrInsn) -> bool {
    matches!(
        insn.op,
        IrOp::Store
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Return
            | IrOp::Callother
            | IrOp::New
            | IrOp::Segmentop
            | IrOp::Unimplemented
            | IrOp::Fence
            | IrOp::AtomicStore
            | IrOp::AtomicRmw
            | IrOp::AtomicCas
    )
}
