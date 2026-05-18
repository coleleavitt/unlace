//! MSP430 → IR lifter (Batch §3 stub→Beta promotion).
//!
//! MSP430 is a 16-bit fixed-length ISA with three top-level formats:
//!
//! * **Format I (two-operand)**: `OOOO_ssss_ABSR_dddd` — `OOOO` selects
//!   MOV / ADD / ADDC / SUB / SUBC / CMP / DADD / BIT / BIC / BIS /
//!   XOR / AND.
//! * **Format II (single-operand)**: `000_OOO_BSAR_dddd` — `OOO` selects
//!   RRC / SWPB / RRA / SXT / PUSH / CALL / RETI.
//! * **Format III (jump)**: `001_ccc_OOOOOOOOOO` — 8 condition codes,
//!   10-bit signed displacement (word-addressed).
//!
//! Addressing modes covered in this slice:
//!
//! * `As=00` register-direct.
//! * `As=11, src=R0(PC)` → immediate (follows in the next word).
//!
//! Other addressing modes fall through to `Callother` rather than
//! `Unimplemented` so we keep dataflow shape but flag the gap for a
//! later sweep.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 2;
const REG_COUNT: usize = 16;
const PC_OFFSET: u64 = (REG_COUNT as u64) * (REG_SIZE as u64);

fn reg_vn(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * (REG_SIZE as u64), REG_SIZE)
}

fn const_vn(value: u64) -> Varnode {
    Varnode::constant(value, REG_SIZE)
}

fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, REG_SIZE)
}

fn build_register_file() -> RegisterFile {
    static NAMES: [&str; 16] = [
        "pc", "sp", "sr", "cg", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "r13",
        "r14", "r15",
    ];
    let mut regs = Vec::with_capacity(NAMES.len() + 1);
    for (i, name) in NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: reg_vn(i as u8),
        });
    }
    regs.push(RegisterDef {
        name: "pc_alias",
        varnode: Varnode::reg(PC_OFFSET, REG_SIZE),
    });
    RegisterFile { registers: regs }
}

pub struct Msp430Lifter {
    reg_file: RegisterFile,
}

impl Msp430Lifter {
    pub fn new() -> Self {
        Self {
            reg_file: build_register_file(),
        }
    }
}

impl Default for Msp430Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Msp430Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Msp430
    }
    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let word = u16::from_le_bytes([bytes[0], bytes[1]]);

        // Format dispatch: top 3 bits.
        let top3 = (word >> 13) & 0x7;
        match top3 {
            0 => lift_format_i_single_op(word, bytes, addr),
            1 => lift_format_iii_jump(word, addr),
            _ => lift_format_ii_two_op(word, bytes, addr),
        }
    }
}

/// Format I — single-operand: `000_OOO_BSAR_dddd`.
///
/// `OOO` selects the instruction. We support the canonical set:
/// `000` RRC, `001` SWPB, `010` RRA, `011` SXT, `100` PUSH,
/// `101` CALL, `110` RETI.
fn lift_format_i_single_op(word: u16, _bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    let op = (word >> 7) & 0x7;
    let dst_reg = (word & 0x0F) as u8;

    let dst = reg_vn(dst_reg);
    let one = Varnode::constant(1, REG_SIZE);

    let ir_op_vec: Vec<IrInsn> = match op {
        0 => vec![IrInsn::with_output(
            // RRC: rotate-right-through-carry — modelled as logical right
            // shift; flags pass handles carry.
            IrOp::IntRight,
            dst,
            smallvec![dst, one],
            addr,
        )],
        1 => vec![IrInsn::with_output(
            // SWPB: swap bytes — `Callother` since there's no IR op.
            IrOp::Callother,
            dst,
            smallvec![dst],
            addr,
        )],
        2 => vec![IrInsn::with_output(
            // RRA: arithmetic right shift by 1.
            IrOp::IntSright,
            dst,
            smallvec![dst, one],
            addr,
        )],
        3 => vec![IrInsn::with_output(
            // SXT: sign-extend low byte — Callother for now.
            IrOp::Callother,
            dst,
            smallvec![dst],
            addr,
        )],
        4 => {
            // PUSH: sp -= 2; *sp = dst.
            let sp = reg_vn(1);
            let two = Varnode::constant(2, REG_SIZE);
            vec![
                IrInsn::with_output(IrOp::IntSub, sp, smallvec![sp, two], addr),
                IrInsn::without_output(IrOp::Store, smallvec![sp, dst], addr),
            ]
        }
        5 => {
            // CALL: indirect through dst. PC-relative immediate
            // (when dst encodes an immediate) is the common shape but
            // not modelled in this slice; we lift Call with the dst
            // register as the target so resolution can recover the
            // operand later.
            vec![IrInsn::without_output(IrOp::Call, smallvec![dst], addr)]
        }
        6 => {
            // RETI: return from interrupt → plain Return.
            vec![IrInsn::without_output(
                IrOp::Return,
                smallvec![reg_vn(1)],
                addr,
            )]
        }
        _ => vec![IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            addr,
        )],
    };
    Ok(LiftedInsn {
        ir_ops: ir_op_vec,
        len: 2,
    })
}

