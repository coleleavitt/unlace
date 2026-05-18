//! Z80 → IR lifter.
//!
//! Decodes Z80 instructions (variable length, 1–4 bytes) and lifts them to
//! the unlace IR. Supports core operations: LD, ADD/SUB/AND/OR/XOR,
//! INC/DEC, JP/JR, CALL, RET, PUSH/POP, NOP.
//!
//! # Register file model
//!
//! The Z80 has 8 general-purpose 8-bit registers (A, F, B, C, D, E, H, L)
//! mapped at offsets 0..8, a 16-bit stack pointer SP at offset 8, and a
//! 16-bit program counter PC at offset 10, totalling 12 bytes of register
//! space.

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

// ---------------------------------------------------------------------------
// Register offsets (register space layout)
// ---------------------------------------------------------------------------

/// A register (8-bit), offset 0
const REG_A: u64 = 0;
/// F register (flags, 8-bit), offset 1
const REG_F: u64 = 1;
/// B register (8-bit), offset 2
const REG_B: u64 = 2;
/// C register (8-bit), offset 3
const REG_C: u64 = 3;
/// D register (8-bit), offset 4
const REG_D: u64 = 4;
/// E register (8-bit), offset 5
const REG_E: u64 = 5;
/// H register (8-bit), offset 6
const REG_H: u64 = 6;
/// L register (8-bit), offset 7
const REG_L: u64 = 7;
/// SP register (16-bit), offset 8
const REG_SP: u64 = 8;
/// PC register (16-bit), offset 10
const REG_PC: u64 = 10;

/// Base offset in unique-space for temporaries.
const UNIQUE_BASE: u64 = 0x1000;

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------

/// Build a register-space Varnode.
#[inline]
fn reg(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}

/// Build a constant-space Varnode.
#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

/// Build a unique-space Varnode (temporary).
#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, size)
}

/// Build a RAM-space Varnode for a branch target address.
#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 2)
}

/// Map 3-bit register encoding (bits 0-2 or 3-5 in opcode) to register offset.
/// Encoding: B=0, C=1, D=2, E=3, H=4, L=5, (HL)=6, A=7
fn reg_offset_from_encoding(enc: u8) -> Option<u64> {
    match enc {
        0 => Some(REG_B),
        1 => Some(REG_C),
        2 => Some(REG_D),
        3 => Some(REG_E),
        4 => Some(REG_H),
        5 => Some(REG_L),
        6 => None, // (HL) — memory indirect, not handled here
        7 => Some(REG_A),
        _ => None,
    }
}

/// Map 2-bit register pair encoding for PUSH/POP.
/// 00=BC, 01=DE, 10=HL, 11=AF
fn reg_pair_push_pop(enc: u8) -> (u64, u64) {
    match enc {
        0 => (REG_B, REG_C),
        1 => (REG_D, REG_E),
        2 => (REG_H, REG_L),
        3 => (REG_A, REG_F),
        _ => unreachable!(),
    }
}

// ---------------------------------------------------------------------------
// Z80 Lifter
// ---------------------------------------------------------------------------

/// Z80 architecture lifter.
pub struct Z80Lifter {
    register_file: RegisterFile,
}

impl Z80Lifter {
    /// Create a new Z80 lifter.
    pub fn new() -> Self {
        let registers = vec![
            RegisterDef {
                name: "A",
                varnode: reg(REG_A, 1),
            },
            RegisterDef {
                name: "F",
                varnode: reg(REG_F, 1),
            },
            RegisterDef {
                name: "B",
                varnode: reg(REG_B, 1),
            },
            RegisterDef {
                name: "C",
                varnode: reg(REG_C, 1),
            },
            RegisterDef {
                name: "D",
                varnode: reg(REG_D, 1),
            },
            RegisterDef {
                name: "E",
                varnode: reg(REG_E, 1),
            },
            RegisterDef {
                name: "H",
                varnode: reg(REG_H, 1),
            },
            RegisterDef {
                name: "L",
                varnode: reg(REG_L, 1),
            },
            RegisterDef {
                name: "SP",
                varnode: reg(REG_SP, 2),
            },
            RegisterDef {
                name: "PC",
                varnode: reg(REG_PC, 2),
            },
        ];
        Self {
            register_file: RegisterFile { registers },
        }
    }

