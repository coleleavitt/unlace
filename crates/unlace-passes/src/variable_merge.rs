//! SSA→C variable merging pass.
//!
//! After expression tree folding, many SSA intermediates have been folded
//! away. For the remaining variables, this pass merges SSA versions that
//! share the same base [`Varnode`] into a single C variable name.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::Varnode;
use unlace_ir::ssa::{SsaFunction, SsaVarnode};

use crate::pass::{Pass, PassError};

/// Merges SSA versions of the same base varnode into a single C variable.
pub struct VariableMergePass;

impl Pass for VariableMergePass {
    fn name(&self) -> &str {
        "variable-merge"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut bases: BTreeSet<Varnode> = BTreeSet::new();

        for sv in func.var_map.values() {
            bases.insert(sv.base);
        }

        for phis in func.phi_map.values() {
            for phi in phis {
                bases.insert(phi.output.base);
                for &(_pred, sv) in &phi.inputs {
                    bases.insert(sv.base);
                }
            }
        }

        let mut base_names: BTreeMap<Varnode, String> = BTreeMap::new();
        let mut next_var = 1u32;
        for base in &bases {
            let name = format!("v{}", next_var);
            next_var += 1;
            base_names.insert(*base, name);
        }

        let mut merged: BTreeMap<SsaVarnode, String> = BTreeMap::new();

        for sv in func.var_map.values() {
            if let Some(name) = base_names.get(&sv.base) {
                merged.insert(*sv, name.clone());
            }
        }

        for phis in func.phi_map.values() {
            for phi in phis {
                if let Some(name) = base_names.get(&phi.output.base) {
                    merged.insert(phi.output, name.clone());
                }
                for &(_pred, sv) in &phi.inputs {
                    if let Some(name) = base_names.get(&sv.base) {
                        merged.insert(sv, name.clone());
                    }
                }
            }
        }

        let changed = merged != func.merged_names;
        func.merged_names = merged;
        Ok(changed)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{SsaVarnode, VarnodeSlot, build_ssa};
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
    fn test_var_merge_linear() {
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c1], 0x1004),
            IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r0, c1], 0x1008),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        let changed = pass.run(&mut ssa).expect("pass should succeed");
        assert!(changed, "should produce merged names");

        let r0_names: BTreeSet<&str> = ssa
            .merged_names
            .iter()
            .filter(|(sv, _)| sv.base == r0)
            .map(|(_, name)| name.as_str())
            .collect();
        assert_eq!(
            r0_names.len(),
            1,
            "all r0 SSA versions should share one name, got: {:?}",
            r0_names,
        );
    }

    #[test]
    fn test_var_merge_with_phi() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);
        let c2 = Varnode::constant(2, 8);

        let mut func = Function::new("diamond", BlockId(0), 0x2000);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(IrOp::Cbranch, smallvec![], 0x2000));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r8, c1], 0x2010));
        bb1.insns.push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2014));
        bb1.successors = smallvec![BlockId(3)];

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r8, c2], 0x2020));
        bb2.insns.push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x2024));
        bb2.successors = smallvec![BlockId(3)];

        let mut bb3 = BasicBlock::new(BlockId(3));
        bb3.insns.push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2030));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);
        func.insert_block(bb3);

        let mut ssa = build_ssa(func);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let r0_names: BTreeSet<&str> = ssa
            .merged_names
            .iter()
            .filter(|(sv, _)| sv.base == r0)
            .map(|(_, name)| name.as_str())
            .collect();
        assert_eq!(
            r0_names.len(),
            1,
            "phi-merged r0 versions should share one name, got: {:?}",
            r0_names,
        );
    }

    #[test]
    fn test_var_merge_disjoint_bases() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);

        let insns = vec![
            IrInsn::with_output(IrOp::Copy, r0, smallvec![c1], 0x1000),
            IrInsn::with_output(IrOp::Copy, r8, smallvec![c1], 0x1004),
        ];

        let mut ssa = make_single_block_ssa(insns);
        let pass = VariableMergePass;
        pass.run(&mut ssa).expect("pass should succeed");

        let r0_name = ssa
            .merged_names
            .iter()
            .find(|(sv, _)| sv.base == r0)
            .map(|(_, name)| name.as_str());
        let r8_name = ssa
            .merged_names
            .iter()
            .find(|(sv, _)| sv.base == r8)
            .map(|(_, name)| name.as_str());

        assert!(r0_name.is_some(), "r0 should have a merged name");
        assert!(r8_name.is_some(), "r8 should have a merged name");
        assert_ne!(
            r0_name.unwrap(),
            r8_name.unwrap(),
            "different bases should get different names",
        );
    }
}
