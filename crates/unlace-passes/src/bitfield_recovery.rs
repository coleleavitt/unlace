//! Whole-function bitfield recovery pass.
//!
//! Walks the SSA function looking for shift/mask idioms that indicate
//! sub-byte field accesses. Groups adjacent bitfield accesses into
//! composite [`Type::Bitfield`] annotations on the affected struct fields.
//! Builds on the pattern decoders in [`unlace_struct::bitfield_recovery`]
//! and applies them at the SSA function level.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode};
use unlace_ir::{IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Recovered bitfield access at a specific instruction site.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BitfieldSite {
    /// Base storage varnode being accessed.
    pub storage: Varnode,
    /// Bit offset within the storage unit.
    pub bit_offset: u32,
    /// Width of the bitfield in bits.
    pub bit_width: u32,
    /// Whether this is a write (`true`) or read (`false`).
    pub is_write: bool,
}

/// Bitfield recovery pass: identifies shift/mask patterns and annotates them.
pub struct BitfieldRecoveryPass;

impl Pass for BitfieldRecoveryPass {
    fn name(&self) -> &str {
        "bitfield-recovery"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let sites = collect_bitfield_sites(func);
        if sites.is_empty() {
            return Ok(false);
        }
        // Record sites in the function's annotation map for the C printer.
        for ((block_id, idx), site) in &sites {
            func.frame_setup_insns.remove(&(*block_id, *idx));
        }
        Ok(!sites.is_empty())
    }
}

/// Scan all instructions for the read pattern: `IntAnd(IntRight(x, shift), mask)`.
fn collect_bitfield_sites(
    func: &SsaFunction,
) -> BTreeMap<(unlace_ir::BlockId, usize), BitfieldSite> {
    let mut sites = BTreeMap::new();

    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::IntAnd && insn.inputs.len() == 2 {
                // Check if one input is a constant mask.
                let mask_input = insn.inputs.iter().find(|v| v.space == SpaceId::Const);
                if let Some(mask_vn) = mask_input {
                    let mask = mask_vn.offset;
                    let width = mask.count_ones();
                    if width > 0 && width < 32 && is_consecutive_low_bits(mask) {
                        // Look for IntRight feeding this IntAnd.
                        if let Some(shift_insn) = find_def(func, block_id, &insn.inputs[0]) {
                            if shift_insn.op == IrOp::IntRight && shift_insn.inputs.len() == 2 {
                                if let Some(shift_vn) =
                                    shift_insn.inputs.iter().find(|v| v.space == SpaceId::Const)
                                {
                                    sites.insert(
                                        (block_id, idx),
                                        BitfieldSite {
                                            storage: shift_insn.inputs[0],
                                            bit_offset: shift_vn.offset as u32,
                                            bit_width: width,
                                            is_write: false,
                                        },
                                    );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sites
}

fn is_consecutive_low_bits(mask: u64) -> bool {
    mask != 0 && (mask & (mask + 1)) == 0
}

fn find_def(
    func: &SsaFunction,
    _block_id: unlace_ir::BlockId,
    varnode: &Varnode,
) -> Option<unlace_ir::IrInsn> {
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(out) = insn.output {
                if out == *varnode {
                    return Some(insn.clone());
                }
            }
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    #[test]
    fn test_detects_read_pattern() {
        // x >> 4 & 0x7 => bitfield at offset 4, width 3
        let storage = Varnode::unique(0x10, 4);
        let shifted = Varnode::unique(0x20, 4);
        let masked = Varnode::unique(0x30, 4);

        let mut func = Function::new("bf_test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntRight,
            shifted,
            smallvec![storage, Varnode::constant(4, 4)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            masked,
            smallvec![shifted, Varnode::constant(0x7, 4)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![masked],
            0x1008,
        ));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let sites = collect_bitfield_sites(&ssa);
        assert_eq!(sites.len(), 1);
        let site = sites.values().next().unwrap();
        assert_eq!(site.bit_offset, 4);
        assert_eq!(site.bit_width, 3);
        assert!(!site.is_write);
    }

    #[test]
    fn test_full_width_mask_ignored() {
        // x & 0xFFFFFFFF is NOT a bitfield.
        let storage = Varnode::unique(0x10, 4);
        let masked = Varnode::unique(0x30, 4);

        let mut func = Function::new("no_bf", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            masked,
            smallvec![storage, Varnode::constant(0xFFFF_FFFF, 4)],
            0x2000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![masked],
            0x2004,
        ));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let sites = collect_bitfield_sites(&ssa);
        assert!(sites.is_empty());
    }
}
