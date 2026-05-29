//! Bridge from a sub-CFG (a set of [`BlockId`]s within a
//! [`ControlFlowGraph`]) to an abstract [`reaching_conditions::Region`].
//!
//! This is step 3a of the DREAM condition-based structurer
//! (`docs/design-structurer-irreducible-2026-05-29.md`). It is a **pure,
//! unwired** translation: nothing in the structurer/pipeline calls it yet, so
//! it has zero regression surface. Later steps (3b) will use the returned
//! `RegionNode -> BlockId` map to splice a structured region back into the HIR.
//!
//! # What it does
//!
//! Given a `header` block and a `body` set, it assigns every block in `body` a
//! dense [`reaching_conditions::RegionNode`] (a `u32`) deterministically in
//! `BlockId` order, then translates each in-region CFG edge into a labelled
//! region edge:
//!
//! | [`EdgeKind`]            | [`reaching_conditions::EdgeLabel`]        |
//! |-------------------------|-------------------------------------------|
//! | `ConditionalTrue`       | `True(src_block_id)`                       |
//! | `ConditionalFalse`      | `False(src_block_id)`                      |
//! | `Unconditional` / `Fallthrough` | `Always`                          |
//! | `IndirectJump`          | `Case(src_block_id, edge_ordinal)`        |
//! | `Call` / `Return`       | *(skipped — region exit)*                 |
//!
//! The `True`/`False` pair of a single source share the source block's numeric
//! id as their predicate id, so [`reaching_conditions`] pairs them correctly.
//! Edges whose target is **outside** `body` are region exits and are dropped.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::BlockId;
use unlace_ir::cfg::{ControlFlowGraph, EdgeKind};

use crate::reaching_conditions::{EdgeLabel, Region, RegionNode};

/// A labelled edge from a region node to a CFG block outside the region.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct RegionExit {
    pub source: RegionNode,
    pub target: BlockId,
    pub label: EdgeLabel,
}

/// Convert a sub-CFG (`body` blocks rooted at `header`) into a
/// [`reaching_conditions::Region`] plus the `RegionNode -> BlockId` map needed
/// to splice the structured result back later.
///
/// `header` is expected to be a member of `body`; if it is not, it is still
/// assigned node 0 and included so the region has a valid root.
pub fn cfg_region_to_region(
    cfg: &ControlFlowGraph,
    header: BlockId,
    body: &BTreeSet<BlockId>,
) -> (Region, BTreeMap<RegionNode, BlockId>) {
    let node_of = assign_nodes(header, body);
    let adjacency = collect_adjacency(cfg, &node_of);
    let region = build_region(header, &node_of, &adjacency);
    let reverse: BTreeMap<RegionNode, BlockId> =
        node_of.iter().map(|(&bid, &n)| (n, bid)).collect();
    (region, reverse)
}

/// Convert a sub-CFG and also retain labelled exits to outside blocks.
///
/// This is used by cyclic DREAM refinement: exit edges are represented as
/// synthetic `break` leaves before condition refinement, so a `while (true)`
/// loop does not silently lose its exit condition.
pub fn cfg_region_to_region_with_exits(
    cfg: &ControlFlowGraph,
    header: BlockId,
    body: &BTreeSet<BlockId>,
) -> (Region, BTreeMap<RegionNode, BlockId>, Vec<RegionExit>) {
    let node_of = assign_nodes(header, body);
    let adjacency = collect_adjacency(cfg, &node_of);
    let (edges, exits) = map_edges_and_exits(&node_of, &adjacency);
    let region = Region {
        header: node_of[&header],
        edges,
    };
    let reverse: BTreeMap<RegionNode, BlockId> =
        node_of.iter().map(|(&bid, &n)| (n, bid)).collect();
    (region, reverse, exits)
}

/// Assign each block in `body` a dense `RegionNode` in `BlockId` order.
/// `header` is guaranteed a node even if it is absent from `body`.
fn assign_nodes(header: BlockId, body: &BTreeSet<BlockId>) -> BTreeMap<BlockId, RegionNode> {
    let mut all: BTreeSet<BlockId> = body.clone();
    all.insert(header);
    let mut node_of = BTreeMap::new();
    for (idx, bid) in all.iter().enumerate() {
        node_of.insert(*bid, idx as RegionNode);
    }
    node_of
}

