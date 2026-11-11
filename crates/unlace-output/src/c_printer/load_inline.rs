//! c_printer: load inline.

use super::*;

pub(super) fn materialized_def_must_name_in_condition(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    if insn.op != IrOp::Load {
        return true;
    }
    if load_output_is_suppressed_for_inline(insn, stmt_idx, ctx) {
        return false;
    }
    true
}

pub(super) fn load_output_is_suppressed_for_inline(
    insn: &IrInsn,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> bool {
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        return false;
    };
    let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
    if use_count > 1 {
        return false;
    }
    if use_count == 0 {
        return true;
    }
    let load_size = insn.output.map_or(8, |o| o.size);
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    let readonly = insn.inputs.get(addr_idx).is_some_and(|addr| {
        try_readonly_scalar_load(addr, Some(addr_idx), stmt_idx, load_size, ctx).is_some()
    });
    stable_load_expr_is_inlineable(insn, stmt_idx, ctx) || readonly
}

/// Whether the load at `stmt_idx` dereferences a register (`*(_QWORD *)rax`)
/// rather than a fixed or stack address, which print inline at the reader.
pub(super) fn loads_through_register(stmt_idx: u32, ctx: &PrintCtx) -> bool {
    ctx.stmt_input_slots
        .get(&stmt_idx)
        .and_then(|slots| slots.get(&1))
        .is_some_and(|addr| addr.base.space == SpaceId::Register && !is_x86_frame_base(&addr.base))
}

pub(super) fn stable_load_expr_is_inlineable(insn: &IrInsn, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if insn.op != IrOp::Load {
        return false;
    }
    let load_size = insn.output.map_or(8, |o| o.size);
    let addr_idx = if insn.inputs.len() >= 2 { 1 } else { 0 };
    if addr_idx >= insn.inputs.len() {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} decision=false reason=missing-address"
        ));
        return false;
    }
    let addr = &insn.inputs[addr_idx];
    if let Some(stack_expr) =
        try_stack_frame_access_name(addr, Some(addr_idx), stmt_idx, load_size, ctx)
    {
        let offset = resolve_stack_offset_for_addr(addr, Some(addr_idx), stmt_idx, ctx, 0);
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} offset={offset:?} expr={stack_expr:?} decision=true reason=stack-frame"
        ));
        return true;
    }
    if object_access_is_stable(addr, stmt_idx, load_size, ctx) {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} decision=true reason=object"
        ));
        return true;
    }
    if typed_access_is_stable(addr, stmt_idx, load_size, ctx) {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} decision=true reason=field"
        ));
        return true;
    }
    if single_use_load_expr_is_inlineable(insn, stmt_idx, addr_idx, load_size, ctx) {
        trace_load_text(format_args!(
            "stable-load stmt={stmt_idx} addr={addr:?} decision=true reason=single-use"
        ));
        return true;
    }
    trace_load_text(format_args!(
        "stable-load stmt={stmt_idx} addr={addr:?} decision=false reason=unstable"
    ));
    false
}

/// Whether a load read exactly once renders at its reader instead of being
/// assigned to a variable first.
///
/// This mirrors Hex-Rays' local propagation (hexx64 `sub_17D8C0`): a
/// definition is substituted into its first use (`sub_129150`,
/// `mblock_t::find_first_use`) unless an instruction in between writes
/// memory or redefines one of its operands, and a value read more than once
/// stays a variable. A static load may move into a nested scope of its
/// definition because its address cannot change. Any other load must be read
/// in the scope it is defined in and not by a loop condition, so the moved
/// read runs exactly when the original one did. When the reader is itsexecutable
/// folded, the read moves on to where that reader is printed.
pub(super) fn single_use_load_expr_is_inlineable(
    insn: &IrInsn,
    stmt_idx: u32,
    addr_idx: usize,
    load_size: u8,
    ctx: &PrintCtx,
) -> bool {
    let Some(addr) = insn.inputs.get(addr_idx) else {
        return false;
    };
    if is_return_address_stack_load_artifact(insn, stmt_idx, ctx) {
        trace_load_text(format_args!(
            "single-use-load stmt={stmt_idx} decision=false reason=return-address"
        ));
        return false;
    }
    let is_static = try_global_var_name(addr, Some(addr_idx), stmt_idx, load_size, ctx).is_some();
    let Some(Some(out_sv)) = ctx.stmt_outputs.get(&stmt_idx).copied() else {
        trace_load_text(format_args!(
            "single-use-load stmt={stmt_idx} decision=false reason=missing-output"
        ));
        return false;
    };
    let use_count = ctx.sv_use_counts.get(&out_sv).copied().unwrap_or(0);
    if use_count != 1 {
        trace_load_text(format_args!(
            "single-use-load stmt={stmt_idx} out={out_sv:?} uses={use_count} decision=false reason=not-single-use"
        ));
        return false;
    }
    let Some(consumer_stmt) = last_consumer_stmt_for_sv(&out_sv, ctx) else {
        trace_load_text(format_args!(
            "single-use-load stmt={stmt_idx} out={out_sv:?} decision=false reason=no-consumer"
        ));
        return false;
    };
    if consumer_stmt <= stmt_idx {
        trace_load_text(format_args!(
            "single-use-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=consumer-before-def"
        ));
        return false;
    }
    if consumer_uses_sv_as_indirect_call_target(&out_sv, consumer_stmt, ctx) {
        trace_load_text(format_args!(
            "single-use-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=call-target"
        ));
        return false;
    }
    let def_path = ctx
        .stmt_scope_paths
        .get(&stmt_idx)
        .map_or(&[][..], Vec::as_slice);
    let read_stmt = if is_static {
        let consumer_path = ctx
            .stmt_scope_paths
            .get(&consumer_stmt)
            .map_or(&[][..], Vec::as_slice);
        if !consumer_path.starts_with(def_path) {
            trace_load_text(format_args!(
                "single-use-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=scope consumer_path={consumer_path:?} def_path={def_path:?}"
            ));
            return false;
        }
        consumer_stmt
    } else {
        let Some(ReadSite {
            stmt: read_stmt,
            scope: read_path,
            ..
        }) = printed_read_site(out_sv, consumer_stmt, ctx)
        else {
            trace_load_text(format_args!(
                "single-use-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} decision=false reason=loop-or-unknown-read-site"
            ));
            return false;
        };
        if read_stmt <= stmt_idx || read_path != def_path {
            trace_load_text(format_args!(
                "single-use-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} read={read_stmt} decision=false reason=scope read_path={read_path:?} def_path={def_path:?}"
            ));
            return false;
        }
        if inlined_read_clobbered_before(stmt_idx, read_stmt, false, ctx) {
            trace_load_text(format_args!(
                "single-use-load stmt={stmt_idx} out={out_sv:?} consumer={consumer_stmt} read={read_stmt} decision=false reason=operand-redefined"
            ));
            return false;
        }
        read_stmt
    };
    let first_between = stmt_idx.saturating_add(1);
    for (&between_stmt, between_insn) in ctx.stmt_insns.range(first_between..read_stmt) {
        if instr_has_side_effects(between_insn) {
            trace_load_text(format_args!(
                "single-use-load stmt={stmt_idx} out={out_sv:?} read={read_stmt} decision=false reason=side-effect-between between={between_stmt} op={:?}",
                between_insn.op
            ));
            return false;
        }
    }
    trace_load_text(format_args!(
        "single-use-load stmt={stmt_idx} out={out_sv:?} read={read_stmt} static={is_static} decision=true"
    ));
    true
}

