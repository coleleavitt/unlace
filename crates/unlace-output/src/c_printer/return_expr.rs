//! c_printer: return expr.

use super::*;

pub(super) fn resolve_sv_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    resolve_sv_expr_inner(sv, ctx, true)
}

pub(super) fn resolve_return_expr(sv: &SsaVarnode, ctx: &mut PrintCtx) -> String {
    if sv.base.space == SpaceId::Const && sv.base.offset == 0 {
        return "0".to_string();
    }
    let ret_sv = ctx.return_value_aliases.get(sv).copied().unwrap_or(*sv);
    canonicalize_return_expr(resolve_sv_expr(&ret_sv, ctx))
}

pub(super) fn canonicalize_return_expr(expr: String) -> String {
    if let Some(stripped) = strip_return_integer_suffix(&expr) {
        return stripped;
    }
    expr
}

pub(super) fn strip_return_integer_suffix(expr: &str) -> Option<String> {
    for suffix in ["ULL", "LLU", "LL", "UL", "LU", "U", "L"] {
        let Some(core) = expr.strip_suffix(suffix) else {
            continue;
        };
        if is_simple_integer_literal(core) {
            return Some(core.to_string());
        }
    }
    None
}

pub(super) fn is_simple_integer_literal(expr: &str) -> bool {
    let expr = expr.strip_prefix('-').unwrap_or(expr);
    if let Some(hex) = expr.strip_prefix("0x").or_else(|| expr.strip_prefix("0X")) {
        return !hex.is_empty() && hex.bytes().all(|b| b.is_ascii_hexdigit());
    }
    !expr.is_empty() && expr.bytes().all(|b| b.is_ascii_digit())
}

pub(super) fn resolve_sv_expr_inner(
    sv: &SsaVarnode,
    ctx: &mut PrintCtx,
    allow_covering: bool,
) -> String {
    trace_sequence(format_args!(
        "resolve-sv-enter sv={sv:?} allow_covering={allow_covering}"
    ));
    if sv.base.space == SpaceId::Const {
        if let Some(s) = ctx.string_table.get(&sv.base.offset) {
            let rendered = format!("\"{}\"", escape_c_string(s));
            trace_sequence(format_args!(
                "resolve-sv-result sv={sv:?} source=string rendered={rendered:?}"
            ));
            return rendered;
        }
        let rendered = format_constant_ctx(sv.base.offset, sv.base.size, ConstContext::Signed);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=const rendered={rendered:?}"
        ));
        return rendered;
    }
    if let Some(&def_stmt) = ctx.sv_defining_stmt.get(sv)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
    {
        if !ctx.resolving_exprs.insert(*sv) {
            let rendered = ctx.name_of(sv);
            trace_sequence(format_args!(
                "resolve-sv-result sv={sv:?} source=recursion def_stmt={def_stmt} rendered={rendered:?}"
            ));
            return rendered;
        }
        trace_sequence(format_args!(
            "resolve-sv-def sv={sv:?} def_stmt={def_stmt} addr=0x{:x} op={:?} inputs={:?} output={:?}",
            def_insn.addr, def_insn.op, def_insn.inputs, def_insn.output
        ));
        if def_insn.op == IrOp::Multiequal {
            for (input_idx, input) in def_insn.inputs.iter().enumerate() {
                if let Some(input_sv) = ctx
                    .stmt_inputs
                    .get(&def_stmt)
                    .and_then(|inputs| inputs.get(input_idx))
                    .copied()
                {
                    let rendered = resolve_sv_expr_inner(&input_sv, ctx, allow_covering);
                    ctx.resolving_exprs.remove(sv);
                    trace_sequence(format_args!(
                        "resolve-sv-result sv={sv:?} source=multiequal-input def_stmt={def_stmt} input_idx={input_idx} input_sv={input_sv:?} rendered={rendered:?}"
                    ));
                    return rendered;
                }
                if input.space != SpaceId::Const {
                    let rendered = emit_operand_resolved(input, input_idx, def_stmt, ctx);
                    ctx.resolving_exprs.remove(sv);
                    trace_sequence(format_args!(
                        "resolve-sv-result sv={sv:?} source=multiequal-raw def_stmt={def_stmt} input_idx={input_idx} input={input:?} rendered={rendered:?}"
                    ));
                    return rendered;
                }
            }
        }
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        ctx.resolving_exprs.remove(sv);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=emit-expr def_stmt={def_stmt} rendered={rendered:?}"
        ));
        return rendered;
    }
    if (ctx.returned_svs.contains(sv) || ctx.return_value_aliases.contains_key(sv))
        && ctx.sv_use_counts.get(sv).copied().unwrap_or(0) == 1
        && let Some(def_stmt) = latest_output_stmt_for_sv(sv, ctx)
        && let Some(def_insn) = ctx.stmt_insns.get(&def_stmt).cloned()
        && can_inline_return_value_output_stmt(sv, def_stmt, &def_insn, ctx)
    {
        if !ctx.resolving_exprs.insert(*sv) {
            let rendered = ctx.name_of(sv);
            trace_sequence(format_args!(
                "resolve-sv-result sv={sv:?} source=return-recursion rendered={rendered:?}"
            ));
            return rendered;
        }
        let rendered = emit_expr(&def_insn, def_stmt, ctx);
        ctx.resolving_exprs.remove(sv);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=return-inline def_stmt={def_stmt} rendered={rendered:?}"
        ));
        return rendered;
    }
    if let Some(alias) = ctx.return_value_aliases.get(sv).copied()
        && alias != *sv
    {
        let rendered = resolve_sv_expr_inner(&alias, ctx, false);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=return-alias alias={alias:?} rendered={rendered:?}"
        ));
        return rendered;
    }
    if allow_covering && let Some(covering_sv) = latest_covering_register_output(sv, ctx) {
        let rendered = ctx.name_of(&covering_sv);
        trace_sequence(format_args!(
            "resolve-sv-result sv={sv:?} source=covering covering_sv={covering_sv:?} rendered={rendered:?}"
        ));
        return rendered;
    }
    let rendered = ctx.name_of(sv);
    trace_sequence(format_args!(
        "resolve-sv-result sv={sv:?} source=name rendered={rendered:?}"
    ));
    rendered
}

