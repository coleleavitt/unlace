//! Controlled node splitting to break irreducible regions.
//!
//! For each irreducible region detected by [`crate::irreducible`], we
//! duplicate every multi-predecessor entry block: external predecessors are
//! redirected to the duplicate; internal predecessors keep pointing to the
//! original. This converts a multi-entry SCC into a single-entry SCC (a
//! natural loop) at the cost of code-size duplication.
//!
//! # Example
//!
//! ```text
//! Before:                           After:
//!   A → C ← D                         A → C  ←--- D
//!         ↘ ↑                              ↘ ↑      copy
//!     B → E ↑                         B → E_copy ← C
//!         ↑ │                              ↑
//!         └─┘                              └──── back-edge from E_copy
//! ```
//!
//! After splitting, the structurer sees a single-entry loop and emits
//! `while`/`do-while` instead of `goto`.
//!
//! # Pipeline position
//!
//! Run **after** [`crate::merge_linear_blocks`] (so we don't duplicate
//! single-pred chains needlessly) and **before** SSA construction (so phi
//! nodes get rebuilt cleanly for the new blocks).
//!
//! # Diagnostics
//!
//! Enable `unlace::struct::split=debug` for per-round region and split counts,
//! and `=trace` for per-candidate scoring.

use std::collections::{BTreeMap, BTreeSet};

use smallvec::SmallVec;
use unlace_ir::cfg::build_cfg;
use unlace_ir::{BasicBlock, BlockId, Function};

use crate::irreducible::{IrreducibleRegion, detect_irreducible_regions_in_cfg};

const MAX_SPLIT_ROUNDS: usize = 16;

macro_rules! split_debug {
    ($($arg:tt)*) => {
        tracing::debug!(target: "unlace::struct::split", "{}", format_args!($($arg)*))
    };
}

/// Split entry nodes of irreducible regions until the CFG is reducible or
/// the iteration cap is hit. Returns the number of duplications performed.
///
/// Operates on a raw [`Function`] (pre-SSA). The CFG is rebuilt internally
/// each round.
pub fn split_irreducible_entries(func: &mut Function) -> usize {
    let mut total = 0;
    for round in 0..MAX_SPLIT_ROUNDS {
        let cfg = build_cfg(func);
        let regions = detect_irreducible_regions_in_cfg(&cfg);
        split_debug!(
            "func={} round={round} blocks={} irreducible_regions={}",
            func.name,
            func.blocks.len(),
            regions.len()
        );
        for (i, r) in regions.iter().enumerate() {
            split_debug!(
                "  region#{i} entries={:?} body_blocks={}",
                r.entry_blocks,
                r.body_blocks.len()
            );
        }
        if regions.is_empty() {
            split_debug!(
                "func={} CONVERGED (reducible) after {round} rounds, {total} splits, blocks={}",
                func.name,
                func.blocks.len()
            );
            return total;
        }
        let split_now = split_one_round(func, &regions);
        split_debug!("func={} round={round} split_now={split_now}", func.name);
        if split_now == 0 {
            split_debug!(
                "func={} STUCK (irreducible, no productive split) after {round} rounds, blocks={}",
                func.name,
                func.blocks.len()
            );
            return total;
        }
        total += split_now;
    }
    split_debug!(
        "func={} HIT MAX_SPLIT_ROUNDS={MAX_SPLIT_ROUNDS}, blocks={}, total_splits={total}",
        func.name,
        func.blocks.len()
    );
    total
}

fn split_one_round(func: &mut Function, regions: &[IrreducibleRegion]) -> usize {
    let mut next_id = func.blocks.keys().last().map_or(0, |b| b.0 + 1);
    let mut splits = 0;

    for region in regions {
        let Some((entry, external)) = pick_split_target(func, region) else {
            continue;
        };

        tracing::trace!(
            target: "unlace::struct::split",
            entry = ?entry,
            external_preds = ?external,
            body_blocks = region.body_blocks.len(),
            entry_blocks = ?region.entry_blocks,
            "node_split selected entry"
        );

        let Some(orig) = func.blocks.get(&entry) else {
            continue;
        };
        let copy_id = BlockId(next_id);
        next_id += 1;

        let mut copy_block = BasicBlock::new(copy_id);
        copy_block.insns = orig.insns.clone();
        copy_block.successors = orig.successors.clone();
        func.insert_block(copy_block);

        for ext in external {
            redirect_successors(func, ext, entry, copy_id);
        }
        splits += 1;
    }

    splits
}

