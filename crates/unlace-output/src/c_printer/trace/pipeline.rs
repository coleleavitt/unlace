use super::super::*;
use super::gate::*;

pub(in crate::c_printer) fn trace_ctx_snapshot(stage: &str, ctx: &PrintCtx) {
    trace_full(format_args!(
        "ctx-snapshot stage={stage} next_stmt={} emit_stmt={} vars={} merged={} roles={} types={} foldable={} sv_defs={} use_counts={} stmt_insns={} stmt_outputs={} stmt_inputs={} cond_uses={} control_conds={} stack_lvars={} stack_slots={} suppressed_stack={} canary_stack={} mmio={} hoist_sites={} byref_bases={} returned={} comments={}",
        ctx.next_stmt,
        ctx.emit_stmt,
        ctx.var_names.len(),
        ctx.merged_names.len(),
        ctx.var_role_names.len(),
        ctx.var_types.len(),
        ctx.foldable_stmts.len(),
        ctx.sv_defining_stmt.len(),
        ctx.sv_use_counts.len(),
        ctx.stmt_insns.len(),
        ctx.stmt_outputs.len(),
        ctx.stmt_inputs.len(),
        ctx.cond_uses.len(),
        ctx.control_cond_uses.len(),
        ctx.stack_lvars.len(),
        ctx.stack_frame_slots.len(),
        ctx.suppressed_stack_offsets.len(),
        ctx.canary_stack_offsets.len(),
        ctx.mmio_addrs.len(),
        ctx.hoist_decl_plan.len(),
        ctx.byref_bases.len(),
        ctx.returned_svs.len(),
        ctx.commented_stmts.len(),
    ));
}

/// Emit a per-statement multiset diff of a post-emission cleanup stage: the
/// lines `stage_fn` removed (and any it added), trimmed and capped, so a
/// vanished statement is attributed to the exact stage that dropped it (with
/// its text), not merely to a line-count delta.
pub(in crate::c_printer) fn trace_pipeline_stage_diff(
    func_name: &str,
    stage: &str,
    before: &str,
    after: &str,
) {
    use std::collections::BTreeMap;
    let mut counts: BTreeMap<&str, i64> = BTreeMap::new();
    for l in before.lines() {
        *counts.entry(l.trim()).or_insert(0) += 1;
    }
    for l in after.lines() {
        *counts.entry(l.trim()).or_insert(0) -= 1;
    }
    let mut removed = 0usize;
    let mut added = 0usize;
    for (line, &delta) in &counts {
        if line.is_empty() {
            continue;
        }
        if delta > 0 {
            for _ in 0..delta.min(40) {
                trace_pipeline(format!(
                    "stage func={func_name} name={stage} op=removed line={line:?}"
                ));
            }
            removed += delta as usize;
        } else if delta < 0 {
            for _ in 0..(-delta).min(40) {
                trace_pipeline(format!(
                    "stage func={func_name} name={stage} op=added line={line:?}"
                ));
            }
            added += (-delta) as usize;
        }
    }
    if removed > 40 || added > 40 {
        trace_pipeline(format!(
            "stage func={func_name} name={stage} note=diff-capped total_removed={removed} total_added={added}"
        ));
    }
}

pub(in crate::c_printer) fn hir_node_trace_kind(node: &HirNode) -> &'static str {
    match node {
        HirNode::Block(_) => "Block",
        HirNode::Statement(_) => "Statement",
        HirNode::If { .. } => "If",
        HirNode::IfCmp { .. } => "IfCmp",
        HirNode::While { .. } => "While",
        HirNode::DoWhile { .. } => "DoWhile",
        HirNode::For { .. } => "For",
        HirNode::Switch { .. } => "Switch",
        HirNode::Return(_) => "Return",
        HirNode::Goto(_) => "Goto",
        HirNode::Label(_) => "Label",
        HirNode::Ternary { .. } => "Ternary",
        HirNode::GuardedTernary { .. } => "GuardedTernary",
        HirNode::CselTernary { .. } => "CselTernary",
        HirNode::TailCall { .. } => "TailCall",
        HirNode::Continue => "Continue",
        HirNode::Break => "Break",
        HirNode::TryCatch { .. } => "TryCatch",
        HirNode::TryFinally { .. } => "TryFinally",
        HirNode::TryExcept { .. } => "TryExcept",
        HirNode::GuardedIf { .. } => "GuardedIf",
        HirNode::Commented { .. } => "Commented",
        HirNode::ObjcBlock { .. } => "ObjcBlock",
        HirNode::Asm { .. } => "Asm",
    }
}