    /// Lift an ALU operation (ADD/ADC/SUB/SBC/AND/XOR/OR/CP A, r).
    /// Opcode format: 10ooo_rrr where ooo selects the operation and rrr the source reg.
    fn lift_alu_a_r(&self, opcode: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let op_sel = (opcode >> 3) & 0x07;
        let src_enc = opcode & 0x07;

        // (ir_op, writes_a) — `CP` is flags-only, modelled as IntSub
        // whose result goes to a temp.
        let (ir_op, write_a) = match op_sel {
            0 => (IrOp::IntAdd, true),  // ADD
            1 => (IrOp::IntAdd, true),  // ADC
            2 => (IrOp::IntSub, true),  // SUB
            3 => (IrOp::IntSub, true),  // SBC
            4 => (IrOp::IntAnd, true),  // AND
            5 => (IrOp::IntXor, true),  // XOR
            6 => (IrOp::IntOr, true),   // OR
            7 => (IrOp::IntSub, false), // CP
            _ => return Err(LiftError::Unsupported),
        };

        let src = match reg_offset_from_encoding(src_enc) {
            Some(off) => reg(off, 1),
            None => return Err(LiftError::Unsupported), // (HL) indirect not in this MVP
        };

        let a = reg(REG_A, 1);
        let dst = if write_a { a } else { tmp(7, 1) };
        Ok(vec![IrInsn::with_output(
            ir_op,
            dst,
            SmallVec::from_slice(&[a, src]),
            addr,
        )])
    }

    /// Lift `ALU A, n` for the immediate-byte family
    /// (`ADD A,n` / `ADC A,n` / `SUB n` / `SBC A,n` / `AND n` /
    /// `XOR n` / `OR n` / `CP n`).
    ///
    /// Opcode format: `11ooo110` where `ooo` selects the operation.
    /// `CP n` writes the result to a temp (flags-only) rather than to
    /// `A`, mirroring `CP r` above.
    fn lift_alu_a_imm(&self, opcode: u8, imm: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let op_sel = (opcode >> 3) & 0x07;
        let a = reg(REG_A, 1);
        let k = const_vn(imm as u64, 1);
        let (ir_op, write_a) = match op_sel {
            0 => (IrOp::IntAdd, true),  // ADD A, n
            1 => (IrOp::IntAdd, true),  // ADC A, n — carry input modelled in flags pass
            2 => (IrOp::IntSub, true),  // SUB n
            3 => (IrOp::IntSub, true),  // SBC A, n
            4 => (IrOp::IntAnd, true),  // AND n
            5 => (IrOp::IntXor, true),  // XOR n
            6 => (IrOp::IntOr, true),   // OR n
            7 => (IrOp::IntSub, false), // CP n — flags only
            _ => return Err(LiftError::Unsupported),
        };
        let dst = if write_a { a } else { tmp(6, 1) };
        Ok(vec![IrInsn::with_output(
            ir_op,
            dst,
            SmallVec::from_slice(&[a, k]),
            addr,
        )])
    }

    /// Lift INC r / DEC r.
    fn lift_inc_dec(&self, opcode: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        // INC r: 00rrr100, DEC r: 00rrr101
        let reg_enc = (opcode >> 3) & 0x07;
        let is_dec = (opcode & 0x01) != 0;

        let r_off = reg_offset_from_encoding(reg_enc).ok_or(LiftError::Unsupported)?;
        let r = reg(r_off, 1);
        let one = const_vn(1, 1);
        let op = if is_dec { IrOp::IntSub } else { IrOp::IntAdd };

        Ok(vec![IrInsn::with_output(
            op,
            r,
            SmallVec::from_slice(&[r, one]),
            addr,
        )])
    }