pub(super) fn latest_output_stmt_for_sv(sv: &SsaVarnode, ctx: &PrintCtx) -> Option<u32> {
    ctx.stmt_outputs
        .iter()
        .rev()
        .find_map(|(&stmt_idx, output)| {
            output.filter(|candidate| candidate == sv).map(|_| stmt_idx)
        })
}

pub(super) fn can_inline_return_value_output_stmt(
    sv: &SsaVarnode,
    stmt_idx: u32,
    insn: &IrInsn,
    ctx: &PrintCtx,
) -> bool {
    if ctx.commented_stmts.contains(&stmt_idx) || ctx.line_comments.contains_key(&insn.addr) {
        return false;
    }
    if is_never_foldable_op(insn.op)
        || (insn.op == IrOp::Copy && copy_reads_call_output(stmt_idx, ctx))
    {
        return false;
    }
    if ctx
        .stmt_outputs
        .values()
        .flatten()
        .filter(|candidate| *candidate == sv)
        .count()
        > 1
    {
        return false;
    }
    let consumer_stmt = last_consumer_stmt_for_sv(sv, ctx);
    if let Some(def_path) = ctx.stmt_scope_paths.get(&stmt_idx)
        && !def_path.is_empty()
    {
        let Some(consumer_path) = consumer_stmt.and_then(|stmt| ctx.stmt_scope_paths.get(&stmt))
        else {
            return false;
        };
        if !path_starts_with(consumer_path, def_path) {
            return false;
        }
    }
    if has_sibling_base_definition(sv, stmt_idx, consumer_stmt, ctx) {
        return false;
    }
    if let Some(consumer_stmt) = consumer_stmt
        && (copy_like_snapshot_source_redefined_before_consumer(
            sv,
            insn,
            stmt_idx,
            consumer_stmt,
            ctx,
        ) || expression_inputs_aliased_redefined_before_consumer(
            sv,
            insn,
            stmt_idx,
            consumer_stmt,
            ctx,
        ))
    {
        return false;
    }
    true
}

