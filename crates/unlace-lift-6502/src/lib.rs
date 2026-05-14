//! MOS 6502 → IR lifter (native decoder).
//!
//! The 6502 is an 8-bit accumulator-based architecture with variable-length
//! instructions (1-3 bytes). This lifter covers the base NMOS instruction set.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const A_OFFSET: u64 = 0;  // Accumulator
const X_OFFSET: u64 = 1;  // X index
const Y_OFFSET: u64 = 2;  // Y index
const SP_OFFSET: u64 = 3; // Stack pointer
const P_OFFSET: u64 = 4;  // Processor status
const PC_OFFSET: u64 = 5; // Program counter (16-bit)

fn mos6502_register_file() -> RegisterFile {
    RegisterFile {
        registers: vec![
            RegisterDef { name: "A", varnode: Varnode::reg(A_OFFSET, 1) },
            RegisterDef { name: "X", varnode: Varnode::reg(X_OFFSET, 1) },
            RegisterDef { name: "Y", varnode: Varnode::reg(Y_OFFSET, 1) },
            RegisterDef { name: "SP", varnode: Varnode::reg(SP_OFFSET, 1) },
            RegisterDef { name: "P", varnode: Varnode::reg(P_OFFSET, 1) },
            RegisterDef { name: "PC", varnode: Varnode::reg(PC_OFFSET, 2) },
        ],
    }
}

#[inline] fn a() -> Varnode { Varnode::reg(A_OFFSET, 1) }
#[inline] fn x() -> Varnode { Varnode::reg(X_OFFSET, 1) }
#[inline] fn y() -> Varnode { Varnode::reg(Y_OFFSET, 1) }

pub struct Mos6502Lifter { reg_file: RegisterFile }

impl Mos6502Lifter {
    pub fn new() -> Self { Self { reg_file: mos6502_register_file() } }
}
impl Default for Mos6502Lifter { fn default() -> Self { Self::new() } }

impl Lifter for Mos6502Lifter {
    fn arch(&self) -> ArchId { ArchId::Mos6502 }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() { return Err(LiftError::ShortBuffer); }
        let (ops, len) = decode_6502(bytes, addr)?;
        Ok(LiftedInsn { ir_ops: ops, len })
    }
}

