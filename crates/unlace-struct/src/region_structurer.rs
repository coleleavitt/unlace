//! Region-based control-flow structuring (Engel/Lerner-style).
//!
//! Implements a region-based approach to structured decompilation that operates
//! on the CFG by identifying natural regions (loops, if-then-else diamonds,
//! linear sequences) and composing them into a tree of [`Region`] nodes.
//!
//! This pass runs **after** the primary structurer as an optional cleanup to
//! reduce residual `goto` statements. Any fragment that cannot be structured
//! is wrapped in [`Region::Atomic`] (which renders as a goto).
//!
//! # Algorithm
//!
//! 1. Compute dominators and post-dominators.
//! 2. Identify natural loops (back-edge where header dominates latch).
//! 3. Identify if-then-else regions (dominator with 2 successors merging at
//!    a common post-dominator).
//! 4. Collapse linear chains (single-successor/single-predecessor sequences).
//! 5. Wrap everything else in Atomic.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::cfg::{ControlFlowGraph, EdgeKind};
use unlace_ir::ssa::{DominatorTree, build_dominator_tree, build_post_dominator_tree};
use unlace_ir::{BlockId, Function};

use crate::hir::HirNode;

/// A structured region recovered from the CFG.
// `Atomic(HirNode)` dwarfs the other variants in size, but boxing it would
// ripple through every consumer's pattern-matching of `Region::Atomic`. The
// enum is short-lived during structuring, so the size cost is acceptable.
#[allow(clippy::large_enum_variant)]
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum Region {
    /// A linear sequence of HirNodes (single block).
    Linear(Vec<HirNode>),
    /// An if-then-else region.
    IfThenElse {
        cond: BlockId,
        then_region: Box<Region>,
        else_region: Box<Region>,
    },
    /// A while loop (condition tested before the body).
    WhileLoop { cond: BlockId, body: Box<Region> },
    /// A do-while loop (condition tested after the body).
    DoWhileLoop { body: Box<Region>, cond: BlockId },
    /// A sequence of regions.
    Sequence(Vec<Region>),
    /// An unstructurable fragment (renders as goto).
    Atomic(HirNode),
}

/// Perform region-based structuring over the CFG.
///
/// # Arguments
/// - `cfg`: the control-flow graph
/// - `func`: the underlying function (needed for post-dominator computation)
/// - `blocks`: mapping from block IDs to their HirNode statements
///
/// # Returns
/// A vector of structured regions covering the function.
pub fn structure_regions(
    cfg: &ControlFlowGraph,
    func: &Function,
    blocks: &BTreeMap<BlockId, Vec<HirNode>>,
) -> Vec<Region> {
    let dom_tree = build_dominator_tree(cfg);
    let post_dom_tree = build_post_dominator_tree(cfg, func);

    let exit_block = cfg.exit_block();
    let unknown_block = cfg.unknown_block();

    // Detect natural loops: back-edges where header dominates latch.
    let loop_headers = detect_natural_loops(cfg, &dom_tree, exit_block, unknown_block);

    // Walk dominator tree in pre-order to build regions.
    let entry = cfg.entry_block();
    if !blocks.contains_key(&entry) {
        return Vec::new();
    }

    let mut visited = BTreeSet::new();
    structure_from(
        entry,
        cfg,
        &dom_tree,
        &post_dom_tree,
        blocks,
        &loop_headers,
        &mut visited,
        exit_block,
        unknown_block,
    )
}

/// Detect natural loops. Returns a map from loop header to set of body blocks.
fn detect_natural_loops(
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
    exit_block: BlockId,
    unknown_block: BlockId,
) -> BTreeMap<BlockId, BTreeSet<BlockId>> {
    let mut loops: BTreeMap<BlockId, BTreeSet<BlockId>> = BTreeMap::new();

    for &bid in cfg.node_map().keys() {
        if bid == exit_block || bid == unknown_block {
            continue;
        }
        for (target, _kind) in cfg.edges_from(bid) {
            if target == exit_block || target == unknown_block {
                continue;
            }
            // Back-edge: target dominates bid.
            if dominates(dom_tree, target, bid) {
                let body = collect_loop_body(cfg, target, bid, exit_block, unknown_block);
                loops.entry(target).or_default().extend(body);
            }
        }
    }

    loops
}