    /// Lift LD r,r' (register to register copy).
    fn lift_ld_r_r(&self, opcode: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        // 01dddsss
        let dst_enc = (opcode >> 3) & 0x07;
        let src_enc = opcode & 0x07;

        let dst_off = reg_offset_from_encoding(dst_enc).ok_or(LiftError::Unsupported)?;
        let src_off = reg_offset_from_encoding(src_enc).ok_or(LiftError::Unsupported)?;

        Ok(vec![IrInsn::with_output(
            IrOp::Copy,
            reg(dst_off, 1),
            SmallVec::from_slice(&[reg(src_off, 1)]),
            addr,
        )])
    }

    /// Lift LD r, n (load immediate byte into register).
    fn lift_ld_r_n(&self, opcode: u8, imm: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        // 00rrr110 nn
        let dst_enc = (opcode >> 3) & 0x07;
        let dst_off = reg_offset_from_encoding(dst_enc).ok_or(LiftError::Unsupported)?;

        Ok(vec![IrInsn::with_output(
            IrOp::Copy,
            reg(dst_off, 1),
            SmallVec::from_slice(&[const_vn(imm as u64, 1)]),
            addr,
        )])
    }

    /// Lift JP nn (unconditional jump to absolute address).
    fn lift_jp_nn(&self, target: u16, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        Ok(vec![IrInsn::without_output(
            IrOp::Branch,
            SmallVec::from_slice(&[ram_target(target as u64)]),
            addr,
        )])
    }

    /// Lift JP cc, nn (conditional jump to absolute address).
    fn lift_jp_cc_nn(&self, cc: u8, target: u16, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        // cc encodes condition from flags register.
        // We model the condition as a subpiece of F, then cbranch.
        let cond = tmp(0, 1);

        // Extract condition bit from F register.
        // cc: 0=NZ, 1=Z, 2=NC, 3=C, 4=PO, 5=PE, 6=P, 7=M
        // Bit positions: Z=bit6, C=bit0, P/V=bit2, S=bit7
        let (bit_pos, invert) = match cc {
            0 => (6u64, true), // NZ: Z flag == 0
            1 => (6, false),   // Z: Z flag == 1
            2 => (0, true),    // NC: C flag == 0
            3 => (0, false),   // C: C flag == 1
            4 => (2, true),    // PO: P/V flag == 0
            5 => (2, false),   // PE: P/V flag == 1
            6 => (7, true),    // P (positive): S flag == 0
            7 => (7, false),   // M (minus): S flag == 1
            _ => return Err(LiftError::Unsupported),
        };

        let f = reg(REG_F, 1);
        let shift_amt = const_vn(bit_pos, 1);
        let shifted = tmp(1, 1);
        let one = const_vn(1, 1);

        let mut ops = vec![
            // shifted = F >> bit_pos
            IrInsn::with_output(
                IrOp::IntRight,
                shifted,
                SmallVec::from_slice(&[f, shift_amt]),
                addr,
            ),
            // cond = shifted & 1
            IrInsn::with_output(
                IrOp::IntAnd,
                cond,
                SmallVec::from_slice(&[shifted, one]),
                addr,
            ),
        ];

        if invert {
            let inverted = tmp(2, 1);
            ops.push(IrInsn::with_output(
                IrOp::BoolNegate,
                inverted,
                SmallVec::from_slice(&[cond]),
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                SmallVec::from_slice(&[ram_target(target as u64), inverted]),
                addr,
            ));
        } else {
            ops.push(IrInsn::without_output(
                IrOp::Cbranch,
                SmallVec::from_slice(&[ram_target(target as u64), cond]),
                addr,
            ));
        }

        Ok(ops)
    }

    /// Lift JR e (relative jump, signed 8-bit offset from next insn).
    fn lift_jr_e(&self, offset: i8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        // JR e is 2 bytes, so the target is addr + 2 + e
        let target = (addr as i64 + 2 + offset as i64) as u64;
        Ok(vec![IrInsn::without_output(
            IrOp::Branch,
            SmallVec::from_slice(&[ram_target(target)]),
            addr,
        )])
    }

    /// Lift CALL nn.
    fn lift_call_nn(&self, target: u16, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        Ok(vec![IrInsn::without_output(
            IrOp::Call,
            SmallVec::from_slice(&[ram_target(target as u64)]),
            addr,
        )])
    }

