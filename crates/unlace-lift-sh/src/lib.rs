//! SuperH (SH-2 / SH-4) -> IR lifter.
//!
//! Covers the common SH-2 / SH-4 16-bit fixed-width instruction subset:
//! register-register MOV/ADD/SUB/AND/OR/XOR/MUL.L, byte/word/long loads &
//! stores (including @Rm+ / @-Rn addressing), single-bit logical &
//! arithmetic shifts, the five comparisons that set T (EQ / GE / GT / HI / HS),
//! conditional branches BT/BF, unconditional BRA, calls BSR/JSR, RTS, and NOP.
//!
//! Register file layout (4-byte registers, spaced 8 bytes apart so we have
//! room for sub-register aliases such as the T flag):
//!
//! | Index | Name  | Offset |
//! |-------|-------|--------|
//! | 0..15 | R0–R15| 0..120 |
//! | 16    | PR    | 128    |
//! | 17    | SR    | 136    |
//! | 18    | GBR   | 144    |
//! | 19    | VBR   | 152    |
//! | 20    | MACH  | 160    |
//! | 21    | MACL  | 168    |
//! | 22    | PC    | 176    |
//! | 23    | T     | 184 (1 byte) |

mod decode;
mod lift;

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

const SH_GPR_NAMES: [&str; 16] = [
    "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "R11", "R12", "R13", "R14",
    "R15",
];

pub struct ShLifter {
    register_file: RegisterFile,
}

impl ShLifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(24);

        // R0..R15
        for (i, name) in SH_GPR_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg((i as u64) * 8, 4),
            });
        }

        // Special registers
        regs.push(RegisterDef {
            name: "PR",
            varnode: Varnode::reg(128, 4),
        });
        regs.push(RegisterDef {
            name: "SR",
            varnode: Varnode::reg(136, 4),
        });
        regs.push(RegisterDef {
            name: "GBR",
            varnode: Varnode::reg(144, 4),
        });
        regs.push(RegisterDef {
            name: "VBR",
            varnode: Varnode::reg(152, 4),
        });
        regs.push(RegisterDef {
            name: "MACH",
            varnode: Varnode::reg(160, 4),
        });
        regs.push(RegisterDef {
            name: "MACL",
            varnode: Varnode::reg(168, 4),
        });
        regs.push(RegisterDef {
            name: "PC",
            varnode: Varnode::reg(176, 4),
        });
        // T flag is bit 0 of SR; expose as a 1-byte sub-register.
        regs.push(RegisterDef {
            name: "T",
            varnode: Varnode::reg(184, 1),
        });

        Self {
            register_file: RegisterFile { registers: regs },
        }
    }
}

impl Default for ShLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for ShLifter {
    fn arch(&self) -> ArchId {
        ArchId::SuperH
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let decoded = decode::decode(bytes, addr).ok_or(LiftError::ShortBuffer)?;
        let ctx = lift::lift(&decoded, addr);
        Ok(LiftedInsn {
            ir_ops: ctx.ops,
            len: decoded.len,
        })
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::IrOp;

    fn lift_bytes(hw: u16, addr: u64) -> LiftedInsn {
        let lifter = ShLifter::new();
        lifter
            .lift_insn(&hw.to_le_bytes(), addr)
            .expect("lift should succeed")
    }

    // ---------------------------------------------------------------------
    // Register file / metadata
    // ---------------------------------------------------------------------

    #[test]
    fn register_file_layout() {
        let lifter = ShLifter::new();
        let rf = lifter.register_file();
        assert_eq!(rf.registers.len(), 24);
        assert_eq!(rf.registers[0].name, "R0");
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[15].name, "R15");
        assert_eq!(rf.registers[16].name, "PR");
        assert_eq!(rf.registers[16].varnode.size, 4);
        assert_eq!(rf.registers[17].name, "SR");
        assert_eq!(rf.registers[18].name, "GBR");
        assert_eq!(rf.registers[19].name, "VBR");
        assert_eq!(rf.registers[20].name, "MACH");
        assert_eq!(rf.registers[21].name, "MACL");
        assert_eq!(rf.registers[22].name, "PC");
        assert_eq!(rf.registers[23].name, "T");
        assert_eq!(rf.registers[23].varnode.size, 1);
    }

    #[test]
    fn arch_is_superh() {
        assert_eq!(ShLifter::new().arch(), ArchId::SuperH);
    }

    // ---------------------------------------------------------------------
    // Per-instruction lifting
    // ---------------------------------------------------------------------

