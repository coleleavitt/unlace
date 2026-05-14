//! Call-boundary copy propagation.
//!
//! After a `CALL`, callee-saved registers are typically restored from the
//! stack slot the caller previously stored them to. The lifter materialises
//! this as `reg_post = LOAD(stack_slot)`, leaving a spurious extra SSA
//! version of the register. This pass recognises the pattern
//!
//! ```text
//!     STORE [stack_slot], reg_pre   ; save (somewhere before the CALL)
//!     ...
//!     CALL ...
//!     reg_post = LOAD [stack_slot]  ; restore
//! ```
//!
//! and forwards every later use of `reg_post` back to `reg_pre`, then lets
//! DCE remove the dead LOAD. Effectively this re-merges the two SSA versions
//! that the call boundary split.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct CallBoundaryCopyPropPass;

impl Pass for CallBoundaryCopyPropPass {
    fn name(&self) -> &str {
        "call-boundary-copyprop"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let pairs = collect_restore_pairs(func);
        if pairs.is_empty() {
            return Ok(false);
        }

        let mut sv_replacements: BTreeMap<SsaVarnode, SsaVarnode> = BTreeMap::new();
        for (post, pre) in &pairs {
            sv_replacements.insert(*post, *pre);
        }

        let mut changed = false;

        let updates: Vec<(BlockId, usize, usize, SsaVarnode)> = func
            .var_map
            .iter()
            .filter_map(|((bid, idx, slot), sv)| {
                if let VarnodeSlot::Input(i) = slot {
                    sv_replacements
                        .get(sv)
                        .map(|new_sv| (*bid, *idx, *i, *new_sv))
                } else {
                    None
                }
            })
            .collect();

        for (bid, idx, i, new_sv) in updates {
            if let Some(sv) = func.var_map.get_mut(&(bid, idx, VarnodeSlot::Input(i))) {
                *sv = new_sv;
            }
            if let Some(block) = func.function.blocks.get_mut(&bid) {
                if let Some(insn) = block.insns.get_mut(idx) {
                    if let Some(input) = insn.inputs.get_mut(i) {
                        if input.space != SpaceId::Const {
                            *input = new_sv.base;
                        }
                    }
                }
            }
            changed = true;
        }

        for phis in func.phi_map.values_mut() {
            for phi in phis.iter_mut() {
                for (_pred, input_sv) in phi.inputs.iter_mut() {
                    if let Some(&new_sv) = sv_replacements.get(input_sv) {
                        *input_sv = new_sv;
                        changed = true;
                    }
                }
            }
        }

        Ok(changed)
    }
}

/// Discover (post_call_def, pre_call_value) pairs.
///
/// A pair is recognised when:
/// - the post-call def is a LOAD whose address resolves to a stack slot;
/// - somewhere earlier in the same block (before the most recent CALL)
///   a STORE wrote `pre_call_value` to that same stack slot;
/// - the pre-call value's base is a *register* (callee-saved candidate).
fn collect_restore_pairs(func: &SsaFunction) -> Vec<(SsaVarnode, SsaVarnode)> {
    let mut pairs = Vec::new();

    for (&bid, block) in &func.function.blocks {
        // Map: stack_offset -> (insn_idx, ssa_value_stored)
        let mut saves: BTreeMap<i64, SsaVarnode> = BTreeMap::new();
        let mut last_call: Option<usize> = None;

        for (idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Store => {
                    let (val_slot, addr_raw) = store_addr_and_val(insn);
                    if let (Some(addr), Some(val_slot)) = (addr_raw, val_slot) {
                        if let Some(off) = stack_offset_of(&addr, func) {
                            if let Some(&val_sv) = func.var_map.get(&(bid, idx, val_slot)) {
                                if val_sv.base.space == SpaceId::Register {
                                    saves.insert(off, val_sv);
                                }
                            }
                        }
                    }
                }
                IrOp::Call | IrOp::Callind | IrOp::Callother => {
                    last_call = Some(idx);
                }
                IrOp::Load => {
                    if last_call.is_none() {
                        continue;
                    }
                    let Some(out_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied()
                    else {
                        continue;
                    };
                    if out_sv.base.space != SpaceId::Register {
                        continue;
                    }
                    let addr_raw = load_addr(insn);
                    let Some(addr) = addr_raw else { continue };
                    let Some(off) = stack_offset_of(&addr, func) else {
                        continue;
                    };
                    if let Some(&pre_sv) = saves.get(&off) {
                        if pre_sv.base == out_sv.base {
                            pairs.push((out_sv, pre_sv));
                        }
                    }
                }
                _ => {}
            }
        }
    }

    pairs
}