/// Snapshot the in-region outgoing edges per block as a deterministic
/// adjacency list of `(BlockId, Vec<(BlockId, EdgeKind)>)`, sorted by source.
/// Edges leaving the region's node set are NOT filtered here — that happens in
/// [`map_edges`] so the pure helper can be unit-tested against raw CFG data.
fn collect_adjacency(
    cfg: &ControlFlowGraph,
    node_of: &BTreeMap<BlockId, RegionNode>,
) -> Vec<(BlockId, Vec<(BlockId, EdgeKind)>)> {
    node_of
        .keys()
        .map(|&bid| (bid, cfg.edges_from(bid)))
        .collect()
}

/// Build the [`Region`] from the node map and adjacency snapshot.
fn build_region(
    header: BlockId,
    node_of: &BTreeMap<BlockId, RegionNode>,
    adjacency: &[(BlockId, Vec<(BlockId, EdgeKind)>)],
) -> Region {
    Region {
        header: node_of[&header],
        edges: map_edges(node_of, adjacency),
    }
}

/// Pure mapping: translate an adjacency snapshot into labelled region edges,
/// dropping any edge whose target is outside the node set and any
/// `Call`/`Return` edge (region exits).
///
/// Factored out (and `pub`) so unit tests can exercise the
/// `EdgeKind -> EdgeLabel` + membership-filter logic against a hand-built
/// fixture without constructing a real [`ControlFlowGraph`].
pub fn map_edges(
    node_of: &BTreeMap<BlockId, RegionNode>,
    adjacency: &[(BlockId, Vec<(BlockId, EdgeKind)>)],
) -> Vec<(RegionNode, RegionNode, EdgeLabel)> {
    map_edges_and_exits(node_of, adjacency).0
}

/// Pure mapping variant that also reports outside-target edges.
pub fn map_edges_and_exits(
    node_of: &BTreeMap<BlockId, RegionNode>,
    adjacency: &[(BlockId, Vec<(BlockId, EdgeKind)>)],
) -> (Vec<(RegionNode, RegionNode, EdgeLabel)>, Vec<RegionExit>) {
    let mut edges = Vec::new();
    let mut exits = Vec::new();
    for (src, outs) in adjacency {
        let Some(&src_node) = node_of.get(src) else {
            continue;
        };
        for (ordinal, (dst, kind)) in outs.iter().enumerate() {
            let Some(label) = edge_label(*src, *kind, ordinal) else {
                continue;
            };
            if let Some(&dst_node) = node_of.get(dst) {
                edges.push((src_node, dst_node, label));
            } else {
                exits.push(RegionExit {
                    source: src_node,
                    target: *dst,
                    label,
                });
            };
        }
    }
    (edges, exits)
}

