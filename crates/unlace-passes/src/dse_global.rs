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

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError, compact_var_map_for_moved_insn};

const RSP_OFFSET: u64 = 32;
const RBP_OFFSET: u64 = 40;

pub struct DeadStoreElimGlobalPass;

impl Pass for DeadStoreElimGlobalPass {
    fn name(&self) -> &str {
        "dse-global"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::GlobalOpt
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
                let input_count = block.insns.last().map_or(0, |i| i.inputs.len());
                compact_var_map_for_moved_insn(
                    &mut func.var_map,
                    *bid,
                    old_idx,
                    new_idx,
                    input_count,
                );
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
    let mut stack_offsets = StackOffsetResolver::new(func);

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Store {
                continue;
            }
            let Some(access) = store_stack_access(func, &mut stack_offsets, bid, idx, insn) else {
                continue;
            };
            if is_globally_dead(func, bid, idx, access) {
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
///
/// A LOAD from the offset, a CALL/CALLIND, or any unresolvable
/// memory access kills the analysis (returns `false`).
fn is_globally_dead(
    func: &SsaFunction,
    start_bid: BlockId,
    start_idx: usize,
    target: StackAccess,
) -> bool {
    enum BlockResult {
        Killed,
        Lives,
        FallsThrough,
    }

    fn scan_block(
        func: &SsaFunction,
        stack_offsets: &mut StackOffsetResolver<'_>,
        bid: BlockId,
        start_idx: usize,
        target: StackAccess,
    ) -> BlockResult {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => return BlockResult::Lives,
        };
        for (idx, insn) in block.insns.iter().enumerate().skip(start_idx) {
            match insn.op {
                IrOp::Store => {
                    if let Some(access) = store_stack_access(func, stack_offsets, bid, idx, insn) {
                        if access == target {
                            return BlockResult::Killed;
                        }
                    } else {
                        return BlockResult::Lives;
                    }
                }
                IrOp::Load => {
                    if let Some(access) = load_stack_access(func, stack_offsets, bid, idx, insn) {
                        if ranges_overlap(target.off, target.size, access.off, access.size) {
                            return BlockResult::Lives;
                        }
                    } else {
                        return BlockResult::Lives;
                    }
                }
                IrOp::Call
                | IrOp::Callind
                | IrOp::Callother
                | IrOp::Fence
                | IrOp::AtomicLoad
                | IrOp::AtomicStore
                | IrOp::AtomicRmw
                | IrOp::AtomicCas => {
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

    let mut stack_offsets = StackOffsetResolver::new(func);

    match scan_block(func, &mut stack_offsets, start_bid, start_idx + 1, target) {
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
        match scan_block(func, &mut stack_offsets, bid, 0, target) {
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

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct StackAccess {
    off: i64,
    size: u8,
}

fn store_stack_access(
    func: &SsaFunction,
    stack_offsets: &mut StackOffsetResolver<'_>,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<StackAccess> {
    let (addr_idx, addr) = if insn.inputs.len() >= 3 {
        (1, insn.inputs[1])
    } else if insn.inputs.len() == 2 {
        (0, insn.inputs[0])
    } else {
        return None;
    };
    let off = stack_offset_for_input(func, stack_offsets, bid, insn_idx, addr_idx, &addr)?;
    Some(StackAccess {
        off,
        size: store_value_size(insn),
    })
}

fn load_stack_access(
    func: &SsaFunction,
    stack_offsets: &mut StackOffsetResolver<'_>,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<StackAccess> {
    let (addr_idx, addr) = if insn.inputs.len() >= 2 {
        (1, insn.inputs[1])
    } else if !insn.inputs.is_empty() {
        (0, insn.inputs[0])
    } else {
        return None;
    };
    let off = stack_offset_for_input(func, stack_offsets, bid, insn_idx, addr_idx, &addr)?;
    Some(StackAccess {
        off,
        size: load_value_size(insn),
    })
}

fn stack_offset_for_input(
    func: &SsaFunction,
    stack_offsets: &mut StackOffsetResolver<'_>,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    raw: &Varnode,
) -> Option<i64> {
    if is_rsp_or_rbp(raw) {
        return Some(0);
    }
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
        .and_then(|sv| stack_offsets.stack_offset_of_sv(sv))
        .or_else(|| stack_offsets.stack_offset_of_raw(raw))
}

fn store_value_size(insn: &IrInsn) -> u8 {
    if insn.inputs.len() >= 3 {
        insn.inputs[2].size.max(1)
    } else {
        insn.inputs.get(1).map_or(1, |v| v.size.max(1))
    }
}

fn load_value_size(insn: &IrInsn) -> u8 {
    insn.output.map_or(8, |out| out.size.max(1))
}

fn ranges_overlap(a_start: i64, a_size: u8, b_start: i64, b_size: u8) -> bool {
    let a_end = a_start.saturating_add(i64::from(a_size.max(1)));
    let b_end = b_start.saturating_add(i64::from(b_size.max(1)));
    a_start < b_end && b_start < a_end
}

fn is_rsp_or_rbp(v: &Varnode) -> bool {
    v.space == SpaceId::Register && (v.offset == RSP_OFFSET || v.offset == RBP_OFFSET)
}

/// Exact-SSA stack offset resolver for reused lifter temporaries.
///
/// The x86 lifter reuses raw `Unique` varnodes across instructions. Resolving
/// stack offsets by raw `Varnode` alone can therefore collapse `[rbp-0x10]`
/// and `[rbp-0x18]` into the first definition seen for that base. Global DSE
/// needs the defining SSA version of the address operand, with raw lookup only
/// as a legacy/test fallback.
struct StackOffsetResolver<'a> {
    func: &'a SsaFunction,
    def_by_sv: BTreeMap<SsaVarnode, (BlockId, usize)>,
    def_by_base: BTreeMap<Varnode, (BlockId, usize)>,
    memo_sv: BTreeMap<SsaVarnode, Option<i64>>,
    memo_raw: BTreeMap<Varnode, Option<i64>>,
    visiting_sv: BTreeSet<SsaVarnode>,
    visiting_raw: BTreeSet<Varnode>,
}

impl<'a> StackOffsetResolver<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let mut def_by_sv = BTreeMap::new();
        let mut def_by_base = BTreeMap::new();
        for ((bid, insn_idx, slot), sv) in &func.var_map {
            if matches!(slot, VarnodeSlot::Output) {
                def_by_sv.insert(*sv, (*bid, *insn_idx));
                def_by_base.entry(sv.base).or_insert((*bid, *insn_idx));
            }
        }
        Self {
            func,
            def_by_sv,
            def_by_base,
            memo_sv: BTreeMap::new(),
            memo_raw: BTreeMap::new(),
            visiting_sv: BTreeSet::new(),
            visiting_raw: BTreeSet::new(),
        }
    }

    fn stack_offset_of_sv(&mut self, addr: SsaVarnode) -> Option<i64> {
        self.stack_offset_recursive_sv(addr, 8)
    }

    fn stack_offset_of_raw(&mut self, addr: &Varnode) -> Option<i64> {
        self.stack_offset_recursive_raw(addr, 8)
    }

    fn stack_offset_recursive_sv(&mut self, addr: SsaVarnode, depth: u32) -> Option<i64> {
        if depth == 0 {
            return None;
        }
        if is_rsp_or_rbp(&addr.base) {
            return Some(0);
        }
        if addr.base.space != SpaceId::Unique && addr.base.space != SpaceId::Register {
            return None;
        }
        if let Some(cached) = self.memo_sv.get(&addr) {
            return *cached;
        }
        if !self.visiting_sv.insert(addr) {
            self.memo_sv.insert(addr, None);
            return None;
        }

        let result = self.stack_offset_from_sv_def(addr, depth);
        self.visiting_sv.remove(&addr);
        self.memo_sv.insert(addr, result);
        result
    }

    fn stack_offset_from_sv_def(&mut self, addr: SsaVarnode, depth: u32) -> Option<i64> {
        let (bid, insn_idx) = self.def_by_sv.get(&addr).copied()?;
        let (op, inputs) = {
            let block = self.func.function.blocks.get(&bid)?;
            let def_insn = block.insns.get(insn_idx)?;
            (def_insn.op, def_insn.inputs.clone())
        };

        match op {
            IrOp::IntAdd if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if is_rsp_or_rbp(a) && b.space == SpaceId::Const {
                    return Some(b.offset as i64);
                }
                if is_rsp_or_rbp(b) && a.space == SpaceId::Const {
                    return Some(a.offset as i64);
                }
                if b.space == SpaceId::Const
                    && let Some(off) = self.stack_offset_input(bid, insn_idx, 0, a, depth - 1)
                {
                    return Some(off.wrapping_add(b.offset as i64));
                }
                if a.space == SpaceId::Const
                    && let Some(off) = self.stack_offset_input(bid, insn_idx, 1, b, depth - 1)
                {
                    return Some(off.wrapping_add(a.offset as i64));
                }
            }
            IrOp::IntSub if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if is_rsp_or_rbp(a) && b.space == SpaceId::Const {
                    return Some(-(b.offset as i64));
                }
                if b.space == SpaceId::Const
                    && let Some(off) = self.stack_offset_input(bid, insn_idx, 0, a, depth - 1)
                {
                    return Some(off.wrapping_sub(b.offset as i64));
                }
            }
            IrOp::Copy if !inputs.is_empty() => {
                return self.stack_offset_input(bid, insn_idx, 0, &inputs[0], depth - 1);
            }
            _ => {}
        }

        None
    }

    fn stack_offset_input(
        &mut self,
        bid: BlockId,
        insn_idx: usize,
        input_idx: usize,
        raw: &Varnode,
        depth: u32,
    ) -> Option<i64> {
        if is_rsp_or_rbp(raw) {
            return Some(0);
        }
        self.func
            .var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
            .copied()
            .and_then(|sv| self.stack_offset_recursive_sv(sv, depth))
            .or_else(|| self.stack_offset_recursive_raw(raw, depth))
    }

    fn stack_offset_recursive_raw(&mut self, addr: &Varnode, depth: u32) -> Option<i64> {
        if depth == 0 {
            return None;
        }
        if is_rsp_or_rbp(addr) {
            return Some(0);
        }
        if addr.space != SpaceId::Unique && addr.space != SpaceId::Register {
            return None;
        }
        if let Some(cached) = self.memo_raw.get(addr) {
            return *cached;
        }
        if !self.visiting_raw.insert(*addr) {
            self.memo_raw.insert(*addr, None);
            return None;
        }

        let result = self.stack_offset_from_raw_def(addr, depth);
        self.visiting_raw.remove(addr);
        self.memo_raw.insert(*addr, result);
        result
    }

    fn stack_offset_from_raw_def(&mut self, addr: &Varnode, depth: u32) -> Option<i64> {
        let (bid, insn_idx) = self.def_by_base.get(addr).copied()?;
        let (op, inputs) = {
            let block = self.func.function.blocks.get(&bid)?;
            let def_insn = block.insns.get(insn_idx)?;
            (def_insn.op, def_insn.inputs.clone())
        };

        match op {
            IrOp::IntAdd if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if is_rsp_or_rbp(a) && b.space == SpaceId::Const {
                    return Some(b.offset as i64);
                }
                if is_rsp_or_rbp(b) && a.space == SpaceId::Const {
                    return Some(a.offset as i64);
                }
                if b.space == SpaceId::Const
                    && let Some(off) = self.stack_offset_recursive_raw(a, depth - 1)
                {
                    return Some(off.wrapping_add(b.offset as i64));
                }
                if a.space == SpaceId::Const
                    && let Some(off) = self.stack_offset_recursive_raw(b, depth - 1)
                {
                    return Some(off.wrapping_add(a.offset as i64));
                }
            }
            IrOp::IntSub if inputs.len() >= 2 => {
                let (a, b) = (&inputs[0], &inputs[1]);
                if is_rsp_or_rbp(a) && b.space == SpaceId::Const {
                    return Some(-(b.offset as i64));
                }
                if b.space == SpaceId::Const
                    && let Some(off) = self.stack_offset_recursive_raw(a, depth - 1)
                {
                    return Some(off.wrapping_sub(b.offset as i64));
                }
            }
            IrOp::Copy if !inputs.is_empty() => {
                let src = &inputs[0];
                if is_rsp_or_rbp(src) {
                    return Some(0);
                }
                return self.stack_offset_recursive_raw(src, depth - 1);
            }
            _ => {}
        }

        None
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PrimitiveType, SsaFunction, SsaVarnode, VarMap,
        VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_ssa(blocks: Vec<BasicBlock>, var_map: VarMap) -> SsaFunction {
        let entry = blocks.first().expect("blocks").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }
        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = trivial_dom(&cfg);
        SsaFunction {
            function: func,
            arch: unlace_ir::ArchId::Unknown(0),
            maturity: unlace_ir::ssa::Maturity::Zero,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map: BTreeMap::new(),
            var_map: var_map.into(),
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
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            lvars: Vec::new(),
            rust_async: None,
            cpp_kind: None,
            cpp_class_name: None,
            cpp_this_args: BTreeSet::new(),
            is_varargs: false,
            inferred_stack_params: BTreeSet::new(),
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
            eh_landing_pad_catches: BTreeMap::new(),
            eh_cleanup_landing_pads: std::collections::BTreeSet::new(),
            stack_gaps: BTreeMap::new(),
            frame_size: 0,
            sp_delta_at: BTreeMap::new(),
            stack_holes: BTreeMap::new(),
            dynamic_sp: false,
            block_entry_sp_delta: std::collections::BTreeMap::new(),
            frame_holes: Vec::new(),
            saved_register_slots: std::collections::BTreeSet::new(),
            sizeof_type_map: BTreeMap::new(),
            alignof_type_map: BTreeMap::new(),
            resolved_indirect_calls: BTreeMap::new(),
            indirect_call_targets: BTreeMap::new(),
            variadic_call_types: BTreeMap::new(),
            signature_revision: 0,
            op_bindings: unlace_ir::ssa::OpTypeBindings::default(),
            byref_boxes: std::collections::BTreeMap::new(),
            stack_frame: None,
            stack_accesses: Vec::new(),
            byref_info: None,
            libc_call_annotations: std::collections::BTreeMap::new(),
            libc_sig_annotations: std::collections::BTreeMap::new(),
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

        let mut var_map = VarMap::new();
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

        let mut var_map = VarMap::new();
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

    /// The lifter can reuse one raw Unique address base for different stack
    /// addresses. Global DSE must resolve by exact SSA version, otherwise a
    /// later store to `[rbp-0x18]` can incorrectly kill `[rbp-0x10]`.
    #[test]
    fn test_dse_global_reused_unique_base_distinct_offsets_kept() {
        let base = Varnode::unique(0, 8);
        let addr1 = SsaVarnode { base, version: 1 };
        let addr2 = SsaVarnode { base, version: 2 };
        let c_neg16 = Varnode::constant((-16i64) as u64, 8);
        let c_neg24 = Varnode::constant((-24i64) as u64, 8);
        let val1 = Varnode::constant(6, 4);
        let val2 = Varnode::constant(0x1122_3344_5566_7788, 8);
        let rbp = Varnode::reg(RBP_OFFSET, 8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rbp, c_neg16],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), addr1.base, val1],
            0x1004,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2.base,
            smallvec![rbp, c_neg24],
            0x1008,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), addr2.base, val2],
            0x100C,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::ram(0x4000, 8)],
            0x1010,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1014));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), addr2);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Input(1)), addr2);

        let mut ssa = make_ssa(vec![bb0], var_map);
        let changed = DeadStoreElimGlobalPass.run(&mut ssa).expect("ok");
        assert!(
            !changed,
            "same raw address base with different SSA versions must not alias"
        );
        let stores = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|insn| insn.op == IrOp::Store)
            .count();
        assert_eq!(stores, 2, "both distinct stack stores must remain");
    }

    #[test]
    fn test_dse_global_type_stack_o2_adjacent_initializers_kept() {
        let base = Varnode::unique(0, 8);
        let canary = SsaVarnode { base, version: 3 };
        let pair = SsaVarnode { base, version: 5 };
        let value2 = SsaVarnode { base, version: 6 };
        let values01 = SsaVarnode { base, version: 7 };
        let rbp = Varnode::reg(RBP_OFFSET, 8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            canary.base,
            smallvec![rbp, Varnode::constant((-8i64) as u64, 8)],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), canary.base, Varnode::reg(0, 8)],
            0x1001,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            pair.base,
            smallvec![rbp, Varnode::constant((-32i64) as u64, 8)],
            0x1002,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            value2.base,
            smallvec![rbp, Varnode::constant((-16i64) as u64, 8)],
            0x1003,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), value2.base, Varnode::constant(6, 4)],
            0x1004,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            values01.base,
            smallvec![rbp, Varnode::constant((-24i64) as u64, 8)],
            0x1005,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![
                space_ram(),
                values01.base,
                Varnode::constant(0x400000002, 8)
            ],
            0x1006,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram(), pair.base, Varnode::constant(0xb00000007, 8)],
            0x1007,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::ram(0x4000, 8)],
            0x1008,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100C));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), canary);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), canary);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), pair);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Output), value2);
        var_map.insert((BlockId(0), 4, VarnodeSlot::Input(1)), value2);
        var_map.insert((BlockId(0), 5, VarnodeSlot::Output), values01);
        var_map.insert((BlockId(0), 6, VarnodeSlot::Input(1)), values01);
        var_map.insert((BlockId(0), 7, VarnodeSlot::Input(1)), pair);

        let mut ssa = make_ssa(vec![bb0], var_map);
        let changed = DeadStoreElimGlobalPass.run(&mut ssa).expect("ok");
        assert!(
            !changed,
            "non-overlapping stack aggregate initializers must all remain"
        );
        let stores = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|insn| insn.op == IrOp::Store)
            .count();
        assert_eq!(stores, 4, "all adjacent initializer stores must remain");
    }
}
