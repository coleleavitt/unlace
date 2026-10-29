//! Printing of [`unlace_struct::HirNode::Ternary`] assignments.
//!
//! Collection gives every instruction of a ternary its own statement slot,
//! in source order, so emission must advance `emit_stmt` the same way. A
//! ternary prints as one `lhs = c ? a : b;` line only when the temporaries
//! of each arm fold into its value, no value folds into a later use, and
//! every value writes the same named variable; otherwise it prints as the
//! `if`/`else` it was recovered from.

use std::collections::BTreeSet;
use std::fmt::Write;

use unlace_ir::IrOp;
use unlace_struct::{TernaryArm, TernarySelect};

use super::{
    ParentCtx, PrintCtx, collect_insn_as_stmt, emit_expr_with_prec, emit_statement,
    hoisted_decl_for_stmt, indent, resolve_control_cond_expr,
};

/// Allocate statement slots and condition uses for a ternary exactly as for
/// the `if`/`else` it was recovered from, so declarations, folds and names
/// come out the same whichever form it prints in.
pub(super) fn collect_ternary(select: &TernarySelect, ctx: &mut PrintCtx) {
    let cond = select.cond;
    ctx.name_of(&cond);
    ctx.cond_uses.push(cond);
    ctx.control_cond_uses.push(cond);
    ctx.cond_use_stmts.push((cond, ctx.next_stmt));
    ctx.cond_use_scope_paths
        .push((cond, ctx.current_scope_path.clone()));
    ctx.collect_depth += 1;
    for arm in [&select.then_arm, &select.else_arm] {
        let scope = ctx.next_scope_id;
        ctx.next_scope_id += 1;
        ctx.current_scope_path.push(scope);
        match arm {
            TernaryArm::Value(insns) => {
                for insn in insns {
                    collect_insn_as_stmt(insn, ctx);
                }
            }
            TernaryArm::Select(nested) => collect_ternary(nested, ctx),
        }
        ctx.current_scope_path.pop();
    }
    ctx.collect_depth -= 1;
}

/// The `lhs = c ? a : b;` text of a ternary, or `None` (without consuming
/// any statement slot) when it must print as statements: a temporary of an
/// arm does not fold into the arm's value, a value folds elsewhere, or the
/// values write differently named variables.
pub(super) fn ternary_text(select: &TernarySelect, ctx: &mut PrintCtx) -> Option<String> {
    let mut names = BTreeSet::new();
    let mut idx = ctx.emit_stmt;
    for value in select.values() {
        let value_idx = idx + value.len() as u32 - 1;
        if (idx..value_idx).any(|temp| !ctx.foldable_stmts.contains(&temp))
            || ctx.foldable_stmts.contains(&value_idx)
        {
            return None;
        }
        let sv = ctx.stmt_outputs.get(&value_idx).copied().flatten()?;
        names.insert(ctx.name_of(&sv));
        idx = value_idx + 1;
    }
    if names.len() != 1 {
        return None;
    }
    let lhs = names.pop_first()?;
    let first_value_idx = ctx.emit_stmt + select.values()[0].len() as u32 - 1;
    let decl = ctx
        .stmt_outputs
        .get(&first_value_idx)
        .copied()
        .flatten()
        .and_then(|sv| hoisted_decl_for_stmt(first_value_idx, &sv, ctx));
    let rhs = select_expr(select, ctx);
    Some(match decl {
        Some((prefix, trailer)) => format!("{prefix}{lhs} = {rhs}{trailer}"),
        None => format!("{lhs} = {rhs};"),
    })
}

/// Print a ternary: one assignment line when possible, else `if`/`else`.
pub(super) fn emit_ternary(
    select: &TernarySelect,
    depth: usize,
    ctx: &mut PrintCtx,
    out: &mut String,
) {
    if let Some(text) = ternary_text(select, ctx) {
        indent(depth, ctx.config.tab_width, out);
        let _ = writeln!(out, "{text}");
    } else {
        emit_as_if(select, depth, ctx, out);
    }
}

fn select_expr(select: &TernarySelect, ctx: &mut PrintCtx) -> String {
    let cond = resolve_control_cond_expr(&select.cond, ctx);
    let cond = if cond.contains('?') {
        format!("({cond})")
    } else {
        cond
    };
    let then_val = arm_expr(&select.then_arm, true, ctx);
    let else_val = arm_expr(&select.else_arm, false, ctx);
    format!("{cond} ? {then_val} : {else_val}")
}

/// `?:` groups to the right, so a nested select needs parentheses only in
/// the then position, where they are kept for readability.
fn arm_expr(arm: &TernaryArm, is_then: bool, ctx: &mut PrintCtx) -> String {
    match arm {
        TernaryArm::Value(insns) => {
            // The temporaries fold into the value, so they print nothing.
            ctx.emit_stmt += insns.len() as u32 - 1;
            let idx = ctx.emit_stmt;
            ctx.emit_stmt += 1;
            let value = insns.last().expect("a value arm is never empty");
            emit_expr_with_prec(value, idx, ParentCtx::rhs_of(IrOp::Select), ctx)
        }
        TernaryArm::Select(nested) if is_then => format!("({})", select_expr(nested, ctx)),
        TernaryArm::Select(nested) => select_expr(nested, ctx),
    }
}

fn emit_as_if(select: &TernarySelect, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    let tab = ctx.config.tab_width;
    let cond = resolve_control_cond_expr(&select.cond, ctx);
    indent(depth, tab, out);
    let _ = writeln!(out, "if ({cond}) {{");
    emit_arm_as_statements(&select.then_arm, depth + 1, ctx, out);
    indent(depth, tab, out);
    let _ = writeln!(out, "}} else {{");
    emit_arm_as_statements(&select.else_arm, depth + 1, ctx, out);
    indent(depth, tab, out);
    let _ = writeln!(out, "}}");
}

fn emit_arm_as_statements(arm: &TernaryArm, depth: usize, ctx: &mut PrintCtx, out: &mut String) {
    match arm {
        TernaryArm::Value(insns) => {
            for insn in insns {
                emit_statement(insn, depth, ctx, out);
            }
        }
        TernaryArm::Select(nested) => emit_as_if(nested, depth, ctx, out),
    }
}