fn decode_6502(bytes: &[u8], addr: u64) -> Result<(Vec<IrInsn>, usize), LiftError> {
    let opcode = bytes[0];
    match opcode {
        // LDA #imm
        0xA9 => {
            if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
            let imm = Varnode::constant(bytes[1] as u64, 1);
            Ok((vec![IrInsn::with_output(IrOp::Copy, a(), smallvec![imm], addr)], 2))
        }
        // LDX #imm
        0xA2 => {
            if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
            let imm = Varnode::constant(bytes[1] as u64, 1);
            Ok((vec![IrInsn::with_output(IrOp::Copy, x(), smallvec![imm], addr)], 2))
        }
        // LDY #imm
        0xA0 => {
            if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
            let imm = Varnode::constant(bytes[1] as u64, 1);
            Ok((vec![IrInsn::with_output(IrOp::Copy, y(), smallvec![imm], addr)], 2))
        }
        // STA abs
        0x8D => {
            if bytes.len() < 3 { return Err(LiftError::ShortBuffer); }
            let lo = bytes[1] as u64;
            let hi = bytes[2] as u64;
            let target = Varnode::ram(lo | (hi << 8), 1);
            Ok((vec![IrInsn::without_output(IrOp::Store, smallvec![Varnode::constant(0, 8), target, a()], addr)], 3))
        }
        // NOP
        0xEA => {
            Ok((vec![IrInsn::with_output(IrOp::Copy, a(), smallvec![a()], addr)], 1))
        }
        // RTS
        0x60 => {
            Ok((vec![IrInsn::without_output(IrOp::Return, smallvec![Varnode::reg(PC_OFFSET, 2)], addr)], 1))
        }
        // JMP abs
        0x4C => {
            if bytes.len() < 3 { return Err(LiftError::ShortBuffer); }
            let lo = bytes[1] as u64;
            let hi = bytes[2] as u64;
            let target = Varnode::ram(lo | (hi << 8), 2);
            Ok((vec![IrInsn::without_output(IrOp::Branch, smallvec![target], addr)], 3))
        }
        // JSR abs
        0x20 => {
            if bytes.len() < 3 { return Err(LiftError::ShortBuffer); }
            let lo = bytes[1] as u64;
            let hi = bytes[2] as u64;
            let target = Varnode::ram(lo | (hi << 8), 2);
            Ok((vec![IrInsn::without_output(IrOp::Call, smallvec![target], addr)], 3))
        }
        _ => {
            Ok((vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)], 1))
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_arch() { assert_eq!(Mos6502Lifter::new().arch(), ArchId::Mos6502); }

    #[test]
    fn test_register_file() {
        let l = Mos6502Lifter::new();
        assert_eq!(l.register_file().registers.len(), 6);
    }

    #[test]
    fn test_lda_imm() {
        let l = Mos6502Lifter::new();
        let r = l.lift_insn(&[0xA9, 0x42], 0).unwrap();
        assert_eq!(r.len, 2);
        assert!(r.ir_ops.iter().any(|op| op.op == IrOp::Copy));
    }

    #[test]
    fn test_rts() {
        let l = Mos6502Lifter::new();
        let r = l.lift_insn(&[0x60], 0).unwrap();
        assert!(r.ir_ops.iter().any(|op| op.op == IrOp::Return));
    }

    #[test]
    fn test_jmp() {
        let l = Mos6502Lifter::new();
        let r = l.lift_insn(&[0x4C, 0x00, 0x80], 0).unwrap();
        assert!(r.ir_ops.iter().any(|op| op.op == IrOp::Branch));
//! MOS 6502 / 65C02 / 65816 (emulation-mode subset) → IR lifter.
//!
//! This crate provides a compact but useful retro-architecture lifter for the
//! common 6502 family core used by NES, Apple II, C64, and SNES compatibility
//! code. Unsupported opcodes lift to `UNIMPLEMENTED` rather than failing.

use smallvec::SmallVec;
use tracing::trace;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_A: u64 = 0;
const REG_X: u64 = 1;
const REG_Y: u64 = 2;
const REG_P: u64 = 3;
const REG_SP: u64 = 4;
const REG_PC: u64 = 5;
const REG_DBR: u64 = 7;
const REG_D: u64 = 8;
const REG_PBR: u64 = 10;
const UNIQUE_BASE: u64 = 0x6502_0000;
const FLAG_C: u8 = 0x01;
const FLAG_Z: u8 = 0x02;
const FLAG_N: u8 = 0x80;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum CpuVariant {
    Mos6502,
    Wdc65C02,
    Wdc65816,
}
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum AddrMode {
    Imm,
    Zp,
    ZpX,
    ZpY,
    Abs,
    AbsX,
    AbsY,
    IndX,
    IndY,
}

fn reg(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}
fn c(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}
fn ram(addr: u64, size: u8) -> Varnode {
    Varnode::ram(addr, size)
}
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, size)
}
fn r_a() -> Varnode {
    reg(REG_A, 1)
}
fn r_x() -> Varnode {
    reg(REG_X, 1)
}
fn r_y() -> Varnode {
    reg(REG_Y, 1)
}
fn r_p() -> Varnode {
    reg(REG_P, 1)
}
fn r_sp() -> Varnode {
    reg(REG_SP, 1)
}
fn pc_target(addr: u64) -> Varnode {
    ram(addr & 0x00ff_ffff, 3)
}
fn lohi(bytes: &[u8]) -> u16 {
    u16::from_le_bytes([bytes[0], bytes[1]])
}
fn rel_target(addr: u64, disp: u8) -> u64 {
    (addr as i64 + 2 + (disp as i8 as i64)) as u64
}