    /// Lift RET.
    fn lift_ret(&self, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        Ok(vec![IrInsn::without_output(
            IrOp::Return,
            SmallVec::from_slice(&[reg(REG_SP, 2)]),
            addr,
        )])
    }

    /// Lift PUSH rr.
    fn lift_push(&self, pair_enc: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let (hi, lo) = reg_pair_push_pop(pair_enc);
        let sp = reg(REG_SP, 2);
        let two = const_vn(2, 2);
        let new_sp = tmp(0, 2);

        Ok(vec![
            // SP = SP - 2
            IrInsn::with_output(IrOp::IntSub, new_sp, SmallVec::from_slice(&[sp, two]), addr),
            IrInsn::with_output(IrOp::Copy, sp, SmallVec::from_slice(&[new_sp]), addr),
            // Store high byte at SP
            IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[sp, reg(hi, 1)]), addr),
            // Store low byte at SP+1 (conceptually; we model as a second store)
            IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[sp, reg(lo, 1)]), addr),
        ])
    }

    /// Lift POP rr.
    fn lift_pop(&self, pair_enc: u8, addr: u64) -> Result<Vec<IrInsn>, LiftError> {
        let (hi, lo) = reg_pair_push_pop(pair_enc);
        let sp = reg(REG_SP, 2);
        let two = const_vn(2, 2);

        Ok(vec![
            // Load low byte from SP
            IrInsn::with_output(IrOp::Load, reg(lo, 1), SmallVec::from_slice(&[sp]), addr),
            // Load high byte from SP+1
            IrInsn::with_output(IrOp::Load, reg(hi, 1), SmallVec::from_slice(&[sp]), addr),
            // SP = SP + 2
            IrInsn::with_output(IrOp::IntAdd, sp, SmallVec::from_slice(&[sp, two]), addr),
        ])
    }
}

