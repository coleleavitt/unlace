//! Noreturn function detection pass.
//!
//! Detects calls to known-noreturn functions (exit, abort, panic, etc.) and
//! marks the containing `SsaFunction` accordingly. Instructions after a
//! noreturn call within the same block are unreachable and removed.

use std::collections::BTreeSet;

use unlace_ir::ssa::{SsaFunction, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId};

use crate::pass::{Pass, PassError};

const NORETURN_NAMES: &[&str] = &[
    "exit",
    "_exit",
    "_Exit",
    "abort",
    "__assert_fail",
    "__stack_chk_fail",
    "longjmp",
    "_Unwind_Resume",
    "panic",
    "rust_begin_unwind",
    "rust_panic",
    "core::panicking::panic_fmt",
    "throw",
    "__cxa_throw",
];

pub struct NoreturnDetectPass {
    noreturn_names: BTreeSet<&'static str>,
}

impl Default for NoreturnDetectPass {
    fn default() -> Self {
        Self::new()
    }
}

impl NoreturnDetectPass {
    pub fn new() -> Self {
        Self {
            noreturn_names: NORETURN_NAMES.iter().copied().collect(),
        }
    }

    /// Run the pass with an external name resolver that maps call-target
    /// addresses to function names (e.g. from `BinaryImage.plt_symbols`).
    pub fn run_with_resolver(
        &self,
        func: &mut SsaFunction,
        resolve_name: impl Fn(u64) -> Option<&'static str>,
    ) -> Result<bool, PassError> {
        let mut changed = false;
        let mut found_noreturn = false;

        let block_ids: Vec<_> = func.function.blocks.keys().copied().collect();

        for bid in block_ids {
            let block = match func.function.blocks.get(&bid) {
                Some(b) => b,
                None => continue,
            };

            let mut noreturn_insn_idx: Option<usize> = None;

            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }

                let target_addr = match insn.inputs.first() {
                    Some(vn) if vn.space == SpaceId::Const => vn.offset,
                    _ => continue,
                };

                if let Some(name) = resolve_name(target_addr) {
                    if self.noreturn_names.contains(name) {
                        found_noreturn = true;
                        noreturn_insn_idx = Some(insn_idx);
                        break;
                    }
                }
            }

            if let Some(cut_after) = noreturn_insn_idx {
                let keep_count = cut_after + 1;
                let block = func.function.blocks.get_mut(&bid).unwrap();

                if block.insns.len() > keep_count {
                    for old_idx in keep_count..block.insns.len() {
                        let input_count = block.insns[old_idx].inputs.len();
                        for i in 0..input_count {
                            func.var_map.remove(&(bid, old_idx, VarnodeSlot::Input(i)));
                        }
                        func.var_map.remove(&(bid, old_idx, VarnodeSlot::Output));
                    }

                    block.insns.truncate(keep_count);
                    changed = true;
                }
            }
        }

        if found_noreturn && !func.noreturn {
            func.noreturn = true;
            changed = true;
        }

        Ok(changed)
    }
}

impl Pass for NoreturnDetectPass {
    fn name(&self) -> &str {
        "noreturn-detect"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // When run via the Pass trait without an external resolver, we use a
        // no-op resolver. The caller is expected to use `run_with_resolver`
        // when symbol information is available.
        self.run_with_resolver(func, |_| None)
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot, DominatorTree};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_ssa(
        blocks: Vec<BasicBlock>,
        var_map: BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>,
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
            cfg,
            dom_tree,
            phi_map: BTreeMap::new(),
            var_map,
            var_types: BTreeMap::new(),
            calling_convention: unlace_ir::ssa::CallingConvention::Unknown,
            stack_vars: BTreeMap::new(),
            foldable_exprs: BTreeSet::new(),
            noreturn: false,
            tail_call_map: BTreeMap::new(),
            merged_names: BTreeMap::new(),
            enum_discriminants: Vec::new(),
            panic_sites: BTreeMap::new(),
            vtable_calls: BTreeMap::new(),
            inferred_params: Vec::new(),
            inferred_return_type: PrimitiveType::Unknown,
        }
    }

    fn build_trivial_dom(
        cfg: &unlace_ir::cfg::ControlFlowGraph,
    ) -> DominatorTree {
        use petgraph::algo::dominators::simple_fast;

        let entry_ni = cfg.node_index(cfg.entry_block()).expect("entry block in cfg");
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
        SsaVarnode { base: Varnode::reg(offset, 8), version }
    }

    fn mock_resolver(addr: u64) -> Option<&'static str> {
        match addr {
            0xDEAD => Some("exit"),
            0xBEEF => Some("abort"),
            0x1234 => Some("printf"),
            _ => None,
        }
    }

    #[test]
    fn test_noreturn_exit_detected() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let var_map = BTreeMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert!(ssa.noreturn);
    }

    #[test]
    fn test_noreturn_abort_detected() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xBEEF, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let var_map = BTreeMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert!(ssa.noreturn);
    }

    #[test]
    fn test_noreturn_normal_function() {
        let v1 = sv(0, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        // Call to printf (not noreturn)
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1234, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Input(0)), v1);

        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(!changed);
        assert!(!ssa.noreturn);
    }

    #[test]
    fn test_noreturn_unreachable_after_call() {
        let v1 = sv(0, 0);
        let v2 = sv(8, 0);
        let v3 = sv(16, 0);

        let mut bb = BasicBlock::new(BlockId(0));
        // Some setup instruction
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            v1.base,
            smallvec![Varnode::constant(1, 8)],
            0x1000,
        ));
        // Call to exit (noreturn)
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1004,
        ));
        // These should be removed (unreachable after exit)
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            v2.base,
            smallvec![v1.base, Varnode::constant(2, 8)],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x100c,
        ));

        let mut var_map = BTreeMap::new();
        var_map.insert((BlockId(0), 0, VarnodeSlot::Output), v1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(0)), v1);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Input(1)), v3);
        var_map.insert((BlockId(0), 2, VarnodeSlot::Output), v2);

        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run_with_resolver(&mut ssa, mock_resolver).unwrap();

        assert!(changed);
        assert!(ssa.noreturn);

        let insns = &ssa.function.blocks[&BlockId(0)].insns;
        assert_eq!(insns.len(), 2, "only COPY + CALL should remain");
        assert_eq!(insns[0].op, IrOp::Copy);
        assert_eq!(insns[1].op, IrOp::Call);

        // var_map entries for removed instructions should be gone
        assert!(ssa.var_map.get(&(BlockId(0), 2, VarnodeSlot::Input(0))).is_none());
        assert!(ssa.var_map.get(&(BlockId(0), 2, VarnodeSlot::Output)).is_none());
    }

    #[test]
    fn test_noreturn_no_change_on_rerun() {
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1000,
        ));

        let var_map = BTreeMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        assert!(pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
        assert!(!pass.run_with_resolver(&mut ssa, mock_resolver).unwrap());
    }

    #[test]
    fn test_noreturn_pass_trait_without_resolver() {
        let mut bb = BasicBlock::new(BlockId(0));
        // Without a resolver, no names can be resolved, so no change.
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![],
            0x1004,
        ));

        let var_map = BTreeMap::new();
        let mut ssa = make_ssa(vec![bb], var_map);

        let pass = NoreturnDetectPass::new();
        let changed = pass.run(&mut ssa).unwrap();
        assert!(!changed);
        assert!(!ssa.noreturn);
    }
}
