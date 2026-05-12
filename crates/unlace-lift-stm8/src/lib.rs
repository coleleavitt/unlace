//! STM8 → IR lifter.
//!
//! This is a compact STM8/STM8S lifter intended to cover the common code
//! generation core used by SDCC/Cosmic/IAR: accumulator and index register
//! transfers, byte/word ALU operations, direct and indexed memory accesses,
//! short/long relative and absolute control-flow, calls, stack operations, and
//! the STM8 condition-code branches. Unsupported encodings produce a stable
//! `UNIMPLEMENTED` IR instruction instead of aborting whole-function lifting.
//!
//! # Register file model
//!
//! - `A`: 8-bit accumulator at register offset 0
//! - `X`, `Y`: 16-bit index registers at offsets 1 and 3
//! - `SP`, `PC`: 16-bit stack/program counters at offsets 5 and 7
//! - `CC`: 8-bit condition-code register at offset 9

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_A: u64 = 0;
const REG_X: u64 = 1;
const REG_Y: u64 = 3;
const REG_SP: u64 = 5;
const REG_PC: u64 = 7;
const REG_CC: u64 = 9;

const UNIQUE_BASE: u64 = 0x8000;

// STM8 CC bit positions.
const CC_C: u64 = 0;
const CC_Z: u64 = 1;
const CC_N: u64 = 2;
const CC_I0: u64 = 3;
const CC_H: u64 = 4;
const CC_V: u64 = 7;

#[inline]
fn reg(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}

#[inline]
fn a() -> Varnode {
    reg(REG_A, 1)
}

#[inline]
fn x() -> Varnode {
    reg(REG_X, 2)
}

#[inline]
fn y() -> Varnode {
    reg(REG_Y, 2)
}

#[inline]
fn sp() -> Varnode {
    reg(REG_SP, 2)
}

#[inline]
fn cc() -> Varnode {
    reg(REG_CC, 1)
}

#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, size)
}

#[inline]
fn ram(addr: u64, size: u8) -> Varnode {
    Varnode::ram(addr, size)
}

#[inline]
fn branch_target(addr: u64) -> Varnode {
    ram(addr, 2)
}

#[inline]
fn read_u8(bytes: &[u8], idx: usize) -> Result<u8, LiftError> {
    bytes.get(idx).copied().ok_or(LiftError::ShortBuffer)
}

#[inline]
fn read_u16_be(bytes: &[u8], idx: usize) -> Result<u16, LiftError> {
    if bytes.len() < idx + 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_be_bytes([bytes[idx], bytes[idx + 1]]))
}

#[inline]
fn rel8_target(addr: u64, len: u8, off: u8) -> u64 {
    (addr as i64 + len as i64 + (off as i8 as i64)) as u64
}

fn finish(ir_ops: Vec<IrInsn>, len: u8) -> Result<LiftedInsn, LiftError> {
    Ok(LiftedInsn {
        ir_ops,
        len: len as usize,
    })
}

fn unimplemented(addr: u64, len: u8) -> Result<LiftedInsn, LiftError> {
    finish(
        vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::new(),
            addr,
        )],
        len,
    )
}

fn copy(dst: Varnode, src: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::Copy, dst, SmallVec::from_slice(&[src]), addr)
}

fn load(dst: Varnode, addr_vn: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(IrOp::Load, dst, SmallVec::from_slice(&[addr_vn]), addr)
}

fn store(addr_vn: Varnode, src: Varnode, addr: u64) -> IrInsn {
    IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[addr_vn, src]), addr)
}