fn store_addr_and_val(insn: &unlace_ir::IrInsn) -> (Option<VarnodeSlot>, Option<Varnode>) {
    if insn.inputs.len() >= 3 {
        (Some(VarnodeSlot::Input(2)), Some(insn.inputs[1]))
    } else if insn.inputs.len() == 2 {
        (Some(VarnodeSlot::Input(1)), Some(insn.inputs[0]))
    } else {
        (None, None)
    }
}

fn load_addr(insn: &unlace_ir::IrInsn) -> Option<Varnode> {
    if insn.inputs.len() >= 2 {
        Some(insn.inputs[1])
    } else if !insn.inputs.is_empty() {
        Some(insn.inputs[0])
    } else {
        None
    }
}

const RSP_OFFSET: u64 = 32;
const RBP_OFFSET: u64 = 40;

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
        CallingConvention, DominatorTree, PhiNode, PrimitiveType, SsaFunction, SsaVarnode,
        VarnodeSlot,
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
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            rust_async: None,
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

    /// Save RBX before a CALL, restore after — pass should forward the
    /// post-call value to the pre-call SSA name.
    #[test]
    fn test_callee_saved_rbx_restoration() {
        const RBX_OFFSET: u64 = 0x18;
        let rbx_pre = SsaVarnode {
            base: Varnode::reg(RBX_OFFSET, 8),
            version: 0,
        };
        let rbx_post = SsaVarnode {
            base: Varnode::reg(RBX_OFFSET, 8),
            version: 1,
        };
        let rsp = Varnode::reg(RSP_OFFSET, 8);
        let c8 = Varnode::constant(8, 8);
        let space_ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let addr_save = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let addr_restore = SsaVarnode {
            base: Varnode::unique(8, 8),
            version: 0,
        };
        let call_target = Varnode::ram(0x2000, 8);
        let use_out = SsaVarnode {
            base: Varnode::unique(16, 8),
            version: 0,
        };
        let c1 = Varnode::constant(1, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            addr_save.base,
            smallvec![rsp, c8],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, addr_save.base, rbx_pre.base],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![call_target],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            addr_restore.base,
            smallvec![rsp, c8],
            0x100C,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            rbx_post.base,
            smallvec![space_ram, addr_restore.base],
            0x1010,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            use_out.base,
            smallvec![rbx_post.base, c1],
            0x1014,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1018));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), addr_save);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), addr_save);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(2)), rbx_pre);
        var_map.insert((BlockId(0), 3, VarnodeSlot::Output), addr_restore);
        var_map.insert((BlockId(0), 4, VarnodeSlot::Input(1)), addr_restore);
        var_map.insert((BlockId(0), 4, VarnodeSlot::Output), rbx_post);
        var_map.insert((BlockId(0), 5, VarnodeSlot::Input(0)), rbx_post);

        let mut ssa = make_ssa(vec![bb], var_map);
        let changed = CallBoundaryCopyPropPass.run(&mut ssa).expect("ok");
        assert!(changed, "should forward rbx_post → rbx_pre");

        let use_input_sv = ssa
            .var_map
            .get(&(BlockId(0), 5, VarnodeSlot::Input(0)))
            .copied()
            .expect("input mapped");
        assert_eq!(
            use_input_sv, rbx_pre,
            "use of restored RBX must now reference the pre-call SSA name"
        );
    }
}