/// The point where a value folded into its reader is evaluated.
pub(super) struct ReadSite<'a> {
    /// Statement the read is printed in, or before for a condition.
    pub(super) stmt: u32,
    /// Lexical scope the read executes in.
    pub(super) scope: &'a [u32],
    /// Whether a control condition or `return` reads the value rather than
    /// the statement `stmt`.
    pub(super) by_condition: bool,
}

/// Where the single read of `sv` by `consumer_stmt` is printed.
///
/// A reader that is itsexecutable inlined (a folded statement, or a load printed at
/// its own reader) is printed where its value is read, so the walk follows
/// that chain while each value is read once. A condition of an `if`,
/// `switch` or `return` executes in the enclosing scope of its anchor
/// statement. There is no single read site for a loop condition, which runs
/// once per iteration, nor for a reader whose temporary is re-rendered at
/// each of its own reads.
pub(super) fn printed_read_site(
    mut sv: SsaVarnode,
    mut consumer_stmt: u32,
    ctx: &PrintCtx,
) -> Option<ReadSite<'_>> {
    let mut visited = BTreeSet::new();
    loop {
        if ctx.loop_cond_uses.contains(&sv) {
            return None;
        }
        if let Some((_, path)) = ctx
            .cond_use_scope_paths
            .iter()
            .find(|(cond, _)| *cond == sv)
        {
            return Some(ReadSite {
                stmt: consumer_stmt,
                scope: path,
                by_condition: true,
            });
        }
        if !visited.insert(consumer_stmt) {
            return None;
        }
        let reader_output = ctx.stmt_outputs.get(&consumer_stmt).copied().flatten();
        if !reader_is_inlined(consumer_stmt, ctx) {
            if reader_output.is_some_and(|out| {
                ctx.sv_defining_stmt.contains_key(&out)
                    && ctx.sv_use_counts.get(&out).copied().unwrap_or(0) > 0
            }) {
                return None;
            }
            let scope = ctx
                .stmt_scope_paths
                .get(&consumer_stmt)
                .map_or(&[][..], Vec::as_slice);
            return Some(ReadSite {
                stmt: consumer_stmt,
                scope,
                by_condition: false,
            });
        }
        sv = reader_output?;
        if ctx.sv_use_counts.get(&sv).copied().unwrap_or(0) != 1 {
            return None;
        }
        consumer_stmt = last_consumer_stmt_for_sv(&sv, ctx)?;
    }
}

/// Whether statement `stmt` is printed inside its reader rather than as a
/// statement of its own.
pub(super) fn reader_is_inlined(stmt: u32, ctx: &PrintCtx) -> bool {
    ctx.foldable_stmts.contains(&stmt)
        || ctx.stmt_insns.get(&stmt).is_some_and(|insn| {
            insn.op == IrOp::Load && stable_load_expr_is_inlineable(insn, stmt, ctx)
        })
}

pub(super) fn consumer_uses_sv_as_indirect_call_target(
    sv: &SsaVarnode,
    consumer_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if ctx
        .stmt_insns
        .get(&consumer_stmt)
        .is_none_or(|insn| insn.op != IrOp::Callind)
    {
        return false;
    }
    ctx.stmt_input_slot_lookup
        .get(&(consumer_stmt, 0))
        .or_else(|| {
            ctx.stmt_input_slots
                .get(&consumer_stmt)
                .and_then(|slots| slots.get(&0))
        })
        .is_some_and(|target| target == sv)
        || ctx
            .stmt_inputs
            .get(&consumer_stmt)
            .and_then(|inputs| inputs.first())
            .is_some_and(|target| target == sv)
}
