//! V850 -> IR lifter with custom instruction decoder.

mod decode;
mod lift;

use unlace_ir::{ArchId, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

const V850_REG_NAMES: [&str; 32] = [
    "r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13", "r14",
    "r15", "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", "r24", "r25", "r26", "r27",
    "r28", "r29", "r30", "r31",
];

pub struct V850Lifter {
    register_file: RegisterFile,
}

impl V850Lifter {
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(39);
        for (i, name) in V850_REG_NAMES.iter().enumerate() {
            regs.push(RegisterDef {
                name,
                varnode: Varnode::reg((i as u64) * 8, 4),
            });
        }
        regs.push(RegisterDef {
            name: "PC",
            varnode: Varnode::reg(256, 4),
        });
        regs.push(RegisterDef {
            name: "PSW",
            varnode: Varnode::reg(264, 4),
        });
        // PSW flag sub-registers (1-byte each, used by condition evaluation)
        regs.push(RegisterDef {
            name: "ZF",
            varnode: Varnode::reg(272, 1),
        });
        regs.push(RegisterDef {
            name: "SF",
            varnode: Varnode::reg(280, 1),
        });
        regs.push(RegisterDef {
            name: "OVF",
            varnode: Varnode::reg(288, 1),
        });
        regs.push(RegisterDef {
            name: "CYF",
            varnode: Varnode::reg(296, 1),
        });
        regs.push(RegisterDef {
            name: "SATF",
            varnode: Varnode::reg(304, 1),
        });
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }
}

impl Default for V850Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for V850Lifter {
    fn arch(&self) -> ArchId {
        ArchId::V850
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

    fn lift_bytes(bytes: &[u8], addr: u64) -> LiftedInsn {
        let lifter = V850Lifter::new();
        lifter.lift_insn(bytes, addr).expect("lift should succeed")
    }

    fn encode_format_i(reg2: u8, opcode: u8, reg1: u8) -> [u8; 2] {
        let hw: u16 = ((reg2 as u16) << 11) | ((opcode as u16) << 5) | (reg1 as u16);
        hw.to_le_bytes()
    }

    fn encode_format_vi(reg2: u8, opcode: u8, reg1: u8, imm16: u16) -> [u8; 4] {
        let hw0: u16 = ((reg2 as u16) << 11) | ((opcode as u16) << 5) | (reg1 as u16);
        let mut out = [0u8; 4];
        out[0..2].copy_from_slice(&hw0.to_le_bytes());
        out[2..4].copy_from_slice(&imm16.to_le_bytes());
        out
    }

    fn encode_format_vii(reg2: u8, opcode: u8, reg1: u8, disp: u16, gen_bit: u16) -> [u8; 4] {
        let hw0: u16 = ((reg2 as u16) << 11) | ((opcode as u16) << 5) | (reg1 as u16);
        let hw1: u16 = (disp << 1) | gen_bit;
        let mut out = [0u8; 4];
        out[0..2].copy_from_slice(&hw0.to_le_bytes());
        out[2..4].copy_from_slice(&hw1.to_le_bytes());
        out
    }

    // -- Register file --

    #[test]
    fn register_file_layout() {
        let lifter = V850Lifter::new();
        let rf = lifter.register_file();
        assert_eq!(rf.registers.len(), 39);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[31].name, "r31");
        assert_eq!(rf.registers[32].name, "PC");
        assert_eq!(rf.registers[33].name, "PSW");
        assert_eq!(rf.registers[34].name, "ZF");
        assert_eq!(rf.registers[38].name, "SATF");
    }

    #[test]
    fn arch_is_v850() {
        let lifter = V850Lifter::new();
        assert_eq!(lifter.arch(), ArchId::V850);
    }

    // -- NOP --

    #[test]
    fn lift_nop() {
        let lifted = lift_bytes(&[0x00, 0x00], 0x1000);
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
    }

    // -- MOV --