fn binary(op: IrOp, dst: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> IrInsn {
    IrInsn::with_output(op, dst, SmallVec::from_slice(&[lhs, rhs]), addr)
}

fn bit_condition(bit: u64, invert: bool, addr: u64) -> (Vec<IrInsn>, Varnode) {
    let shifted = tmp(0, 1);
    let bit_vn = tmp(1, 1);
    let mut ops = vec![
        binary(IrOp::IntRight, shifted, cc(), const_vn(bit, 1), addr),
        binary(IrOp::IntAnd, bit_vn, shifted, const_vn(1, 1), addr),
    ];
    if invert {
        let inv = tmp(2, 1);
        ops.push(IrInsn::with_output(
            IrOp::BoolNegate,
            inv,
            SmallVec::from_slice(&[bit_vn]),
            addr,
        ));
        (ops, inv)
    } else {
        (ops, bit_vn)
    }
}

fn push_value(src: Varnode, size: u8, addr: u64) -> Vec<IrInsn> {
    let new_sp = tmp(0, 2);
    vec![
        binary(IrOp::IntSub, new_sp, sp(), const_vn(size as u64, 2), addr),
        copy(sp(), new_sp, addr),
        store(sp(), src, addr),
    ]
}

fn pop_value(dst: Varnode, size: u8, addr: u64) -> Vec<IrInsn> {
    let new_sp = tmp(0, 2);
    vec![
        load(dst, sp(), addr),
        binary(IrOp::IntAdd, new_sp, sp(), const_vn(size as u64, 2), addr),
        copy(sp(), new_sp, addr),
    ]
}

/// STM8 architecture lifter.
pub struct Stm8Lifter {
    register_file: RegisterFile,
}

impl Stm8Lifter {
    /// Create a new STM8 lifter.
    pub fn new() -> Self {
        let registers = vec![
            RegisterDef {
                name: "A",
                varnode: a(),
            },
            RegisterDef {
                name: "X",
                varnode: x(),
            },
            RegisterDef {
                name: "Y",
                varnode: y(),
            },
            RegisterDef {
                name: "SP",
                varnode: sp(),
            },
            RegisterDef {
                name: "PC",
                varnode: reg(REG_PC, 2),
            },
            RegisterDef {
                name: "CC",
                varnode: cc(),
            },
        ];
        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_prefixed(&self, bytes: &[u8], addr: u64, prefix: u8) -> Result<LiftedInsn, LiftError> {
        let op = read_u8(bytes, 1)?;
        trace!(addr = %format!("{addr:#x}"), prefix = %format!("{prefix:#04x}"), opcode = %format!("{op:#04x}"), "decoding prefixed STM8 instruction");

        match (prefix, op) {
            // LDW Y,#imm16 and LDW Y,long/dir mirror the X encodings under the 0x90 prebyte.
            (0x90, 0xAE) => finish(
                vec![copy(y(), const_vn(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x90, 0xCE) => finish(
                vec![load(y(), ram(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x90, 0xDE) => finish(
                vec![load(y(), ram(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x90, 0xCF) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 2), y(), addr)],
                4,
            ),
            (0x90, 0xDF) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 2), y(), addr)],
                4,
            ),
            (0x90, 0x5C) => finish(
                vec![binary(IrOp::IntAdd, y(), y(), const_vn(1, 2), addr)],
                2,
            ),
            (0x90, 0x5A) => finish(
                vec![binary(IrOp::IntSub, y(), y(), const_vn(1, 2), addr)],
                2,
            ),
            (0x90, 0x5F) => finish(vec![copy(y(), const_vn(0, 2), addr)], 2),
            (0x90, 0x89) => finish(push_value(y(), 2, addr), 2),
            (0x90, 0x85) => finish(pop_value(y(), 2, addr), 2),

            // Long relative control flow (0x90 prebyte family).
            (0x90, 0xCC) => finish(
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 2)? as u64)]),
                    addr,
                )],
                4,
            ),
            (0x90, 0xCD) => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 2)? as u64)]),
                    addr,
                )],
                4,
            ),

            // 0x92 uses a 16-bit memory address in opcodes that are direct under the base map.
            (0x92, 0xC6) => finish(
                vec![load(a(), ram(read_u16_be(bytes, 2)? as u64, 1), addr)],
                4,
            ),
            (0x92, 0xC7) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 1), a(), addr)],
                4,
            ),
            (0x92, 0xCE) => finish(
                vec![load(x(), ram(read_u16_be(bytes, 2)? as u64, 2), addr)],
                4,
            ),
            (0x92, 0xCF) => finish(
                vec![store(ram(read_u16_be(bytes, 2)? as u64, 2), x(), addr)],
                4,
            ),

            _ => unimplemented(addr, 2),
        }
    }

    fn lift_jrcc(&self, opcode: u8, off: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        let target = rel8_target(addr, 2, off);
        // STM8 short conditional branches occupy 0x20..0x2f. The even opcode is
        // the inverted form of the odd opcode for the same flag in ST docs.
        let (bit, invert) = match opcode {
            0x20 => (CC_C, true), // JRA is handled before this; keep as JRNC alias if reached.
            0x21 => (CC_C, false), // JRC
            0x26 => (CC_Z, true), // JRNE
            0x27 => (CC_Z, false), // JREQ
            0x28 => (CC_V, true), // JRNV
            0x29 => (CC_V, false), // JRV
            0x2A => (CC_N, true), // JRPL
            0x2B => (CC_N, false), // JRMI
            0x2C => (CC_I0, true),
            0x2D => (CC_I0, false),
            0x2E => (CC_H, true),
            0x2F => (CC_H, false),
            _ => return unimplemented(addr, 2),
        };
        let (mut ops, cond) = bit_condition(bit, invert, addr);
        ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            SmallVec::from_slice(&[branch_target(target), cond]),
            addr,
        ));
        finish(ops, 2)
    }

    fn lift_alu_a_imm(&self, op: IrOp, imm: u8, addr: u64) -> Result<LiftedInsn, LiftError> {
        finish(vec![binary(op, a(), a(), const_vn(imm as u64, 1), addr)], 2)
    }

    fn lift_alu_a_direct(
        &self,
        op: IrOp,
        bytes: &[u8],
        addr: u64,
    ) -> Result<LiftedInsn, LiftError> {
        let src = tmp(0, 1);
        let direct = read_u8(bytes, 1)? as u64;
        finish(
            vec![
                load(src, ram(direct, 1), addr),
                binary(op, a(), a(), src, addr),
            ],
            2,
        )
    }

    fn lift_alu_a_long(&self, op: IrOp, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let src = tmp(0, 1);
        let long = read_u16_be(bytes, 1)? as u64;
        finish(
            vec![
                load(src, ram(long, 1), addr),
                binary(op, a(), a(), src, addr),
            ],
            3,
        )
    }
}

