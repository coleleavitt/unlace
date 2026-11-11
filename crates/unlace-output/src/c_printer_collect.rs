//! c_printer: collect.

use super::*;

// ---------------------------------------------------------------------------
// Varnode collection — pre-walk to assign names deterministically
// ---------------------------------------------------------------------------

pub(super) fn collect_insn_as_stmt(insn: &IrInsn, ctx: &mut PrintCtx) -> u32 {
    let idx = ctx.next_stmt;
    ctx.next_stmt += 1;
    ctx.stmt_depths.insert(idx, ctx.collect_depth);
    ctx.stmt_scope_paths
        .insert(idx, ctx.current_scope_path.clone());

    let annotated_slots = take_annotated_slots_for_insn(insn, ctx);
    let mut input_svs = Vec::new();
    let mut input_slots = BTreeMap::new();
    for (raw_idx, input) in insn.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        let sv = if let Some(sv) = annotated_slots
            .as_ref()
            .and_then(|slots| slots.inputs.get(&raw_idx).copied())
        {
            if sv.base != *input {
                tracing::debug!(target: "unlace::cprinter",
                    "collect stmt={idx} addr=0x{:x} op={:?} input{raw_idx} raw={input:?} annotated={sv:?}; using annotated SSA slot",
                    insn.addr, insn.op
                );
            }
            sv
        } else {
            SsaVarnode {
                base: *input,
                version: ctx.current_version(input),
            }
        };
        let name = ctx.name_of(&sv);
        if c_printer_name_trace_enabled() {
            let source = if annotated_slots
                .as_ref()
                .and_then(|slots| slots.inputs.get(&raw_idx))
                .is_some()
            {
                "collect-input-annotated"
            } else {
                "collect-input-current"
            };
            tracing::debug!(target: "unlace::cprinter::name",
                "{source} stmt={idx} addr=0x{:x} op={:?} raw_idx={raw_idx} raw={input:?} sv={sv:?} name={name}",
                insn.addr, insn.op
            );
        }
        input_svs.push(sv);
        input_slots.insert(raw_idx, sv);
        ctx.stmt_input_slot_lookup.insert((idx, raw_idx), sv);
    }
    ctx.stmt_inputs.insert(idx, input_svs);
    ctx.stmt_input_slots.insert(idx, input_slots);

    let output_sv = if let Some(slots) = annotated_slots.as_ref() {
        if let Some(sv) = slots.output {
            ctx.ssa_current.insert(sv.base, sv.version);
            ctx.ssa_next_version.insert(
                sv.base,
                ctx.ssa_next_version
                    .get(&sv.base)
                    .copied()
                    .unwrap_or(0)
                    .max(sv.version + 1),
            );
            name_output_sv_for_insn(insn, &sv, ctx);
            infer_type_from_insn(insn, &sv, ctx);
            Some(sv)
        } else {
            None
        }
    } else if let Some(output) = insn.output {
        let ver = ctx.next_version(&output);
        let sv = SsaVarnode {
            base: output,
            version: ver,
        };
        name_output_sv_for_insn(insn, &sv, ctx);
        infer_type_from_insn(insn, &sv, ctx);
        Some(sv)
    } else {
        None
    };
    ctx.stmt_outputs.insert(idx, output_sv);
    if insn.op == IrOp::Load
        && let Some(sv) = output_sv
    {
        ctx.load_output_svs.insert(sv);
    }
    ctx.stmt_insns.insert(idx, insn.clone());
    if c_printer_name_trace_enabled() {
        if let Some(sv) = output_sv {
            tracing::debug!(target: "unlace::cprinter::name",
                "collect-output stmt={idx} addr=0x{:x} op={:?} output={sv:?} name={:?}",
                insn.addr,
                insn.op,
                known_name_of_sv(ctx, &sv)
            );
        } else {
            tracing::debug!(target: "unlace::cprinter::name",
                "collect-output stmt={idx} addr=0x{:x} op={:?} output=None",
                insn.addr, insn.op
            );
        }
    }
    tracing::debug!(target: "unlace::cprinter",
        "collect stmt={idx} addr=0x{:x} op={:?} output={:?} inputs={:?}",
        insn.addr,
        insn.op,
        output_sv,
        ctx.stmt_input_slots.get(&idx)
    );
    idx
}