    #[test]
    fn lift_nop_is_two_bytes() {
        let lifted = lift_bytes(0x0009, 0x1000);
        assert_eq!(lifted.len, 2);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn lift_mov_reg() {
        // MOV R5,R3 -> 0x6353
        let lifted = lift_bytes(0x6353, 0x1000);
        assert_eq!(lifted.len, 2);
        let copy = lifted
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy");
        let out = copy.output.expect("output");
        assert_eq!(out.space, unlace_ir::SpaceId::Register);
        assert_eq!(out.offset, 3 * 8);
        assert_eq!(out.size, 4);
        assert_eq!(copy.inputs[0].offset, 5 * 8);
    }

    #[test]
    fn lift_add_sub_and_or_xor() {
        assert!(
            lift_bytes(0x335C, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntAdd)
        );
        assert!(
            lift_bytes(0x3358, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSub)
        );
        assert!(
            lift_bytes(0x2359, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntAnd)
        );
        assert!(
            lift_bytes(0x235B, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntOr)
        );
        assert!(
            lift_bytes(0x235A, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntXor)
        );
    }

    #[test]
    fn lift_mul_l_writes_macl() {
        // MUL.L R5,R3 -> 0x0357
        let lifted = lift_bytes(0x0357, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        // MACL is offset 168, size 4.
        assert!(lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Register && v.offset == 168 && v.size == 4
                })
        }));
    }

    #[test]
    fn lift_mov_l_load() {
        // MOV.L @R5,R3 -> 0x6352
        let lifted = lift_bytes(0x6352, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(
            lifted.ir_ops.iter().any(|i| i.op == IrOp::Copy
                && i.output.map_or(false, |v| v.offset == 3 * 8 && v.size == 4))
        );
        assert!(!lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn lift_mov_b_load_sign_extends() {
        // MOV.B @R5,R3 -> 0x6350
        let lifted = lift_bytes(0x6350, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn lift_mov_l_post_inc_load_bumps_rm() {
        // MOV.L @R5+,R3 -> 0x6356
        let lifted = lift_bytes(0x6356, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(
            lifted.ir_ops.iter().any(|i| i.op == IrOp::Copy
                && i.output.map_or(false, |v| v.offset == 5 * 8 && v.size == 4))
        );
    }

    #[test]
    fn lift_mov_l_pre_dec_store_decrements_rn_then_stores() {
        // MOV.L R5,@-R3 -> 0x2356
        let lifted = lift_bytes(0x2356, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Store));
        let sub_idx = lifted
            .ir_ops
            .iter()
            .position(|i| i.op == IrOp::Copy && i.output.map_or(false, |v| v.offset == 3 * 8))
            .expect("R3 copy");
        let store_idx = lifted
            .ir_ops
            .iter()
            .position(|i| i.op == IrOp::Store)
            .expect("store");
        assert!(
            sub_idx < store_idx,
            "pre-decrement must happen before store"
        );
    }

    #[test]
    fn lift_mov_b_store_truncates() {
        // MOV.B R5,@R3 -> 0x2350
        let lifted = lift_bytes(0x2350, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Subpiece));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn lift_shifts() {
        assert!(
            lift_bytes(0x4300, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntLeft)
        );
        assert!(
            lift_bytes(0x4301, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntRight)
        );
        assert!(
            lift_bytes(0x4321, 0)
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSright)
        );
    }

    #[test]
    fn lift_compares_write_t() {
        let cases = [
            (0x3350u16, IrOp::IntEqual),      // CMP/EQ
            (0x3352u16, IrOp::IntLessequal),  // CMP/HS
            (0x3353u16, IrOp::IntSlessequal), // CMP/GE
            (0x3356u16, IrOp::IntLess),       // CMP/HI
            (0x3357u16, IrOp::IntSless),      // CMP/GT
        ];
        for (hw, expected) in cases {
            let lifted = lift_bytes(hw, 0x1000);
            assert!(
                lifted.ir_ops.iter().any(|i| i.op == expected),
                "{hw:#06x}: expected {expected:?}"
            );
            assert!(
                lifted.ir_ops.iter().any(|i| i.op == IrOp::Copy
                    && i.output.map_or(false, |v| v.offset == 184 && v.size == 1)),
                "{hw:#06x}: T flag not written"
            );
        }
    }

    #[test]
    fn lift_bt_bf_cbranch() {
        let bt = lift_bytes(0x8902, 0x1000);
        assert!(bt.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(!bt.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));

        let bf = lift_bytes(0x8BFF, 0x1000);
        assert!(bf.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(bf.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn lift_bra_branches_to_pc_plus_4_plus_disp() {
        // BRA +6 -> 0xA003, target = 0x1000 + 4 + 6 = 0x100A.
        let lifted = lift_bytes(0xA003, 0x1000);
        let branch = lifted
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Branch)
            .expect("Branch op");
        assert_eq!(branch.inputs[0].offset, 0x100A);
    }

    #[test]
    fn lift_bsr_sets_pr_and_calls() {
        // BSR +0 (0xB000) at 0x2000 -> target = 0x2004, PR = 0x2004.
        let lifted = lift_bytes(0xB000, 0x2000);
        assert!(lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| v.offset == 128 && v.size == 4)
                && i.inputs.first().map_or(false, |c| c.offset == 0x2004)
        }));
        let call = lifted
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Call)
            .expect("Call");
        assert_eq!(call.inputs[0].offset, 0x2004);
    }

    #[test]
    fn lift_jsr_indirect_call() {
        // JSR @R5 -> 0x450B
        let lifted = lift_bytes(0x450B, 0x3000);
        assert!(lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| v.offset == 128)
                && i.inputs.first().map_or(false, |c| c.offset == 0x3004)
        }));
        let call = lifted
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Call)
            .expect("Call");
        assert_eq!(call.inputs[0].space, unlace_ir::SpaceId::Register);
        assert_eq!(call.inputs[0].offset, 5 * 8);
    }

    #[test]
    fn lift_rts_returns_from_pr() {
        let lifted = lift_bytes(0x000B, 0x4000);
        let ret = lifted
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Return)
            .expect("Return");
        assert_eq!(ret.inputs[0].space, unlace_ir::SpaceId::Register);
        assert_eq!(ret.inputs[0].offset, 128);
    }

    // ---------------------------------------------------------------------
    // Unknown / errors
    // ---------------------------------------------------------------------

    #[test]
    fn unknown_emits_unimplemented() {
        // Top nibble 0x9 isn't covered by the MVP -> Unimplemented.
        let lifted = lift_bytes(0x9000, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn short_buffer_error() {
        let lifter = ShLifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0x00], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            lifter.lift_insn(&[], 0),
            Err(LiftError::ShortBuffer)
        ));
    }
}