/// Check if `a` dominates `b` by walking up the idom chain from `b`.
fn dominates(dom_tree: &DominatorTree, a: BlockId, b: BlockId) -> bool {
    if a == b {
        return true;
    }
    let mut current = b;
    loop {
        match dom_tree.idom(current) {
            Some(parent) => {
                if parent == a {
                    return true;
                }
                if parent == current {
                    return false;
                }
                current = parent;
            }
            None => return false,
        }
    }
}

/// Collect loop body blocks by reverse-walking from latch to header.
fn collect_loop_body(
    cfg: &ControlFlowGraph,
    header: BlockId,
    latch: BlockId,
    exit_block: BlockId,
    unknown_block: BlockId,
) -> BTreeSet<BlockId> {
    let mut body = BTreeSet::new();
    body.insert(header);
    body.insert(latch);

    let mut worklist = vec![latch];
    while let Some(bid) = worklist.pop() {
        for (pred, _) in cfg.edges_to(bid) {
            if pred == exit_block || pred == unknown_block {
                continue;
            }
            if body.insert(pred) && pred != header {
                worklist.push(pred);
            }
        }
    }
    body
}

/// Recursively structure from a given block.
#[allow(clippy::too_many_arguments)]
fn structure_from(
    start: BlockId,
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
    post_dom_tree: &DominatorTree,
    blocks: &BTreeMap<BlockId, Vec<HirNode>>,
    loop_headers: &BTreeMap<BlockId, BTreeSet<BlockId>>,
    visited: &mut BTreeSet<BlockId>,
    exit_block: BlockId,
    unknown_block: BlockId,
) -> Vec<Region> {
    let mut regions = Vec::new();
    let mut current = start;

    loop {
        if !visited.insert(current) {
            break;
        }

        if current == exit_block || current == unknown_block {
            break;
        }

        // Check if this block is a loop header.
        if let Some(loop_body) = loop_headers.get(&current) {
            let region = structure_loop(
                current,
                loop_body,
                cfg,
                dom_tree,
                post_dom_tree,
                blocks,
                loop_headers,
                visited,
                exit_block,
                unknown_block,
            );
            regions.push(region);

            // Find loop exit — successor of header not in loop body.
            let exit = find_loop_exit(current, loop_body, cfg, exit_block, unknown_block);
            match exit {
                Some(exit_bid) if exit_bid != exit_block && exit_bid != unknown_block => {
                    current = exit_bid;
                    continue;
                }
                _ => break,
            }
        }

        // Get outgoing edges (excluding exit/unknown).
        let edges: Vec<(BlockId, EdgeKind)> = cfg
            .edges_from(current)
            .into_iter()
            .filter(|(t, _)| *t != exit_block && *t != unknown_block)
            .collect();

        match edges.len() {
            0 => {
                // Terminal block (return).
                if let Some(stmts) = blocks.get(&current) {
                    regions.push(Region::Linear(stmts.clone()));
                }
                break;
            }
            1 => {
                // Linear sequence.
                if let Some(stmts) = blocks.get(&current) {
                    regions.push(Region::Linear(stmts.clone()));
                }
                current = edges[0].0;
            }
            2 => {
                // Potential if-then-else.
                let (true_target, false_target) = classify_branches(&edges);

                // Find merge point via post-dominator.
                let merge = post_dom_tree.idom(current);

                if let Some(merge_bid) = merge
                    && merge_bid != exit_block
                    && merge_bid != unknown_block
                {
                    // Emit the condition block.
                    if let Some(stmts) = blocks.get(&current)
                        && !stmts.is_empty()
                    {
                        regions.push(Region::Linear(stmts.clone()));
                    }

                    // Structure then-region.
                    let then_regions = structure_from(
                        true_target,
                        cfg,
                        dom_tree,
                        post_dom_tree,
                        blocks,
                        loop_headers,
                        visited,
                        exit_block,
                        unknown_block,
                    );

                    // Structure else-region.
                    let else_regions = structure_from(
                        false_target,
                        cfg,
                        dom_tree,
                        post_dom_tree,
                        blocks,
                        loop_headers,
                        visited,
                        exit_block,
                        unknown_block,
                    );

                    let then_region = if then_regions.len() == 1 {
                        then_regions.into_iter().next().unwrap()
                    } else {
                        Region::Sequence(then_regions)
                    };

                    let else_region = if else_regions.len() == 1 {
                        else_regions.into_iter().next().unwrap()
                    } else {
                        Region::Sequence(else_regions)
                    };

                    regions.push(Region::IfThenElse {
                        cond: current,
                        then_region: Box::new(then_region),
                        else_region: Box::new(else_region),
                    });

                    // Continue from merge point.
                    current = merge_bid;
                    continue;
                }

                // Fallback: can't determine merge point — emit atomic + goto.
                if let Some(stmts) = blocks.get(&current) {
                    for s in stmts {
                        regions.push(Region::Atomic(s.clone()));
                    }
                }
                break;
            }
            _ => {
                // Multi-way branch (switch) — emit as atomic.
                if let Some(stmts) = blocks.get(&current) {
                    for s in stmts {
                        regions.push(Region::Atomic(s.clone()));
                    }
                }
                break;
            }
        }
    }

    regions
}

