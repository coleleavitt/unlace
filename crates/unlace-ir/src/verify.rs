//! IR consistency verifier.
//!
//! This is intentionally structural: it checks CFG/SSA bookkeeping that every
//! pass must keep valid without asserting stronger semantic facts that later
//! recovery passes are still allowed to refine.

use std::collections::BTreeSet;

use petgraph::visit::{EdgeRef, IntoEdgeReferences};

use crate::BlockId;
use crate::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};

#[derive(Debug, thiserror::Error, PartialEq, Eq)]
pub enum VerifyError {
    #[error("function entry block {entry} is missing")]
    MissingEntry { entry: BlockId },

    #[error("CFG entry {cfg_entry} does not match function entry {function_entry}")]
    CfgEntryMismatch {
        function_entry: BlockId,
        cfg_entry: BlockId,
    },

    #[error("dominator root {found} does not match function entry {expected}")]
    DomRootMismatch { expected: BlockId, found: BlockId },

    #[error("block stored under key {key} has id {block}")]
    BlockKeyMismatch { key: BlockId, block: BlockId },

    #[error("block {block} has successor {successor}, but that block is missing")]
    MissingSuccessor { block: BlockId, successor: BlockId },

    #[error("function block {block} is missing from CFG")]
    MissingCfgNode { block: BlockId },

    #[error("CFG contains non-synthetic block {block} that is missing from the function")]
    StaleCfgNode { block: BlockId },

    #[error("CFG edge {from}->{to} references a missing non-synthetic block")]
    CfgEdgeToMissingBlock { from: BlockId, to: BlockId },

    #[error("phi map references missing block {block}")]
    PhiBlockMissing { block: BlockId },

    #[error("phi in block {block} has input from missing block {input_block}")]
    PhiInputMissingBlock {
        block: BlockId,
        input_block: BlockId,
    },

    #[error("phi in block {block} has input from {input_block}, which is not a CFG predecessor")]
    PhiInputNotPredecessor {
        block: BlockId,
        input_block: BlockId,
    },

    #[error("SSA definition appears more than once: {var:?}")]
    DuplicateDefinition { var: SsaVarnode },

    #[error("var_map references missing block {block}")]
    VarMapBlockMissing { block: BlockId },

    #[error("var_map references missing instruction {block}:{insn_idx}")]
    VarMapInsnMissing { block: BlockId, insn_idx: usize },

    #[error("var_map output slot references outputless instruction {block}:{insn_idx}")]
    VarMapOutputOnOutputlessInsn { block: BlockId, insn_idx: usize },

    #[error(
        "var_map input slot {input_idx} is out of range for instruction {block}:{insn_idx} with {input_count} inputs"
    )]
    VarMapInputOutOfRange {
        block: BlockId,
        insn_idx: usize,
        input_idx: usize,
        input_count: usize,
    },
}

pub fn verify_ssa_function(func: &SsaFunction) -> Result<(), VerifyError> {
    verify_function_cfg_shape(func)?;
    verify_phis(func)?;
    verify_var_map(func)?;
    Ok(())
}

fn verify_function_cfg_shape(func: &SsaFunction) -> Result<(), VerifyError> {
    let entry = func.function.entry;
    if !func.function.blocks.contains_key(&entry) {
        return Err(VerifyError::MissingEntry { entry });
    }

    let cfg_entry = func.cfg.entry_block();
    if cfg_entry != entry {
        return Err(VerifyError::CfgEntryMismatch {
            function_entry: entry,
            cfg_entry,
        });
    }

    let dom_root = func.dom_tree.root();
    if dom_root != entry {
        return Err(VerifyError::DomRootMismatch {
            expected: entry,
            found: dom_root,
        });
    }

    for (&bid, block) in &func.function.blocks {
        if block.id != bid {
            return Err(VerifyError::BlockKeyMismatch {
                key: bid,
                block: block.id,
            });
        }
        if func.cfg.node_index(bid).is_none() {
            return Err(VerifyError::MissingCfgNode { block: bid });
        }
        for &successor in &block.successors {
            if !func.function.blocks.contains_key(&successor) {
                return Err(VerifyError::MissingSuccessor {
                    block: bid,
                    successor,
                });
            }
        }
    }

    let exit = func.cfg.exit_block();
    let unknown = func.cfg.unknown_block();
    for &bid in func.cfg.node_map().keys() {
        if bid != exit && bid != unknown && !func.function.blocks.contains_key(&bid) {
            return Err(VerifyError::StaleCfgNode { block: bid });
        }
    }

    for edge in func.cfg.inner().edge_references() {
        let from = func.cfg.inner()[edge.source()];
        let to = func.cfg.inner()[edge.target()];
        let from_ok = from == exit || from == unknown || func.function.blocks.contains_key(&from);
        let to_ok = to == exit || to == unknown || func.function.blocks.contains_key(&to);
        if !from_ok || !to_ok {
            return Err(VerifyError::CfgEdgeToMissingBlock { from, to });
        }
    }

    Ok(())
}

