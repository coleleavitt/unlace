//! Redundant flag-test elimination.
//!
//! x86 (and many other architectures) compute comparisons by issuing a
//! `CMP a, b` (which is `a - b` discarding the result, setting flags) and
//! then testing those flags. The lifter materialises this as
//!
//! ```text
//!     diff = INT_SUB a, b
//!     z    = INT_EQUAL diff, 0
//! ```
//!
//! The `INT_EQUAL ?, 0` pattern is mathematically equivalent to
//! `INT_EQUAL a, b`. The same holds for `INT_NOTEQUAL`. For unsigned
//! less-than, the carry flag of `a - b` is exactly `a < b` — so
//! `INT_LESS(diff_carry_input_a, diff_carry_input_b)` already encodes the
//! comparison. This pass rewrites those pseudo-comparisons through the
//! `INT_SUB` to operate directly on its operands.
//!
//! The arithmetic INT_SUB itself is *not* removed — DCE will pick it up if
//! the difference goes unused after the rewrite.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

pub struct RedundantFlagElimPass;

impl Pass for RedundantFlagElimPass {
    fn name(&self) -> &str {
        "redundant-flag-elim"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::PreOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let sub_defs = collect_sub_defs(func);
        if sub_defs.is_empty() {
            return Ok(false);
        }

        let mut rewrites: Vec<Rewrite> = Vec::new();

        for (&bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                let cmp_kind = match insn.op {
                    IrOp::IntEqual => CmpKind::Eq,
                    IrOp::IntNotequal => CmpKind::Ne,
                    _ => continue,
                };
                if insn.inputs.len() != 2 {
                    continue;
                }
                let diff_idx = if is_zero_const(&insn.inputs[1]) {
                    0
                } else if is_zero_const(&insn.inputs[0]) {
                    1
                } else {
                    continue;
                };
                let diff_slot = VarnodeSlot::Input(diff_idx);
                let diff_sv = match func.var_map.get(&(bid, idx, diff_slot)) {
                    Some(&sv) => sv,
                    None => continue,
                };
                let Some(sub_loc) = sub_defs.get(&diff_sv) else {
                    continue;
                };
                let sub_block = match func.function.blocks.get(&sub_loc.0) {
                    Some(b) => b,
                    None => continue,
                };
                let Some(sub_insn) = sub_block.insns.get(sub_loc.1) else {
                    continue;
                };
                if sub_insn.op != IrOp::IntSub || sub_insn.inputs.len() != 2 {
                    continue;
                }
                let a = sub_insn.inputs[0];
                let b = sub_insn.inputs[1];
                let a_sv = func
                    .var_map
                    .get(&(sub_loc.0, sub_loc.1, VarnodeSlot::Input(0)))
                    .copied();
                let b_sv = func
                    .var_map
                    .get(&(sub_loc.0, sub_loc.1, VarnodeSlot::Input(1)))
                    .copied();
                rewrites.push(Rewrite {
                    bid,
                    idx,
                    new_op: match cmp_kind {
                        CmpKind::Eq => IrOp::IntEqual,
                        CmpKind::Ne => IrOp::IntNotequal,
                    },
                    new_in: [a, b],
                    new_in_sv: [a_sv, b_sv],
                    diff_input_idx: diff_idx,
                });
            }
        }

        if rewrites.is_empty() {
            return Ok(false);
        }

        for rw in &rewrites {
            if let Some(block) = func.function.blocks.get_mut(&rw.bid) {
                if let Some(insn) = block.insns.get_mut(rw.idx) {
                    insn.op = rw.new_op;
                    if insn.inputs.len() >= 2 {
                        insn.inputs[0] = rw.new_in[0];
                        insn.inputs[1] = rw.new_in[1];
                    }
                }
            }
            func.var_map
                .remove(&(rw.bid, rw.idx, VarnodeSlot::Input(0)));
            func.var_map
                .remove(&(rw.bid, rw.idx, VarnodeSlot::Input(1)));
            if let Some(sv) = rw.new_in_sv[0] {
                func.var_map
                    .insert((rw.bid, rw.idx, VarnodeSlot::Input(0)), sv);
            }
            if let Some(sv) = rw.new_in_sv[1] {
                func.var_map
                    .insert((rw.bid, rw.idx, VarnodeSlot::Input(1)), sv);
            }
            let _ = rw.diff_input_idx;
        }

        Ok(true)
    }
}

#[derive(Copy, Clone)]
enum CmpKind {
    Eq,
    Ne,
}

