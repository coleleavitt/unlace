//! Cross-reference database — call graph builder.
//!
//! Scans lifted IR for [`IrOp::Call`] and [`IrOp::Callind`] instructions,
//! building a bidirectional caller↔callee map keyed by function entry address.
//!
//! Direct calls (`CALL` with a `SpaceId::Const` input) produce edges in both
//! the `callers` and `callees` maps. Indirect calls (`CALLIND`, or `CALL` with
//! a non-constant target) are counted but do not produce edges since the target
//! address is unknown statically.

use std::collections::{BTreeMap, BTreeSet};

use crate::{Function, IrOp, SpaceId};

/// Bidirectional call graph derived from lifted IR.
///
/// Maps function entry addresses to their callers and callees, built by
/// scanning every instruction in the provided function set for `CALL` and
/// `CALLIND` opcodes.
#[derive(Clone, Debug, serde::Serialize, serde::Deserialize)]
pub struct CallGraph {
    /// For each callee address, the set of caller addresses that call it.
    callers: BTreeMap<u64, BTreeSet<u64>>,
    /// For each caller address, the set of callee addresses it calls.
    callees: BTreeMap<u64, BTreeSet<u64>>,
    /// Number of indirect call sites encountered during the scan.
    indirect_call_count: usize,
}

/// Sentinel empty set returned by reference when a lookup misses.
static EMPTY: BTreeSet<u64> = BTreeSet::new();

impl CallGraph {
    /// Returns the set of functions that call `addr`.
    pub fn callers_of(&self, addr: u64) -> &BTreeSet<u64> {
        self.callers.get(&addr).unwrap_or(&EMPTY)
    }

    /// Returns the set of functions called by `addr`.
    pub fn callees_of(&self, addr: u64) -> &BTreeSet<u64> {
        self.callees.get(&addr).unwrap_or(&EMPTY)
    }

    /// A leaf function has no outgoing call edges.
    pub fn is_leaf(&self, addr: u64) -> bool {
        self.callees_of(addr).is_empty()
    }

    /// Number of distinct callers of `addr` (direct calls only).
    pub fn call_count(&self, addr: u64) -> usize {
        self.callers_of(addr).len()
    }

    /// Total number of directed edges in the call graph.
    pub fn edge_count(&self) -> usize {
        self.callees.values().map(|s| s.len()).sum()
    }

    /// Number of indirect call sites encountered during the scan.
    pub fn indirect_call_count(&self) -> usize {
        self.indirect_call_count
    }
}

/// Build a [`CallGraph`] by scanning every instruction in every function for
/// `CALL` and `CALLIND` opcodes.
///
/// A `CALL` whose first input lives in [`SpaceId::Const`] is treated as a
/// direct call to the constant's value (the target address). Anything else —
/// including all `CALLIND` instructions — is classified as an indirect call.
pub fn build_call_graph(functions: &BTreeMap<u64, Function>) -> CallGraph {
    let mut callers: BTreeMap<u64, BTreeSet<u64>> = BTreeMap::new();
    let mut callees: BTreeMap<u64, BTreeSet<u64>> = BTreeMap::new();
    let mut indirect_call_count: usize = 0;

    for (&caller_addr, func) in functions {
        for block in func.blocks.values() {
            for insn in &block.insns {
                match insn.op {
                    IrOp::Call => {
                        if let Some(target_vn) = insn.inputs.first() {
                            if target_vn.space == SpaceId::Const {
                                let target = target_vn.offset;
                                callees.entry(caller_addr).or_default().insert(target);
                                callers.entry(target).or_default().insert(caller_addr);
                            } else {
                                indirect_call_count += 1;
                            }
                        }
                    }
                    IrOp::Callind => {
                        indirect_call_count += 1;
                    }
                    _ => {}
                }
            }
        }
    }

    CallGraph {
        callers,
        callees,
        indirect_call_count,
    }
}