fn verify_phis(func: &SsaFunction) -> Result<(), VerifyError> {
    let mut definitions = BTreeSet::new();

    for (&block, phis) in &func.phi_map {
        if !func.function.blocks.contains_key(&block) {
            return Err(VerifyError::PhiBlockMissing { block });
        }
        let predecessors: BTreeSet<BlockId> = func.cfg.predecessors(block).into_iter().collect();
        for phi in phis {
            if !definitions.insert(phi.output) {
                return Err(VerifyError::DuplicateDefinition { var: phi.output });
            }
            for &(input_block, _) in &phi.inputs {
                if !func.function.blocks.contains_key(&input_block) {
                    return Err(VerifyError::PhiInputMissingBlock { block, input_block });
                }
                if !predecessors.contains(&input_block) {
                    return Err(VerifyError::PhiInputNotPredecessor { block, input_block });
                }
            }
        }
    }

    for ((_, _, slot), &var) in &func.var_map {
        if matches!(slot, VarnodeSlot::Output) && !definitions.insert(var) {
            return Err(VerifyError::DuplicateDefinition { var });
        }
    }

    Ok(())
}

fn verify_var_map(func: &SsaFunction) -> Result<(), VerifyError> {
    for (&(block, insn_idx, ref slot), _) in &func.var_map {
        let Some(bb) = func.function.blocks.get(&block) else {
            return Err(VerifyError::VarMapBlockMissing { block });
        };
        let Some(insn) = bb.insns.get(insn_idx) else {
            return Err(VerifyError::VarMapInsnMissing { block, insn_idx });
        };
        match *slot {
            VarnodeSlot::Output => {
                if insn.output.is_none() {
                    return Err(VerifyError::VarMapOutputOnOutputlessInsn { block, insn_idx });
                }
            }
            VarnodeSlot::Input(input_idx) => {
                let input_count = insn.inputs.len();
                if input_idx >= input_count {
                    return Err(VerifyError::VarMapInputOutOfRange {
                        block,
                        insn_idx,
                        input_idx,
                        input_count,
                    });
                }
            }
        }
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use crate::ssa::build_ssa;
    use crate::{BasicBlock, Function, IrInsn, IrOp, Varnode};

    fn simple_ssa() -> SsaFunction {
        let mut function = Function::new("simple", BlockId(0), 0x1000);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(0, 4),
            smallvec![Varnode::constant(1, 4)],
            0x1000,
        ));
        block.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::unique(0, 4)],
            0x1004,
        ));
        function.insert_block(block);
        build_ssa(function)
    }

    #[test]
    fn accepts_fresh_ssa() {
        let func = simple_ssa();
        verify_ssa_function(&func).expect("fresh SSA should verify");
    }

    #[test]
    fn rejects_missing_entry() {
        let mut func = simple_ssa();
        func.function.blocks.remove(&BlockId(0));
        let err = verify_ssa_function(&func).expect_err("missing entry should fail");
        assert_eq!(err, VerifyError::MissingEntry { entry: BlockId(0) });
    }

    #[test]
    fn rejects_stale_var_map_instruction() {
        let mut func = simple_ssa();
        func.var_map.insert(
            (BlockId(0), 99, VarnodeSlot::Input(0)),
            SsaVarnode {
                base: Varnode::constant(1, 4),
                version: 0,
            },
        );
        let err = verify_ssa_function(&func).expect_err("stale var_map key should fail");
        assert_eq!(
            err,
            VerifyError::VarMapInsnMissing {
                block: BlockId(0),
                insn_idx: 99
            }
        );
    }

    #[test]
    fn rejects_phi_from_non_predecessor() {
        let mut function = Function::new("diamond", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1000));
        b0.successors = smallvec![BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        function.insert_block(b0);
        function.insert_block(b1);
        function.insert_block(b2);
        let mut func = build_ssa(function);
        func.phi_map.insert(
            BlockId(1),
            vec![crate::ssa::PhiNode {
                output: SsaVarnode {
                    base: Varnode::reg(0, 4),
                    version: 1,
                },
                inputs: vec![(
                    BlockId(2),
                    SsaVarnode {
                        base: Varnode::reg(0, 4),
                        version: 0,
                    },
                )],
            }],
        );

        let err = verify_ssa_function(&func).expect_err("bad phi predecessor should fail");
        assert_eq!(
            err,
            VerifyError::PhiInputNotPredecessor {
                block: BlockId(1),
                input_block: BlockId(2)
            }
        );
    }
}