    #[test]
    fn lift_mov_reg() {
        let bytes = encode_format_i(5, 0b000000, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 2);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn lift_mov_imm5() {
        let bytes = encode_format_i(10, 0b010000, 7);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 2);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn lift_movea() {
        let bytes = encode_format_vi(5, 0b110001, 3, 0x0100);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 4);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn lift_movhi() {
        let bytes = encode_format_vi(5, 0b110010, 0, 0x1234);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 4);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    // -- Arithmetic --

    #[test]
    fn lift_add_reg() {
        let bytes = encode_format_i(10, 0b001110, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        // Should set flags: Z, S, CY (IntCarry), OV (IntScarry)
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntScarry));
    }

    #[test]
    fn lift_add_imm5() {
        let bytes = encode_format_i(10, 0b010010, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn lift_addi() {
        let bytes = encode_format_vi(5, 0b110000, 3, 0x0100);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
    }

    #[test]
    fn lift_sub_reg() {
        let bytes = encode_format_i(7, 0b001101, 2);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSborrow));
    }

    #[test]
    fn lift_cmp_reg() {
        let bytes = encode_format_i(8, 0b001111, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        // CMP should NOT have a Copy to a register (result discarded)
        let has_reg_copy = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Register && v.offset < 256 && v.size == 4
                })
        });
        assert!(!has_reg_copy, "CMP should not write to a GP register");
    }

    #[test]
    fn lift_cmp_imm5() {
        let bytes = encode_format_i(8, 0b010011, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    // -- Bitwise --

    #[test]
    fn lift_and_reg() {
        let bytes = encode_format_i(4, 0b001010, 6);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn lift_or_reg() {
        let bytes = encode_format_i(4, 0b001000, 6);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn lift_xor_reg() {
        let bytes = encode_format_i(4, 0b001001, 6);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    #[test]
    fn lift_tst() {
        let bytes = encode_format_i(4, 0b001011, 6);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
        // Should not write to a GP register
        let has_gp_write = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Register && v.offset < 256 && v.size == 4
                })
        });
        assert!(!has_gp_write, "TST should not write to a GP register");
    }

    #[test]
    fn lift_andi() {
        let bytes = encode_format_vi(5, 0b110110, 3, 0x00FF);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn lift_ori() {
        let bytes = encode_format_vi(5, 0b110100, 3, 0xFF00);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn lift_xori() {
        let bytes = encode_format_vi(5, 0b110101, 3, 0x1234);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    // -- Shifts --

    #[test]
    fn lift_shl_imm() {
        let bytes = encode_format_i(5, 0b010110, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
    }

    #[test]
    fn lift_shr_imm() {
        let bytes = encode_format_i(5, 0b010100, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
    }

    #[test]
    fn lift_sar_imm() {
        let bytes = encode_format_i(5, 0b010101, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    // -- Load/Store --

    #[test]
    fn lift_ld_w() {
        let bytes = encode_format_vii(5, 0b111001, 3, 8, 1);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 4);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }

    #[test]
    fn lift_ld_h() {
        let bytes = encode_format_vii(5, 0b111001, 3, 4, 0);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn lift_ld_b() {
        let hw0: u16 = (2 << 11) | (0b111000 << 5) | 1;
        let hw1: u16 = 0x000A;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn lift_st_w() {
        let bytes = encode_format_vii(5, 0b111011, 3, 8, 1);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn lift_st_b() {
        let hw0: u16 = (5 << 11) | (0b111010 << 5) | 3;
        let hw1: u16 = 0x0010;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Store));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Subpiece));
    }

    // -- Control flow --

    #[test]
    fn lift_jmp_r31_is_return() {
        let bytes = encode_format_i(0, 0b000011, 31);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Return));
    }

    #[test]
    fn lift_jmp_indirect() {
        let bytes = encode_format_i(0, 0b000011, 10);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Branchind));
    }

    #[test]
    fn lift_jr_22bit() {
        let hw0: u16 = (0u16 << 11) | (0b11110 << 6) | 0;
        let hw1: u16 = 0x0100;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    }

    #[test]
    fn lift_jarl_22bit() {
        let hw0: u16 = (31u16 << 11) | (0b11110 << 6) | 0;
        let hw1: u16 = 0x0200;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x2000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Call));
        // Link register should get return address
        assert!(lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Register && v.offset == 31 * 8
                })
        }));
    }

    #[test]
    fn lift_bcond_bne() {
        let disp_hi: u16 = 0;
        let disp_lo: u16 = 4;
        let cond: u16 = 10; // BNE
        let hw: u16 = (disp_hi << 11) | (0b1011 << 7) | (disp_lo << 4) | cond;
        let bytes = hw.to_le_bytes();
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    }

    #[test]
    fn lift_bcond_be() {
        let disp_hi: u16 = 1;
        let disp_lo: u16 = 0;
        let cond: u16 = 2; // BE
        let hw: u16 = (disp_hi << 11) | (0b1011 << 7) | (disp_lo << 4) | cond;
        let bytes = hw.to_le_bytes();
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    #[test]
    fn lift_bcond_br_unconditional() {
        let cond: u16 = 5; // BR (always)
        let hw: u16 = (1 << 11) | (0b1011 << 7) | (0 << 4) | cond;
        let bytes = hw.to_le_bytes();
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    }

    // -- Extension ops --

    #[test]
    fn lift_zxb() {
        let bytes = encode_format_i(0, 0b000100, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn lift_sxb() {
        let bytes = encode_format_i(0, 0b000101, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn lift_zxh() {
        let bytes = encode_format_i(0, 0b000110, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn lift_sxh() {
        let bytes = encode_format_i(0, 0b000111, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    // -- NOT --

    #[test]
    fn lift_not() {
        let bytes = encode_format_i(5, 0b000001, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntNegate));
    }

    // -- Unknown/Unimplemented --

    #[test]
    fn lift_unknown_emits_unimplemented() {
        // Extended-32 with an unrecognized sub-opcode (0x3F primary opcode,
        // sub-op 0x3F in hw1) — should fall through to Unknown → Unimplemented.
        let hw0: u16 = (5 << 11) | (0x3F << 5) | 0;
        let hw1: u16 = (0 << 11) | (0x3F << 5) | 0;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    // -- Short buffer --

    #[test]
    fn short_buffer_error() {
        let lifter = V850Lifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0x00], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            lifter.lift_insn(&[], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    // -- r0 writes are discarded --

    #[test]
    fn write_to_r0_is_noop() {
        // MOV r5, r0 — should not produce a Copy to register offset 0
        let bytes = encode_format_i(0, 0b000000, 5);
        let lifted = lift_bytes(&bytes, 0x1000);
        let has_r0_write = lifted.ir_ops.iter().any(|i| {
            i.output.map_or(false, |v| {
                v.space == unlace_ir::SpaceId::Register && v.offset == 0 && v.size == 4
            })
        });
        assert!(!has_r0_write, "Writes to r0 should be silently discarded");
    }

    // -- MULH --

    #[test]
    fn lift_mulh() {
        let bytes = encode_format_i(5, 0b000111, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
    }

    // -- SUBR --

    #[test]
    fn lift_subr() {
        let bytes = encode_format_i(7, 0b001100, 2);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    // -- t347: RH850/V850 deep extensions ---------------------------------
    // Six tests covering the new instruction families.

    /// SATADD reg-reg lowers to a tagged Callother whose result lands in dst.
    #[test]
    fn lift_satadd_reg_is_callother() {
        // Format I: (0b0001, 0b10) with reg2 != 0 ⇒ SATADD reg1, reg2
        let bytes = encode_format_i(7, 0b000110, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 2);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Callother));
        let has_satadd_tag = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Callother
                && i.inputs.first().map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Const && v.offset == 0x800
                })
        });
        assert!(has_satadd_tag, "SATADD should emit Callother(tag=0x800, ...)");
    }

    /// SATSUB reg-reg uses the SATSUB tag (0x801).
    #[test]
    fn lift_satsub_reg_is_callother() {
        // Format I: (0b0001, 0b01) with reg2 != 0 ⇒ SATSUB reg1, reg2
        let bytes = encode_format_i(7, 0b000101, 3);
        let lifted = lift_bytes(&bytes, 0x1000);
        let has_satsub_tag = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Callother
                && i.inputs.first().map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Const && v.offset == 0x801
                })
        });
        assert!(has_satsub_tag, "SATSUB should emit Callother(tag=0x801, ...)");
    }

    /// MUL Format XI emits a 64-bit IntMult split into low/high subpieces.
    #[test]
    fn lift_mul_format_xi() {
        // hw0: reg2=5, opcode_10_5=0x3F, reg1=3
        let hw0: u16 = (5 << 11) | (0x3F << 5) | 3;
        // hw1: reg3=6, sub-opcode 0x22 (MUL), bit0=0
        let hw1: u16 = (6 << 11) | (0x22 << 5) | 0;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 4);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        // Should sign-extend operands (signed MUL) and split with Subpiece.
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Subpiece));
    }

    /// DIV Format XI emits IntSdiv for quotient and IntSrem for remainder.
    #[test]
    fn lift_div_format_xi() {
        // hw0: reg2=8, opcode_10_5=0x3F, reg1=2
        let hw0: u16 = (8 << 11) | (0x3F << 5) | 2;
        // hw1: reg3=9, sub-opcode 0x2C (DIV signed), bit0=0
        let hw1: u16 = (9 << 11) | (0x2C << 5) | 0;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 4);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSdiv));
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::IntSrem));
    }

    /// SLD.W lifts to a Load with the EP register (r30) as base.
    #[test]
    fn lift_sld_w_uses_ep_base() {
        // Format IV: hw0 = reg2(5) << 11 | 0b1010 << 7 | disp8 (bit0=0 for SLD.W).
        // disp8 = 0x08 (low bit must be 0) ⇒ byte disp = 0x10.
        let hw: u16 = (5u16 << 11) | (0b1010 << 7) | 0x08;
        let bytes = hw.to_le_bytes();
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 2);
        assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Load));
        // Base address calc should reference EP = r30 (offset 30*8 = 240).
        let reads_ep = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::IntAdd
                && i.inputs.iter().any(|v| {
                    v.space == unlace_ir::SpaceId::Register && v.offset == 30 * 8
                })
        });
        assert!(reads_ep, "SLD.W should compute address as EP + disp");
    }

    /// BSW (byte-swap-word) lifts to a tagged Callother (tag 0x803).
    #[test]
    fn lift_bsw_is_callother() {
        // hw0: reg2=4 (src), opcode_10_5=0x3F, reg1=0
        let hw0: u16 = (4 << 11) | (0x3F << 5) | 0;
        // hw1: reg3=7 (dst), sub-opcode 0x14, bit0=0 ⇒ BSW
        let hw1: u16 = (7 << 11) | (0x14 << 5) | 0;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&hw0.to_le_bytes());
        bytes.extend_from_slice(&hw1.to_le_bytes());
        let lifted = lift_bytes(&bytes, 0x1000);
        assert_eq!(lifted.len, 4);
        let has_bsw_tag = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Callother
                && i.inputs.first().map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Const && v.offset == 0x803
                })
        });
        assert!(has_bsw_tag, "BSW should emit Callother(tag=0x803, src)");
        // Result should be copied into reg3 (offset 56).
        let writes_reg3 = lifted.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.map_or(false, |v| {
                    v.space == unlace_ir::SpaceId::Register && v.offset == 7 * 8
                })
        });
        assert!(writes_reg3, "BSW should write to reg3");
    }

    // -- 32-bit instruction needs 4 bytes --

    #[test]
    fn short_buffer_for_32bit() {
        // ADDI needs 4 bytes — only give 2
        let hw0: u16 = (5 << 11) | (0b110000 << 5) | 3;
        let lifter = V850Lifter::new();
        assert!(matches!(
            lifter.lift_insn(&hw0.to_le_bytes(), 0),
            Err(LiftError::ShortBuffer)
        ));
    }
}
