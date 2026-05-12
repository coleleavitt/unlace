//! Cross-block dead store elimination.
//!
//! Extends the intra-block [`DeadStoreElimPass`] to whole-CFG analysis.
//! A `STORE addr, val` instruction is dead when **every** path from the
//! store's program point to function exit either:
//!
//! - re-stores to the same address before any LOAD/CALL that could
//!   observe it, OR
//! - reaches function exit without any such LOAD/CALL (the slot is a
//!   stack local whose lifetime ends with the function).
//!
//! The address-equivalence relation is purely *stack-offset* based:
//! distinct varnodes that resolve to the same RSP/RBP-relative offset are
//! treated as the same memory location. Any memory access whose address
//! we *cannot* resolve to a stack offset conservatively kills the
//! analysis for that path (we bail and keep the store).

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{SsaFunction, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

const RSP_OFFSET: u64 = 32;
const RBP_OFFSET: u64 = 40;

pub struct DeadStoreElimGlobalPass;

impl Pass for DeadStoreElimGlobalPass {
    fn name(&self) -> &str {
        "dse-global"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let dead = find_globally_dead_stores(func);
        if dead.is_empty() {
            return Ok(false);
        }

        let mut by_block: BTreeMap<BlockId, BTreeSet<usize>> = BTreeMap::new();
        for (bid, idx) in dead {
            by_block.entry(bid).or_default().insert(idx);
        }

        for (bid, set) in &by_block {
            let block = match func.function.blocks.get_mut(bid) {
                Some(b) => b,
                None => continue,
            };
            let keep: Vec<usize> = (0..block.insns.len())
                .filter(|i| !set.contains(i))
                .collect();
            if keep.len() == block.insns.len() {
                continue;
            }
            let old = std::mem::take(&mut block.insns);
            block.insns = Vec::with_capacity(keep.len());
            for (new_idx, &old_idx) in keep.iter().enumerate() {
                block.insns.push(old[old_idx].clone());
                if new_idx != old_idx {
                    let in_count = block.insns.last().map_or(0, |i| i.inputs.len());
                    if let Some(sv) = func.var_map.remove(&(*bid, old_idx, VarnodeSlot::Output)) {
                        func.var_map.insert((*bid, new_idx, VarnodeSlot::Output), sv);
                    }
                    for i in 0..in_count {
                        if let Some(sv) =
                            func.var_map.remove(&(*bid, old_idx, VarnodeSlot::Input(i)))
                        {
                            func.var_map
                                .insert((*bid, new_idx, VarnodeSlot::Input(i)), sv);
                        }
                    }
                }
            }
            let new_len = block.insns.len();
            let stale: Vec<_> = func
                .var_map
                .range((*bid, new_len, VarnodeSlot::Output)..)
                .take_while(|(k, _)| k.0 == *bid)
                .map(|(k, _)| k.clone())
                .collect();
            for k in stale {
                func.var_map.remove(&k);
            }
        }

        Ok(true)
    }
}

fn find_globally_dead_stores(func: &SsaFunction) -> Vec<(BlockId, usize)> {
    let mut dead = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Store {
                continue;
            }
            let Some(off) = store_stack_offset(insn, func) else {
                continue;
            };
            if is_globally_dead(func, bid, idx, off) {
                dead.push((bid, idx));
            }
        }
    }

    dead
}