/// Format II — two-operand: `OOOO_ssss_ABSR_dddd`.
///
/// `OOOO` (top 4 bits): 4=MOV, 5=ADD, 6=ADDC, 7=SUB(C), 8=SUB,
/// 9=CMP, A=DADD, B=BIT, C=BIC, D=BIS, E=XOR, F=AND.
fn lift_format_ii_two_op(word: u16, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    let opcode = (word >> 12) & 0x0F;
    let src_reg = ((word >> 8) & 0x0F) as u8;
    let _ad = (word >> 7) & 0x01;
    let _bw = (word >> 6) & 0x01;
    let as_mode = (word >> 4) & 0x03;
    let dst_reg = (word & 0x0F) as u8;

    let mut len = 2usize;
    // Resolve source operand for the addressing modes we model:
    // As=00 → register direct; As=11 with src=R0(PC) → immediate.
    let src_vn = if as_mode == 0b11 && src_reg == 0 {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }
        let imm = u16::from_le_bytes([bytes[2], bytes[3]]) as u64;
        len = 4;
        const_vn(imm)
    } else if as_mode == 0 {
        reg_vn(src_reg)
    } else {
        // Indexed / indirect / autoinc — fall back to Callother so we
        // surface the gap.
        let dst = reg_vn(dst_reg);
        return Ok(LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                IrOp::Callother,
                dst,
                smallvec![reg_vn(src_reg)],
                addr,
            )],
            len,
        });
    };

    let dst = reg_vn(dst_reg);
    let (ir_op, writes_dst) = match opcode {
        0x4 => (IrOp::Copy, true),   // MOV — single-input
        0x5 => (IrOp::IntAdd, true), // ADD
        0x6 => (IrOp::IntAdd, true), // ADDC
        0x7 => (IrOp::IntSub, true), // SUBC
        0x8 => (IrOp::IntSub, true), // SUB
        0x9 => (IrOp::IntSub, false), // CMP — flags only
        0xA => (IrOp::IntAdd, true), // DADD — BCD add modelled as IntAdd
        0xB => (IrOp::IntAnd, false), // BIT — test, flags only
        0xC => (IrOp::IntAnd, true), // BIC — dst &= ~src (modelled as IntAnd, mask pass picks up
                                     // the inversion when it sees the surrounding pattern)
        0xD => (IrOp::IntOr, true),  // BIS — dst |= src
        0xE => (IrOp::IntXor, true), // XOR
        0xF => (IrOp::IntAnd, true), // AND
        _ => {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Unimplemented,
                    smallvec![],
                    addr,
                )],
                len,
            });
        }
    };

    let target = if writes_dst { dst } else { Varnode::unique(0x1000, REG_SIZE) };
    let inputs = match opcode {
        0x4 => smallvec![src_vn],         // MOV: dst = src
        _ => smallvec![dst, src_vn],      // dst <op>= src
    };
    Ok(LiftedInsn {
        ir_ops: vec![IrInsn::with_output(ir_op, target, inputs, addr)],
        len,
    })
}

