//! Dead store elimination pass.
//!
//! Removes redundant writes to SSA variables and memory locations.  Unlike
//! DCE (which removes instructions whose outputs have no uses), DSE targets
//! *store* operations and *overwritten variable definitions* specifically:
//!
//! 1. **SSA overwrite**: if SSA variable `v(base, N)` is defined and then
//!    `v(base, N+1)` is defined in the same block with no intervening use
//!    of version N, the first definition is dead.
//!
//! 2. **Memory store overwrite**: if `STORE(addr, val1)` is followed by
//!    `STORE(addr, val2)` in the same block with no intervening `LOAD(addr)`,
//!    `CALL`, or `CALLIND`, the first store is dead.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::IrOp;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::Varnode;

use crate::pass::{Pass, PassError, compact_var_map_for_moved_insn};
use crate::stack_address::{StackAddr, StackAddrResolver};

/// Dead store elimination: remove writes that are overwritten before being read.
pub struct DeadStoreElimPass;

impl Pass for DeadStoreElimPass {
    fn name(&self) -> &str {
        "dse"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::LocalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let ssa_dead = find_dead_ssa_defs(func);
        let store_dead = find_dead_stores(func);

        let mut dead_insns: BTreeMap<_, BTreeSet<_>> = BTreeMap::new();
        for (bid, idx) in ssa_dead {
            dead_insns.entry(bid).or_default().insert(idx);
        }
        for (bid, idx) in store_dead {
            dead_insns.entry(bid).or_default().insert(idx);
        }

        if dead_insns.is_empty() {
            return Ok(false);
        }

        // Remove dead instructions, compacting indices and re-keying var_map.
        for (&bid, dead_set) in &dead_insns {
            let block = match func.function.blocks.get_mut(&bid) {
                Some(b) => b,
                None => continue,
            };

            let keep: Vec<usize> = (0..block.insns.len())
                .filter(|i| !dead_set.contains(i))
                .collect();

            if keep.len() == block.insns.len() {
                continue;
            }

            let old_insns = std::mem::take(&mut block.insns);
            block.insns = Vec::with_capacity(keep.len());

            for (new_idx, &old_idx) in keep.iter().enumerate() {
                block.insns.push(old_insns[old_idx].clone());

                let input_count = block
                    .insns
                    .last()
                    .ok_or_else(|| PassError::InvariantViolation {
                        message: "block empty after compaction".into(),
                    })?
                    .inputs
                    .len();
                compact_var_map_for_moved_insn(
                    &mut func.var_map,
                    bid,
                    old_idx,
                    new_idx,
                    input_count,
                );
            }

            // Purge var_map entries for removed instructions beyond new length.
            let new_len = block.insns.len();
            let stale_keys: Vec<_> = func
                .var_map
                .range((bid, new_len, VarnodeSlot::Output)..)
                .take_while(|&(&(b, _, _), _)| b == bid)
                .map(|(k, _)| k.clone())
                .collect();
            for key in stale_keys {
                func.var_map.remove(&key);
            }
        }

        Ok(true)
    }
}