/// Choose one entry per region by simulating each split and minimizing the
/// largest remaining irreducible SCC overlapping the current region. Ties
/// prefer fewer remaining entries, then fewer external predecessors (less
/// duplication), then lower `BlockId`. Returns `(entry, external_preds)`.
///
/// Splitting a single entry per round (rather than all simultaneously) is
/// essential for convergence: simultaneous splitting creates new copy nodes
/// whose outgoing edges re-introduce external entries via the cycle.
fn pick_split_target(
    func: &Function,
    region: &IrreducibleRegion,
) -> Option<(BlockId, Vec<BlockId>)> {
    let mut pred_map = BTreeMap::new();
    for &entry in &region.entry_blocks {
        let preds = predecessors(func, entry);
        let (external, internal) = partition_preds(&preds, &region.body_blocks);
        pred_map.insert(entry, (external, internal));
    }

    let mut best: Option<SplitCandidate> = None;
    for &entry in &region.entry_blocks {
        let Some((external, internal)) = pred_map.get(&entry) else {
            continue;
        };
        if external.is_empty() || internal.is_empty() {
            continue;
        }

        let score = simulate_post_split_score(func, region, entry, external);
        if score.largest_body >= region.body_blocks.len() {
            tracing::trace!(
            target: "unlace::struct::split",
                entry = ?entry,
                current_body = region.body_blocks.len(),
                remaining_largest_body = score.largest_body,
                "node_split skipped non-shrinking candidate"
            );
            continue;
        }

        let candidate = SplitCandidate {
            entry,
            external: external.clone(),
            score,
        };

        tracing::trace!(
            target: "unlace::struct::split",
            entry = ?candidate.entry,
            external_pred_count = candidate.external.len(),
            remaining_largest_body = candidate.score.largest_body,
            remaining_entry_count = candidate.score.entry_count,
            remaining_total_body = candidate.score.total_body,
            "node_split scored candidate"
        );

        match &best {
            None => best = Some(candidate),
            Some(best_candidate) if candidate.is_better_than(best_candidate) => {
                best = Some(candidate);
            }
            _ => {}
        }
    }
    best.map(|candidate| (candidate.entry, candidate.external))
}

#[derive(Debug)]
struct SplitCandidate {
    entry: BlockId,
    external: Vec<BlockId>,
    score: SplitScore,
}

impl SplitCandidate {
    fn is_better_than(&self, other: &Self) -> bool {
        (
            self.score.largest_body,
            self.score.entry_count,
            self.score.total_body,
            self.external.len(),
            self.entry,
        ) < (
            other.score.largest_body,
            other.score.entry_count,
            other.score.total_body,
            other.external.len(),
            other.entry,
        )
    }
}

#[derive(Clone, Copy, Debug)]
struct SplitScore {
    largest_body: usize,
    entry_count: usize,
    total_body: usize,
}

fn simulate_post_split_score(
    func: &Function,
    region: &IrreducibleRegion,
    split_entry: BlockId,
    external: &[BlockId],
) -> SplitScore {
    let mut trial = func.clone();
    let Some(orig) = trial.blocks.get(&split_entry).cloned() else {
        return SplitScore {
            largest_body: usize::MAX,
            entry_count: usize::MAX,
            total_body: usize::MAX,
        };
    };

    let copy_id = trial.blocks.keys().last().map_or(0, |b| b.0 + 1);
    let copy_id = BlockId(copy_id);

    let mut copy_block = BasicBlock::new(copy_id);
    copy_block.insns = orig.insns;
    copy_block.successors = orig.successors;
    trial.insert_block(copy_block);

    for &ext in external {
        redirect_successors(&mut trial, ext, split_entry, copy_id);
    }

    let trial_cfg = build_cfg(&trial);
    let trial_regions = detect_irreducible_regions_in_cfg(&trial_cfg);

    let mut score = SplitScore {
        largest_body: 0,
        entry_count: 0,
        total_body: 0,
    };

    for trial_region in trial_regions {
        if trial_region
            .body_blocks
            .iter()
            .any(|block| region.body_blocks.contains(block))
        {
            score.largest_body = score.largest_body.max(trial_region.body_blocks.len());
            score.entry_count += trial_region.entry_blocks.len();
            score.total_body += trial_region.body_blocks.len();
        }
    }

    score
}

