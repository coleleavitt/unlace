//! Copy propagation pass: replace uses of `v2 = COPY v1` with `v1`.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrOp, SpaceId, Varnode};

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
        for block in func.function.blocks.values_mut() {
            for insn in &mut block.insns {
                for input in &mut insn.inputs {
                    if let Some(&replacement) = resolved.get(input) {
                        if *input != replacement {
                            *input = replacement;
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
                    let base = input.base;
                    if let Some(&replacement) = resolved.get(&base) {
                        if base != replacement {
                            input.base = replacement;
                            changed = true;
                        }
                    }
                }
            }
        }

        Ok(changed)
    }
}

/// Build a map from COPY outputs to their sources.
///
/// Only considers `output = COPY input0` where output is *not* in Const space.
fn build_copy_map(func: &SsaFunction) -> BTreeMap<Varnode, Varnode> {
    let mut map = BTreeMap::new();

    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if insn.op == IrOp::Copy {
                if let (Some(output), Some(&source)) = (insn.output, insn.inputs.first()) {
                    if output.space != SpaceId::Const {
                        map.insert(output, source);
                    }
                }
            }
        }
    }

    map
}

/// Chase COPY chains to their root: if v3 = COPY v2 and v2 = COPY v1,
/// resolved[v3] = v1. Handles cycles by stopping after chain length
/// exceeds the map size.
fn resolve_chains(copy_map: &BTreeMap<Varnode, Varnode>) -> BTreeMap<Varnode, Varnode> {
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
        let changed = CopyPropagationPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let add_insn = &ssa.function.blocks.values().next().expect("has block").insns[1];
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
        let changed = CopyPropagationPass.run(&mut ssa).expect("pass should succeed");
        assert!(changed);

        let add_insn = &ssa.function.blocks.values().next().expect("has block").insns[2];
        assert_eq!(add_insn.inputs[0], v1, "v3 should resolve through v2 to v1");
    }

    #[test]
    fn test_copy_prop_no_change() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let out = Varnode::unique(0, 4);

        let insn = IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![r0, r8],
            0x1000,
        );

        let mut ssa = make_single_block_ssa(vec![insn]);
        let changed = CopyPropagationPass.run(&mut ssa).expect("pass should succeed");
        assert!(!changed);
    }
}