/// Forward CFG walk from (bid, idx). Every reachable program point must
/// either:
///   * encounter a STORE to the same stack offset (kill), OR
///   * reach the function's exit/return (lifetime ends).
/// A LOAD from the offset, a CALL/CALLIND, or any unresolvable
/// memory access kills the analysis (returns `false`).
fn is_globally_dead(
    func: &SsaFunction,
    start_bid: BlockId,
    start_idx: usize,
    target_off: i64,
) -> bool {
    enum BlockResult {
        Killed,
        Lives,
        FallsThrough,
    }

    fn scan_block(
        func: &SsaFunction,
        bid: BlockId,
        start_idx: usize,
        target_off: i64,
    ) -> BlockResult {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => return BlockResult::Lives,
        };
        for (idx, insn) in block.insns.iter().enumerate().skip(start_idx) {
            match insn.op {
                IrOp::Store => {
                    if let Some(off) = store_stack_offset(insn, func) {
                        if off == target_off {
                            return BlockResult::Killed;
                        }
                    } else {
                        return BlockResult::Lives;
                    }
                }
                IrOp::Load => {
                    if let Some(off) = load_stack_offset(insn, func) {
                        if off == target_off {
                            return BlockResult::Lives;
                        }
                    } else {
                        return BlockResult::Lives;
                    }
                }
                IrOp::Call | IrOp::Callind | IrOp::Callother => {
                    return BlockResult::Lives;
                }
                IrOp::Return => {
                    return BlockResult::Killed;
                }
                _ => {}
            }
            let _ = idx;
        }
        BlockResult::FallsThrough
    }

    match scan_block(func, start_bid, start_idx + 1, target_off) {
        BlockResult::Killed => return true,
        BlockResult::Lives => return false,
        BlockResult::FallsThrough => {}
    }

    let mut visited: BTreeSet<BlockId> = BTreeSet::new();
    visited.insert(start_bid);
    let mut work: VecDeque<BlockId> = VecDeque::new();
    for (succ, _) in func.cfg.edges_from(start_bid) {
        work.push_back(succ);
    }

    let exit_bid = func.cfg.exit_block();
    let unknown_bid = func.cfg.unknown_block();

    while let Some(bid) = work.pop_front() {
        if bid == exit_bid {
            continue;
        }
        if bid == unknown_bid {
            return false;
        }
        if !visited.insert(bid) {
            continue;
        }
        match scan_block(func, bid, 0, target_off) {
            BlockResult::Killed => continue,
            BlockResult::Lives => return false,
            BlockResult::FallsThrough => {
                let succs = func.cfg.edges_from(bid);
                if succs.is_empty() {
                    continue;
                }
                for (s, _) in succs {
                    work.push_back(s);
                }
            }
        }
    }

    true
}

fn store_stack_offset(insn: &IrInsn, func: &SsaFunction) -> Option<i64> {
    let addr = if insn.inputs.len() >= 3 {
        insn.inputs[1]
    } else if insn.inputs.len() == 2 {
        insn.inputs[0]
    } else {
        return None;
    };
    stack_offset_of(&addr, func)
}

fn load_stack_offset(insn: &IrInsn, func: &SsaFunction) -> Option<i64> {
    let addr = if insn.inputs.len() >= 2 {
        insn.inputs[1]
    } else if !insn.inputs.is_empty() {
        insn.inputs[0]
    } else {
        return None;
    };
    stack_offset_of(&addr, func)
}

fn is_rsp_or_rbp(v: &Varnode) -> bool {
    v.space == SpaceId::Register && (v.offset == RSP_OFFSET || v.offset == RBP_OFFSET)
}

fn stack_offset_of(addr: &Varnode, func: &SsaFunction) -> Option<i64> {
    stack_offset_recursive(addr, func, 8)
}

