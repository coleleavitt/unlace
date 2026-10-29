//! Irreducible-region detection.
//!
//! An irreducible region is a strongly-connected component (SCC) of the CFG
//! that is **not** a natural loop: it has more than one entry edge from
//! outside the SCC.  Standard structuring algorithms (DJ-graph, Hammock,
//! interval analysis) cannot express such regions as `while`/`do-while` and
//! must fall back to `goto`/`label`.
//!
//! This pass identifies those regions so a follow-up [`node_split`] pass can
//! duplicate the entry blocks and turn the region into a *reducible* one.
//!
//! # Algorithm
//!
//! 1. Run Tarjan's SCC on the real (non-synthetic) CFG.
//! 2. For each SCC of size ≥ 2 (or singleton with a self-loop), collect the
//!    set of *entry blocks* — blocks with at least one predecessor that lies
//!    *outside* the SCC.
//! 3. If `entry_blocks.len() > 1` the SCC is irreducible.
//!
//! Singleton SCCs without a self-loop are skipped: they are not loops at all.
//!
//! # Determinism
//!
//! Tarjan's algorithm visits successors in `BlockId` order (since
//! [`crate::SsaFunction::cfg`] iterates edges deterministically) and SCCs are
//! returned in topological order of the condensation. Within each SCC we
//! store blocks in a [`BTreeSet`] for stable iteration.
//!
//! [`node_split`]: crate::node_split

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::BlockId;
use unlace_ir::cfg::ControlFlowGraph;
use unlace_ir::ssa::SsaFunction;

/// A maximal irreducible CFG region.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct IrreducibleRegion {
    /// Blocks with ≥ 1 predecessor outside the region. By definition there
    /// are at least two; otherwise the SCC is a natural loop.
    pub entry_blocks: BTreeSet<BlockId>,
    /// All blocks of the strongly-connected component.
    pub body_blocks: BTreeSet<BlockId>,
}

/// Detect every irreducible region in `func`'s CFG.
///
/// Returns regions in topological order of the SCC condensation. The list is
/// empty for reducible CFGs (the common case for compiled C/C++).
pub fn detect_irreducible_regions(func: &SsaFunction) -> Vec<IrreducibleRegion> {
    detect_irreducible_regions_in_cfg(&func.cfg)
}

/// CFG-only variant of [`detect_irreducible_regions`].
///
/// Used by pre-SSA passes like [`crate::node_split`] that operate on the raw
/// [`unlace_ir::Function`] before SSA construction.
pub fn detect_irreducible_regions_in_cfg(cfg: &ControlFlowGraph) -> Vec<IrreducibleRegion> {
    let synthetic: BTreeSet<BlockId> = [cfg.exit_block(), cfg.unknown_block()]
        .into_iter()
        .collect();
    // A block no path from the entry reaches cannot enter a region, so its
    // edges must not count as entries (lifter padding falls through into
    // whatever follows it, often a loop header).
    let reachable = cfg.reachable_blocks();

    let sccs = tarjan_scc(cfg, &synthetic);
    let mut regions = Vec::new();

    for scc in sccs {
        if scc.is_disjoint(&reachable) {
            continue;
        }
        if scc.len() == 1 {
            let only = *scc.iter().next().expect("singleton SCC has one block");
            let has_self_loop = cfg
                .edges_from(only)
                .into_iter()
                .any(|(succ, _)| succ == only);
            if !has_self_loop {
                continue;
            }
        }

        let entry_blocks = collect_entry_blocks(&scc, cfg, &reachable);

        // A natural loop has exactly one entry. > 1 entry → irreducible.
        if entry_blocks.len() > 1 {
            regions.push(IrreducibleRegion {
                entry_blocks,
                body_blocks: scc,
            });
        }
    }

    regions
}

/// Blocks of `scc` that have at least one reachable predecessor outside `scc`.
fn collect_entry_blocks(
    scc: &BTreeSet<BlockId>,
    cfg: &ControlFlowGraph,
    reachable: &BTreeSet<BlockId>,
) -> BTreeSet<BlockId> {
    let mut entries = BTreeSet::new();
    for &bid in scc {
        for (pred, _) in cfg.edges_to(bid) {
            if reachable.contains(&pred) && !scc.contains(&pred) {
                entries.insert(bid);
                break;
            }
        }
    }
    entries
}

// ---------------------------------------------------------------------------
// Tarjan's SCC
// ---------------------------------------------------------------------------

