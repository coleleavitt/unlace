//! Conformance: the shipping Tarjan SCC routine (`unlace-struct`, used by
//! irreducible-loop structuring) vs the proved Coq `Sccs.v` partition spec.
//!
//! `Sccs.v` proves that mutual reachability is an equivalence relation, so the
//! SCCs are a TOTAL, DISJOINT partition of the nodes, and within an SCC every
//! pair is mutually reachable while across SCCs they are not. This test pins the
//! production `scc_partition` (a thin public accessor over the real `tarjan_scc`)
//! to those invariants over random CFGs run through the actual `build_ssa`
//! pipeline.
//!
//! Read-only: it builds `Function`s and inspects the SCC partition; no producer
//! state is mutated and there is no golden impact.

use std::collections::{BTreeSet, VecDeque};

use unlace_ir::cfg::ControlFlowGraph;
use unlace_ir::ssa::build_ssa;
use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};
use unlace_struct::irreducible::scc_partition;

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

// Random CFG with `n` blocks (entry = BlockId(0)); forward edges + occasional
// back-edges so SCCs of size > 1 actually occur.
fn random_function(rng: &mut XorShift64, n: u32) -> Function {
    let mut func = Function::new("scc_rand", BlockId(0), 0x1000);
    for i in 0..n {
        let mut bb = BasicBlock::new(BlockId(i));
        if i == n - 1 {
            bb.insns.push(ctrl(IrOp::Return, 0x1000 + i as u64 * 16));
        } else {
            let mut succs: smallvec::SmallVec<[BlockId; 2]> = smallvec::SmallVec::new();
            let span = (n - i - 1) as u64;
            succs.push(BlockId(i + 1 + (rng.next() % span) as u32));
            if rng.next().is_multiple_of(2) && i + 2 < n {
                succs.push(BlockId(i + 1 + (rng.next() % span) as u32));
            }
            // back-edge → creates multi-block SCCs
            if rng.next().is_multiple_of(3) && i > 0 {
                succs.push(BlockId((rng.next() % i as u64) as u32));
            }
            bb.insns.push(ctrl(IrOp::Cbranch, 0x1000 + i as u64 * 16));
            bb.successors = succs;
        }
        func.insert_block(bb);
    }
    func
}

// Forward reachability over the CFG (respecting the same synthetic-skip the
// producer uses), as an INDEPENDENT oracle — not derived from the SCC result.
fn reaches(cfg: &ControlFlowGraph, from: BlockId, to: BlockId, skip: &BTreeSet<BlockId>) -> bool {
    let mut seen = BTreeSet::new();
    let mut q = VecDeque::new();
    q.push_back(from);
    seen.insert(from);
    while let Some(b) = q.pop_front() {
        if b == to {
            return true;
        }
        for (s, _) in cfg.edges_from(b) {
            if !skip.contains(&s) && seen.insert(s) {
                q.push_back(s);
            }
        }
    }
    false
}

type Scc = BTreeSet<BlockId>;

// (1) DISJOINT + TOTAL: each real node appears in exactly one SCC, and the union
// is exactly the real-node set (Sccs.v `scc_disjoint` + `scc_total`).
fn check_partition(sccs: &[Scc], real_nodes: &BTreeSet<BlockId>) {
    let mut seen: BTreeSet<BlockId> = BTreeSet::new();
    for &b in sccs.iter().flatten() {
        assert!(seen.insert(b), "Sccs disjoint: {b:?} in two SCCs");
        assert!(real_nodes.contains(&b), "SCC contains skipped node {b:?}");
    }
    assert_eq!(&seen, real_nodes, "Sccs total: must cover every real node");
}

// (2) WITHIN an SCC: every pair is mutually reachable (Sccs.v `within_scc_mutual`)
// — verified with an independent BFS oracle, not derived from the SCC result.
fn check_within(cfg: &ControlFlowGraph, sccs: &[Scc], skip: &BTreeSet<BlockId>) {
    for pair in sccs.iter().flat_map(|s| s.iter().flat_map(move |&a| s.iter().map(move |&b| (a, b)))) {
        let (a, b) = pair;
        assert!(reaches(cfg, a, b, skip), "within_scc_mutual: {a:?} !→ {b:?}");
    }
}

// (3) ACROSS distinct SCCs: representatives are not mutually reachable (Sccs.v
// `across_scc_no_cycle`).
fn check_across(cfg: &ControlFlowGraph, sccs: &[Scc], skip: &BTreeSet<BlockId>) {
    for (i, sa) in sccs.iter().enumerate() {
        for sb in sccs.iter().skip(i + 1) {
            let a = *sa.iter().next().unwrap();
            let b = *sb.iter().next().unwrap();
            assert!(
                !(reaches(cfg, a, b, skip) && reaches(cfg, b, a, skip)),
                "across_scc_no_cycle: distinct-SCC reps {a:?},{b:?} mutually reachable"
            );
        }
    }
}

#[test]
fn scc_partition_matches_coq_partition_laws() {
    let mut rng = XorShift64::new(0x5CC0_1234_5CC0_1234);
    for _ in 0..3000 {
        let n = 3 + (rng.next() % 8) as u32; // 3..=10 blocks
        let ssa = build_ssa(random_function(&mut rng, n));
        let cfg = &ssa.cfg;
        let skip: BTreeSet<BlockId> =
            [cfg.exit_block(), cfg.unknown_block()].into_iter().collect();
        let sccs = scc_partition(cfg);
        let real_nodes: BTreeSet<BlockId> = cfg
            .node_map()
            .keys()
            .copied()
            .filter(|b| !skip.contains(b))
            .collect();

        check_partition(&sccs, &real_nodes);
        check_within(cfg, &sccs, &skip);
        check_across(cfg, &sccs, &skip);
    }
}