/// Find SSA definitions that are overwritten before being read within the
/// same basic block.
///
/// For each block, walk instructions in order.  Track the last definition
/// index for each `(base Varnode)`.  When a new definition of the same base
/// appears, check whether the previous version was used between its
/// definition and this new definition.  If not, the old definition is dead.
fn find_dead_ssa_defs(func: &SsaFunction) -> Vec<(unlace_ir::BlockId, usize)> {
    // First, collect the set of all SSA varnodes that are *used* (appear as
    // an input anywhere in the function, or as a phi input).
    let mut globally_used: BTreeSet<SsaVarnode> = BTreeSet::new();

    for ((_, _, slot), &sv) in &func.var_map {
        if matches!(slot, VarnodeSlot::Input(_)) {
            globally_used.insert(sv);
        }
    }
    for phis in func.phi_map.values() {
        for phi in phis {
            for &(_pred, sv) in &phi.inputs {
                globally_used.insert(sv);
            }
        }
    }

    let mut dead = Vec::new();

    for (&bid, block) in &func.function.blocks {
        // Map: base Varnode -> (insn_idx of last definition, SsaVarnode of that def)
        let mut last_def: BTreeMap<unlace_ir::Varnode, (usize, SsaVarnode)> = BTreeMap::new();

        for (insn_idx, insn) in block.insns.iter().enumerate() {
            // Skip side-effecting instructions — their outputs shouldn't be
            // eliminated even if overwritten, because the operation itself
            // matters (e.g. CALL, LOAD).
            if is_side_effecting_for_ssa(insn.op) {
                // A side-effecting instruction may also define an output;
                // update last_def so future overwrites of its output can still
                // be detected, but don't mark it as dead itself.
                if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)) {
                    last_def.insert(sv.base, (insn_idx, sv));
                }
                continue;
            }

            // Check if this instruction defines an output that overwrites a
            // previous definition of the same base.
            if let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)) {
                if let Some(&(prev_idx, prev_sv)) = last_def.get(&sv.base) {
                    // The previous definition is dead if it's never used globally.
                    if !globally_used.contains(&prev_sv) {
                        // Also verify the previous instruction isn't side-effecting
                        // (shouldn't be, given we skip those above, but be safe).
                        let prev_insn = &block.insns[prev_idx];
                        if !is_side_effecting_for_ssa(prev_insn.op) {
                            dead.push((bid, prev_idx));
                        }
                    }
                }

                last_def.insert(sv.base, (insn_idx, sv));
            }
        }
    }

    dead
}

