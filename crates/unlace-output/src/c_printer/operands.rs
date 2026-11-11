//! c_printer: operands.

use super::*;

// ---------------------------------------------------------------------------
// Operand rendering
// ---------------------------------------------------------------------------

pub(super) fn emit_operand_resolved(
    vn: &unlace_ir::Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    ctx: &mut PrintCtx,
) -> String {
    let _span = cprinter_detail_phase("cprinter.emit.operand-resolved");
    trace_full(format_args!(
        "emit-operand-resolved-enter stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?}"
    ));
    let rendered = emit_operand_with_prec(
        vn,
        raw_idx,
        stmt_idx,
        ConstContext::Signed,
        ParentCtx::top(),
        ctx,
    );
    trace_full(format_args!(
        "emit-operand-resolved-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} rendered={rendered:?}"
    ));
    rendered
}

/// Returns `Some(unsigned)` if the input varnode is typed as a single-byte
/// integer (i.e. a `char` in C terms), encoding signedness via the boolean.
///
/// Used to detect char-typed comparison contexts so that constant operands
/// can render as char literals.
pub(super) fn char_typed_input(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> Option<bool> {
    if vn.space == SpaceId::Const {
        return None;
    }
    let resolved_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied());
    let sv = resolved_sv.unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });
    match ctx.var_types.get(&sv).copied()? {
        PrimitiveType::Int(1) => Some(false),
        PrimitiveType::UnsignedInt(1) => Some(true),
        _ => None,
    }
}

pub(super) fn is_pointer_typed_input(vn: &Varnode, stmt_idx: u32, ctx: &PrintCtx) -> bool {
    if vn.space == SpaceId::Const {
        return false;
    }
    let resolved_sv = ctx
        .stmt_inputs
        .get(&stmt_idx)
        .and_then(|inputs| inputs.iter().find(|sv| sv.base == *vn).copied());
    let sv = resolved_sv.unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });
    ctx.var_types.get(&sv).copied() == Some(PrimitiveType::Ptr)
}

pub(super) fn const_context_for_binop_pair(
    insn: &IrInsn,
    this_idx: usize,
    stmt_idx: u32,
    ctx: &PrintCtx,
) -> ConstContext {
    let base_ctx = const_context_for_op(insn.op);
    if insn.inputs.len() < 2 {
        return base_ctx;
    }
    let other_idx = 1 - this_idx;
    if insn.inputs[this_idx].space == SpaceId::Const
        && insn.inputs[this_idx].offset == 0
        && is_pointer_typed_input(&insn.inputs[other_idx], stmt_idx, ctx)
    {
        return ConstContext::Pointer;
    }
    // Char-literal context: a small constant compared against a byte-typed
    // value renders as a C char literal (e.g. `c == 'A'`). Restricted to
    // (in)equality and ordering comparisons so we don't mis-render
    // arithmetic constants such as `c + 1` as `c + '\x01'`.
    if matches!(
        insn.op,
        IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntLessequal
            | IrOp::IntSless
            | IrOp::IntSlessequal
    ) && insn.inputs[this_idx].space == SpaceId::Const
        && insn.inputs[this_idx].size == 1
        && let Some(unsigned) = char_typed_input(&insn.inputs[other_idx], stmt_idx, ctx)
    {
        return ConstContext::Char { unsigned };
    }
    base_ctx
}