fn stack_offset_recursive(addr: &Varnode, func: &SsaFunction, depth: u32) -> Option<i64> {
    if depth == 0 {
        return None;
    }
    if is_rsp_or_rbp(addr) {
        return Some(0);
    }
    if addr.space != SpaceId::Unique && addr.space != SpaceId::Register {
        return None;
    }
    for (&(bid, idx, ref slot), sv) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) || sv.base != *addr {
            continue;
        }
        let block = func.function.blocks.get(&bid)?;
        let def_insn = block.insns.get(idx)?;
        match def_insn.op {
            IrOp::IntAdd if def_insn.inputs.len() >= 2 => {
                let (a, b) = (&def_insn.inputs[0], &def_insn.inputs[1]);
                if is_rsp_or_rbp(a) && b.space == SpaceId::Const {
                    return Some(b.offset as i64);
                }
                if is_rsp_or_rbp(b) && a.space == SpaceId::Const {
                    return Some(a.offset as i64);
                }
            }
            IrOp::IntSub if def_insn.inputs.len() >= 2 => {
                let (a, b) = (&def_insn.inputs[0], &def_insn.inputs[1]);
                if is_rsp_or_rbp(a) && b.space == SpaceId::Const {
                    return Some(-(b.offset as i64));
                }
            }
            IrOp::Copy if !def_insn.inputs.is_empty() => {
                let src = &def_insn.inputs[0];
                if is_rsp_or_rbp(src) {
                    return Some(0);
                }
                return stack_offset_recursive(src, func, depth - 1);
            }
            _ => {}
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = trivial_dom(&cfg);
        SsaFunction {
            function: func,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map: BTreeMap::new(),
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            stack_offset_hints: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            go_defer_sites: Vec::new(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: BTreeSet::new(),
            dwarf_local_names: BTreeMap::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pads: BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            array_struct_layouts: std::collections::BTreeMap::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            crypto_annotations: Vec::new(),
        }
    }

    fn trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;
        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry");
        let dominators = simple_fast(cfg.inner(), entry_ni);
        let mut idom = BTreeMap::new();
        let mut children: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
        let entry = cfg.entry_block();
        for (&bid, &ni) in cfg.node_map() {
            if bid == entry {
                continue;
            }
            if let Some(dom_ni) = dominators.immediate_dominator(ni) {
                let dom_bid = cfg.inner()[dom_ni];
                idom.insert(bid, dom_bid);
                children.entry(dom_bid).or_default().push(bid);
            }
        }
        DominatorTree::new(idom, children, entry)
    }

    fn rsp() -> Varnode {
        Varnode::reg(RSP_OFFSET, 8)
    }

    fn space_ram() -> Varnode {
        Varnode::constant(SpaceId::Ram as u64, 8)
    }

    /// Two-block path: STORE in B0, RETURN in B1. The STORE is dead because
    /// nothing reads it before exit.
    #[test]
    fn test_dse_global_dead_store_to_exit() {
        let addr1 = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let c8 = Varnode::constant(8, 8);
        let val = Varnode::constant(0xAA, 8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rsp(), c8],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), addr1.base, val],
            0x1004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1008));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100C));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);

        let mut ssa = make_ssa(vec![bb0, bb1], var_map);
        let changed = DeadStoreElimGlobalPass.run(&mut ssa).expect("ok");
        assert!(changed, "store with no inter-block consumer must be dead");
        let stores = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|i| i.op == IrOp::Store)
            .count();
        assert_eq!(stores, 0);
    }

    /// STORE in B0 followed by LOAD in B1 — store must be kept.
    #[test]
    fn test_dse_global_store_consumed_in_successor() {
        let addr1 = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let addr2 = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let c8 = Varnode::constant(8, 8);
        let val = Varnode::constant(0xAA, 8);
        let load_out = Varnode::unique(16, 8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rsp(), c8],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), addr1.base, val],
            0x1004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1008));
        bb0.successors = smallvec![BlockId(1)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2.base,
            smallvec![rsp(), c8],
            0x100C,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space_ram(), addr2.base],
            0x1010,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![load_out],
            0x1014,
        ));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);
        var_map.insert((BlockId(1), 0, VarnodeSlot::Output), addr2);
        var_map.insert((BlockId(1), 1, VarnodeSlot::Input(1)), addr2);

        let mut ssa = make_ssa(vec![bb0, bb1], var_map);
        let changed = DeadStoreElimGlobalPass.run(&mut ssa).expect("ok");
        assert!(!changed);
        let stores = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|i| i.op == IrOp::Store)
            .count();
        assert_eq!(stores, 1, "store must survive — successor LOAD reads it");
    }
}