/// Pair a HIR statement with the SSA slots of the IR instruction it came from.
///
/// Instructions sharing an address and opcode are claimed in HIR order, but
/// the HIR does not always visit them in IR order, so any unclaimed match is
/// eligible. A statement that finds every match already claimed is a copy
/// the structurer made of one instruction (tail duplication); it gets that
/// instruction's slots when the match is unambiguous. Without slots the
/// printer invents its own SSA versions, which name a value no reader uses.
pub(super) fn take_annotated_slots_for_insn(
    insn: &IrInsn,
    ctx: &mut PrintCtx,
) -> Option<SsaStatementSlots> {
    let key = (insn.addr, insn.op);
    let candidates = ctx.ssa_statement_slots.get(&key)?;
    let claimed = ctx.ssa_statement_slot_uses.entry(key).or_default();

    let unclaimed_match = |require_input_match: bool| {
        candidates
            .iter()
            .enumerate()
            .filter(|(idx, _)| !claimed.contains(idx))
            .find(|(_, slots)| statement_slots_match_insn(slots, insn, require_input_match))
            .map(|(idx, _)| idx)
    };
    if let Some(idx) = unclaimed_match(true).or_else(|| unclaimed_match(false)) {
        claimed.insert(idx);
        return candidates.get(idx).cloned();
    }

    let only_match = |require_input_match: bool| {
        let mut matches = candidates
            .iter()
            .filter(|slots| statement_slots_match_insn(slots, insn, require_input_match));
        match (matches.next(), matches.next()) {
            (Some(slots), None) => Some(slots.clone()),
            _ => None,
        }
    };
    only_match(true).or_else(|| only_match(false))
}

pub(super) fn statement_slots_match_insn(
    slots: &SsaStatementSlots,
    insn: &IrInsn,
    require_input_match: bool,
) -> bool {
    match (slots.output, insn.output) {
        (Some(sv), Some(output)) if sv.base == output => {}
        (None, None) => {}
        _ => return false,
    }

    if !require_input_match {
        return true;
    }

    for (raw_idx, input) in insn.inputs.iter().enumerate() {
        if input.space == SpaceId::Const {
            continue;
        }
        match slots.inputs.get(&raw_idx) {
            Some(sv) if sv.base == *input => {}
            _ => return false,
        }
    }

    true
}

pub(super) fn name_output_sv_for_insn(insn: &IrInsn, sv: &SsaVarnode, ctx: &mut PrintCtx) {
    if matches!(insn.op, IrOp::Call | IrOp::Callind) && sv.base.space == SpaceId::Register {
        ctx.fresh_ssa_name_of(sv);
    } else {
        ctx.name_of(sv);
    }
}