/// Strongly-connected-component partition of a CFG's real (non-synthetic)
/// blocks, computed by the shipping Tarjan routine.
///
/// This is a thin, side-effect-free accessor over [`tarjan_scc`] using the same
/// skip set the structurer uses ({exit, unknown} sinks). It exists so the
/// formal-verification conformance harness can pin the production SCC code to
/// the partition properties proved in `rocq-tests/theories/Sccs.v`
/// (mutual-reachability is an equivalence ⇒ the SCCs are a total, disjoint
/// partition). It does not change any structuring behavior.
pub fn scc_partition(cfg: &ControlFlowGraph) -> Vec<BTreeSet<BlockId>> {
    let synthetic: BTreeSet<BlockId> = [cfg.exit_block(), cfg.unknown_block()]
        .into_iter()
        .collect();
    tarjan_scc(cfg, &synthetic)
}

/// Tarjan's strongly-connected-components algorithm.
///
/// Returns SCCs in reverse-topological order. Each SCC is a [`BTreeSet`] for
/// deterministic iteration.
///
/// Nodes in `skip` (synthetic exit / unknown sinks) are excluded from
/// traversal, as are edges leading to them.
fn tarjan_scc(cfg: &ControlFlowGraph, skip: &BTreeSet<BlockId>) -> Vec<BTreeSet<BlockId>> {
    let mut state = TarjanState {
        index_of: BTreeMap::new(),
        lowlink: BTreeMap::new(),
        on_stack: BTreeSet::new(),
        stack: Vec::new(),
        next_index: 0,
        sccs: Vec::new(),
    };

    // Iterate in BlockId order for determinism.
    let nodes: Vec<BlockId> = cfg
        .node_map()
        .keys()
        .copied()
        .filter(|b| !skip.contains(b))
        .collect();

    for bid in nodes {
        if !state.index_of.contains_key(&bid) {
            tarjan_visit(bid, cfg, skip, &mut state);
        }
    }

    state.sccs
}

struct TarjanState {
    index_of: BTreeMap<BlockId, u32>,
    lowlink: BTreeMap<BlockId, u32>,
    on_stack: BTreeSet<BlockId>,
    stack: Vec<BlockId>,
    next_index: u32,
    sccs: Vec<BTreeSet<BlockId>>,
}