pub struct M6502Lifter {
    variant: CpuVariant,
    register_file: RegisterFile,
}
impl M6502Lifter {
    pub fn new() -> Self {
        Self::for_variant(CpuVariant::Mos6502)
    }
    pub fn for_variant(variant: CpuVariant) -> Self {
        let registers = vec![
            RegisterDef {
                name: "A",
                varnode: reg(REG_A, 1),
            },
            RegisterDef {
                name: "X",
                varnode: reg(REG_X, 1),
            },
            RegisterDef {
                name: "Y",
                varnode: reg(REG_Y, 1),
            },
            RegisterDef {
                name: "P",
                varnode: reg(REG_P, 1),
            },
            RegisterDef {
                name: "SP",
                varnode: reg(REG_SP, 1),
            },
            RegisterDef {
                name: "PC",
                varnode: reg(REG_PC, 2),
            },
            RegisterDef {
                name: "DBR",
                varnode: reg(REG_DBR, 1),
            },
            RegisterDef {
                name: "D",
                varnode: reg(REG_D, 2),
            },
            RegisterDef {
                name: "PBR",
                varnode: reg(REG_PBR, 1),
            },
        ];
        Self {
            variant,
            register_file: RegisterFile { registers },
        }
    }
    pub fn variant(&self) -> CpuVariant {
        self.variant
    }

    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let op = *bytes.first().ok_or(LiftError::ShortBuffer)?;
        trace!(addr=%format!("{addr:#x}"), opcode=%format!("{op:#04x}"), "decoding 6502 instruction");
        match op {
            0xEA => Ok(lifted(vec![], 1)),
            0xA9 => self.lift_load_imm(bytes, addr, r_a()),
            0xA2 => self.lift_load_imm(bytes, addr, r_x()),
            0xA0 => self.lift_load_imm(bytes, addr, r_y()),
            0xA5 => self.lift_load_mem(bytes, addr, r_a(), AddrMode::Zp),
            0xB5 => self.lift_load_mem(bytes, addr, r_a(), AddrMode::ZpX),
            0xAD => self.lift_load_mem(bytes, addr, r_a(), AddrMode::Abs),
            0xBD => self.lift_load_mem(bytes, addr, r_a(), AddrMode::AbsX),
            0xB9 => self.lift_load_mem(bytes, addr, r_a(), AddrMode::AbsY),
            0xA1 => self.lift_load_mem(bytes, addr, r_a(), AddrMode::IndX),
            0xB1 => self.lift_load_mem(bytes, addr, r_a(), AddrMode::IndY),
            0xA6 => self.lift_load_mem(bytes, addr, r_x(), AddrMode::Zp),
            0xB6 => self.lift_load_mem(bytes, addr, r_x(), AddrMode::ZpY),
            0xAE => self.lift_load_mem(bytes, addr, r_x(), AddrMode::Abs),
            0xBE => self.lift_load_mem(bytes, addr, r_x(), AddrMode::AbsY),
            0xA4 => self.lift_load_mem(bytes, addr, r_y(), AddrMode::Zp),
            0xB4 => self.lift_load_mem(bytes, addr, r_y(), AddrMode::ZpX),
            0xAC => self.lift_load_mem(bytes, addr, r_y(), AddrMode::Abs),
            0xBC => self.lift_load_mem(bytes, addr, r_y(), AddrMode::AbsX),
            0x85 => self.lift_store(bytes, addr, r_a(), AddrMode::Zp),
            0x95 => self.lift_store(bytes, addr, r_a(), AddrMode::ZpX),
            0x8D => self.lift_store(bytes, addr, r_a(), AddrMode::Abs),
            0x9D => self.lift_store(bytes, addr, r_a(), AddrMode::AbsX),
            0x99 => self.lift_store(bytes, addr, r_a(), AddrMode::AbsY),
            0x81 => self.lift_store(bytes, addr, r_a(), AddrMode::IndX),
            0x91 => self.lift_store(bytes, addr, r_a(), AddrMode::IndY),
            0x86 => self.lift_store(bytes, addr, r_x(), AddrMode::Zp),
            0x96 => self.lift_store(bytes, addr, r_x(), AddrMode::ZpY),
            0x8E => self.lift_store(bytes, addr, r_x(), AddrMode::Abs),
            0x84 => self.lift_store(bytes, addr, r_y(), AddrMode::Zp),
            0x94 => self.lift_store(bytes, addr, r_y(), AddrMode::ZpX),
            0x8C => self.lift_store(bytes, addr, r_y(), AddrMode::Abs),
            0x69 => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::Imm),
            0x65 => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::Zp),
            0x75 => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::ZpX),
            0x6D => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::Abs),
            0x7D => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::AbsX),
            0x79 => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::AbsY),
            0x61 => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::IndX),
            0x71 => self.lift_alu(bytes, addr, IrOp::IntAdd, AddrMode::IndY),
            0xE9 | 0xEB => self.lift_alu(bytes, addr, IrOp::IntSub, AddrMode::Imm),
            0x29 => self.lift_alu(bytes, addr, IrOp::IntAnd, AddrMode::Imm),
            0x25 => self.lift_alu(bytes, addr, IrOp::IntAnd, AddrMode::Zp),
            0x2D => self.lift_alu(bytes, addr, IrOp::IntAnd, AddrMode::Abs),
            0x09 => self.lift_alu(bytes, addr, IrOp::IntOr, AddrMode::Imm),
            0x05 => self.lift_alu(bytes, addr, IrOp::IntOr, AddrMode::Zp),
            0x0D => self.lift_alu(bytes, addr, IrOp::IntOr, AddrMode::Abs),
            0x49 => self.lift_alu(bytes, addr, IrOp::IntXor, AddrMode::Imm),
            0x45 => self.lift_alu(bytes, addr, IrOp::IntXor, AddrMode::Zp),
            0x4D => self.lift_alu(bytes, addr, IrOp::IntXor, AddrMode::Abs),
            0xE8 => Ok(self.lift_inc_dec_reg(addr, r_x(), false)),
            0xCA => Ok(self.lift_inc_dec_reg(addr, r_x(), true)),
            0xC8 => Ok(self.lift_inc_dec_reg(addr, r_y(), false)),
            0x88 => Ok(self.lift_inc_dec_reg(addr, r_y(), true)),
            0xAA => Ok(copy(addr, r_x(), r_a())),
            0x8A => Ok(copy(addr, r_a(), r_x())),
            0xA8 => Ok(copy(addr, r_y(), r_a())),
            0x98 => Ok(copy(addr, r_a(), r_y())),
            0x4C => self.lift_abs_branch(bytes, addr, IrOp::Branch),
            0x20 => self.lift_abs_branch(bytes, addr, IrOp::Call),
            0x60 | 0x40 => Ok(lifted(
                vec![IrInsn::without_output(IrOp::Return, SmallVec::new(), addr)],
                1,
            )),
            0x6C => self.lift_jmp_ind(bytes, addr),
            0xD0 => self.lift_branch(bytes, addr, FLAG_Z, false),
            0xF0 => self.lift_branch(bytes, addr, FLAG_Z, true),
            0x90 => self.lift_branch(bytes, addr, FLAG_C, false),
            0xB0 => self.lift_branch(bytes, addr, FLAG_C, true),
            0x10 => self.lift_branch(bytes, addr, FLAG_N, false),
            0x30 => self.lift_branch(bytes, addr, FLAG_N, true),
            0x48 => Ok(self.lift_push(addr, r_a())),
            0x68 => Ok(self.lift_pop(addr, r_a())),
            0x08 => Ok(self.lift_push(addr, r_p())),
            0x28 => Ok(self.lift_pop(addr, r_p())),
            0x18 => Ok(self.lift_flag(addr, FLAG_C, false)),
            0x38 => Ok(self.lift_flag(addr, FLAG_C, true)),
            _ => Ok(lifted(
                vec![IrInsn::without_output(
                    IrOp::Unimplemented,
                    SmallVec::new(),
                    addr,
                )],
                1,
            )),
        }
    }
    fn lift_load_imm(
        &self,
        bytes: &[u8],
        addr: u64,
        dst: Varnode,
    ) -> Result<LiftedInsn, LiftError> {
        require(bytes, 2)?;
        Ok(lifted(
            vec![IrInsn::with_output(
                IrOp::Copy,
                dst,
                SmallVec::from_slice(&[c(bytes[1] as u64, 1)]),
                addr,
            )],
            2,
        ))
    }
    fn lift_load_mem(
        &self,
        bytes: &[u8],
        addr: u64,
        dst: Varnode,
        mode: AddrMode,
    ) -> Result<LiftedInsn, LiftError> {
        let (mut ops, ea, len) = self.ea(bytes, addr, mode)?;
        ops.push(IrInsn::with_output(
            IrOp::Load,
            dst,
            SmallVec::from_slice(&[ea]),
            addr,
        ));
        Ok(lifted(ops, len))
    }
    fn lift_store(
        &self,
        bytes: &[u8],
        addr: u64,
        src: Varnode,
        mode: AddrMode,
    ) -> Result<LiftedInsn, LiftError> {
        let (mut ops, ea, len) = self.ea(bytes, addr, mode)?;
        ops.push(IrInsn::without_output(
            IrOp::Store,
            SmallVec::from_slice(&[ea, src]),
            addr,
        ));
        Ok(lifted(ops, len))
    }
    fn lift_alu(
        &self,
        bytes: &[u8],
        addr: u64,
        op: IrOp,
        mode: AddrMode,
    ) -> Result<LiftedInsn, LiftError> {
        if mode == AddrMode::Imm {
            require(bytes, 2)?;
            return Ok(lifted(
                vec![IrInsn::with_output(
                    op,
                    r_a(),
                    SmallVec::from_slice(&[r_a(), c(bytes[1] as u64, 1)]),
                    addr,
                )],
                2,
            ));
        }
        let (mut ops, ea, len) = self.ea(bytes, addr, mode)?;
        let val = tmp(7, 1);
        ops.push(IrInsn::with_output(
            IrOp::Load,
            val,
            SmallVec::from_slice(&[ea]),
            addr,
        ));
        ops.push(IrInsn::with_output(
            op,
            r_a(),
            SmallVec::from_slice(&[r_a(), val]),
            addr,
        ));
        Ok(lifted(ops, len))
    }
    fn ea(
        &self,
        bytes: &[u8],
        addr: u64,
        mode: AddrMode,
    ) -> Result<(Vec<IrInsn>, Varnode, usize), LiftError> {
        let mut ops = Vec::new();
        match mode {
            AddrMode::Zp => {
                require(bytes, 2)?;
                Ok((ops, ram(bytes[1] as u64, 1), 2))
            }
            AddrMode::ZpX | AddrMode::ZpY => {
                require(bytes, 2)?;
                let idx = if mode == AddrMode::ZpX { r_x() } else { r_y() };
                let out = tmp(0, 1);
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    out,
                    SmallVec::from_slice(&[c(bytes[1] as u64, 1), idx]),
                    addr,
                ));
                Ok((ops, out, 2))
            }
            AddrMode::Abs => {
                require(bytes, 3)?;
                Ok((ops, ram(lohi(&bytes[1..3]) as u64, 1), 3))
            }
            AddrMode::AbsX | AddrMode::AbsY => {
                require(bytes, 3)?;
                let idx = if mode == AddrMode::AbsX { r_x() } else { r_y() };
                let zidx = tmp(0, 2);
                let out = tmp(1, 2);
                ops.push(IrInsn::with_output(
                    IrOp::IntZext,
                    zidx,
                    SmallVec::from_slice(&[idx]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    out,
                    SmallVec::from_slice(&[c(lohi(&bytes[1..3]) as u64, 2), zidx]),
                    addr,
                ));
                Ok((ops, out, 3))
            }
            AddrMode::IndX => {
                require(bytes, 2)?;
                let zp = tmp(0, 1);
                let ptr = tmp(1, 2);
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    zp,
                    SmallVec::from_slice(&[c(bytes[1] as u64, 1), r_x()]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    ptr,
                    SmallVec::from_slice(&[zp]),
                    addr,
                ));
                Ok((ops, ptr, 2))
            }
            AddrMode::IndY => {
                require(bytes, 2)?;
                let ptr = tmp(0, 2);
                let zidx = tmp(1, 2);
                let out = tmp(2, 2);
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    ptr,
                    SmallVec::from_slice(&[ram(bytes[1] as u64, 1)]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::IntZext,
                    zidx,
                    SmallVec::from_slice(&[r_y()]),
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    out,
                    SmallVec::from_slice(&[ptr, zidx]),
                    addr,
                ));
                Ok((ops, out, 2))
            }
            AddrMode::Imm => unreachable!(),
        }
    }
    fn lift_abs_branch(&self, bytes: &[u8], addr: u64, op: IrOp) -> Result<LiftedInsn, LiftError> {
        require(bytes, 3)?;
        Ok(lifted(
            vec![IrInsn::without_output(
                op,
                SmallVec::from_slice(&[pc_target(lohi(&bytes[1..3]) as u64)]),
                addr,
            )],
            3,
        ))
    }
    fn lift_jmp_ind(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        require(bytes, 3)?;
        Ok(lifted(
            vec![IrInsn::without_output(
                IrOp::Branchind,
                SmallVec::from_slice(&[ram(lohi(&bytes[1..3]) as u64, 2)]),
                addr,
            )],
            3,
        ))
    }
    fn lift_branch(
        &self,
        bytes: &[u8],
        addr: u64,
        flag: u8,
        set: bool,
    ) -> Result<LiftedInsn, LiftError> {
        require(bytes, 2)?;
        let masked = tmp(0, 1);
        let cond = tmp(1, 1);
        let cmp = if set {
            IrOp::IntNotequal
        } else {
            IrOp::IntEqual
        };
        Ok(lifted(
            vec![
                IrInsn::with_output(
                    IrOp::IntAnd,
                    masked,
                    SmallVec::from_slice(&[r_p(), c(flag as u64, 1)]),
                    addr,
                ),
                IrInsn::with_output(cmp, cond, SmallVec::from_slice(&[masked, c(0, 1)]), addr),
                IrInsn::without_output(
                    IrOp::Cbranch,
                    SmallVec::from_slice(&[pc_target(rel_target(addr, bytes[1])), cond]),
                    addr,
                ),
            ],
            2,
        ))
    }
    fn lift_inc_dec_reg(&self, addr: u64, dst: Varnode, dec: bool) -> LiftedInsn {
        let op = if dec { IrOp::IntSub } else { IrOp::IntAdd };
        lifted(
            vec![IrInsn::with_output(
                op,
                dst,
                SmallVec::from_slice(&[dst, c(1, 1)]),
                addr,
            )],
            1,
        )
    }
    fn lift_push(&self, addr: u64, src: Varnode) -> LiftedInsn {
        let stack_addr = tmp(0, 2);
        let new_sp = tmp(1, 1);
        lifted(
            vec![
                IrInsn::with_output(
                    IrOp::IntAdd,
                    stack_addr,
                    SmallVec::from_slice(&[c(0x0100, 2), r_sp()]),
                    addr,
                ),
                IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[stack_addr, src]), addr),
                IrInsn::with_output(
                    IrOp::IntSub,
                    new_sp,
                    SmallVec::from_slice(&[r_sp(), c(1, 1)]),
                    addr,
                ),
                IrInsn::with_output(IrOp::Copy, r_sp(), SmallVec::from_slice(&[new_sp]), addr),
            ],
            1,
        )
    }
    fn lift_pop(&self, addr: u64, dst: Varnode) -> LiftedInsn {
        let new_sp = tmp(0, 1);
        let stack_addr = tmp(1, 2);
        lifted(
            vec![
                IrInsn::with_output(
                    IrOp::IntAdd,
                    new_sp,
                    SmallVec::from_slice(&[r_sp(), c(1, 1)]),
                    addr,
                ),
                IrInsn::with_output(IrOp::Copy, r_sp(), SmallVec::from_slice(&[new_sp]), addr),
                IrInsn::with_output(
                    IrOp::IntAdd,
                    stack_addr,
                    SmallVec::from_slice(&[c(0x0100, 2), r_sp()]),
                    addr,
                ),
                IrInsn::with_output(IrOp::Load, dst, SmallVec::from_slice(&[stack_addr]), addr),
            ],
            1,
        )
    }
    fn lift_flag(&self, addr: u64, flag: u8, set: bool) -> LiftedInsn {
        let op = if set { IrOp::IntOr } else { IrOp::IntAnd };
        let mask = if set {
            flag as u64
        } else {
            (!flag) as u8 as u64
        };
        lifted(
            vec![IrInsn::with_output(
                op,
                r_p(),
                SmallVec::from_slice(&[r_p(), c(mask, 1)]),
                addr,
            )],
            1,
        )
    }
}
fn require(bytes: &[u8], len: usize) -> Result<(), LiftError> {
    if bytes.len() < len {
        Err(LiftError::ShortBuffer)
    } else {
        Ok(())
    }
}
fn lifted(ir_ops: Vec<IrInsn>, len: usize) -> LiftedInsn {
    LiftedInsn { ir_ops, len }
}
fn copy(addr: u64, dst: Varnode, src: Varnode) -> LiftedInsn {
    lifted(
        vec![IrInsn::with_output(
            IrOp::Copy,
            dst,
            SmallVec::from_slice(&[src]),
            addr,
        )],
        1,
    )
}
impl Default for M6502Lifter {
    fn default() -> Self {
        Self::new()
    }
}
impl Lifter for M6502Lifter {
    fn arch(&self) -> ArchId {
        ArchId::M6502
    }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        self.lift_inner(bytes, addr)
    }
    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    fn l(bytes: &[u8]) -> LiftedInsn {
        M6502Lifter::new().lift_insn(bytes, 0x8000).unwrap()
    }
    #[test]
    fn register_file_contains_65816_state() {
        let lifter = M6502Lifter::for_variant(CpuVariant::Wdc65816);
        assert_eq!(lifter.arch(), ArchId::M6502);
        assert_eq!(lifter.variant(), CpuVariant::Wdc65816);
        assert_eq!(lifter.register_file().registers.len(), 9);
    }
    #[test]
    fn nop_has_no_ir() {
        let r = l(&[0xEA]);
        assert_eq!(r.len, 1);
        assert!(r.ir_ops.is_empty());
    }
    #[test]
    fn lda_immediate() {
        let r = l(&[0xA9, 0x42]);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(r_a()));
        assert_eq!(r.ir_ops[0].inputs[0], c(0x42, 1));
    }
    #[test]
    fn ldx_ldy_immediate() {
        assert_eq!(l(&[0xA2, 7]).ir_ops[0].output, Some(r_x()));
        assert_eq!(l(&[0xA0, 8]).ir_ops[0].output, Some(r_y()));
    }
    #[test]
    fn lda_absolute_loads_from_address() {
        let r = l(&[0xAD, 0x34, 0x12]);
        assert_eq!(r.len, 3);
        assert_eq!(r.ir_ops[0].op, IrOp::Load);
        assert_eq!(r.ir_ops[0].inputs[0], ram(0x1234, 1));
    }
    #[test]
    fn sta_zero_page_store() {
        let r = l(&[0x85, 0x20]);
        assert_eq!(r.ir_ops[0].op, IrOp::Store);
        assert_eq!(r.ir_ops[0].inputs.as_slice(), &[ram(0x20, 1), r_a()]);
    }
    #[test]
    fn absolute_x_computes_effective_address() {
        let r = l(&[0xBD, 0x00, 0x20]);
        assert_eq!(r.ir_ops[0].op, IrOp::IntZext);
        assert_eq!(r.ir_ops[1].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[2].op, IrOp::Load);
    }
    #[test]
    fn indexed_indirect_uses_x_then_load_pointer() {
        let r = l(&[0xA1, 0x44]);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[1].op, IrOp::Load);
        assert_eq!(r.ir_ops[2].op, IrOp::Load);
    }
    #[test]
    fn indirect_indexed_uses_y_after_pointer_load() {
        let r = l(&[0x91, 0x44]);
        assert_eq!(r.ir_ops[0].op, IrOp::Load);
        assert_eq!(r.ir_ops[2].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[3].op, IrOp::Store);
    }
    #[test]
    fn adc_immediate_maps_to_add() {
        let r = l(&[0x69, 1]);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(r_a()));
    }
    #[test]
    fn sbc_immediate_maps_to_sub() {
        assert_eq!(l(&[0xE9, 1]).ir_ops[0].op, IrOp::IntSub);
    }
    #[test]
    fn bitwise_immediates() {
        assert_eq!(l(&[0x29, 0xff]).ir_ops[0].op, IrOp::IntAnd);
        assert_eq!(l(&[0x09, 1]).ir_ops[0].op, IrOp::IntOr);
        assert_eq!(l(&[0x49, 1]).ir_ops[0].op, IrOp::IntXor);
    }
    #[test]
    fn inx_dex_iny_dey() {
        assert_eq!(l(&[0xE8]).ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(l(&[0xCA]).ir_ops[0].op, IrOp::IntSub);
        assert_eq!(l(&[0xC8]).ir_ops[0].output, Some(r_y()));
        assert_eq!(l(&[0x88]).ir_ops[0].output, Some(r_y()));
    }
    #[test]
    fn transfers_copy_between_registers() {
        assert_eq!(l(&[0xAA]).ir_ops[0].output, Some(r_x()));
        assert_eq!(l(&[0x8A]).ir_ops[0].output, Some(r_a()));
        assert_eq!(l(&[0xA8]).ir_ops[0].output, Some(r_y()));
        assert_eq!(l(&[0x98]).ir_ops[0].output, Some(r_a()));
    }
    #[test]
    fn jmp_and_jsr_absolute() {
        assert_eq!(l(&[0x4C, 0x00, 0x90]).ir_ops[0].op, IrOp::Branch);
        assert_eq!(l(&[0x20, 0x00, 0x90]).ir_ops[0].op, IrOp::Call);
    }
    #[test]
    fn jmp_indirect_is_branchind() {
        let r = l(&[0x6C, 0x00, 0x20]);
        assert_eq!(r.ir_ops[0].op, IrOp::Branchind);
        assert_eq!(r.ir_ops[0].inputs[0], ram(0x2000, 2));
    }
    #[test]
    fn branches_extract_expected_flags() {
        let r = l(&[0xD0, 0x05]);
        assert_eq!(r.ir_ops[0].inputs[1], c(FLAG_Z as u64, 1));
        assert_eq!(r.ir_ops[1].op, IrOp::IntEqual);
        assert_eq!(r.ir_ops[2].inputs[0], pc_target(0x8007));
        let r = l(&[0xB0, 0xFB]);
        assert_eq!(r.ir_ops[0].inputs[1], c(FLAG_C as u64, 1));
        assert_eq!(r.ir_ops[1].op, IrOp::IntNotequal);
        assert_eq!(r.ir_ops[2].inputs[0], pc_target(0x7ffd));
    }
    #[test]
    fn returns_lift_to_return() {
        assert_eq!(l(&[0x60]).ir_ops[0].op, IrOp::Return);
        assert_eq!(l(&[0x40]).ir_ops[0].op, IrOp::Return);
    }
    #[test]
    fn stack_ops_adjust_page_one_stack() {
        assert_eq!(l(&[0x48]).ir_ops[1].op, IrOp::Store);
        assert_eq!(l(&[0x68]).ir_ops[3].op, IrOp::Load);
        assert_eq!(l(&[0x08]).ir_ops[1].inputs[1], r_p());
        assert_eq!(l(&[0x28]).ir_ops[3].output, Some(r_p()));
    }
    #[test]
    fn flag_ops_modify_carry() {
        assert_eq!(l(&[0x18]).ir_ops[0].op, IrOp::IntAnd);
        assert_eq!(l(&[0x38]).ir_ops[0].op, IrOp::IntOr);
    }
    #[test]
    fn short_buffers_error() {
        assert!(matches!(
            M6502Lifter::new().lift_insn(&[0xAD], 0),
            Err(LiftError::ShortBuffer)
        ));
    }
    #[test]
    fn unsupported_opcode_is_unimplemented() {
        let r = l(&[0x02]);
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }
}