/// Find redundant memory STORE operations within the same basic block.
///
/// A STORE(addr, val1) is dead if a subsequent STORE to the same address
/// occurs without an intervening LOAD from that address, CALL, or CALLIND.
///
/// Two distinct address varnodes are also treated as aliasing when both
/// can be resolved to the same RSP/RBP-relative stack offset (e.g.
/// `STORE [rsp+8], v1` followed by `STORE [rsp+8], v2` even when each
/// address is computed by a separate `INT_ADD(rsp, 8)`).
///
/// **Alias-category barrier**: STORE/LOAD instructions whose
/// [`unlace_ir::AliasCategory`] is `Mmio` or `Volatile` are *never*
/// eliminated and never let a previous store be eliminated even if the
/// addresses look redundant. They flush the per-address maps the same
/// way a CALL does, and bump the global
/// [`unlace_ir::alias::record_preserved`] counter for observability.
fn find_dead_stores(func: &SsaFunction) -> Vec<(unlace_ir::BlockId, usize)> {
    let mut dead = Vec::new();
    let mut stack_offsets = StackAddrResolver::new(func);

    for (&bid, block) in &func.function.blocks {
        // SSA-varnode-keyed map: STOREs whose address is exactly the same
        // SSA varnode (catches the case where the address was already
        // hoisted into a single shared definition).
        let mut last_store_sv: BTreeMap<SsaVarnode, (usize, u8)> = BTreeMap::new();
        // Stack-address-keyed map: STOREs whose address resolves to the same
        // stack-pointer-relative location.  Catches the case where two
        // distinct varnodes encode the same stack location.
        let mut last_store_stack: BTreeMap<(StackAddr, u8), usize> = BTreeMap::new();

        for (insn_idx, insn) in block.insns.iter().enumerate() {
            // Preserved (MMIO/Volatile) accesses act as a full barrier:
            // they are never eliminated, never let a previous store be
            // eliminated, and flush the pending-store maps the same way
            // a CALL does. Bump the global preservation counter so
            // tests can observe that the barrier actually fired.
            let preserved = matches!(insn.category, Some(c) if c.is_preserved())
                && matches!(insn.op, IrOp::Load | IrOp::Store);
            if preserved {
                unlace_ir::alias::record_preserved();
                last_store_sv.clear();
                last_store_stack.clear();
                continue;
            }

            match insn.op {
                IrOp::Store => {
                    let (addr_slot, raw_addr) = store_address_slot(insn);
                    let addr_sv = func.var_map.get(&(bid, insn_idx, addr_slot)).copied();
                    let store_size = store_value_size(insn);

                    let stack_off = match (addr_sv, raw_addr) {
                        (Some(addr), _) => stack_offsets.stack_offset_of_sv(addr),
                        (None, Some(a)) => stack_offsets.stack_offset_of_raw(&a),
                        (None, None) => None,
                    };

                    let mut prev: Option<usize> = None;
                    if let Some(addr) = addr_sv {
                        prev = last_store_sv
                            .get(&addr)
                            .and_then(|&(idx, size)| (size == store_size).then_some(idx));
                    }
                    if prev.is_none()
                        && let Some(off) = stack_off
                    {
                        prev = last_store_stack.get(&(off, store_size)).copied();
                    }
                    if let Some(idx) = prev {
                        dead.push((bid, idx));
                    }

                    if let Some(addr) = addr_sv {
                        last_store_sv.insert(addr, (insn_idx, store_size));
                    }
                    if let Some(off) = stack_off {
                        last_store_stack.insert((off, store_size), insn_idx);
                    }
                }
                IrOp::Load => {
                    let (addr_slot, raw_addr) = load_address_slot(insn);
                    let addr_sv = func.var_map.get(&(bid, insn_idx, addr_slot)).copied();
                    let load_size = load_value_size(insn);
                    let stack_off = match (addr_sv, raw_addr) {
                        (Some(addr), _) => stack_offsets.stack_offset_of_sv(addr),
                        (None, Some(a)) => stack_offsets.stack_offset_of_raw(&a),
                        (None, None) => None,
                    };

                    if let Some(addr) = addr_sv {
                        last_store_sv.remove(&addr);
                    }
                    if let Some(addr) = stack_off {
                        let overlapping: Vec<_> = last_store_stack
                            .keys()
                            .copied()
                            .filter(|(store_addr, store_size)| {
                                store_addr.overlaps(*store_size, &addr, load_size)
                            })
                            .collect();
                        for key in overlapping {
                            last_store_stack.remove(&key);
                        }
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
                    // Any call may read any memory — conservatively
                    // invalidate all pending stores.
                    last_store_sv.clear();
                    last_store_stack.clear();
                }
                _ => {}
            }
        }
    }

    dead
}

/// The input slot holding the address operand of a STORE, plus the raw
/// [`Varnode`] for stack-offset analysis.  Handles both the canonical
/// 3-input form `[space, addr, value]` (lifter output) and the legacy
/// 2-input form `[addr, value]` used by some test fixtures.
fn store_address_slot(insn: &unlace_ir::IrInsn) -> (VarnodeSlot, Option<Varnode>) {
    if insn.inputs.len() >= 3 {
        (VarnodeSlot::Input(1), Some(insn.inputs[1]))
    } else if !insn.inputs.is_empty() {
        (VarnodeSlot::Input(0), Some(insn.inputs[0]))
    } else {
        (VarnodeSlot::Input(0), None)
    }
}

/// The input slot holding the address operand of a LOAD.  Handles the
/// canonical 2-input form `[space, addr]` and the legacy 1-input form
/// `[addr]`.
fn load_address_slot(insn: &unlace_ir::IrInsn) -> (VarnodeSlot, Option<Varnode>) {
    if insn.inputs.len() >= 2 {
        (VarnodeSlot::Input(1), Some(insn.inputs[1]))
    } else if !insn.inputs.is_empty() {
        (VarnodeSlot::Input(0), Some(insn.inputs[0]))
    } else {
        (VarnodeSlot::Input(0), None)
    }
}

fn store_value_size(insn: &unlace_ir::IrInsn) -> u8 {
    if insn.inputs.len() >= 3 {
        insn.inputs[2].size.max(1)
    } else {
        insn.inputs.get(1).map_or(1, |v| v.size.max(1))
    }
}

fn load_value_size(insn: &unlace_ir::IrInsn) -> u8 {
    insn.output.map_or(8, |out| out.size.max(1))
}

/// Returns `true` for ops whose *execution* has side effects — these
/// instructions should not be removed even if their output is later
/// overwritten.  This is slightly different from DCE's `is_side_effecting`
/// because LOAD *is* side-effect-free for SSA purposes (the output is what
/// matters), but we still keep it to be conservative about volatile/MMIO.
const fn is_side_effecting_for_ssa(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Store
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Return
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::New
            | IrOp::Callother
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Load
    )
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PhiNode, PrimitiveType, SsaFunction, SsaVarnode, VarMap,
        VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    // ── helpers ──────────────────────────────────────────────────────────

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: VarMap,
        phi_map: BTreeMap<BlockId, Vec<PhiNode>>,
    ) -> SsaFunction {
        let entry = blocks.first().expect("blocks non-empty").id;
        let mut func = Function::new("test", entry, 0x1000);
        for bb in blocks {
            func.insert_block(bb);
        }

        let cfg = unlace_ir::cfg::build_cfg(&func);
        let dom_tree = build_trivial_dom(&cfg);

        SsaFunction {
            function: func,
            arch: unlace_ir::ArchId::Unknown(0),
            os_abi: unlace_ir::OsAbi::Unknown,
            maturity: unlace_ir::ssa::Maturity::Zero,
            cfg,
            dom_tree,
            post_dom_tree: None,
            phi_map,
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            foldable_exprs: std::collections::BTreeSet::new(),
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
            variadic: None,
            inferred_stack_params: BTreeSet::new(),
            data_items: unlace_ir::mem_object::DataItems::default(),
            object_types: Default::default(),
            vtable_calls: BTreeMap::new(),
            cpp_vtable_calls: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
            frame_setup_insns: std::collections::BTreeSet::new(),
            stack_offset_hints: BTreeMap::new(),
            dwarf_local_names: BTreeMap::new(),
            dwarf_aggregate_offsets: BTreeSet::new(),
            pending_dwarf_locals: Vec::new(),
            inferred_structs: BTreeMap::new(),
            composite_var_types: BTreeMap::new(),
            array_strides: BTreeMap::new(),
            external_signatures: BTreeMap::new(),
            eh_landing_pad_catches: BTreeMap::new(),
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

    fn build_trivial_dom(cfg: &unlace_ir::cfg::ControlFlowGraph) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;

        let entry_ni = cfg
            .node_index(cfg.entry_block())
            .expect("entry block in cfg");
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

        for cl in children.values_mut() {
            cl.sort();
        }

        DominatorTree::new(idom, children, entry)
    }

    fn sv(offset: u64, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, 8),
            version,
        }
    }

    // ── SSA dead-def tests ──────────────────────────────────────────────

    /// `v1 = 5; v1 = 10; return v1;` — first assignment removed.
    #[test]
    fn test_redundant_ssa_def() {
        // Two COPY definitions of the same base register (offset 0), versions
        // 0 and 1.  Only version 1 is used by RETURN.
        let v0 = sv(0, 0); // first def, dead
        let v1 = sv(0, 1); // second def, used by return
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // insn 0: COPY c5 -> v0
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v0.base,
            smallvec![c5],
            0x1000,
        ));
        // insn 1: COPY c10 -> v1
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v1.base,
            smallvec![c10],
            0x1004,
        ));
        // insn 2: RETURN v1
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![v1.base],
            0x1008,
        ));

        let mut var_map = VarMap::new();
        // insn 0 output = v0
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v0);
        // insn 1 output = v1
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), v1);
        // insn 2 input 0 = v1 (reads version 1)
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), v1);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "should have removed the dead first COPY");
        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns.len(), 2, "COPY c10 + RETURN should remain");
        assert_eq!(insns[0].op, IrOp::Copy);
        assert_eq!(insns[0].inputs[0], c10);
        assert_eq!(insns[1].op, IrOp::Return);
    }

    /// `v1 = 5; print(v1); v1 = 10;` — both assignments kept.
    #[test]
    fn test_used_def_kept() {
        let v0 = sv(0, 0); // first def, used by CALL
        let v1 = sv(0, 1); // second def
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);
        let call_target = Varnode::ram(0x2000, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // insn 0: COPY c5 -> v0
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v0.base,
            smallvec![c5],
            0x1000,
        ));
        // insn 1: CALL print(v0)
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![call_target, v0.base],
            0x1004,
        ));
        // insn 2: COPY c10 -> v1
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v1.base,
            smallvec![c10],
            0x1008,
        ));
        // insn 3: RETURN
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v0);
        var_map.insert(
            (BlockId(0), 1, VarnodeSlot::Input(0)),
            SsaVarnode {
                base: call_target,
                version: 0,
            },
        );
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), v0); // v0 is used here
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), v1);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        // v0 is used by the CALL, so its definition must be kept.
        // v1 is not used anywhere, but its definition is a COPY (not
        // side-effecting) — DCE would remove it, but DSE only removes
        // *overwritten* defs.  v1 is not overwritten, so it stays.
        assert!(!changed, "no redundant overwrites — nothing removed");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 4);
    }

    // ── Memory STORE tests ──────────────────────────────────────────────

    /// `STORE(addr, 5); STORE(addr, 10);` — first store removed.
    #[test]
    fn test_redundant_store_same_addr() {
        let addr = sv(16, 0); // address varnode
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // insn 0: STORE addr, c5
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c5],
            0x1000,
        ));
        // insn 1: STORE addr, c10
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c10],
            0x1004,
        ));
        // insn 2: RETURN
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = VarMap::new();
        // Both stores use the same SSA varnode for the address.
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), addr);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(changed, "first STORE should be removed");
        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns.len(), 2, "STORE c10 + RETURN");
        assert_eq!(insns[0].op, IrOp::Store);
        assert_eq!(insns[0].inputs[1], c10);
    }

    /// `STORE(addr, 5); LOAD(addr); STORE(addr, 10);` — both stores kept.
    #[test]
    fn test_store_after_load_not_removed() {
        let addr = sv(16, 0);
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);
        let load_out = Varnode::unique(0, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // insn 0: STORE addr, c5
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c5],
            0x1000,
        ));
        // insn 1: LOAD addr -> load_out
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![addr.base],
            0x1004,
        ));
        // insn 2: STORE addr, c10
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c10],
            0x1008,
        ));
        // insn 3: RETURN
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), addr);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), addr);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "LOAD between stores prevents elimination");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 4);
    }

    /// `STORE(addr, 5); CALL; STORE(addr, 10);` — both stores kept.
    #[test]
    fn test_call_between_stores_keeps_both() {
        let addr = sv(16, 0);
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);
        let call_target = Varnode::ram(0x2000, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // insn 0: STORE addr, c5
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c5],
            0x1000,
        ));
        // insn 1: CALL some_func
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![call_target],
            0x1004,
        ));
        // insn 2: STORE addr, c10
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c10],
            0x1008,
        ));
        // insn 3: RETURN
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), addr);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "CALL between stores prevents elimination");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 4);
    }

    /// Verify that CALLIND also prevents store elimination.
    #[test]
    fn test_callind_between_stores_keeps_both() {
        let addr = sv(16, 0);
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);
        let call_reg = sv(24, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c5],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![call_reg.base],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c10],
            0x1008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), call_reg);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), addr);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "CALLIND between stores prevents elimination");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 4);
    }

    /// Stores to *different* addresses are not eliminated.
    #[test]
    fn test_stores_different_addr_kept() {
        let addr1 = sv(16, 0);
        let addr2 = sv(24, 0);
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr1.base, c5],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr2.base, c10],
            0x1004,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), addr2);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");

        assert!(!changed, "different addresses — no elimination");
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns.len(), 3);
    }

    /// No-op: when there's nothing to eliminate, pass returns false.
    #[test]
    fn test_noop_returns_false() {
        let v0 = sv(0, 0);
        let c5 = Varnode::constant(5, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v0.base,
            smallvec![c5],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![v0.base],
            0x1004,
        ));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v0);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), v0);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
    }

    // ── Stack-alias-aware DSE tests ─────────────────────────────────────

    fn rsp() -> Varnode {
        Varnode::reg(32, 8)
    }

    /// Two STOREs whose addresses are computed by separate
    /// `INT_ADD(rsp, c8)` instructions resolve to the same stack offset
    /// and the first must be eliminated.
    #[test]
    fn test_dse_stack_alias_distinct_addr_varnodes() {
        let addr1 = sv(64, 0);
        let addr2 = sv(72, 0);
        let c8 = Varnode::constant(8, 8);
        let val1 = Varnode::constant(0xAA, 8);
        let val2 = Varnode::constant(0xBB, 8);
        let space_ram = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rsp_v = rsp();

        let mut bb = BasicBlock::new(BlockId(0));
        // 0: addr1 = INT_ADD rsp, c8
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rsp_v, c8],
            0x1000,
        ));
        // 1: STORE [ram, addr1, val1]
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr1.base, val1],
            0x1004,
        ));
        // 2: addr2 = INT_ADD rsp, c8 (same offset, different varnode)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2.base,
            smallvec![rsp_v, c8],
            0x1008,
        ));
        // 3: STORE [ram, addr2, val2] — overwrites the same stack slot
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr2.base, val2],
            0x100C,
        ));
        // 4: RETURN
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), addr2);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Input(1)), addr2);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(
            changed,
            "two stores to rsp+8 via distinct varnodes — first must be eliminated"
        );

        // Result block: [INT_ADD addr1, INT_ADD addr2, STORE val2, RETURN]
        // The first STORE (insn 1) is removed.
        let block = &ssa.function.blocks[&BlockId(0)];
        assert_eq!(
            block.insns.len(),
            4,
            "first STORE should be gone, leaving 4 insns"
        );
        let stores: Vec<_> = block.insns.iter().filter(|i| i.op == IrOp::Store).collect();
        assert_eq!(stores.len(), 1, "exactly one STORE must remain");
        assert_eq!(
            stores[0].inputs[2], val2,
            "the surviving STORE must carry val2"
        );
    }

    /// `push r15; push r14` compute both addresses as `rsp - 8`, but from
    /// different values of `rsp`: neither store overwrites the other.
    #[test]
    fn test_dse_keeps_pushes_below_a_moving_stack_pointer() {
        let space_ram = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let c8 = Varnode::constant(8, 8);
        let (u0, u1) = (Varnode::unique(0, 8), Varnode::unique(8, 8));
        let (r15, r14) = (Varnode::reg(120, 8), Varnode::reg(112, 8));

        let mut func = Function::new("pushes", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = vec![
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp(), c8], 0x1000),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u0], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u0, r15], 0x1000),
            IrInsn::with_output(IrOp::IntSub, u1, smallvec![rsp(), c8], 0x1002),
            IrInsn::with_output(IrOp::Copy, rsp(), smallvec![u1], 0x1002),
            IrInsn::without_output(IrOp::Store, smallvec![space_ram, u1, r14], 0x1002),
            IrInsn::without_output(IrOp::Return, smallvec![], 0x1004),
        ];
        func.insert_block(bb);
        let mut ssa = unlace_ir::ssa::build_ssa(func);

        let changed = DeadStoreElimPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed, "both pushes write distinct slots: {:?}", ssa.function.blocks);
        let stores = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|insn| insn.op == IrOp::Store)
            .count();
        assert_eq!(stores, 2);
    }

    /// Stores to *different* stack offsets must be kept.
    #[test]
    fn test_dse_stack_distinct_offsets_kept() {
        let addr1 = sv(64, 0);
        let addr2 = sv(72, 0);
        let c8 = Varnode::constant(8, 8);
        let c16 = Varnode::constant(16, 8);
        let val1 = Varnode::constant(0xAA, 8);
        let val2 = Varnode::constant(0xBB, 8);
        let space_ram = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rsp_v = rsp();

        let mut bb = BasicBlock::new(BlockId(0));
        // 0: addr1 = INT_ADD rsp, c8 (offset +8)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rsp_v, c8],
            0x1000,
        ));
        // 1: STORE [ram, addr1, val1]
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr1.base, val1],
            0x1004,
        ));
        // 2: addr2 = INT_ADD rsp, c16 (offset +16)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2.base,
            smallvec![rsp_v, c16],
            0x1008,
        ));
        // 3: STORE [ram, addr2, val2]
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr2.base, val2],
            0x100C,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), addr2);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Input(1)), addr2);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "stores to different stack offsets must NOT be merged"
        );
        assert_eq!(
            ssa.function.blocks[&BlockId(0)].insns.len(),
            5,
            "all instructions must remain"
        );
    }

    /// The x86 lifter reuses the same raw Unique base inside different
    /// instructions. DSE must use the exact SSA version for stack offsets or
    /// distinct stores like `[rbp-0x10] = 6; [rbp-0x18] = qword;` collapse.
    #[test]
    fn test_dse_stack_reused_unique_base_distinct_offsets_kept() {
        let base = Varnode::unique(0, 8);
        let addr1 = SsaVarnode { base, version: 1 };
        let addr2 = SsaVarnode { base, version: 2 };
        let c_neg16 = Varnode::constant((-16i64) as u64, 8);
        let c_neg24 = Varnode::constant((-24i64) as u64, 8);
        let val1 = Varnode::constant(6, 4);
        let val2 = Varnode::constant(0x1122_3344_5566_7788, 8);
        let space_ram = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rbp_v = Varnode::reg(40, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rbp_v, c_neg16],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr1.base, val1],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2.base,
            smallvec![rbp_v, c_neg24],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr2.base, val2],
            0x100C,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1010));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), addr2);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Input(1)), addr2);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "same raw Unique base with different SSA versions must not alias"
        );
        let stores = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|insn| insn.op == IrOp::Store)
            .count();
        assert_eq!(stores, 2, "both distinct stack stores must remain");
    }

    #[test]
    fn test_dse_type_stack_o2_adjacent_stack_initializers_kept() {
        let base = Varnode::unique(0, 8);
        let canary = SsaVarnode { base, version: 3 };
        let pair = SsaVarnode { base, version: 5 };
        let value2 = SsaVarnode { base, version: 6 };
        let values01 = SsaVarnode { base, version: 7 };
        let space_ram = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rbp_v = Varnode::reg(40, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            canary.base,
            smallvec![rbp_v, Varnode::constant((-8i64) as u64, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, canary.base, Varnode::reg(0, 8)],
            0x1001,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            pair.base,
            smallvec![rbp_v, Varnode::constant((-32i64) as u64, 8)],
            0x1002,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            value2.base,
            smallvec![rbp_v, Varnode::constant((-16i64) as u64, 8)],
            0x1003,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, value2.base, Varnode::constant(6, 4)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            values01.base,
            smallvec![rbp_v, Varnode::constant((-24i64) as u64, 8)],
            0x1005,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, values01.base, Varnode::constant(0x400000002, 8)],
            0x1006,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, pair.base, Varnode::constant(0xb00000007, 8)],
            0x1007,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), canary);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), canary);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), pair);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Output), value2);
        var_map.insert((BlockId(0), 4, VarnodeSlot::Input(1)), value2);
        var_map.insert((BlockId(0), 5, VarnodeSlot::Output), values01);
        var_map.insert((BlockId(0), 6, VarnodeSlot::Input(1)), values01);
        var_map.insert((BlockId(0), 7, VarnodeSlot::Input(1)), pair);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "adjacent non-overlapping stack aggregate initializers must all remain"
        );
    }

    /// Intervening LOAD from the same stack offset prevents elimination.
    #[test]
    fn test_dse_stack_load_between_stores() {
        let addr1 = sv(64, 0);
        let addr2 = sv(72, 0);
        let load_addr = sv(80, 0);
        let load_out = Varnode::unique(0, 8);
        let c8 = Varnode::constant(8, 8);
        let val1 = Varnode::constant(0xAA, 8);
        let val2 = Varnode::constant(0xBB, 8);
        let space_ram = Varnode::constant(unlace_ir::SpaceId::Ram as u64, 8);
        let rsp_v = rsp();

        let mut bb = BasicBlock::new(BlockId(0));
        // 0: addr1 = rsp + 8
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr1.base,
            smallvec![rsp_v, c8],
            0x1000,
        ));
        // 1: STORE rsp+8 = val1
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr1.base, val1],
            0x1004,
        ));
        // 2: load_addr = rsp + 8 (third varnode for same offset)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            load_addr.base,
            smallvec![rsp_v, c8],
            0x1008,
        ));
        // 3: load_out = LOAD rsp+8  (intervening read)
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_out,
            smallvec![space_ram, load_addr.base],
            0x100C,
        ));
        // 4: addr2 = rsp + 8
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr2.base,
            smallvec![rsp_v, c8],
            0x1010,
        ));
        // 5: STORE rsp+8 = val2
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr2.base, val2],
            0x1014,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1018));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr1);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), load_addr);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Input(1)), load_addr);
        var_map.insert(
            (BlockId(0), 3, VarnodeSlot::Output),
            SsaVarnode {
                base: load_out,
                version: 0,
            },
        );
        var_map.insert((BlockId(0), 4, VarnodeSlot::Output), addr2);
        var_map.insert((BlockId(0), 5, VarnodeSlot::Input(1)), addr2);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "LOAD from same stack slot between stores prevents elimination"
        );
        let store_count = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|i| i.op == IrOp::Store)
            .count();
        assert_eq!(store_count, 2, "both STOREs must survive");
    }

    // ── Alias-category barrier tests ────────────────────────────────────

    /// Two STOREs to the same address that would normally be coalesced
    /// down to one. When the *first* store is tagged `Mmio`, the barrier
    /// must keep it: an MMIO write may have a side-effect (e.g. clearing
    /// an interrupt) even when followed by another write to the same
    /// register.
    #[test]
    fn test_dse_mmio_store_not_eliminated() {
        let addr = sv(16, 0);
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        // insn 0: MMIO STORE addr, c5  — must survive.
        let mut insn0 = IrInsn::without_output(IrOp::Store, smallvec![addr.base, c5], 0x1000);
        insn0.category = Some(unlace_ir::AliasCategory::Mmio);
        bb.insns.push(insn0);
        // insn 1: plain STORE addr, c10
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr.base, c10],
            0x1004,
        ));
        // insn 2: RETURN
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), addr);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let before = unlace_ir::alias::preserved_count();
        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        let after = unlace_ir::alias::preserved_count();

        assert!(!changed, "MMIO STORE barrier must block elimination");
        let store_count = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|i| i.op == IrOp::Store)
            .count();
        assert_eq!(store_count, 2, "MMIO store must survive");
        assert!(after > before, "preservation counter must have incremented");
    }

    /// `Volatile` STORE between two redundant ones acts as a barrier
    /// too — the volatile store is itself untouchable, and it must
    /// prevent the surrounding pair from being coalesced through it.
    #[test]
    fn test_dse_volatile_store_blocks_coalesce() {
        let addr_a = sv(16, 0);
        let addr_b = sv(24, 0);
        let c5 = Varnode::constant(5, 8);
        let c10 = Varnode::constant(10, 8);
        let c99 = Varnode::constant(99, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr_a.base, c5],
            0x1000,
        ));
        // Volatile store on a *different* address — barrier should
        // still flush the alias maps so addr_a's first store is kept.
        let mut vol = IrInsn::without_output(IrOp::Store, smallvec![addr_b.base, c99], 0x1004);
        vol.category = Some(unlace_ir::AliasCategory::Volatile);
        bb.insns.push(vol);
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![addr_a.base, c10],
            0x1008,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x100c));

        let mut var_map = VarMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), addr_a);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), addr_b);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), addr_a);

        let mut ssa = make_ssa(vec![bb], var_map, BTreeMap::new());

        let pass = DeadStoreElimPass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(
            !changed,
            "volatile store must act as alias barrier between addr_a stores"
        );
        let store_count = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .filter(|i| i.op == IrOp::Store)
            .count();
        assert_eq!(store_count, 3, "all three stores must survive");
    }
}