pub(super) fn has_sibling_base_definition(
    sv: &SsaVarnode,
    stmt_idx: u32,
    consumer_stmt: Option<u32>,
    ctx: &PrintCtx,
) -> bool {
    let Some(path) = ctx.stmt_scope_paths.get(&stmt_idx) else {
        return false;
    };
    if path.is_empty() {
        return false;
    }
    if let Some(consumer_path) = consumer_stmt.and_then(|stmt| ctx.stmt_scope_paths.get(&stmt))
        && path_starts_with(consumer_path, path)
    {
        return false;
    }
    ctx.stmt_outputs
        .iter()
        .filter_map(|(&other_stmt, output)| output.map(|other_sv| (other_stmt, other_sv)))
        .any(|(other_stmt, other_sv)| {
            if other_stmt == stmt_idx || other_sv.base != sv.base {
                return false;
            }
            let Some(other_path) = ctx.stmt_scope_paths.get(&other_stmt) else {
                return false;
            };
            !path_starts_with(path, other_path) && !path_starts_with(other_path, path)
        })
}

pub(super) fn path_starts_with(path: &[u32], prefix: &[u32]) -> bool {
    path.len() >= prefix.len() && path.iter().zip(prefix).all(|(a, b)| a == b)
}

pub(super) fn latest_covering_register_output(
    sv: &SsaVarnode,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    if sv.base.space != SpaceId::Register {
        return None;
    }
    ctx.stmt_outputs
        .iter()
        .rev()
        .filter_map(|(_, output)| output.as_ref().copied())
        .find(|candidate| {
            candidate.base.space == SpaceId::Register
                && candidate.base.offset == sv.base.offset
                && candidate.base.size > sv.base.size
                && candidate.version == sv.version
        })
}

pub(super) fn resolve_post_dowhile_return_expr(
    sv: &SsaVarnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &mut PrintCtx,
) -> Option<String> {
    if !can_resolve_post_dowhile_return_expr(sv, start_stmt, end_stmt, ctx) {
        return None;
    }

    if let Some(alias_sv) =
        latest_visible_copy_from_base_in_range(&sv.base, start_stmt, end_stmt, ctx)
    {
        return Some(ctx.name_of(&alias_sv));
    }

    let (def_stmt, _def_sv) = latest_output_for_base_in_range(&sv.base, start_stmt, end_stmt, ctx)?;
    let def_insn = ctx.stmt_insns.get(&def_stmt)?.clone();
    if instr_has_side_effects(&def_insn) {
        return None;
    }
    Some(emit_expr(&def_insn, def_stmt, ctx))
}

pub(super) fn can_resolve_post_dowhile_return_expr(
    sv: &SsaVarnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> bool {
    if sv.base.space != SpaceId::Unique {
        return false;
    }
    if latest_visible_copy_from_base_in_range(&sv.base, start_stmt, end_stmt, ctx).is_some() {
        return true;
    }
    let Some((def_stmt, _def_sv)) =
        latest_output_for_base_in_range(&sv.base, start_stmt, end_stmt, ctx)
    else {
        return false;
    };
    let Some(def_insn) = ctx.stmt_insns.get(&def_stmt) else {
        return false;
    };
    !instr_has_side_effects(def_insn)
}

pub(super) fn latest_visible_copy_from_base_in_range(
    base: &Varnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> Option<SsaVarnode> {
    ctx.stmt_outputs
        .range(start_stmt..end_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            if is_suppressible_storage(&output_sv.base, ctx) {
                return None;
            }
            let insn = ctx.stmt_insns.get(&stmt_idx)?;
            if insn.op != IrOp::Copy || insn.inputs.first() != Some(base) {
                return None;
            }
            if ctx.foldable_stmts.contains(&stmt_idx)
                || is_dead_zero_init(insn, stmt_idx, ctx)
                || is_dead_suppressible_store(insn, stmt_idx, ctx)
            {
                return None;
            }
            Some(output_sv)
        })
}

pub(super) fn latest_output_for_base_in_range(
    base: &Varnode,
    start_stmt: u32,
    end_stmt: u32,
    ctx: &PrintCtx,
) -> Option<(u32, SsaVarnode)> {
    ctx.stmt_outputs
        .range(start_stmt..end_stmt)
        .rev()
        .find_map(|(&stmt_idx, output)| {
            let output_sv = (*output)?;
            (output_sv.base == *base).then_some((stmt_idx, output_sv))
        })
}
