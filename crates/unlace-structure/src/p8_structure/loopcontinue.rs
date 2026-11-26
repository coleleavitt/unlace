//! Preserve secondary natural-loop latches before collapse can turn them into
//! nested retry loops. Only dominated, single-entry loops with ordinary branch
//! latches qualify. Head-tested and switch-bodied loops retain their existing
//! structuring, as do loops whose retained latch has a condition or whose body
//! contains another loop head.

use std::collections::BTreeMap;

use crate::block::{BlockGraph, BlockKind, BlockType, block_flags};
use crate::context::BlockId;
use crate::funcdata::Funcdata;

#[doc(hidden)]
pub fn refine_latches(graph: &mut BlockGraph, root: BlockId) {
    let mut edges = Vec::new();
    for i in 0..graph.block(root).get_size() {
        let head = graph.block(root).get_block(i);
        let hb = graph.block(head);
        if hb.is_switch_out() {
            continue;
        }
        let mut latches = Vec::new();
        let mut entries = 0;
        let mut eligible = true;
        for j in 0..hb.size_in() {
            if !hb.is_back_edge_in(j) {
                entries += 1;
                continue;
            }
            let src = hb.get_in(j);
            let sb = graph.block(src);
            if !graph.dominates(head, Some(src)) || sb.is_switch_out() {
                eligible = false;
                break;
            }
            for e in 0..sb.size_out() {
                if sb.get_out(e) == head && sb.is_back_edge_out(e) && !sb.is_goto_out(e) {
                    latches.push((src, e));
                }
            }
        }
        if !eligible || entries != 1 || latches.len() < 2 {
            continue;
        }
        latches.sort_by_key(|&(src, _)| graph.block(src).get_index());
        let primary = latches.pop().unwrap();
        if graph.block(primary.0).size_out() != 1 {
            continue;
        }
        let mut body = std::collections::BTreeSet::from([head]);
        let mut pending: Vec<_> = latches.iter().map(|&(src, _)| src).collect();
        pending.push(primary.0);
        while let Some(node) = pending.pop() {
            if !body.insert(node) {
                continue;
            }
            for j in 0..graph.block(node).size_in() {
                let predecessor = graph.block(node).get_in(j);
                if graph.dominates(head, Some(predecessor)) {
                    pending.push(predecessor);
                }
            }
        }
        if (0..hb.size_out()).any(|e| !body.contains(&hb.get_out(e)))
            || body.iter().any(|&node| graph.block(node).is_switch_out())
            || body.iter().any(|&node| {
                let block = graph.block(node);
                (0..block.size_in()).any(|j| {
                    block.is_irreducible_in(j) || (node != head && !body.contains(&block.get_in(j)))
                }) || (0..block.size_out()).any(|e| block.is_irreducible_out(e))
            })
            || body.iter().any(|&node| {
                node != head
                    && (0..graph.block(node).size_in())
                        .any(|j| graph.block(node).is_back_edge_in(j))
            })
        {
            continue;
        }
        edges.extend(latches);
    }
    for (src, edge) in edges {
        let _ = graph.set_goto_branch(src, edge);
    }
}

/// A continue in an infinite loop resumes its first leaf. A conditional loop
/// resumes the leaf `points` gives it ([`continue_points`]), or resets the
/// scope when it has none: its continue can evaluate a test or iterator instead.
#[doc(hidden)]
pub fn recover_continues(
    graph: &mut BlockGraph,
    root: BlockId,
    points: &BTreeMap<BlockId, BlockId>,
) {
    let mut stack = vec![(root, None)];
    while let Some((id, mut head)) = stack.pop() {
        match graph.block(id).get_type() {
            BlockType::InfLoop => head = graph.get_front_leaf(id),
            BlockType::WhileDo | BlockType::DoWhile => head = points.get(&id).copied(),
            _ => {}
        }
        let target = match graph.block(id).get_type() {
            BlockType::Goto => graph.block(id).get_goto_target(),
            BlockType::If => graph.block(id).get_if_goto_target(),
            _ => None,
        };
        if let (Some(head), Some(target)) = (head, target) {
            if graph.get_front_leaf(target) == Some(head) {
                match graph.block_mut(id).kind_mut() {
                    BlockKind::Goto { gototype, .. } | BlockKind::If { gototype, .. } => {
                        *gototype = block_flags::f_continue_goto;
                    }
                    _ => {}
                }
            }
        }
        for i in 0..graph.block(id).get_size() {
            stack.push((graph.block(id).get_block(i), head));
        }
    }
}

/// The leaf a `continue;` resumes at in each while-do and do-while loop under
/// `root`: a while-do's condition block, unless it prints as a `for` whose
/// iterate statement a `continue;` runs first, and a do-while's last leaf when
/// that leaf prints nothing but the loop test and the output language's
/// do-while runs that test on `continue;`.
#[doc(hidden)]
pub fn continue_points(data: &Funcdata, root: BlockId) -> BTreeMap<BlockId, BlockId> {
    let graph = data.sblocks_ref();
    let mut points = BTreeMap::new();
    let mut stack = vec![root];
    while let Some(id) = stack.pop() {
        let block = graph.block(id);
        for i in 0..block.get_size() {
            stack.push(block.get_block(i));
        }
        let point = match block.get_type() {
            BlockType::WhileDo if block.get_iterate_op().is_none() => graph
                .sub_block(id, 0)
                .and_then(|cond| graph.get_front_leaf(cond)),
            BlockType::DoWhile if data.get_arch().do_while_continue => graph
                .sub_block(id, 0)
                .and_then(|body| graph.get_exit_leaf(body))
                .filter(|&leaf| prints_only_its_branch(data, leaf)),
            _ => None,
        };
        if let Some(leaf) = point {
            points.insert(id, leaf);
        }
    }
    points
}

/// Does the structured leaf `leaf` print no statement besides its branch?
fn prints_only_its_branch(data: &Funcdata, leaf: BlockId) -> bool {
    let Some(bb) = data.sblocks_ref().block(leaf).get_copy() else {
        return false;
    };
    let BlockKind::Basic(basic) = data.bblocks_ref().block(bb).kind() else {
        return false;
    };
    let mut cur = basic.op_head;
    while let Some(op) = cur {
        cur = data.bb_op_next(op);
        let Some(o) = data.obank().get(op) else {
            return false;
        };
        if o.is_branch() || o.not_printed() || o.is_marker() {
            continue;
        }
        let implied = o
            .get_out()
            .and_then(|v| data.vbank().get(v))
            .is_some_and(|v| v.is_implied());
        if !implied {
            return false;
        }
    }
    true
}

crate::unlace_flag!(
    /// Preserve secondary natural-loop latches as continues (`loopcontinue`).
    LoopContinue,
    "loopcontinue",
    "Secondary loop-latch continue recovery",
    unset: true,
    shipped: true
);

#[cfg(test)]
mod tests;