/// Map a single [`EdgeKind`] to its [`EdgeLabel`], using `src`'s numeric id as
/// the predicate/selector id and `ordinal` as the switch case value. Returns
/// `None` for edges that leave the region (`Call`/`Return`).
fn edge_label(src: BlockId, kind: EdgeKind, ordinal: usize) -> Option<EdgeLabel> {
    let pred_id = src.0;
    match kind {
        EdgeKind::ConditionalTrue => Some(EdgeLabel::True(pred_id)),
        EdgeKind::ConditionalFalse => Some(EdgeLabel::False(pred_id)),
        EdgeKind::Unconditional | EdgeKind::Fallthrough => Some(EdgeLabel::Always),
        EdgeKind::IndirectJump => Some(EdgeLabel::Case(pred_id, ordinal as i64)),
        EdgeKind::Call | EdgeKind::Return => None,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::reaching_conditions::{Cond, compute_reaching_conditions};

    fn bid(n: u32) -> BlockId {
        BlockId(n)
    }

    /// Build a node map for the given blocks (header first, dense order).
    fn nodes(blocks: &[u32]) -> BTreeMap<BlockId, RegionNode> {
        let set: BTreeSet<BlockId> = blocks.iter().map(|&n| bid(n)).collect();
        assign_nodes(bid(blocks[0]), &set)
    }

    #[test]
    fn edge_label_mapping_is_exhaustive() {
        assert_eq!(
            edge_label(bid(7), EdgeKind::ConditionalTrue, 0),
            Some(EdgeLabel::True(7))
        );
        assert_eq!(
            edge_label(bid(7), EdgeKind::ConditionalFalse, 0),
            Some(EdgeLabel::False(7))
        );
        assert_eq!(
            edge_label(bid(3), EdgeKind::Unconditional, 0),
            Some(EdgeLabel::Always)
        );
        assert_eq!(
            edge_label(bid(3), EdgeKind::Fallthrough, 0),
            Some(EdgeLabel::Always)
        );
        assert_eq!(
            edge_label(bid(5), EdgeKind::IndirectJump, 2),
            Some(EdgeLabel::Case(5, 2))
        );
        assert_eq!(edge_label(bid(1), EdgeKind::Call, 0), None);
        assert_eq!(edge_label(bid(1), EdgeKind::Return, 0), None);
    }

    #[test]
    fn diamond_roundtrips_to_expected_conditions() {
        // 0 -t-> 1 -> 3 ; 0 -f-> 2 -> 3.  Header 0; body {0,1,2,3}.
        let node_of = nodes(&[0, 1, 2, 3]);
        let adjacency = vec![
            (
                bid(0),
                vec![
                    (bid(1), EdgeKind::ConditionalTrue),
                    (bid(2), EdgeKind::ConditionalFalse),
                ],
            ),
            (bid(1), vec![(bid(3), EdgeKind::Unconditional)]),
            (bid(2), vec![(bid(3), EdgeKind::Unconditional)]),
            (bid(3), vec![]),
        ];
        let region = Region {
            header: node_of[&bid(0)],
            edges: map_edges(&node_of, &adjacency),
        };
        let rc = compute_reaching_conditions(&region);
        // Predicate id is the source block id (0) for both branch arms.
        assert_eq!(rc.conditions[&node_of[&bid(1)]], Cond::Pred(0));
        assert_eq!(rc.conditions[&node_of[&bid(2)]], Cond::NotPred(0));
        // Merge: p0 OR !p0 — kept as an Or with both arms present.
        match &rc.conditions[&node_of[&bid(3)]] {
            Cond::Or(a, b) => {
                let set: BTreeSet<&Cond> = [a.as_ref(), b.as_ref()].into_iter().collect();
                assert!(set.contains(&Cond::Pred(0)));
                assert!(set.contains(&Cond::NotPred(0)));
            }
            other => panic!("expected Or, got {other:?}"),
        }
    }

    #[test]
    fn exit_edge_is_dropped() {
        // Body {0,1}; block 1 has a Return edge to a synthetic block (99) that
        // is NOT in body — it must be dropped, leaving only the 0->1 edge.
        let node_of = nodes(&[0, 1]);
        let adjacency = vec![
            (bid(0), vec![(bid(1), EdgeKind::Unconditional)]),
            (bid(1), vec![(bid(99), EdgeKind::Return)]),
        ];
        let edges = map_edges(&node_of, &adjacency);
        assert_eq!(
            edges,
            vec![(node_of[&bid(0)], node_of[&bid(1)], EdgeLabel::Always)]
        );
    }

    #[test]
    fn target_outside_body_is_dropped() {
        // An Unconditional edge to a block outside body is still a region exit.
        let node_of = nodes(&[0, 1]);
        let adjacency = vec![
            (bid(0), vec![(bid(1), EdgeKind::Unconditional)]),
            (bid(1), vec![(bid(42), EdgeKind::Unconditional)]),
        ];
        let edges = map_edges(&node_of, &adjacency);
        assert_eq!(edges.len(), 1);
        assert_eq!(edges[0].2, EdgeLabel::Always);
    }

    #[test]
    fn target_outside_body_is_reported_as_exit() {
        let node_of = nodes(&[0, 1]);
        let adjacency = vec![
            (bid(0), vec![(bid(1), EdgeKind::Unconditional)]),
            (bid(1), vec![(bid(42), EdgeKind::ConditionalFalse)]),
        ];
        let (edges, exits) = map_edges_and_exits(&node_of, &adjacency);
        assert_eq!(
            edges,
            vec![(node_of[&bid(0)], node_of[&bid(1)], EdgeLabel::Always)]
        );
        assert_eq!(
            exits,
            vec![RegionExit {
                source: node_of[&bid(1)],
                target: bid(42),
                label: EdgeLabel::False(1),
            }]
        );
    }

    #[test]
    fn switch_edges_get_distinct_case_values() {
        // BRANCHIND from 0 to 1,2,3 — three Case edges with ordinals 0,1,2.
        let node_of = nodes(&[0, 1, 2, 3]);
        let adjacency = vec![(
            bid(0),
            vec![
                (bid(1), EdgeKind::IndirectJump),
                (bid(2), EdgeKind::IndirectJump),
                (bid(3), EdgeKind::IndirectJump),
            ],
        )];
        let edges = map_edges(&node_of, &adjacency);
        assert_eq!(edges.len(), 3);
        assert_eq!(edges[0].2, EdgeLabel::Case(0, 0));
        assert_eq!(edges[1].2, EdgeLabel::Case(0, 1));
        assert_eq!(edges[2].2, EdgeLabel::Case(0, 2));
    }

    #[test]
    fn nodes_are_dense_and_header_included() {
        // Header (5) not in body {7,9} must still get a node; all dense 0..N.
        let set: BTreeSet<BlockId> = [bid(7), bid(9)].into_iter().collect();
        let node_of = assign_nodes(bid(5), &set);
        let assigned: BTreeSet<RegionNode> = node_of.values().copied().collect();
        assert_eq!(assigned, [0, 1, 2].into_iter().collect());
        // Sorted by BlockId: 5->0, 7->1, 9->2.
        assert_eq!(node_of[&bid(5)], 0);
        assert_eq!(node_of[&bid(7)], 1);
        assert_eq!(node_of[&bid(9)], 2);
    }

    #[test]
    fn full_bridge_on_real_cfg_diamond() {
        use smallvec::smallvec;
        use unlace_ir::cfg::build_cfg;
        use unlace_ir::{BasicBlock, Function, IrInsn, IrOp, Varnode};

        fn ctrl(op: IrOp, addr: u64) -> IrInsn {
            IrInsn::without_output(op, smallvec![], addr)
        }
        fn arith(addr: u64) -> IrInsn {
            IrInsn::with_output(
                IrOp::IntAdd,
                Varnode::reg(0, 8),
                smallvec![Varnode::reg(8, 8), Varnode::reg(16, 8)],
                addr,
            )
        }

        let mut func = Function::new("bridge_diamond", BlockId(0), 0x2000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(arith(0x2000));
        bb0.insns.push(ctrl(IrOp::Cbranch, 0x2004));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl(IrOp::Branch, 0x2014));
        bb1.successors = smallvec![BlockId(3)];
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl(IrOp::Branch, 0x2024));
        bb2.successors = smallvec![BlockId(3)];
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl(IrOp::Return, 0x2034));
        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let cfg = build_cfg(&func);
        let body: BTreeSet<BlockId> = [BlockId(0), BlockId(1), BlockId(2), BlockId(3)]
            .into_iter()
            .collect();
        let (region, reverse) = cfg_region_to_region(&cfg, BlockId(0), &body);

        // The Return edge from BB_3 leaves the region (exit block not in body)
        // and must be dropped: exactly 4 in-region edges.
        assert_eq!(region.edges.len(), 4);
        let rc = compute_reaching_conditions(&region);
        // Map node back to BlockId(3) and check its merge condition.
        let n3 = *reverse.iter().find(|&(_, &b)| b == BlockId(3)).unwrap().0;
        match &rc.conditions[&n3] {
            Cond::Or(_, _) => {}
            other => panic!("expected merged Or at BB_3, got {other:?}"),
        }
        // Reverse map round-trips the header.
        assert_eq!(reverse[&region.header], BlockId(0));
    }
}