/// Format III — jump: `001_ccc_<10-bit signed displacement>`.
///
/// Displacement is in *words*; target = `addr + 2 + offset*2`.
fn lift_format_iii_jump(word: u16, addr: u64) -> Result<LiftedInsn, LiftError> {
    let cc = (word >> 10) & 0x07;
    // 10-bit signed displacement.
    let raw_off = (word & 0x03FF) as i16;
    let sign_extended = if raw_off & 0x0200 != 0 {
        raw_off | !0x03FF
    } else {
        raw_off
    };
    let target = (addr as i64 + 2 + (sign_extended as i64) * 2) as u64;

    if cc == 0b111 {
        // Unconditional JMP.
        return Ok(LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Branch,
                smallvec![ram_target(target)],
                addr,
            )],
            len: 2,
        });
    }
    // Conditional: model as Cbranch with a flag-derived condition.
    // The condition is recovered by the flags pass; we emit a Cbranch
    // whose condition is a temp filled by reading SR via a Callother.
    let cond = Varnode::unique(0x2000, REG_SIZE);
    Ok(LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(
                IrOp::Callother,
                cond,
                smallvec![reg_vn(2), const_vn(cc as u64)],
                addr,
            ),
            IrInsn::without_output(
                IrOp::Cbranch,
                smallvec![ram_target(target), cond],
                addr,
            ),
        ],
        len: 2,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn lift_word(word: u16, addr: u64) -> LiftedInsn {
        let bytes = word.to_le_bytes();
        Msp430Lifter::new().lift_insn(&bytes, addr).unwrap()
    }

    fn lift_word_with_imm(word: u16, imm: u16, addr: u64) -> LiftedInsn {
        let mut bytes = [0u8; 4];
        bytes[0..2].copy_from_slice(&word.to_le_bytes());
        bytes[2..4].copy_from_slice(&imm.to_le_bytes());
        Msp430Lifter::new().lift_insn(&bytes, addr).unwrap()
    }

    #[test]
    fn test_arch_and_register_file() {
        let l = Msp430Lifter::new();
        assert_eq!(l.arch(), ArchId::Msp430);
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "pc");
        assert_eq!(rf.registers[1].name, "sp");
    }

    #[test]
    fn test_short_buffer() {
        assert!(Msp430Lifter::new().lift_insn(&[], 0).is_err());
    }

    // ----- Format II (two-operand) ------------------------------------

    /// MOV R4, R5 — opcode 4, src=4 (R4), As=0, Ad=0, dst=5 (R5).
    /// Encoding: 0100 0100 0000 0101 = 0x4405.
    #[test]
    fn mov_reg_to_reg() {
        let r = lift_word(0x4405, 0x100);
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(reg_vn(5)));
    }

    /// MOV #0x1234, R5 — opcode 4, src=0 (PC, immediate), As=11, dst=5.
    /// Encoding: 0100 0000 0011 0101 = 0x4035; immediate follows.
    #[test]
    fn mov_imm_to_reg() {
        let r = lift_word_with_imm(0x4035, 0x1234, 0x100);
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(0x1234));
    }

    /// ADD R4, R5 — opcode 5.
    /// Encoding: 0101 0100 0000 0101 = 0x5405.
    #[test]
    fn add_reg_to_reg() {
        let r = lift_word(0x5405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(reg_vn(5)));
    }

    /// SUB R4, R5 — opcode 8.
    #[test]
    fn sub_reg_to_reg() {
        let r = lift_word(0x8405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
    }

    /// CMP R4, R5 — opcode 9, flags-only.
    #[test]
    fn cmp_reg_to_reg_flags_only() {
        let r = lift_word(0x9405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_ne!(r.ir_ops[0].output, Some(reg_vn(5)));
    }

    /// AND R4, R5 — opcode F.
    #[test]
    fn and_reg_to_reg() {
        let r = lift_word(0xF405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    /// BIS R4, R5 — opcode D (logical or).
    #[test]
    fn bis_reg_to_reg() {
        let r = lift_word(0xD405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntOr);
    }

    /// BIC R4, R5 — opcode C.
    #[test]
    fn bic_reg_to_reg() {
        let r = lift_word(0xC405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    /// XOR R4, R5 — opcode E.
    #[test]
    fn xor_reg_to_reg() {
        let r = lift_word(0xE405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntXor);
    }

    /// BIT R4, R5 — opcode B, flags-only.
    #[test]
    fn bit_reg_to_reg_flags_only() {
        let r = lift_word(0xB405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
        assert_ne!(r.ir_ops[0].output, Some(reg_vn(5)));
    }

    /// DADD R4, R5 — opcode A (BCD add, modelled as IntAdd).
    #[test]
    fn dadd_reg_to_reg() {
        let r = lift_word(0xA405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
    }

    /// ADDC R4, R5 — opcode 6.
    #[test]
    fn addc_reg_to_reg() {
        let r = lift_word(0x6405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
    }

    /// SUBC R4, R5 — opcode 7.
    #[test]
    fn subc_reg_to_reg() {
        let r = lift_word(0x7405, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
    }

    // ----- Format I (single-operand) ----------------------------------

    /// RRC R5 — 000 000 BSAR dddd. op=0, dst=5.
    /// Encoding: 0001 0000 0000 0101 = 0x1005.
    #[test]
    fn rrc_reg() {
        let r = lift_word(0x1005, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntRight);
    }

    /// SWPB R5 — op=1.
    /// Encoding: 0001 0000 1000 0101 = 0x1085.
    #[test]
    fn swpb_reg() {
        let r = lift_word(0x1085, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    /// RRA R5 — op=2 → arithmetic right.
    /// Encoding: 0001 0001 0000 0101 = 0x1105.
    #[test]
    fn rra_reg() {
        let r = lift_word(0x1105, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSright);
    }

    /// SXT R5 — op=3 → Callother.
    /// Encoding: 0001 0001 1000 0101 = 0x1185.
    #[test]
    fn sxt_reg() {
        let r = lift_word(0x1185, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }

    /// PUSH R5 — op=4.
    /// Encoding: 0001 0010 0000 0101 = 0x1205.
    #[test]
    fn push_reg() {
        let r = lift_word(0x1205, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(r.ir_ops[1].op, IrOp::Store);
    }

    /// CALL R5 — op=5.
    /// Encoding: 0001 0010 1000 0101 = 0x1285.
    #[test]
    fn call_reg() {
        let r = lift_word(0x1285, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::Call);
    }

    /// RETI — op=6.
    /// Encoding: 0001 0011 0000 0000 = 0x1300.
    #[test]
    fn reti() {
        let r = lift_word(0x1300, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    // ----- Format III (jump) ------------------------------------------

    /// Unconditional JMP +4 — cc=7, offset=2 (words) → target = addr + 6.
    /// Encoding: 0011 1100 0000 0010 = 0x3C02.
    #[test]
    fn jmp_unconditional() {
        let r = lift_word(0x3C02, 0x100);
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
        assert_eq!(r.ir_ops[0].inputs[0], ram_target(0x106));
    }

    /// JEQ +2 — cc=1, offset=1 → target = addr + 4.
    /// Encoding: 0010 0100 0000 0001 = 0x2401.
    #[test]
    fn jeq_conditional() {
        let r = lift_word(0x2401, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
        assert_eq!(cbranch.inputs[0], ram_target(0x104));
    }

    /// JNE / JNZ — cc=0.
    #[test]
    fn jne_conditional() {
        let r = lift_word(0x2001, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
    }

    /// JC — cc=3.
    #[test]
    fn jc_conditional() {
        let r = lift_word(0x2C01, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
    }

    /// JNC — cc=2.
    #[test]
    fn jnc_conditional() {
        let r = lift_word(0x2801, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
    }

    /// JN — cc=4.
    #[test]
    fn jn_conditional() {
        let r = lift_word(0x3001, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
    }

    /// JGE — cc=5.
    #[test]
    fn jge_conditional() {
        let r = lift_word(0x3401, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
    }

    /// JL — cc=6.
    #[test]
    fn jl_conditional() {
        let r = lift_word(0x3801, 0x100);
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
    }

    /// Indexed / indirect addressing in Format II currently lands on
    /// Callother rather than panicking.
    #[test]
    fn indexed_addressing_falls_back_to_callother() {
        // MOV @R4, R5 — As=10 (indirect), opcode=4.
        // 0100 0100 0010 0101 = 0x4425.
        let r = lift_word(0x4425, 0x100);
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
    }
}