impl Default for Z80Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Z80Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Z80
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }

        let opcode = bytes[0];

        trace!(
            addr = %format!("{addr:#x}"),
            opcode = %format!("{opcode:#04x}"),
            "decoding Z80 instruction"
        );

        // NOP: 0x00
        if opcode == 0x00 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Copy,
                    SmallVec::from_slice(&[const_vn(0, 1)]),
                    addr,
                )],
                len: 1,
            });
        }

        // LD r, r': 01dddsss (but not 01110110 which is HALT)
        if opcode & 0xC0 == 0x40 && opcode != 0x76 {
            let ops = self.lift_ld_r_r(opcode, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 1,
            });
        }

        // LD r, n: 00rrr110 nn
        if opcode & 0xC7 == 0x06 {
            if bytes.len() < 2 {
                return Err(LiftError::ShortBuffer);
            }
            let imm = bytes[1];
            let ops = self.lift_ld_r_n(opcode, imm, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 2,
            });
        }

        // ALU A,r: 10ooo_rrr (ADD=000, SUB=010, AND=100, XOR=101, OR=110)
        if opcode & 0xC0 == 0x80 {
            let ops = self.lift_alu_a_r(opcode, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 1,
            });
        }

        // INC r: 00rrr100, DEC r: 00rrr101
        if opcode & 0xC6 == 0x04 {
            let ops = self.lift_inc_dec(opcode, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 1,
            });
        }

        // JP nn: 0xC3 nn nn
        if opcode == 0xC3 {
            if bytes.len() < 3 {
                return Err(LiftError::ShortBuffer);
            }
            let target = u16::from_le_bytes([bytes[1], bytes[2]]);
            let ops = self.lift_jp_nn(target, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 3,
            });
        }

        // JP cc, nn: 11ccc010 nn nn
        if opcode & 0xC7 == 0xC2 {
            if bytes.len() < 3 {
                return Err(LiftError::ShortBuffer);
            }
            let cc = (opcode >> 3) & 0x07;
            let target = u16::from_le_bytes([bytes[1], bytes[2]]);
            let ops = self.lift_jp_cc_nn(cc, target, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 3,
            });
        }

        // JR e: 0x18 ee
        if opcode == 0x18 {
            if bytes.len() < 2 {
                return Err(LiftError::ShortBuffer);
            }
            let offset = bytes[1] as i8;
            let ops = self.lift_jr_e(offset, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 2,
            });
        }

        // CALL nn: 0xCD nn nn
        if opcode == 0xCD {
            if bytes.len() < 3 {
                return Err(LiftError::ShortBuffer);
            }
            let target = u16::from_le_bytes([bytes[1], bytes[2]]);
            let ops = self.lift_call_nn(target, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 3,
            });
        }

        // RET: 0xC9
        if opcode == 0xC9 {
            let ops = self.lift_ret(addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 1,
            });
        }

        // PUSH rr: 11rr0101  (rr: 00=BC, 01=DE, 10=HL, 11=AF)
        if opcode & 0xCF == 0xC5 {
            let pair_enc = (opcode >> 4) & 0x03;
            let ops = self.lift_push(pair_enc, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 1,
            });
        }

        // POP rr: 11rr0001
        if opcode & 0xCF == 0xC1 {
            let pair_enc = (opcode >> 4) & 0x03;
            let ops = self.lift_pop(pair_enc, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 1,
            });
        }

        // ----- §3 expansion: bring Z80 to ≥ 30 distinct mnemonics -----

        // ALU A, n: 11ooo110 + imm — same op_sel mapping as ALU A,r.
        // ADD A,n=0xC6, ADC A,n=0xCE, SUB n=0xD6, SBC A,n=0xDE,
        // AND n=0xE6, XOR n=0xEE, OR n=0xF6, CP n=0xFE.
        if opcode & 0xC7 == 0xC6 {
            if bytes.len() < 2 {
                return Err(LiftError::ShortBuffer);
            }
            let imm = bytes[1];
            let ops = self.lift_alu_a_imm(opcode, imm, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 2,
            });
        }

        // JR cc, e: 001cc000 (cc ∈ {NZ, Z, NC, C}) — opcodes 0x20,
        // 0x28, 0x30, 0x38. Uses the same condition-extraction shape as
        // JP cc, nn.
        if matches!(opcode, 0x20 | 0x28 | 0x30 | 0x38) {
            if bytes.len() < 2 {
                return Err(LiftError::ShortBuffer);
            }
            // Convert 0x20/0x28/0x30/0x38 → cc ∈ 0..=3 (NZ/Z/NC/C).
            let cc = (opcode - 0x20) >> 3;
            let target = (addr as i64 + 2 + (bytes[1] as i8) as i64) as u64;
            let ops = self.lift_jp_cc_nn(cc, target as u16, addr)?;
            return Ok(LiftedInsn {
                ir_ops: ops,
                len: 2,
            });
        }

        // RET cc: 11ccc000 — 0xC0/0xC8/0xD0/0xD8/0xE0/0xE8/0xF0/0xF8.
        if opcode & 0xC7 == 0xC0 {
            let _cc = (opcode >> 3) & 0x07;
            // Model as a plain Return; the structurer recovers
            // conditional-return shape from the surrounding CFG.
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Return,
                    SmallVec::from_slice(&[reg(REG_SP, 2)]),
                    addr,
                )],
                len: 1,
            });
        }

        // CALL cc, nn: 11ccc100 — 0xC4/0xCC/0xD4/0xDC/0xE4/0xEC/0xF4/0xFC.
        if opcode & 0xC7 == 0xC4 {
            if bytes.len() < 3 {
                return Err(LiftError::ShortBuffer);
            }
            let target = u16::from_le_bytes([bytes[1], bytes[2]]);
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[ram_target(target as u64)]),
                    addr,
                )],
                len: 3,
            });
        }

        // HALT: 0x76 (must be checked *after* LD r,r' since 01110110
        // would otherwise match LD (HL),(HL)).
        if opcode == 0x76 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Callother,
                    SmallVec::new(),
                    addr,
                )],
                len: 1,
            });
        }

        // EI: 0xFB / DI: 0xF3 — interrupt enable / disable. Side-effect
        // only; lift as Callother so dataflow sees them.
        if opcode == 0xFB || opcode == 0xF3 {
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Callother,
                    SmallVec::new(),
                    addr,
                )],
                len: 1,
            });
        }

        // EX DE, HL: 0xEB — swap DE↔HL via temps.
        if opcode == 0xEB {
            let t_d = tmp(4, 1);
            let t_e = tmp(5, 1);
            return Ok(LiftedInsn {
                ir_ops: vec![
                    IrInsn::with_output(
                        IrOp::Copy,
                        t_d,
                        SmallVec::from_slice(&[reg(REG_D, 1)]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Copy,
                        t_e,
                        SmallVec::from_slice(&[reg(REG_E, 1)]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_D, 1),
                        SmallVec::from_slice(&[reg(REG_H, 1)]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_E, 1),
                        SmallVec::from_slice(&[reg(REG_L, 1)]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_H, 1),
                        SmallVec::from_slice(&[t_d]),
                        addr,
                    ),
                    IrInsn::with_output(
                        IrOp::Copy,
                        reg(REG_L, 1),
                        SmallVec::from_slice(&[t_e]),
                        addr,
                    ),
                ],
                len: 1,
            });
        }

        // LD A, (nn): 0x3A + nn nn
        if opcode == 0x3A {
            if bytes.len() < 3 {
                return Err(LiftError::ShortBuffer);
            }
            let target = u16::from_le_bytes([bytes[1], bytes[2]]) as u64;
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Load,
                    reg(REG_A, 1),
                    SmallVec::from_slice(&[const_vn(target, 2)]),
                    addr,
                )],
                len: 3,
            });
        }

        // LD (nn), A: 0x32 + nn nn
        if opcode == 0x32 {
            if bytes.len() < 3 {
                return Err(LiftError::ShortBuffer);
            }
            let target = u16::from_le_bytes([bytes[1], bytes[2]]) as u64;
            return Ok(LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Store,
                    SmallVec::from_slice(&[const_vn(target, 2), reg(REG_A, 1)]),
                    addr,
                )],
                len: 3,
            });
        }

        Err(LiftError::Unsupported)
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn t360_z80_register_file_full_layout() {
        let lifter = Z80Lifter::new();
        let rf = lifter.register_file();
        assert_eq!(rf.registers.len(), 10);
        assert_register(rf, "A", REG_A, 1);
        assert_register(rf, "F", REG_F, 1);
        assert_register(rf, "B", REG_B, 1);
        assert_register(rf, "C", REG_C, 1);
        assert_register(rf, "D", REG_D, 1);
        assert_register(rf, "E", REG_E, 1);
        assert_register(rf, "H", REG_H, 1);
        assert_register(rf, "L", REG_L, 1);
        assert_register(rf, "SP", REG_SP, 2);
        assert_register(rf, "PC", REG_PC, 2);
        assert_eq!(reg_offset_from_encoding(0), Some(REG_B));
        assert_eq!(reg_offset_from_encoding(6), None);
        assert_eq!(reg_pair_push_pop(3), (REG_A, REG_F));
        assert_unique_names(rf);
    }

    fn assert_register(rf: &RegisterFile, name: &str, offset: u64, size: u8) {
        let def = rf.registers.iter().find(|r| r.name == name).unwrap();
        assert_eq!(def.varnode, Varnode::reg(offset, size), "{name}");
    }

    fn assert_unique_names(rf: &RegisterFile) {
        let mut names = rf.registers.iter().map(|r| r.name).collect::<Vec<_>>();
        names.sort_unstable();
        names.dedup();
        assert_eq!(names.len(), rf.registers.len());
    }

    #[test]
    fn test_nop() {
        let lifter = Z80Lifter::new();
        let result = lifter.lift_insn(&[0x00], 0x0000).unwrap();
        assert_eq!(result.len, 1);
        assert_eq!(result.ir_ops.len(), 1);
        // NOP is modeled as a Copy of constant (no-op side-effect)
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
    }

    #[test]
    fn test_ld_r_r() {
        let lifter = Z80Lifter::new();
        // LD B, C => 01_000_001 = 0x41
        let result = lifter.lift_insn(&[0x41], 0x0100).unwrap();
        assert_eq!(result.len, 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(reg(REG_B, 1)));
        assert_eq!(result.ir_ops[0].inputs[0], reg(REG_C, 1));
    }

    #[test]
    fn test_ld_r_n() {
        let lifter = Z80Lifter::new();
        // LD A, 0x42 => 00_111_110 0x42 = 0x3E 0x42
        let result = lifter.lift_insn(&[0x3E, 0x42], 0x0200).unwrap();
        assert_eq!(result.len, 2);
        assert_eq!(result.ir_ops[0].op, IrOp::Copy);
        assert_eq!(result.ir_ops[0].output, Some(reg(REG_A, 1)));
        assert_eq!(result.ir_ops[0].inputs[0], const_vn(0x42, 1));
    }

    #[test]
    fn test_add_a_b() {
        let lifter = Z80Lifter::new();
        // ADD A, B => 10_000_000 = 0x80
        let result = lifter.lift_insn(&[0x80], 0x0300).unwrap();
        assert_eq!(result.len, 1);
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output, Some(reg(REG_A, 1)));
        assert_eq!(result.ir_ops[0].inputs[0], reg(REG_A, 1));
        assert_eq!(result.ir_ops[0].inputs[1], reg(REG_B, 1));
    }

    #[test]
    fn test_inc_dec() {
        let lifter = Z80Lifter::new();
        // INC B => 00_000_100 = 0x04
        let result = lifter.lift_insn(&[0x04], 0x0400).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(result.ir_ops[0].output, Some(reg(REG_B, 1)));
        assert_eq!(result.ir_ops[0].inputs[1], const_vn(1, 1));

        // DEC C => 00_001_101 = 0x0D
        let result = lifter.lift_insn(&[0x0D], 0x0401).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(result.ir_ops[0].output, Some(reg(REG_C, 1)));
    }

    #[test]
    fn test_jp_nn() {
        let lifter = Z80Lifter::new();
        // JP 0x1234 => 0xC3 0x34 0x12
        let result = lifter.lift_insn(&[0xC3, 0x34, 0x12], 0x0500).unwrap();
        assert_eq!(result.len, 3);
        assert_eq!(result.ir_ops[0].op, IrOp::Branch);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x1234));
    }

    #[test]
    fn test_jr_e() {
        let lifter = Z80Lifter::new();
        // JR +5 => 0x18 0x05  (target = addr + 2 + 5 = 0x0607)
        let result = lifter.lift_insn(&[0x18, 0x05], 0x0600).unwrap();
        assert_eq!(result.len, 2);
        assert_eq!(result.ir_ops[0].op, IrOp::Branch);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x0607));

        // JR -3 => 0x18 0xFD  (target = 0x0600 + 2 - 3 = 0x05FF)
        let result = lifter.lift_insn(&[0x18, 0xFD], 0x0600).unwrap();
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0x05FF));
    }

    #[test]
    fn test_call_ret() {
        let lifter = Z80Lifter::new();
        // CALL 0xABCD => 0xCD 0xCD 0xAB
        let result = lifter.lift_insn(&[0xCD, 0xCD, 0xAB], 0x0700).unwrap();
        assert_eq!(result.len, 3);
        assert_eq!(result.ir_ops[0].op, IrOp::Call);
        assert_eq!(result.ir_ops[0].inputs[0], ram_target(0xABCD));

        // RET => 0xC9
        let result = lifter.lift_insn(&[0xC9], 0x0800).unwrap();
        assert_eq!(result.len, 1);
        assert_eq!(result.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn test_push_pop() {
        let lifter = Z80Lifter::new();
        // PUSH BC => 11_00_0101 = 0xC5
        let result = lifter.lift_insn(&[0xC5], 0x0900).unwrap();
        assert_eq!(result.len, 1);
        // Should produce: IntSub(SP,2), Copy→SP, Store, Store
        assert_eq!(result.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(result.ir_ops[2].op, IrOp::Store);
        assert_eq!(result.ir_ops[3].op, IrOp::Store);

        // POP DE => 11_01_0001 = 0xD1
        let result = lifter.lift_insn(&[0xD1], 0x0A00).unwrap();
        assert_eq!(result.len, 1);
        // Should produce: Load(E), Load(D), IntAdd(SP,2)
        assert_eq!(result.ir_ops[0].op, IrOp::Load);
        assert_eq!(result.ir_ops[0].output, Some(reg(REG_E, 1)));
        assert_eq!(result.ir_ops[1].op, IrOp::Load);
        assert_eq!(result.ir_ops[1].output, Some(reg(REG_D, 1)));
        assert_eq!(result.ir_ops[2].op, IrOp::IntAdd);
    }

    // ----- §3 expansion tests --------------------------------------------

    /// ADD A, 0x42 → 0xC6 0x42 — lifts to IntAdd(A, A, 0x42).
    #[test]
    fn test_add_a_imm() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0xC6, 0x42], 0x100).unwrap();
        assert_eq!(r.len, 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(reg(REG_A, 1)));
        assert_eq!(r.ir_ops[0].inputs[1], const_vn(0x42, 1));
    }

    /// CP 0x10 → 0xFE 0x10 — IntSub with output going to a temp (not A).
    #[test]
    fn test_cp_imm() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0xFE, 0x10], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_ne!(r.ir_ops[0].output, Some(reg(REG_A, 1)));
        assert_eq!(r.ir_ops[0].inputs[1], const_vn(0x10, 1));
    }

    /// CP B → 0xB8 — IntSub(temp, A, B).
    #[test]
    fn test_cp_reg() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0xB8], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_ne!(r.ir_ops[0].output, Some(reg(REG_A, 1)));
        assert_eq!(r.ir_ops[0].inputs[1], reg(REG_B, 1));
    }

    /// JR NZ, +4 → 0x20 0x04. Target = addr + 2 + 4 = addr + 6.
    #[test]
    fn test_jr_cc_e() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0x20, 0x04], 0x1000).unwrap();
        assert_eq!(r.len, 2);
        // Three ops: IntRight, IntAnd, Cbranch (and one BoolNegate for "NZ").
        let cbranch = r.ir_ops.last().unwrap();
        assert_eq!(cbranch.op, IrOp::Cbranch);
        assert_eq!(cbranch.inputs[0], ram_target(0x1006));
    }

    /// RET cc (RET Z, 0xC8) → plain Return.
    #[test]
    fn test_ret_cc() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0xC8], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
    }

    /// CALL Z, 0x2000 → 0xCC 0x00 0x20.
    #[test]
    fn test_call_cc_nn() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0xCC, 0x00, 0x20], 0x100).unwrap();
        assert_eq!(r.len, 3);
        assert_eq!(r.ir_ops[0].op, IrOp::Call);
        assert_eq!(r.ir_ops[0].inputs[0], ram_target(0x2000));
    }

    /// HALT (0x76), DI (0xF3), EI (0xFB) lift to Callother no-output.
    #[test]
    fn test_halt_ei_di() {
        let lifter = Z80Lifter::new();
        for byte in [0x76, 0xF3, 0xFB] {
            let r = lifter.lift_insn(&[byte], 0x100).unwrap();
            assert_eq!(r.ir_ops.len(), 1);
            assert_eq!(r.ir_ops[0].op, IrOp::Callother);
        }
    }

    /// EX DE, HL (0xEB) → 6 Copy ops shuffling via temps.
    #[test]
    fn test_ex_de_hl() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0xEB], 0x100).unwrap();
        assert_eq!(r.len, 1);
        assert_eq!(r.ir_ops.len(), 6);
        assert!(r.ir_ops.iter().all(|i| i.op == IrOp::Copy));
    }

    /// LD A, (0x1234) → 0x3A 0x34 0x12 → Load(A, 0x1234).
    #[test]
    fn test_ld_a_indirect_nn() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0x3A, 0x34, 0x12], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Load);
        assert_eq!(r.ir_ops[0].output, Some(reg(REG_A, 1)));
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(0x1234, 2));
    }

    /// LD (0x1234), A → 0x32 0x34 0x12 → Store(A, 0x1234).
    #[test]
    fn test_ld_indirect_nn_a() {
        let lifter = Z80Lifter::new();
        let r = lifter.lift_insn(&[0x32, 0x34, 0x12], 0x100).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Store);
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(0x1234, 2));
        assert_eq!(r.ir_ops[0].inputs[1], reg(REG_A, 1));
    }
}
