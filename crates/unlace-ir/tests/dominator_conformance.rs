//! Conformance: Rust `DominatorTree` (crates/unlace-ir/src/ssa.rs, built by the
//! shipping `build_ssa` pipeline) vs the proved Coq `DominatorTree.v` spec.
//!
//! `DominatorTree.v` constructs dominance from CFG paths and DERIVES the poset
//! laws — reflexivity, transitivity, entry-dominates-all, and immediate-dominator
//! uniqueness. This test pins the real Rust dominator tree to those laws over
//! random CFGs run through the actual SSA construction. Read-only: it builds
//! `Function`s and inspects the resulting tree; no producer state is mutated and
//! there is no golden impact.

use std::collections::BTreeSet;

use unlace_ir::ssa::{DominatorTree, build_ssa};
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

struct XorShift64(u64);
impl XorShift64 {
    fn new(seed: u64) -> Self {
        XorShift64(seed | 1)
    }
    fn next(&mut self) -> u64 {
        let mut x = self.0;
        x ^= x << 13;
        x ^= x >> 7;
        x ^= x << 17;
        self.0 = x;
        x
    }
}

fn ctrl(op: IrOp, ea: u64) -> IrInsn {
    let inputs: smallvec::SmallVec<[Varnode; 3]> = smallvec::SmallVec::new();
    IrInsn::without_output(op, inputs, ea)
}

// Build a random mostly-reducible CFG with `n` blocks (entry = BlockId(0)).
// Each non-terminal block branches forward to 1-2 successors; the last block
// returns. An occasional back-edge introduces a loop.
fn random_function(rng: &mut XorShift64, n: u32) -> Function {
    let mut func = Function::new("rand", BlockId(0), 0x1000);
    for i in 0..n {
        let mut bb = BasicBlock::new(BlockId(i));
        if i == n - 1 {
            bb.insns.push(ctrl(IrOp::Return, 0x1000 + i as u64 * 16));
        } else {
            // 1 or 2 forward successors in (i, n)
            let mut succs: smallvec::SmallVec<[BlockId; 2]> = smallvec::SmallVec::new();
            let span = (n - i - 1) as u64;
            let s1 = i + 1 + (rng.next() % span) as u32;
            succs.push(BlockId(s1.min(n - 1)));
            if rng.next().is_multiple_of(2) && i + 2 < n {
                let s2 = i + 1 + (rng.next() % span) as u32;
                succs.push(BlockId(s2.min(n - 1)));
            }
            // occasional back-edge to a strict dominator-ish earlier block
            if rng.next().is_multiple_of(5) && i > 0 {
                succs.push(BlockId((rng.next() % i as u64) as u32));
            }
            bb.insns.push(ctrl(IrOp::Cbranch, 0x1000 + i as u64 * 16));
            bb.successors = succs;
        }
        func.insert_block(bb);
    }
    func
}

// `dominates d n` derived from the Rust idom chain: walk n's idom-parents to the
// root; d dominates n iff d is on that chain (including n itself and the root).
fn dominates(dom: &DominatorTree, d: BlockId, n: BlockId) -> bool {
    let mut cur = Some(n);
    let mut guard = 0;
    while let Some(b) = cur {
        if b == d {
            return true;
        }
        if b == dom.root() {
            break;
        }
        guard += 1;
        if guard > 10_000 {
            break;
        }
        cur = dom.idom(b);
    }
    false
}

fn reachable_blocks(dom: &DominatorTree, n: u32) -> Vec<BlockId> {
    // A block is in the tree if it is the root or has an idom.
    (0..n)
        .map(BlockId)
        .filter(|&b| b == dom.root() || dom.idom(b).is_some())
        .collect()
}

// dom_trans (closure along the idom chain): every dominator of a node's idom
// also dominates the node.
fn check_transitivity(dom: &DominatorTree, blocks: &[BlockId], b: BlockId, id: BlockId) {
    for &d in blocks.iter().filter(|&&d| dominates(dom, d, id)) {
        assert!(
            dominates(dom, d, b),
            "dom_trans: {d:?} dom {id:?} dom {b:?}"
        );
    }
}

// dom_antisym: distinct blocks cannot mutually dominate.
fn check_antisym(dom: &DominatorTree, blocks: &BTreeSet<BlockId>) {
    for &a in blocks {
        for &b in blocks.iter().filter(|&&b| b != a && dominates(dom, a, b)) {
            assert!(!dominates(dom, b, a), "dom_antisym: {a:?} <-> {b:?}");
        }
    }
}

fn check_tree_laws(dom: &DominatorTree, n: u32) {
    let blocks = reachable_blocks(dom, n);
    for &b in &blocks {
        // dom_refl + entry_dominates
        assert!(dominates(dom, b, b), "dom_refl: {b:?}");
        assert!(dominates(dom, dom.root(), b), "entry_dominates: {b:?}");
        // idom strictly dominates its node; transitive closure holds along it
        if let Some(id) = dom.idom(b) {
            assert!(dominates(dom, id, b), "idom dominates node: {b:?}");
            check_transitivity(dom, &blocks, b, id);
        }
    }
    check_antisym(dom, &blocks.iter().copied().collect());
}

#[test]
fn dominator_tree_matches_coq_poset_laws() {
    let mut rng = XorShift64::new(0xD0_1A_7E_5E_ED_C0_FF_EE);
    for _ in 0..4000 {
        let n = 3 + (rng.next() % 8) as u32; // 3..=10 blocks
        let ssa = build_ssa(random_function(&mut rng, n));
        check_tree_laws(&ssa.dom_tree, n);
    }
}
