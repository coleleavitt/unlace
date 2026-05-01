//! Copy propagation pass: replace uses of `v2 = COPY v1` with `v1`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId};

use crate::pass::{Pass, PassError};

pub struct CopyPropagationPass;

impl Pass for CopyPropagationPass {
    fn name(&self) -> &str {
        "copy-propagation"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let copy_map = build_copy_map(func);
        if copy_map.is_empty() {
            return Ok(false);
        }

        let resolved = resolve_chains(&copy_map);

        let mut changed = false;
        for (&bid, block) in &mut func.function.blocks {
            for (insn_idx, insn) in block.insns.iter_mut().enumerate() {
                for (input_idx, input) in insn.inputs.iter_mut().enumerate() {
                    if is_metadata_input(insn.op, input_idx) {
                        continue;
                    }
                    let Some(input_sv) = func
                        .var_map
                        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
                    else {
                        continue;
                    };
                    if let Some(&replacement_sv) = resolved.get(input_sv) {
                        if *input != replacement_sv.base {
                            *input = replacement_sv.base;
                            func.var_map.insert(
                                (bid, insn_idx, VarnodeSlot::Input(input_idx)),
                                replacement_sv,
                            );
                            changed = true;
                        }
                    }
                }
            }
        }

        // Also propagate through phi node inputs.
        for phis in func.phi_map.values_mut() {
            for phi in phis.iter_mut() {
                for (_pred, input) in &mut phi.inputs {
                    if let Some(&replacement_sv) = resolved.get(input) {
                        if *input != replacement_sv {
                            *input = replacement_sv;
                            changed = true;
                        }
                    }
                }
            }
        }

        Ok(changed)
    }
}

const fn is_metadata_input(op: IrOp, input_idx: usize) -> bool {
    matches!(
        (op, input_idx),
        (IrOp::Load, 0)
            | (IrOp::Store, 0)
            | (IrOp::Callother, 0)
            | (IrOp::Branch, 0)
            | (IrOp::Cbranch, 0)
            | (IrOp::Branchind, 0)
    )
}

/// Build a map from COPY outputs to their sources.
///
/// Only considers `output = COPY input0` where output is *not* in Const space.
fn build_copy_map(func: &SsaFunction) -> BTreeMap<SsaVarnode, SsaVarnode> {
    let mut map = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Copy {
                let Some(output) = insn.output else {
                    continue;
                };
                if output.space == SpaceId::Const || insn.inputs.is_empty() {
                    continue;
                }

                if let (Some(&output_sv), Some(&source_sv)) = (
                    func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output)),
                    func.var_map.get(&(bid, insn_idx, VarnodeSlot::Input(0))),
                ) {
                    map.insert(output_sv, source_sv);
                }
            }
        }
    }

    map
}

/// Chase COPY chains to their root: if v3 = COPY v2 and v2 = COPY v1,
/// resolved[v3] = v1. Handles cycles by stopping after chain length
/// exceeds the map size.
fn resolve_chains(
    copy_map: &BTreeMap<SsaVarnode, SsaVarnode>,
) -> BTreeMap<SsaVarnode, SsaVarnode> {
    let mut resolved = BTreeMap::new();
    let limit = copy_map.len();

    for (&target, _) in copy_map {
        let mut current = target;
        let mut depth = 0;
        while let Some(&source) = copy_map.get(&current) {
            if depth >= limit {
                break;
            }
            current = source;
            depth += 1;
        }
        resolved.insert(target, current);
    }

    resolved
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn test_copy_prop_simple() {
        let v1 = Varnode::reg(0, 4);
        let v2 = Varnode::unique(0, 4);
        let v3 = Varnode::unique(4, 4);

        let copy_insn = IrInsn::with_output(IrOp::Copy, v2, smallvec![v1], 0x1000);
        let use_insn = IrInsn::with_output(
            IrOp::IntAdd,
            v3,
            smallvec![v2, Varnode::constant(1, 4)],
            0x1004,
        );

        let mut ssa = make_single_block_ssa(vec![copy_insn, use_insn]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let add_insn = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[1];
        assert_eq!(add_insn.inputs[0], v1);
    }

    #[test]
    fn test_copy_prop_chain() {
        let v1 = Varnode::reg(0, 4);
        let v2 = Varnode::unique(0, 4);
        let v3 = Varnode::unique(4, 4);
        let v4 = Varnode::unique(8, 4);

        let copy1 = IrInsn::with_output(IrOp::Copy, v2, smallvec![v1], 0x1000);
        let copy2 = IrInsn::with_output(IrOp::Copy, v3, smallvec![v2], 0x1004);
        let use_insn = IrInsn::with_output(
            IrOp::IntAdd,
            v4,
            smallvec![v3, Varnode::constant(1, 4)],
            0x1008,
        );

        let mut ssa = make_single_block_ssa(vec![copy1, copy2, use_insn]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let add_insn = &ssa
            .function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[2];
        assert_eq!(add_insn.inputs[0], v1, "v3 should resolve through v2 to v1");
    }

    #[test]
    fn test_copy_prop_respects_ssa_versions_for_reused_raw_varnodes() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let tmp = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 1);

        let copy = IrInsn::with_output(IrOp::Copy, tmp, smallvec![r0], 0x1000);
        let sub = IrInsn::with_output(IrOp::IntSub, tmp, smallvec![tmp, r8], 0x1004);
        let cmp = IrInsn::with_output(
            IrOp::IntEqual,
            out,
            smallvec![tmp, Varnode::constant(0, 4)],
            0x1008,
        );

        let mut ssa = make_single_block_ssa(vec![copy, sub, cmp]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);

        let block = ssa.function.blocks.values().next().expect("has block");
        assert_eq!(
            block.insns[1].inputs[0], r0,
            "the first tmp version should propagate into the redefining instruction"
        );
        assert_eq!(
            block.insns[2].inputs[0], tmp,
            "the second tmp version must not be replaced by the earlier copy source"
        );
    }

    #[test]
    fn test_copy_prop_no_change() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);

        let insn = IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000);

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = CopyPropagationPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed);
    }
}