/// Structure a natural loop into a WhileLoop or DoWhileLoop region.
#[allow(clippy::too_many_arguments)]
fn structure_loop(
    header: BlockId,
    body_blocks: &BTreeSet<BlockId>,
    cfg: &ControlFlowGraph,
    dom_tree: &DominatorTree,
    post_dom_tree: &DominatorTree,
    blocks: &BTreeMap<BlockId, Vec<HirNode>>,
    loop_headers: &BTreeMap<BlockId, BTreeSet<BlockId>>,
    visited: &mut BTreeSet<BlockId>,
    exit_block: BlockId,
    unknown_block: BlockId,
) -> Region {
    // Check if header has a conditional exit (while-loop pattern).
    let header_edges: Vec<(BlockId, EdgeKind)> = cfg
        .edges_from(header)
        .into_iter()
        .filter(|(t, _)| *t != exit_block && *t != unknown_block)
        .collect();

    let is_header_cond =
        header_edges.len() == 2 && header_edges.iter().any(|(t, _)| !body_blocks.contains(t));

    if is_header_cond {
        // While-loop: condition at header.
        visited.insert(header);

        // Find the in-loop successor from header.
        let body_entry = header_edges
            .iter()
            .find(|(t, _)| body_blocks.contains(t) && *t != header)
            .map(|(t, _)| *t)
            .unwrap_or(header);

        // Structure body (mark all loop body blocks as visited to prevent
        // re-entry from the outer structure pass).
        let mut body_visited = visited.clone();
        for &b in body_blocks {
            body_visited.insert(b);
        }
        // But allow body_entry to be visited by the inner structuring.
        body_visited.remove(&body_entry);

        let body_regions = structure_from(
            body_entry,
            cfg,
            dom_tree,
            post_dom_tree,
            blocks,
            loop_headers,
            &mut body_visited,
            exit_block,
            unknown_block,
        );

        // Mark all loop blocks as visited in outer context.
        for &b in body_blocks {
            visited.insert(b);
        }

        let body_region = if body_regions.len() == 1 {
            body_regions.into_iter().next().unwrap()
        } else if body_regions.is_empty() {
            Region::Sequence(Vec::new())
        } else {
            Region::Sequence(body_regions)
        };

        return Region::WhileLoop {
            cond: header,
            body: Box::new(body_region),
        };
    }

    // Check for do-while: latch has the exit condition.
    let latches: Vec<BlockId> = body_blocks
        .iter()
        .filter(|&&b| cfg.edges_from(b).iter().any(|(t, _)| *t == header))
        .copied()
        .collect();

    if latches.len() == 1 {
        let latch = latches[0];
        let latch_edges: Vec<(BlockId, EdgeKind)> = cfg
            .edges_from(latch)
            .into_iter()
            .filter(|(t, _)| *t != exit_block && *t != unknown_block)
            .collect();

        if latch_edges.len() == 2 && latch_edges.iter().any(|(t, _)| !body_blocks.contains(t)) {
            // Do-while pattern.
            visited.insert(header);
            for &b in body_blocks {
                visited.insert(b);
            }

            let mut body_nodes = Vec::new();
            for &b in body_blocks {
                if b == latch {
                    continue;
                }
                if let Some(stmts) = blocks.get(&b) {
                    body_nodes.extend(stmts.iter().cloned());
                }
            }

            let body_region = if body_nodes.is_empty() {
                Region::Sequence(Vec::new())
            } else {
                Region::Linear(body_nodes)
            };

            return Region::DoWhileLoop {
                body: Box::new(body_region),
                cond: latch,
            };
        }
    }

    // Fallback: mark all loop blocks as visited, emit as linear.
    for &b in body_blocks {
        visited.insert(b);
    }
    let mut stmts = Vec::new();
    for &b in body_blocks {
        if let Some(block_stmts) = blocks.get(&b) {
            stmts.extend(block_stmts.iter().cloned());
        }
    }
    if stmts.len() == 1 {
        Region::Atomic(stmts.into_iter().next().unwrap())
    } else {
        Region::Linear(stmts)
    }
}