/// Iterative Tarjan visit (avoids unbounded recursion on deep CFGs).
fn tarjan_visit(
    start: BlockId,
    cfg: &ControlFlowGraph,
    skip: &BTreeSet<BlockId>,
    state: &mut TarjanState,
) {
    enum Frame {
        Enter(BlockId),
        Resume {
            node: BlockId,
            successors: Vec<BlockId>,
            cursor: usize,
        },
    }

    let mut work: Vec<Frame> = vec![Frame::Enter(start)];

    while let Some(frame) = work.pop() {
        match frame {
            Frame::Enter(node) => {
                let idx = state.next_index;
                state.next_index += 1;
                state.index_of.insert(node, idx);
                state.lowlink.insert(node, idx);
                state.stack.push(node);
                state.on_stack.insert(node);

                let mut succs: Vec<BlockId> = cfg
                    .edges_from(node)
                    .into_iter()
                    .map(|(s, _)| s)
                    .filter(|s| !skip.contains(s))
                    .collect();
                succs.sort();
                succs.dedup();

                work.push(Frame::Resume {
                    node,
                    successors: succs,
                    cursor: 0,
                });
            }
            Frame::Resume {
                node,
                successors,
                cursor,
            } => {
                if cursor < successors.len() {
                    let succ = successors[cursor];
                    // Stash the resume frame with cursor advanced past `succ`.
                    work.push(Frame::Resume {
                        node,
                        successors: successors.clone(),
                        cursor: cursor + 1,
                    });

                    if !state.index_of.contains_key(&succ) {
                        work.push(Frame::Enter(succ));
                    } else if state.on_stack.contains(&succ) {
                        let succ_idx = state.index_of[&succ];
                        let cur_low = state.lowlink[&node];
                        state.lowlink.insert(node, cur_low.min(succ_idx));
                    }
                    continue;
                }

                // Post-order: propagate lowlink to parent and check root.
                if let Some(Frame::Resume {
                    node: parent_node, ..
                }) = work.last()
                {
                    let child_low = state.lowlink[&node];
                    let parent_low = state.lowlink[parent_node];
                    if child_low < parent_low {
                        state.lowlink.insert(*parent_node, child_low);
                    }
                }

                // Root of SCC?
                if state.lowlink[&node] == state.index_of[&node] {
                    let mut scc = BTreeSet::new();
                    loop {
                        let w = state.stack.pop().expect("stack non-empty at SCC root");
                        state.on_stack.remove(&w);
                        scc.insert(w);
                        if w == node {
                            break;
                        }
                    }
                    state.sccs.push(scc);
                }
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn::without_output(op, smallvec![], addr)
    }

    fn cbranch_insn(cond: Varnode, addr: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cond],
            addr,
        )
    }

    /// Two-entry irreducible diamond:
    ///
    ///     BB_0           BB_1
    ///       \             /
    ///        ↓           ↓
    ///       BB_2 ←-----→ BB_3
    ///        ↓             ↓
    ///        └→ BB_4 ←-----┘
    ///
    /// BB_2 ↔ BB_3 form an SCC with two external entries (BB_0 → BB_2,
    /// BB_1 → BB_3).
    fn make_irreducible() -> Function {
        let cond = Varnode::reg(256, 1);
        let mut func = Function::new("irr", BlockId(0), 0x1000);

        // BB_0 (entry): cbranch → BB_2 / BB_1
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond, 0x1000));
        bb0.successors = smallvec![BlockId(2), BlockId(1)];

        // BB_1: branch → BB_3
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x1010));
        bb1.successors = smallvec![BlockId(3)];

        // BB_2: cbranch → BB_3 / BB_4
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(cbranch_insn(cond, 0x1020));
        bb2.successors = smallvec![BlockId(3), BlockId(4)];

        // BB_3: cbranch → BB_2 / BB_4 (the back-edge to BB_2 + ext entry from BB_1)
        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(cbranch_insn(cond, 0x1030));
        bb3.successors = smallvec![BlockId(2), BlockId(4)];

        // BB_4: return
        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x1040));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);
        func
    }

    /// Reducible diamond: BB_0 → {BB_1, BB_2} → BB_3.
    fn make_reducible_diamond() -> Function {
        let cond = Varnode::reg(256, 1);
        let mut func = Function::new("red", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond, 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x2020));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(ctrl_insn(IrOp::Return, 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func
    }

    /// Natural loop: BB_0 → BB_1 → BB_0. Not irreducible (single entry).
    fn make_natural_loop() -> Function {
        let cond = Varnode::reg(256, 1);
        let mut func = Function::new("loop", BlockId(0), 0x3000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond, 0x3000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x3010));
        bb1.successors = smallvec![BlockId(0)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func
    }

    #[test]
    fn detects_two_entry_scc() {
        let func = make_irreducible();
        let ssa = build_ssa(func);

        let regions = detect_irreducible_regions(&ssa);
        assert_eq!(regions.len(), 1, "expected exactly one irreducible region");

        let region = &regions[0];
        assert_eq!(region.body_blocks, [BlockId(2), BlockId(3)].into());
        assert_eq!(region.entry_blocks, [BlockId(2), BlockId(3)].into());
    }

    #[test]
    fn reducible_cfg_has_no_irreducible_regions() {
        let func = make_reducible_diamond();
        let ssa = build_ssa(func);

        let regions = detect_irreducible_regions(&ssa);
        assert!(regions.is_empty(), "diamond is reducible: {regions:?}");
    }

    #[test]
    fn natural_loop_is_not_irreducible() {
        let func = make_natural_loop();
        let ssa = build_ssa(func);

        let regions = detect_irreducible_regions(&ssa);
        assert!(regions.is_empty(), "natural loop has 1 entry: {regions:?}");
    }

    /// A natural loop whose latch is preceded in address order by an
    /// unreachable padding block (`BB_1`, no terminator) that falls through
    /// into it:
    ///
    ///     BB_0 ──→ BB_3 (header) ⇄ BB_2 (latch) ←── BB_1 (padding, no preds)
    ///                │
    ///                └→ BB_4
    ///
    /// The padding edge must not make the latch a second loop entry.
    #[test]
    fn unreachable_fallthrough_predecessor_is_not_an_entry() {
        let cond = Varnode::reg(256, 1);
        let mut func = Function::new("padded_loop", BlockId(0), 0x4000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(ctrl_insn(IrOp::Branch, 0x4000));
        bb0.successors = smallvec![BlockId(3)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(0, 1),
            smallvec![Varnode::constant(0, 1)],
            0x4010,
        ));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Branch, 0x4020));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(cbranch_insn(cond, 0x4030));
        bb3.successors = smallvec![BlockId(2), BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x4040));

        for block in [bb0, bb1, bb2, bb3, bb4] {
            func.insert_block(block);
        }
        let ssa = build_ssa(func);
        assert_eq!(
            ssa.cfg.predecessors(BlockId(2)),
            vec![BlockId(1), BlockId(3)]
        );

        let regions = detect_irreducible_regions(&ssa);
        assert!(regions.is_empty(), "padding is not an entry: {regions:?}");
    }

    #[test]
    fn empty_function_is_reducible() {
        let func = Function::new("empty", BlockId(0), 0);
        let ssa = build_ssa(func);

        let regions = detect_irreducible_regions(&ssa);
        assert!(regions.is_empty());
    }
}