fn predecessors(func: &Function, target: BlockId) -> Vec<BlockId> {
    let mut preds = Vec::new();
    for (&bid, block) in &func.blocks {
        if block.successors.contains(&target) {
            preds.push(bid);
        }
    }
    preds
}

fn partition_preds(
    preds: &[BlockId],
    region_body: &BTreeSet<BlockId>,
) -> (Vec<BlockId>, Vec<BlockId>) {
    let mut external = Vec::new();
    let mut internal = Vec::new();
    for &p in preds {
        if region_body.contains(&p) {
            internal.push(p);
        } else {
            external.push(p);
        }
    }
    (external, internal)
}

fn redirect_successors(func: &mut Function, src: BlockId, from: BlockId, to: BlockId) {
    let Some(block) = func.blocks.get_mut(&src) else {
        return;
    };
    let new_succs: SmallVec<[BlockId; 2]> = block
        .successors
        .iter()
        .map(|s| if *s == from { to } else { *s })
        .collect();
    block.successors = new_succs;
}

#[allow(dead_code)]
fn dump_topology(func: &Function) -> BTreeMap<BlockId, Vec<BlockId>> {
    func.blocks
        .iter()
        .map(|(b, blk)| (*b, blk.successors.iter().copied().collect()))
        .collect()
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::irreducible::detect_irreducible_regions_in_cfg;
    use unlace_ir::cfg::build_cfg;

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
    ///     BB_0 ──→ BB_2 ←──→ BB_3 ←── BB_1
    ///                ↓         ↓
    ///                └── BB_4 ─┘
    ///
    /// BB_2 and BB_3 are entries to the same SCC.
    fn make_irreducible() -> Function {
        let cond = Varnode::reg(256, 1);
        let mut func = Function::new("irr", BlockId(0), 0x1000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond, 0x1000));
        bb0.successors = smallvec![BlockId(2), BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x1010));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(cbranch_insn(cond, 0x1020));
        bb2.successors = smallvec![BlockId(3), BlockId(4)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(cbranch_insn(cond, 0x1030));
        bb3.successors = smallvec![BlockId(2), BlockId(4)];

        let mut bb4 = BasicBlock::new(BlockId(4));
        bb4.insns.push(ctrl_insn(IrOp::Return, 0x1040));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);
        func.insert_block(bb4);
        func
    }

    fn make_reducible() -> Function {
        let cond = Varnode::reg(256, 1);
        let mut func = Function::new("red", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(cbranch_insn(cond, 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(ctrl_insn(IrOp::Branch, 0x2010));
        bb1.successors = smallvec![BlockId(2)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x2020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func
    }

    #[test]
    fn splitting_makes_irreducible_cfg_reducible() {
        let mut func = make_irreducible();

        let cfg_before = build_cfg(&func);
        assert!(
            !detect_irreducible_regions_in_cfg(&cfg_before).is_empty(),
            "test fixture should be irreducible to start with"
        );

        let blocks_before = func.blocks.len();
        let splits = split_irreducible_entries(&mut func);
        assert!(splits > 0, "expected at least one split");

        assert!(
            func.blocks.len() > blocks_before,
            "splitting should add blocks: before={blocks_before}, after={}",
            func.blocks.len()
        );

        let cfg_after = build_cfg(&func);
        let regions_after = detect_irreducible_regions_in_cfg(&cfg_after);
        assert!(
            regions_after.is_empty(),
            "post-split CFG should be reducible, got {regions_after:?}"
        );
    }

    #[test]
    fn reducible_cfg_unchanged() {
        let mut func = make_reducible();
        let blocks_before = func.blocks.len();

        let splits = split_irreducible_entries(&mut func);
        assert_eq!(splits, 0);
        assert_eq!(func.blocks.len(), blocks_before);
    }

    #[test]
    fn external_preds_redirect_to_copy() {
        let mut func = make_irreducible();
        split_irreducible_entries(&mut func);

        let bb0 = &func.blocks[&BlockId(0)];
        let bb1 = &func.blocks[&BlockId(1)];

        let bb0_targets: BTreeSet<BlockId> = bb0.successors.iter().copied().collect();
        let bb1_targets: BTreeSet<BlockId> = bb1.successors.iter().copied().collect();

        assert!(
            !bb0_targets.contains(&BlockId(2)) || !bb1_targets.contains(&BlockId(3)),
            "at least one external entry edge must have been redirected; bb0={bb0_targets:?}, bb1={bb1_targets:?}"
        );
    }
}