/// Find the loop exit block (successor of any loop block that is outside the loop).
fn find_loop_exit(
    header: BlockId,
    body_blocks: &BTreeSet<BlockId>,
    cfg: &ControlFlowGraph,
    exit_block: BlockId,
    unknown_block: BlockId,
) -> Option<BlockId> {
    // Prefer exits from header first (standard while-loop pattern).
    for (target, _) in cfg.edges_from(header) {
        if target != exit_block && target != unknown_block && !body_blocks.contains(&target) {
            return Some(target);
        }
    }
    // Otherwise look at all body blocks.
    for &bid in body_blocks {
        for (target, _) in cfg.edges_from(bid) {
            if target != exit_block && target != unknown_block && !body_blocks.contains(&target) {
                return Some(target);
            }
        }
    }
    None
}

/// Classify a 2-edge set into (true_target, false_target).
fn classify_branches(edges: &[(BlockId, EdgeKind)]) -> (BlockId, BlockId) {
    let mut true_target = edges[0].0;
    let mut false_target = edges[1].0;

    for (target, kind) in edges {
        match kind {
            EdgeKind::ConditionalTrue => true_target = *target,
            EdgeKind::ConditionalFalse => false_target = *target,
            _ => {}
        }
    }

    (true_target, false_target)
}

/// Convert a vector of Regions back into a flat Vec<HirNode>.
///
/// This flattens the region tree into the existing HirNode representation,
/// making it compatible with the rest of the pipeline.
pub fn regions_to_hir(regions: Vec<Region>) -> Vec<HirNode> {
    let mut out = Vec::new();
    for region in regions {
        region_to_hir_nodes(region, &mut out);
    }
    out
}

fn region_to_hir_nodes(region: Region, out: &mut Vec<HirNode>) {
    match region {
        Region::Linear(nodes) => {
            out.extend(nodes);
        }
        Region::IfThenElse {
            cond: _,
            then_region,
            else_region,
        } => {
            let then_nodes = regions_to_hir(vec![*then_region]);
            let else_nodes = regions_to_hir(vec![*else_region]);
            out.extend(then_nodes);
            out.extend(else_nodes);
        }
        Region::WhileLoop { cond: _, body } => {
            let body_nodes = regions_to_hir(vec![*body]);
            out.extend(body_nodes);
        }
        Region::DoWhileLoop { body, cond: _ } => {
            let body_nodes = regions_to_hir(vec![*body]);
            out.extend(body_nodes);
        }
        Region::Sequence(sub_regions) => {
            for r in sub_regions {
                region_to_hir_nodes(r, out);
            }
        }
        Region::Atomic(node) => {
            out.push(node);
        }
    }
}

/// Count the number of goto nodes in the output.
pub fn count_gotos(regions: &[Region]) -> usize {
    let mut count = 0;
    for region in regions {
        count += count_gotos_in_region(region);
    }
    count
}