/// Compute Strongly Connected Components of the call graph using Tarjan's
/// algorithm. Returns SCCs in reverse topological order (leaves first),
/// which is the correct iteration order for a bottom-up fixed-point:
/// analyze callees before callers.
///
/// Each SCC is a `Vec<u64>` of function entry addresses. Singleton SCCs
/// (no self-recursion) represent non-recursive functions; multi-element
/// SCCs represent mutually-recursive groups that must be iterated together.
pub fn compute_sccs(cg: &CallGraph, all_addrs: &[u64]) -> Vec<Vec<u64>> {
    // Tarjan's algorithm state.
    let mut index_counter: u32 = 0;
    let mut stack: Vec<u64> = Vec::new();
    let mut on_stack: BTreeSet<u64> = BTreeSet::new();
    let mut indices: BTreeMap<u64, u32> = BTreeMap::new();
    let mut lowlinks: BTreeMap<u64, u32> = BTreeMap::new();
    let mut result: Vec<Vec<u64>> = Vec::new();

    fn strongconnect(
        v: u64,
        cg: &CallGraph,
        index_counter: &mut u32,
        stack: &mut Vec<u64>,
        on_stack: &mut BTreeSet<u64>,
        indices: &mut BTreeMap<u64, u32>,
        lowlinks: &mut BTreeMap<u64, u32>,
        result: &mut Vec<Vec<u64>>,
    ) {
        indices.insert(v, *index_counter);
        lowlinks.insert(v, *index_counter);
        *index_counter += 1;
        stack.push(v);
        on_stack.insert(v);

        for &w in cg.callees_of(v) {
            if !indices.contains_key(&w) {
                strongconnect(w, cg, index_counter, stack, on_stack, indices, lowlinks, result);
                let w_low = lowlinks[&w];
                let v_low = lowlinks.get_mut(&v).unwrap();
                if w_low < *v_low {
                    *v_low = w_low;
                }
            } else if on_stack.contains(&w) {
                let w_idx = indices[&w];
                let v_low = lowlinks.get_mut(&v).unwrap();
                if w_idx < *v_low {
                    *v_low = w_idx;
                }
            }
        }

        if lowlinks[&v] == indices[&v] {
            let mut component = Vec::new();
            loop {
                let w = stack.pop().unwrap();
                on_stack.remove(&w);
                component.push(w);
                if w == v {
                    break;
                }
            }
            component.sort_unstable(); // deterministic order within SCC
            result.push(component);
        }
    }

    for &addr in all_addrs {
        if !indices.contains_key(&addr) {
            strongconnect(
                addr,
                cg,
                &mut index_counter,
                &mut stack,
                &mut on_stack,
                &mut indices,
                &mut lowlinks,
                &mut result,
            );
        }
    }

    // Tarjan produces SCCs in reverse finish order — which IS the reverse
    // topological order we want (leaves first). No reversal needed.
    result
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use crate::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::build_call_graph;

    /// Helper: create a function at `addr` that directly calls each target.
    fn make_caller(addr: u64, targets: &[u64]) -> Function {
        let mut func = Function::new("caller", BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        for &t in targets {
            bb.insns.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(t, 8)],
                addr,
            ));
        }
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            addr + 0x10,
        ));
        func.insert_block(bb);
        func
    }

    /// Helper: create a leaf function (no calls, just a return).
    fn make_leaf(addr: u64) -> Function {
        let mut func = Function::new("leaf", BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], addr));
        func.insert_block(bb);
        func
    }

    /// Helper: create a function that contains one CALLIND instruction.
    fn make_indirect_caller(addr: u64) -> Function {
        let mut func = Function::new("indirect", BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![Varnode::reg(0, 8)], // register target (RAX-like)
            addr,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            addr + 0x10,
        ));
        func.insert_block(bb);
        func
    }

    #[test]
    fn test_empty_graph() {
        let funcs: BTreeMap<u64, Function> = BTreeMap::new();
        let cg = build_call_graph(&funcs);

        assert_eq!(cg.edge_count(), 0);
        assert_eq!(cg.indirect_call_count(), 0);
        assert!(cg.callers_of(0x1000).is_empty());
        assert!(cg.callees_of(0x1000).is_empty());
        assert!(cg.is_leaf(0x1000));
    }

    #[test]
    fn test_single_direct_call() {
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_caller(0x1000, &[0x2000]));
        funcs.insert(0x2000, make_leaf(0x2000));

        let cg = build_call_graph(&funcs);

        assert_eq!(cg.edge_count(), 1);
        assert!(cg.callees_of(0x1000).contains(&0x2000));
        assert!(cg.callers_of(0x2000).contains(&0x1000));
        assert_eq!(cg.indirect_call_count(), 0);
    }

    #[test]
    fn test_bidirectionality() {
        // A calls B and C.
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_caller(0x1000, &[0x2000, 0x3000]));
        funcs.insert(0x2000, make_leaf(0x2000));
        funcs.insert(0x3000, make_leaf(0x3000));

        let cg = build_call_graph(&funcs);

        // A's callees
        let a_callees = cg.callees_of(0x1000);
        assert!(a_callees.contains(&0x2000));
        assert!(a_callees.contains(&0x3000));
        assert_eq!(a_callees.len(), 2);

        // B's callers
        assert!(cg.callers_of(0x2000).contains(&0x1000));
        assert_eq!(cg.callers_of(0x2000).len(), 1);

        // C's callers
        assert!(cg.callers_of(0x3000).contains(&0x1000));
        assert_eq!(cg.callers_of(0x3000).len(), 1);

        assert_eq!(cg.edge_count(), 2);
    }

    #[test]
    fn test_leaf_function() {
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_caller(0x1000, &[0x2000]));
        funcs.insert(0x2000, make_leaf(0x2000));

        let cg = build_call_graph(&funcs);

        assert!(!cg.is_leaf(0x1000)); // caller is not a leaf
        assert!(cg.is_leaf(0x2000)); // callee is a leaf
    }

    #[test]
    fn test_call_count() {
        // Three functions all call the same target.
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_caller(0x1000, &[0x4000]));
        funcs.insert(0x2000, make_caller(0x2000, &[0x4000]));
        funcs.insert(0x3000, make_caller(0x3000, &[0x4000]));
        funcs.insert(0x4000, make_leaf(0x4000));

        let cg = build_call_graph(&funcs);

        assert_eq!(cg.call_count(0x4000), 3);
        assert_eq!(cg.edge_count(), 3);
    }

    #[test]
    fn test_indirect_call_counted() {
        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000, make_indirect_caller(0x1000));

        let cg = build_call_graph(&funcs);

        assert_eq!(cg.indirect_call_count(), 1);
        // No edges added for indirect calls.
        assert_eq!(cg.edge_count(), 0);
        assert!(cg.is_leaf(0x1000));
    }
}