impl Default for Stm8Lifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for Stm8Lifter {
    fn arch(&self) -> ArchId {
        ArchId::Stm8
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let op = read_u8(bytes, 0)?;
        trace!(addr = %format!("{addr:#x}"), opcode = %format!("{op:#04x}"), "decoding STM8 instruction");

        if matches!(op, 0x90 | 0x91 | 0x92 | 0x72) {
            return self.lift_prefixed(bytes, addr, op);
        }

        match op {
            0x00 | 0x9D => finish(Vec::new(), 1), // NEG (0x00 legacy no-op in many tables) / NOP
            0x81 => finish(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            ),
            0x82 => finish(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            ),
            0x83 => finish(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            ),
            0x8D => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(rel8_target(
                        addr,
                        2,
                        read_u8(bytes, 1)?,
                    ))]),
                    addr,
                )],
                2,
            ),
            0xAD => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(rel8_target(
                        addr,
                        2,
                        read_u8(bytes, 1)?,
                    ))]),
                    addr,
                )],
                2,
            ),
            0xBC => finish(
                vec![IrInsn::without_output(
                    IrOp::Branchind,
                    SmallVec::from_slice(&[x()]),
                    addr,
                )],
                1,
            ),
            0x20 => finish(
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[branch_target(rel8_target(
                        addr,
                        2,
                        read_u8(bytes, 1)?,
                    ))]),
                    addr,
                )],
                2,
            ),
            0x21 | 0x26..=0x2F => self.lift_jrcc(op, read_u8(bytes, 1)?, addr),
            0xCC => finish(
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 1)? as u64)]),
                    addr,
                )],
                3,
            ),
            0xCD => finish(
                vec![IrInsn::without_output(
                    IrOp::Call,
                    SmallVec::from_slice(&[branch_target(read_u16_be(bytes, 1)? as u64)]),
                    addr,
                )],
                3,
            ),

            // Loads/stores and transfers.
            0xA6 => finish(
                vec![copy(a(), const_vn(read_u8(bytes, 1)? as u64, 1), addr)],
                2,
            ),
            0xB6 => finish(vec![load(a(), ram(read_u8(bytes, 1)? as u64, 1), addr)], 2),
            0xC6 => finish(
                vec![load(a(), ram(read_u16_be(bytes, 1)? as u64, 1), addr)],
                3,
            ),
            0xF6 => finish(vec![load(a(), x(), addr)], 1),
            0xE6 => {
                let ea = tmp(0, 2);
                finish(
                    vec![
                        binary(
                            IrOp::IntAdd,
                            ea,
                            x(),
                            const_vn(read_u8(bytes, 1)? as u64, 2),
                            addr,
                        ),
                        load(a(), ea, addr),
                    ],
                    2,
                )
            }
            0xC7 => finish(
                vec![store(ram(read_u16_be(bytes, 1)? as u64, 1), a(), addr)],
                3,
            ),
            0xB7 => finish(vec![store(ram(read_u8(bytes, 1)? as u64, 1), a(), addr)], 2),
            0xF7 => finish(vec![store(x(), a(), addr)], 1),
            0xE7 => {
                let ea = tmp(0, 2);
                finish(
                    vec![
                        binary(
                            IrOp::IntAdd,
                            ea,
                            x(),
                            const_vn(read_u8(bytes, 1)? as u64, 2),
                            addr,
                        ),
                        store(ea, a(), addr),
                    ],
                    2,
                )
            }
            0x97 => finish(
                vec![
                    copy(x(), const_vn(0, 2), addr),
                    IrInsn::with_output(IrOp::IntZext, x(), SmallVec::from_slice(&[a()]), addr),
                ],
                1,
            ), // LD XL,A approximation
            0x9F => finish(vec![copy(a(), x(), addr)], 1), // LD A,XL approximation via truncating varnode consumers
            0xAE => finish(
                vec![copy(x(), const_vn(read_u16_be(bytes, 1)? as u64, 2), addr)],
                3,
            ),
            0xBE => finish(vec![load(x(), ram(read_u8(bytes, 1)? as u64, 2), addr)], 2),
            0xCE => finish(
                vec![load(x(), ram(read_u16_be(bytes, 1)? as u64, 2), addr)],
                3,
            ),
            0xBF => finish(vec![store(ram(read_u8(bytes, 1)? as u64, 2), x(), addr)], 2),
            0xCF => finish(
                vec![store(ram(read_u16_be(bytes, 1)? as u64, 2), x(), addr)],
                3,
            ),

            // Stack and register manipulation.
            0x88 => finish(push_value(a(), 1, addr), 1),
            0x84 => finish(pop_value(a(), 1, addr), 1),
            0x89 => finish(push_value(x(), 2, addr), 1),
            0x85 => finish(pop_value(x(), 2, addr), 1),
            0x8A => finish(push_value(cc(), 1, addr), 1),
            0x86 => finish(pop_value(cc(), 1, addr), 1),
            0x5C => finish(
                vec![binary(IrOp::IntAdd, x(), x(), const_vn(1, 2), addr)],
                1,
            ),
            0x5A => finish(
                vec![binary(IrOp::IntSub, x(), x(), const_vn(1, 2), addr)],
                1,
            ),
            0x4C => finish(
                vec![binary(IrOp::IntAdd, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x4A => finish(
                vec![binary(IrOp::IntSub, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x5F => finish(vec![copy(x(), const_vn(0, 2), addr)], 1),
            0x4F => finish(vec![copy(a(), const_vn(0, 1), addr)], 1),
            0x43 => finish(
                vec![IrInsn::with_output(
                    IrOp::Int2comp,
                    a(),
                    SmallVec::from_slice(&[a()]),
                    addr,
                )],
                1,
            ),
            0x40 => finish(
                vec![IrInsn::with_output(
                    IrOp::IntNegate,
                    a(),
                    SmallVec::from_slice(&[a()]),
                    addr,
                )],
                1,
            ),

            // Immediate ALU on A.
            0xAB => self.lift_alu_a_imm(IrOp::IntAdd, read_u8(bytes, 1)?, addr),
            0xA0 => self.lift_alu_a_imm(IrOp::IntSub, read_u8(bytes, 1)?, addr),
            0xA4 => self.lift_alu_a_imm(IrOp::IntAnd, read_u8(bytes, 1)?, addr),
            0xAA => self.lift_alu_a_imm(IrOp::IntOr, read_u8(bytes, 1)?, addr),
            0xA8 => self.lift_alu_a_imm(IrOp::IntXor, read_u8(bytes, 1)?, addr),
            0xA1 => finish(
                vec![binary(
                    IrOp::IntEqual,
                    tmp(0, 1),
                    a(),
                    const_vn(read_u8(bytes, 1)? as u64, 1),
                    addr,
                )],
                2,
            ),

            // Direct and long-memory ALU on A.
            0xBB => self.lift_alu_a_direct(IrOp::IntAdd, bytes, addr),
            0xB0 => self.lift_alu_a_direct(IrOp::IntSub, bytes, addr),
            0xB4 => self.lift_alu_a_direct(IrOp::IntAnd, bytes, addr),
            0xBA => self.lift_alu_a_direct(IrOp::IntOr, bytes, addr),
            0xB8 => self.lift_alu_a_direct(IrOp::IntXor, bytes, addr),
            0xCB => self.lift_alu_a_long(IrOp::IntAdd, bytes, addr),
            0xC0 => self.lift_alu_a_long(IrOp::IntSub, bytes, addr),
            0xC4 => self.lift_alu_a_long(IrOp::IntAnd, bytes, addr),
            0xCA => self.lift_alu_a_long(IrOp::IntOr, bytes, addr),
            0xC8 => self.lift_alu_a_long(IrOp::IntXor, bytes, addr),

            // Shifts/rotates represented by their data effect on A.
            0x48 => finish(
                vec![binary(IrOp::IntLeft, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x44 | 0x46 => finish(
                vec![binary(IrOp::IntRight, a(), a(), const_vn(1, 1), addr)],
                1,
            ),
            0x47 => finish(
                vec![binary(IrOp::IntSright, a(), a(), const_vn(1, 1), addr)],
                1,
            ),

            _ => unimplemented(addr, 1),
        }
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn register_file_has_core_stm8_registers() {
        let lifter = Stm8Lifter::new();
        assert_eq!(lifter.arch(), ArchId::Stm8);
        assert_eq!(lifter.register_file().registers.len(), 6);
        assert_eq!(lifter.register_file().registers[0].name, "A");
    }

    #[test]
    fn lifts_ld_a_immediate() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0xA6, 0x42], 0x1000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].output, Some(a()));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0x42, 1));
    }

    #[test]
    fn lifts_ldw_x_immediate_big_endian() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0xAE, 0x12, 0x34], 0x1000).unwrap();
        assert_eq!(lifted.len, 3);
        assert_eq!(lifted.ir_ops[0].output, Some(x()));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0x1234, 2));
    }

    #[test]
    fn lifts_short_relative_branch() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0x20, 0xFE], 0x2000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Branch);
        assert_eq!(lifted.ir_ops[0].inputs[0], branch_target(0x2000));
    }

    #[test]
    fn lifts_conditional_branch() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0x27, 0x04], 0x3000).unwrap();
        assert_eq!(lifted.len, 2);
        assert_eq!(lifted.ir_ops.last().unwrap().op, IrOp::Cbranch);
        assert_eq!(
            lifted.ir_ops.last().unwrap().inputs[0],
            branch_target(0x3006)
        );
    }

    #[test]
    fn lifts_prefixed_y_immediate() {
        let lifter = Stm8Lifter::new();
        let lifted = lifter.lift_insn(&[0x90, 0xAE, 0xBE, 0xEF], 0x4000).unwrap();
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].output, Some(y()));
        assert_eq!(lifted.ir_ops[0].inputs[0], const_vn(0xBEEF, 2));
    }

    #[test]
    fn short_buffer_is_reported() {
        let lifter = Stm8Lifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0xAE], 0x1000),
            Err(LiftError::ShortBuffer)
        ));
    }
}