fn count_gotos_in_region(region: &Region) -> usize {
    match region {
        Region::Linear(nodes) => nodes
            .iter()
            .filter(|n| matches!(n, HirNode::Goto(_)))
            .count(),
        Region::IfThenElse {
            then_region,
            else_region,
            ..
        } => count_gotos_in_region(then_region) + count_gotos_in_region(else_region),
        Region::WhileLoop { body, .. } => count_gotos_in_region(body),
        Region::DoWhileLoop { body, .. } => count_gotos_in_region(body),
        Region::Sequence(sub) => sub.iter().map(count_gotos_in_region).sum(),
        Region::Atomic(node) => {
            if matches!(node, HirNode::Goto(_)) {
                1
            } else {
                0
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;
    use unlace_ir::cfg::build_cfg;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirNode, LabelId};

    fn arith_insn(addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0, 8),
            smallvec![Varnode::reg(8, 8), Varnode::reg(16, 8)],
            addr,
        )
    }

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    /// Diamond CFG: BB0 -> (BB1, BB2) -> BB3.
    /// Should produce an IfThenElse region with no gotos.
    #[test]
    fn test_diamond_cfg_no_goto() {
        let mut func = Function::new("diamond", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(0x1000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x1004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(0x1010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x1014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(0x1020));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x1024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(arith_insn(0x1030));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x1034));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let cfg = build_cfg(&func);

        let mut hir_blocks: BTreeMap<BlockId, Vec<HirNode>> = BTreeMap::new();
        hir_blocks.insert(BlockId(0), vec![HirNode::Statement(arith_insn(0x1000))]);
        hir_blocks.insert(BlockId(1), vec![HirNode::Statement(arith_insn(0x1010))]);
        hir_blocks.insert(BlockId(2), vec![HirNode::Statement(arith_insn(0x1020))]);
        hir_blocks.insert(BlockId(3), vec![HirNode::Statement(arith_insn(0x1030))]);

        let regions = structure_regions(&cfg, &func, &hir_blocks);

        // Should contain no gotos.
        let gotos = count_gotos(&regions);
        assert_eq!(
            gotos, 0,
            "diamond CFG should produce no gotos; regions: {regions:#?}"
        );

        // Should have produced an IfThenElse region.
        let has_if = regions
            .iter()
            .any(|r| matches!(r, Region::IfThenElse { .. }));
        assert!(has_if, "should have IfThenElse region; got: {regions:#?}");
    }

    /// Simple loop: BB0 (cbranch) -> BB1 -> BB0 (back-edge), exit -> BB2.
    /// Should produce a WhileLoop region.
    #[test]
    fn test_simple_loop_while() {
        let mut func = Function::new("loop", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith_insn(0x2000));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x2004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(0x2010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2014));
        bb1.successors = smallvec![BlockId(0)]; // back-edge

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x2020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let cfg = build_cfg(&func);

        let mut hir_blocks: BTreeMap<BlockId, Vec<HirNode>> = BTreeMap::new();
        hir_blocks.insert(BlockId(0), vec![HirNode::Statement(arith_insn(0x2000))]);
        hir_blocks.insert(BlockId(1), vec![HirNode::Statement(arith_insn(0x2010))]);
        hir_blocks.insert(BlockId(2), vec![]);

        let regions = structure_regions(&cfg, &func, &hir_blocks);

        // Should contain a WhileLoop.
        let has_while = regions
            .iter()
            .any(|r| matches!(r, Region::WhileLoop { .. }));
        assert!(
            has_while,
            "simple loop should produce WhileLoop region; got: {regions:#?}"
        );

        // No gotos.
        let gotos = count_gotos(&regions);
        assert_eq!(gotos, 0, "simple loop should have no gotos");
    }

    /// Irreducible CFG: BB0 -> BB1, BB0 -> BB2, BB1 -> BB2, BB2 -> BB1.
    /// Should still contain at least one goto (fewer than naive approach).
    #[test]
    fn test_irreducible_has_goto() {
        let mut func = Function::new("irreducible", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Cbranch, 0x3000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(arith_insn(0x3010));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3014));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(arith_insn(0x3020));
        bb2.insns.push(ctrl_insn(IrOp::Cbranch, 0x3024));
        bb2.successors = smallvec![BlockId(1), BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x3030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let cfg = build_cfg(&func);

        let mut hir_blocks: BTreeMap<BlockId, Vec<HirNode>> = BTreeMap::new();
        hir_blocks.insert(BlockId(0), vec![]);
        hir_blocks.insert(
            BlockId(1),
            vec![
                HirNode::Statement(arith_insn(0x3010)),
                HirNode::Goto(LabelId(2)),
            ],
        );
        hir_blocks.insert(
            BlockId(2),
            vec![
                HirNode::Statement(arith_insn(0x3020)),
                HirNode::Goto(LabelId(1)),
            ],
        );
        hir_blocks.insert(BlockId(3), vec![]);

        let regions = structure_regions(&cfg, &func, &hir_blocks);

        // Should have at least one goto (irreducible cannot be fully structured).
        let gotos = count_gotos(&regions);
        assert!(
            gotos >= 1,
            "irreducible CFG should still have gotos; got {gotos}; regions: {regions:#?}"
        );
    }
}