struct Rewrite {
    bid: BlockId,
    idx: usize,
    new_op: IrOp,
    new_in: [Varnode; 2],
    new_in_sv: [Option<SsaVarnode>; 2],
    diff_input_idx: usize,
}

fn is_zero_const(v: &Varnode) -> bool {
    v.space == SpaceId::Const && v.offset == 0
}

fn collect_sub_defs(func: &SsaFunction) -> BTreeMap<SsaVarnode, (BlockId, usize)> {
    let mut map = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::IntSub {
                if let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                    map.insert(sv, (bid, idx));
                }
            }
        }
    }
    map
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{
        CallingConvention, DominatorTree, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot,
    };
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

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
            arch: unlace_ir::ArchId::Unknown(0),
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
            type_counterexamples: Vec::new(),
            cpp_variant_discriminants: Vec::new(),
            go_defer_recover_calls: BTreeMap::new(),
            cpp_lambda_captures: Vec::new(),
            seh_regions: Vec::new(),
            coroutine_sites: Vec::new(),
            resolved_jump_tables: std::collections::BTreeMap::new(),
            lvars: Vec::new(),
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

    fn sv(off: u64, ver: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(off, 8),
            version: ver,
        }
    }

    /// `diff = a - b; z = (diff == 0)` — should rewrite z to `(a == b)`.
    #[test]
    fn test_sub_eq_zero_collapses() {
        let a = sv(0, 0);
        let b = sv(8, 0);
        let diff = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let z = SsaVarnode {
            base: Varnode::unique(8, 1),
            version: 0,
        };
        let zero = Varnode::constant(0, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            diff.base,
            smallvec![a.base, b.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            z.base,
            smallvec![diff.base, zero],
            0x1004,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), a);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), b);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), diff);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(0)), diff);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), z);

        let mut ssa = make_ssa(vec![bb], var_map);
        let changed = RedundantFlagElimPass.run(&mut ssa).expect("ok");
        assert!(changed);

        let cmp = &ssa.function.blocks[&BlockId(0)].insns[1];
        assert_eq!(cmp.op, IrOp::IntEqual);
        assert_eq!(cmp.inputs[0], a.base);
        assert_eq!(cmp.inputs[1], b.base);
        assert_eq!(
            ssa.var_map.get(&(BlockId(0), 1, VarnodeSlot::Input(0))),
            Some(&a)
        );
        assert_eq!(
            ssa.var_map.get(&(BlockId(0), 1, VarnodeSlot::Input(1))),
            Some(&b)
        );
    }

    /// `diff = a - b; nz = (diff != 0)` — should rewrite to `(a != b)`.
    #[test]
    fn test_sub_ne_zero_collapses() {
        let a = sv(0, 0);
        let b = sv(8, 0);
        let diff = SsaVarnode {
            base: Varnode::unique(0, 8),
            version: 0,
        };
        let nz = SsaVarnode {
            base: Varnode::unique(8, 1),
            version: 0,
        };
        let zero = Varnode::constant(0, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            diff.base,
            smallvec![a.base, b.base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntNotequal,
            nz.base,
            smallvec![zero, diff.base],
            0x1004,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), a);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(1)), b);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), diff);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Input(1)), diff);
        var_map.insert((BlockId(0), 1, VarnodeSlot::Output), nz);

        let mut ssa = make_ssa(vec![bb], var_map);
        let changed = RedundantFlagElimPass.run(&mut ssa).expect("ok");
        assert!(changed);

        let cmp = &ssa.function.blocks[&BlockId(0)].insns[1];
        assert_eq!(cmp.op, IrOp::IntNotequal);
        assert_eq!(cmp.inputs[0], a.base);
        assert_eq!(cmp.inputs[1], b.base);
    }

    /// No INT_SUB feeding the cmp — should not change anything.
    #[test]
    fn test_unrelated_eq_zero_kept() {
        let a = sv(0, 0);
        let z = SsaVarnode {
            base: Varnode::unique(8, 1),
            version: 0,
        };
        let zero = Varnode::constant(0, 8);

        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            z.base,
            smallvec![a.base, zero],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), a);
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), z);

        let mut ssa = make_ssa(vec![bb], var_map);
        let changed = RedundantFlagElimPass.run(&mut ssa).expect("ok");
        assert!(!changed);
        assert_eq!(ssa.function.blocks[&BlockId(0)].insns[0].inputs[0], a.base);
    }
}
