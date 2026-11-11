//! structurer: edges.

use super::*;

pub(super) fn should_emit_full_unstructured_fallback(
    blocks: usize,
    insns: usize,
    block_limit: usize,
    insn_limit: usize,
) -> bool {
    (block_limit == 0 || blocks <= block_limit) && (insn_limit == 0 || insns <= insn_limit)
}

pub(super) fn hir_contains_label_or_goto(nodes: &[HirNode]) -> bool {
    nodes.iter().any(|node| match node {
        HirNode::Label(_) | HirNode::Goto(_) => true,
        HirNode::Block(children) => hir_contains_label_or_goto(children),
        HirNode::If {
            then_body,
            else_body,
            ..
        } => {
            hir_contains_label_or_goto(then_body)
                || else_body.as_deref().is_some_and(hir_contains_label_or_goto)
        }
        HirNode::IfCmp {
            then_body,
            else_body,
            ..
        } => {
            hir_contains_label_or_goto(then_body)
                || else_body.as_deref().is_some_and(hir_contains_label_or_goto)
        }
        HirNode::While { body, .. } | HirNode::DoWhile { body, .. } | HirNode::For { body, .. } => {
            hir_contains_label_or_goto(body)
        }
        HirNode::Switch { cases, default, .. } => {
            cases
                .iter()
                .any(|(_, body, _)| hir_contains_label_or_goto(body))
                || default.as_deref().is_some_and(hir_contains_label_or_goto)
        }
        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => {
            hir_contains_label_or_goto(try_body)
                || catch_arms
                    .iter()
                    .any(|(_, body)| hir_contains_label_or_goto(body))
        }
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => hir_contains_label_or_goto(try_body) || hir_contains_label_or_goto(finally_body),
        HirNode::TryExcept {
            try_body,
            except_body,
            ..
        } => hir_contains_label_or_goto(try_body) || hir_contains_label_or_goto(except_body),
        HirNode::Commented { inner, .. } => {
            hir_contains_label_or_goto(std::slice::from_ref(inner.as_ref()))
        }
        _ => false,
    })
}

pub(super) fn concrete_terminator_edge(
    func: &SsaFunction,
    bid: BlockId,
    edges: &[(BlockId, EdgeKind)],
) -> Option<(EdgeKind, BlockId)> {
    let block = func.function.blocks.get(&bid)?;
    let term = block.insns.last()?;
    let target = term
        .inputs
        .first()
        .and_then(|input| resolve_concrete_branch_target(func, input))?;

    match term.op {
        IrOp::Cbranch => Some((EdgeKind::ConditionalTrue, target)),
        IrOp::Branch => {
            if edges
                .iter()
                .any(|(_, kind)| *kind == EdgeKind::Unconditional)
            {
                Some((EdgeKind::Unconditional, target))
            } else {
                Some((EdgeKind::Fallthrough, target))
            }
        }
        _ => None,
    }
}

pub(super) fn normalize_edge_target(
    edges: &mut Vec<(BlockId, EdgeKind)>,
    bid: BlockId,
    kind: EdgeKind,
    target: BlockId,
) {
    if let Some((old_target, _)) = edges.iter_mut().find(|(_, edge_kind)| *edge_kind == kind) {
        if *old_target != target {
            struct_trace!(
                "normalize-edge block={bid:?} kind={kind:?} cfg_target={old_target:?} ir_target={target:?}"
            );
        }
        *old_target = target;
        return;
    }

    struct_trace!(
        "normalize-edge block={bid:?} kind={kind:?} cfg_target=None ir_target={target:?}"
    );
    edges.push((target, kind));
}

pub(super) fn resolve_concrete_branch_target(func: &SsaFunction, vn: &Varnode) -> Option<BlockId> {
    if vn.space != SpaceId::Const {
        return None;
    }

    let target_addr = vn.offset;
    for (&bid, block) in &func.function.blocks {
        if block
            .insns
            .first()
            .is_some_and(|insn| insn.addr == target_addr)
        {
            return Some(bid);
        }
    }

    None
}