pub(super) fn emit_operand_with_prec(
    vn: &unlace_ir::Varnode,
    raw_idx: usize,
    stmt_idx: u32,
    const_ctx: ConstContext,
    parent: ParentCtx,
    ctx: &mut PrintCtx,
) -> String {
    trace_full(format_args!(
        "emit-operand-enter stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} const_ctx={const_ctx:?} parent={parent:?}"
    ));
    if vn.space == SpaceId::Const {
        if let Some(s) = ctx.string_table.get(&vn.offset) {
            let rendered = format!("\"{}\"", escape_c_string(s));
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} decision=const-string rendered={rendered:?}"
            ));
            return rendered;
        }
        let rendered = format_constant_ctx(vn.offset, vn.size, const_ctx);
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} vn={vn:?} decision=const rendered={rendered:?}"
        ));
        return rendered;
    }

    let sv = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.input-or-latest");
        input_or_latest_sv_for_operand(vn, Some(raw_idx), stmt_idx, ctx)
    }
    .unwrap_or(SsaVarnode {
        base: *vn,
        version: 0,
    });

    if let Some(addr) = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.stack-frame-address");
        try_stack_frame_address_expr(vn, Some(raw_idx), stmt_idx, ctx)
    } {
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=stack-frame-address rendered={addr:?}"
        ));
        return addr;
    }

    if let Some(value) = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.readonly-scalar");
        try_readonly_scalar_value_for_sv(&sv, ctx)
    } {
        tracing::debug!(target: "unlace::cprinter::name",
            "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=readonly value={value}"
        );
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=readonly rendered={value:?}"
        ));
        return value;
    }

    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(&sv)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        if def_insn.op == IrOp::Load && !stable_load_expr_is_inlineable(&def_insn, def_stmt, ctx) {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op=Load decision=unstable-load-name name={name}",
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op=Load decision=unstable-load-name rendered={name:?}"
            ));
            return name;
        }
        if ctx.commented_stmts.contains(&def_stmt) || ctx.line_comments.contains_key(&def_insn.addr)
        {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=commented-def-name name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=commented-def-name rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if let Some(materialized_sv) = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.materialized-source-check");
            latest_materialized_value_for_same_source(&sv, &def_insn, def_stmt, stmt_idx, ctx)
        } {
            let name = ctx.name_of(&materialized_sv);
            trace_sequence(format_args!(
                "emit-operand-materialized-source stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} def_stmt={def_stmt} op={:?} materialized_sv={materialized_sv:?} name={name:?}",
                def_insn.op
            ));
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-source-name materialized={materialized_sv:?} name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-source-name materialized={materialized_sv:?} rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let snapshot_source_redefined = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.snapshot-check");
            copy_like_snapshot_source_redefined_before_consumer(
                &sv, &def_insn, def_stmt, stmt_idx, ctx,
            )
        };
        if !ctx.foldable_stmts.contains(&def_stmt) && snapshot_source_redefined {
            tracing::debug!(target: "unlace::cprinter",
                "operand stmt={stmt_idx} sv={sv:?} def_stmt={def_stmt} decision=snapshot-name"
            );
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=snapshot-name name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=snapshot-name rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let alias_redefined_before_consumer = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.alias-redef-check");
            expression_inputs_aliased_redefined_before_consumer(
                &sv, &def_insn, def_stmt, stmt_idx, ctx,
            )
        };
        if alias_redefined_before_consumer {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=expr-input-stale name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=expr-input-stale rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if def_stmt < stmt_idx
            && !ctx.foldable_stmts.contains(&def_stmt)
            && is_control_condition_stmt(stmt_idx, ctx)
            && materialized_def_must_name_in_condition(&def_insn, def_stmt, ctx)
        {
            let name = ctx.name_of(&sv);
            trace_sequence(format_args!(
                "emit-operand-materialized-cond stmt={stmt_idx} raw_idx={raw_idx} sv={sv:?} def_stmt={def_stmt} op={:?} name={name:?} reason=def-emitted-before-condition",
                def_insn.op
            ));
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-cond-name name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-cond-name rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if def_stmt < stmt_idx
            && !ctx.foldable_stmts.contains(&def_stmt)
            && !is_dead_suppressible_store(&def_insn, def_stmt, ctx)
            && !is_dead_suppressed_stack_load(&def_insn, def_stmt, ctx)
            && inlined_read_clobbered_before(def_stmt, stmt_idx, true, ctx)
        {
            let name = ctx.name_of(&sv);
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=materialized-read-clobbered rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        if !ctx.resolving_exprs.insert(sv) {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=cycle name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=cycle rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let rendered = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.inline-def");
            emit_expr_with_prec(&def_insn, def_stmt, parent, ctx)
        };
        if ctx.folded_calls.contains(&def_stmt) {
            ctx.folded_call_texts.insert(def_stmt, rendered.clone());
        }
        ctx.resolving_exprs.remove(&sv);
        tracing::debug!(target: "unlace::cprinter::name",
            "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=inline rendered={rendered}",
            def_insn.op
        );
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=inline rendered={rendered:?}",
            def_insn.op
        ));
        return rendered;
    }

    if let Some(def_stmt) = {
        let _span = cprinter_detail_phase("cprinter.emit.operand.defining-stmt");
        defining_stmt_for_sv(&sv, ctx)
    } && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
        && {
            let _span = cprinter_detail_phase("cprinter.emit.operand.stable-load-check");
            stable_load_expr_is_inlineable(&def_insn, def_stmt, ctx)
        }
    {
        if !ctx.resolving_exprs.insert(sv) {
            let name = ctx.name_of(&sv);
            tracing::debug!(target: "unlace::cprinter::name",
                "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-cycle name={name}",
                def_insn.op
            );
            trace_full(format_args!(
                "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-cycle rendered={name:?}",
                def_insn.op
            ));
            return name;
        }
        let rendered = {
            let _span = cprinter_detail_phase("cprinter.emit.operand.inline-stable-load");
            emit_expr_with_prec(&def_insn, def_stmt, parent, ctx)
        };
        ctx.resolving_exprs.remove(&sv);
        tracing::debug!(target: "unlace::cprinter::name",
            "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-inline rendered={rendered}",
            def_insn.op
        );
        trace_full(format_args!(
            "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} def_stmt={def_stmt} op={:?} decision=stable-load-inline rendered={rendered:?}",
            def_insn.op
        ));
        return rendered;
    }

    let name = ctx.name_of(&sv);
    tracing::debug!(target: "unlace::cprinter::name",
        "emit-operand stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=name name={name}"
    );
    trace_full(format_args!(
        "emit-operand-result stmt={stmt_idx} raw_idx={raw_idx} raw={vn:?} sv={sv:?} decision=name rendered={name:?}"
    ));
    name
}