pub(super) fn collect_varnodes(nodes: &[HirNode], ctx: &mut PrintCtx) {
    for node in nodes {
        match node {
            HirNode::Block(children) => collect_varnodes(children, ctx),

            HirNode::Statement(insn) => {
                collect_insn_as_stmt(insn, ctx);
            }

            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.control_cond_uses.push(*cond);
                // Anchor the cond read at the next-allocated stmt so the
                // hoist pass treats it as a use at the enclosing scope.
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
                ctx.collect_depth += 1;
                let then_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(then_scope);
                collect_varnodes(then_body, ctx);
                ctx.current_scope_path.pop();
                if let Some(eb) = else_body {
                    let else_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(else_scope);
                    collect_varnodes(eb, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }

            HirNode::While { cond, body } => {
                ctx.name_of(cond);
                ctx.loop_cond_uses.insert(*cond);
                ctx.cond_uses.push(*cond);
                ctx.control_cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
                ctx.collect_depth += 1;
                let body_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(body_scope);
                collect_varnodes(body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }

            HirNode::DoWhile { body, cond } => {
                ctx.collect_depth += 1;
                let body_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(body_scope);
                collect_varnodes(body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
                ctx.name_of(cond);
                ctx.loop_cond_uses.insert(*cond);
                ctx.cond_uses.push(*cond);
                ctx.control_cond_uses.push(*cond);
                // do/while reads the cond *after* the body; anchor at the
                // last-allocated stmt index inside the loop body.
                ctx.cond_use_stmts
                    .push((*cond, ctx.next_stmt.saturating_sub(1)));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
            }

            HirNode::For {
                init,
                cond,
                update,
                body,
            } => {
                if let Some(init_insn) = init {
                    collect_insn_as_stmt(init_insn, ctx);
                }
                ctx.name_of(cond);
                ctx.loop_cond_uses.insert(*cond);
                ctx.cond_uses.push(*cond);
                ctx.control_cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
                ctx.collect_depth += 1;
                let body_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(body_scope);
                collect_varnodes(body, ctx);
                collect_insn_as_stmt(update, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }

            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                ctx.name_of(cond);
                ctx.cond_uses.push(*cond);
                ctx.cond_use_stmts.push((*cond, ctx.next_stmt));
                ctx.cond_use_scope_paths
                    .push((*cond, ctx.current_scope_path.clone()));
                ctx.collect_depth += 1;
                for (_case, body, _) in cases {
                    let case_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(case_scope);
                    collect_varnodes(body, ctx);
                    ctx.current_scope_path.pop();
                }
                if let Some(def) = default {
                    let default_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(default_scope);
                    collect_varnodes(def, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }

            HirNode::Return(Some(sv)) => {
                if !ctx.parent_returns_void && sv.base.space != SpaceId::Const {
                    let ret_sv = ctx.return_value_aliases.get(sv).copied().unwrap_or(*sv);
                    ctx.name_of(&ret_sv);
                    ctx.cond_uses.push(ret_sv);
                    ctx.returned_svs.insert(ret_sv);
                    ctx.stmt_depths.insert(ctx.next_stmt, ctx.collect_depth);
                    ctx.stmt_scope_paths
                        .insert(ctx.next_stmt, ctx.current_scope_path.clone());
                    ctx.cond_use_stmts.push((ret_sv, ctx.next_stmt));
                    ctx.cond_use_scope_paths
                        .push((ret_sv, ctx.current_scope_path.clone()));
                }
            }

            HirNode::Ternary { select, .. } => collect_ternary(select, ctx),

            HirNode::GuardedTernary {
                cond_code: _,
                then_insn,
                else_insn,
                output: _,
            } => {
                // Mirror the `Ternary` collection but without the
                // SsaVarnode cond bookkeeping — the predicate is an ARM
                // cond_code (architectural NZCV state), not a per-function
                // value, so it has no SsaVarnode to register. Both arms
                // are Copy ops to a shared output (enforced by the
                // structurer's fold pass); we still allocate stmt slots
                // so name resolution / type inference stay consistent.
                for insn in [then_insn, else_insn] {
                    collect_insn_as_stmt(insn, ctx);
                }
            }

            HirNode::CselTernary {
                cmp_lhs,
                cmp_rhs,
                true_val,
                false_val,
                output,
                ..
            } => {
                // Reserve one stmt slot for the CSEL ternary itself.
                let idx = ctx.next_stmt;
                ctx.next_stmt += 1;
                ctx.stmt_depths.insert(idx, ctx.collect_depth);
                ctx.stmt_scope_paths
                    .insert(idx, ctx.current_scope_path.clone());

                let mut input_svs = Vec::new();
                let mut input_slots = BTreeMap::new();
                for (raw_idx, input) in [cmp_lhs, cmp_rhs, true_val, false_val]
                    .into_iter()
                    .enumerate()
                {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    input_svs.push(sv);
                    input_slots.insert(raw_idx, sv);
                    ctx.stmt_input_slot_lookup.insert((idx, raw_idx), sv);
                }
                ctx.stmt_inputs.insert(idx, input_svs);
                ctx.stmt_input_slots.insert(idx, input_slots);

                let ver = ctx.next_version(output);
                let out_sv = SsaVarnode {
                    base: *output,
                    version: ver,
                };
                ctx.name_of(&out_sv);
                ctx.stmt_outputs.insert(idx, Some(out_sv));
            }

            HirNode::IfCmp {
                cmp_lhs,
                cmp_rhs,
                then_body,
                else_body,
                ..
            } => {
                // Anchor the cmp operand reads at the next-allocated stmt
                // (mirrors the `If` branch above) so the hoist pass treats
                // them as uses at the enclosing scope.
                for input in [cmp_lhs, cmp_rhs] {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    let ver = ctx.current_version(input);
                    let sv = SsaVarnode {
                        base: *input,
                        version: ver,
                    };
                    ctx.name_of(&sv);
                    ctx.cond_uses.push(sv);
                    ctx.cond_use_stmts.push((sv, ctx.next_stmt));
                    ctx.cond_use_scope_paths
                        .push((sv, ctx.current_scope_path.clone()));
                }
                ctx.collect_depth += 1;
                let then_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(then_scope);
                collect_varnodes(then_body, ctx);
                ctx.current_scope_path.pop();
                if let Some(eb) = else_body {
                    let else_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(else_scope);
                    collect_varnodes(eb, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }

            HirNode::Return(None)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => {}

            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                ctx.collect_depth += 1;
                let try_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(try_scope);
                collect_varnodes(try_body, ctx);
                ctx.current_scope_path.pop();
                for (_ty, body) in catch_arms {
                    let catch_scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(catch_scope);
                    collect_varnodes(body, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => {
                ctx.collect_depth += 1;
                let try_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(try_scope);
                collect_varnodes(try_body, ctx);
                ctx.current_scope_path.pop();
                let finally_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(finally_scope);
                collect_varnodes(finally_body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => {
                ctx.collect_depth += 1;
                let try_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(try_scope);
                collect_varnodes(try_body, ctx);
                ctx.current_scope_path.pop();
                let finally_scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(finally_scope);
                collect_varnodes(except_body, ctx);
                ctx.current_scope_path.pop();
                ctx.collect_depth -= 1;
            }

            HirNode::Commented { inner, .. } => {
                // Comments are pass-through for varnode collection — recurse
                // into the wrapped node as if the wrapper weren't there. But
                // record the stmt index the wrapped `Statement` is about to be
                // assigned so `compute_foldable` keeps it materialised: the
                // attached comment is anchored to a rendered statement, and
                // folding the statement into a consumer would orphan it.
                if matches!(inner.as_ref(), HirNode::Statement(_)) {
                    let wrapped_idx = ctx.next_stmt;
                    ctx.commented_stmts.insert(wrapped_idx);
                }
                collect_varnodes(std::slice::from_ref(inner.as_ref()), ctx);
            }

            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => {
                ctx.collect_depth += 1;
                let scope = ctx.next_scope_id;
                ctx.next_scope_id += 1;
                ctx.current_scope_path.push(scope);
                collect_varnodes(then_body, ctx);
                ctx.current_scope_path.pop();
                if !else_body.is_empty() {
                    let scope = ctx.next_scope_id;
                    ctx.next_scope_id += 1;
                    ctx.current_scope_path.push(scope);
                    collect_varnodes(else_body, ctx);
                    ctx.current_scope_path.pop();
                }
                ctx.collect_depth -= 1;
            }
        }
    }
}

/// Number of statement slots [`collect_varnodes`] allocates for `nodes`.
///
/// Emission must advance `emit_stmt` in lockstep with collection. When the
/// emitter drops a subtree (a canary-fail branch, nodes after a terminal
/// statement), it skips that subtree's slots with this count so later
/// statements still read their own collected names.
pub(super) fn hir_stmt_count(nodes: &[HirNode]) -> u32 {
    nodes
        .iter()
        .map(|node| match node {
            HirNode::Block(children) => hir_stmt_count(children),
            HirNode::Statement(_) | HirNode::CselTernary { .. } => 1,
            HirNode::Ternary { select, .. } => select.insns().len() as u32,
            HirNode::GuardedTernary { .. } => 2,
            HirNode::If {
                then_body,
                else_body,
                ..
            }
            | HirNode::IfCmp {
                then_body,
                else_body,
                ..
            } => hir_stmt_count(then_body) + else_body.as_deref().map_or(0, hir_stmt_count),
            HirNode::GuardedIf {
                then_body,
                else_body,
                ..
            } => hir_stmt_count(then_body) + hir_stmt_count(else_body),
            HirNode::While { body, .. } | HirNode::DoWhile { body, .. } => hir_stmt_count(body),
            HirNode::For { init, body, .. } => u32::from(init.is_some()) + hir_stmt_count(body) + 1,
            HirNode::Switch { cases, default, .. } => {
                cases
                    .iter()
                    .map(|(_, body, _)| hir_stmt_count(body))
                    .sum::<u32>()
                    + default.as_deref().map_or(0, hir_stmt_count)
            }
            HirNode::TryCatch {
                try_body,
                catch_arms,
            } => {
                hir_stmt_count(try_body)
                    + catch_arms
                        .iter()
                        .map(|(_, body)| hir_stmt_count(body))
                        .sum::<u32>()
            }
            HirNode::TryFinally {
                try_body,
                finally_body,
            } => hir_stmt_count(try_body) + hir_stmt_count(finally_body),
            HirNode::TryExcept {
                try_body,
                except_body,
                ..
            } => hir_stmt_count(try_body) + hir_stmt_count(except_body),
            HirNode::Commented { inner, .. } => {
                hir_stmt_count(std::slice::from_ref(inner.as_ref()))
            }
            HirNode::Return(_)
            | HirNode::Goto(_)
            | HirNode::Label(_)
            | HirNode::TailCall { .. }
            | HirNode::Continue
            | HirNode::Break
            | HirNode::ObjcBlock { .. }
            | HirNode::Asm { .. } => 0,
        })
        .sum()
}

/// Skip the statement slots of a subtree the emitter does not print.
pub(super) fn skip_unemitted_nodes(nodes: &[HirNode], ctx: &mut PrintCtx) {
    ctx.emit_stmt += hir_stmt_count(nodes);
}

/// Give each printed copy of a duplicated temp definition its own SSA name.
///
/// When the structurer duplicates a block, every copy defines the same SSA
/// temp, and the fold pass reads two definitions as a control-flow merge it
/// must keep as a `// temp` variable. If all copies are the same instruction
/// and every reader sits inside the scope of the nearest copy before it, the
/// copies are independent values: each copy (after the first) gets a fresh
/// version, and its readers follow it, so each folds like any single-use temp.
pub(super) fn split_duplicated_temp_defs(ctx: &mut PrintCtx) {
    let mut defs: BTreeMap<SsaVarnode, Vec<u32>> = BTreeMap::new();
    for (&stmt, out) in &ctx.stmt_outputs {
        if let Some(sv) = out.filter(|sv| sv.base.space == SpaceId::Unique) {
            defs.entry(sv).or_default().push(stmt);
        }
    }
    defs.retain(|_, stmts| stmts.len() > 1);
    if defs.is_empty() {
        return;
    }
    let pinned: BTreeSet<SsaVarnode> = ctx
        .cond_uses
        .iter()
        .chain(ctx.ssa_phi_uses.iter())
        .chain(ctx.cond_use_stmts.iter().map(|(sv, _)| sv))
        .chain(ctx.returned_svs.iter())
        .copied()
        .collect();
    let mut next_version: BTreeMap<Varnode, u32> = BTreeMap::new();
    for sv in ctx
        .stmt_outputs
        .values()
        .flatten()
        .chain(ctx.stmt_inputs.values().flatten())
    {
        let next = next_version.entry(sv.base).or_default();
        *next = (*next).max(sv.version + 1);
    }
    for (sv, def_stmts) in defs {
        if pinned.contains(&sv) {
            continue;
        }
        let first = &ctx.stmt_insns[&def_stmts[0]];
        if def_stmts.iter().any(|stmt| {
            ctx.stmt_insns.get(stmt).is_none_or(|insn| {
                insn.op != first.op || insn.inputs != first.inputs || insn.output != first.output
            })
        }) {
            continue;
        }
        let readers: Vec<u32> = ctx
            .stmt_inputs
            .iter()
            .filter(|(_, inputs)| inputs.contains(&sv))
            .map(|(&stmt, _)| stmt)
            .collect();
        let empty = Vec::new();
        let owner_of = |reader: u32| {
            let def = *def_stmts.iter().rev().find(|&&def| def < reader)?;
            let def_path = ctx.stmt_scope_paths.get(&def).unwrap_or(&empty);
            let reader_path = ctx.stmt_scope_paths.get(&reader).unwrap_or(&empty);
            reader_path.starts_with(def_path).then_some(def)
        };
        let Some(owners) = readers
            .iter()
            .map(|&reader| owner_of(reader).map(|def| (reader, def)))
            .collect::<Option<Vec<_>>>()
        else {
            continue;
        };
        trace_temp_text(format_args!(
            "split-duplicate sv={sv:?} defs={def_stmts:?} readers={owners:?}"
        ));
        for &def in &def_stmts[1..] {
            let next = next_version.entry(sv.base).or_default();
            let copy = SsaVarnode {
                base: sv.base,
                version: *next,
            };
            *next += 1;
            ctx.stmt_outputs.insert(def, Some(copy));
            if let Some(name) = ctx.var_names.get(&sv).cloned() {
                ctx.var_names.insert(copy, name);
            }
            if let Some(ty) = ctx.var_types.get(&sv).copied() {
                ctx.var_types.insert(copy, ty);
            }
            for &(reader, _) in owners.iter().filter(|&&(_, owner)| owner == def) {
                if let Some(inputs) = ctx.stmt_inputs.get_mut(&reader) {
                    for input in inputs.iter_mut().filter(|input| **input == sv) {
                        *input = copy;
                    }
                }
                if let Some(slots) = ctx.stmt_input_slots.get_mut(&reader) {
                    for slot in slots.values_mut().filter(|slot| **slot == sv) {
                        *slot = copy;
                    }
                }
                for (_, slot) in ctx
                    .stmt_input_slot_lookup
                    .range_mut((reader, 0)..=(reader, usize::MAX))
                    .filter(|(_, slot)| **slot == sv)
                {
                    *slot = copy;
                }
            }
        }
    }
}
