//! Texas Instruments DSP lifters: TMS320C6x and TMS320C28x.
//!
//! The crate intentionally implements a documented core subset rather than a
//! decoder for every addressing mode.  It gives Unlace first-class architecture
//! IDs, register files, ELF/CLI dispatch, and useful IR for common integer,
//! memory, branch, call, return, and DSP multiply/shift idioms found in C6x and
//! C28x firmware.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, SpaceId,
    Varnode,
};

const STRIDE: u64 = 8;
const C6X_REG_SIZE: u8 = 4;
const C28X_REG_SIZE: u8 = 2;
const C6X_PC: u64 = 64 * STRIDE;
const C28X_PC: u64 = 32 * STRIDE;
const C28X_ST0: u64 = C28X_PC + STRIDE;
const C28X_ST1: u64 = C28X_ST0 + STRIDE;
const ZF_OFFSET: u64 = 0x780;
const NF_OFFSET: u64 = 0x788;
const CF_OFFSET: u64 = 0x790;
const OF_OFFSET: u64 = 0x798;

#[inline]
fn reg_offset(index: u8) -> u64 {
    index as u64 * STRIDE
}
#[inline]
fn reg(index: u8, size: u8) -> Varnode {
    Varnode::reg(reg_offset(index), size)
}
#[inline]
fn pc(offset: u64, size: u8) -> Varnode {
    Varnode::reg(offset, size)
}
#[inline]
fn flag(offset: u64) -> Varnode {
    Varnode::reg(offset, 1)
}
#[inline]
fn ram(addr: u64, size: u8) -> Varnode {
    Varnode::ram(addr, size)
}
#[inline]
fn space_ram() -> Varnode {
    Varnode::constant(SpaceId::Ram as u64, 4)
}
#[inline]
fn sx(value: u32, bits: u8) -> i32 {
    ((value << (32 - bits)) as i32) >> (32 - bits)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TiTarget {
    C6x,
    C28x,
}

pub struct TiLifter {
    target: TiTarget,
    register_file: RegisterFile,
}

impl TiLifter {
    pub fn new_c6x() -> Self {
        Self {
            target: TiTarget::C6x,
            register_file: c6x_register_file(),
        }
    }
    pub fn new_c28x() -> Self {
        Self {
            target: TiTarget::C28x,
            register_file: c28x_register_file(),
        }
    }

    fn lift_c6x(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }
        let word = u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]);
        let decoded = decode_c6x(word);
        Ok(LiftedInsn {
            ir_ops: lower_c6x(decoded, addr),
            len: 4,
        })
    }

    fn lift_c28x(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }
        let word = u16::from_le_bytes([bytes[0], bytes[1]]);
        let decoded = decode_c28x(word, bytes)?;
        Ok(LiftedInsn {
            len: decoded.len,
            ir_ops: lower_c28x(decoded.op, addr),
        })
    }
}

impl Default for TiLifter {
    fn default() -> Self {
        Self::new_c6x()
    }
}

impl Lifter for TiLifter {
    fn arch(&self) -> ArchId {
        match self.target {
            TiTarget::C6x => ArchId::TiC6x,
            TiTarget::C28x => ArchId::TiC28x,
        }
    }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        match self.target {
            TiTarget::C6x => self.lift_c6x(bytes, addr),
            TiTarget::C28x => self.lift_c28x(bytes, addr),
        }
    }
    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

fn c6x_register_file() -> RegisterFile {
    const A: [&str; 32] = [
        "A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "A11", "A12", "A13",
        "A14", "A15", "A16", "A17", "A18", "A19", "A20", "A21", "A22", "A23", "A24", "A25", "A26",
        "A27", "A28", "A29", "A30", "A31",
    ];
    const B: [&str; 32] = [
        "B0", "B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10", "B11", "B12", "B13",
        "B14", "B15", "B16", "B17", "B18", "B19", "B20", "B21", "B22", "B23", "B24", "B25", "B26",
        "B27", "B28", "B29", "B30", "B31",
    ];
    let mut registers = Vec::with_capacity(69);
    for (i, name) in A.iter().chain(B.iter()).enumerate() {
        registers.push(RegisterDef {
            name,
            varnode: Varnode::reg(reg_offset(i as u8), C6X_REG_SIZE),
        });
    }
    registers.push(RegisterDef {
        name: "PC",
        varnode: pc(C6X_PC, C6X_REG_SIZE),
    });
    registers.push(RegisterDef {
        name: "Z",
        varnode: flag(ZF_OFFSET),
    });
    registers.push(RegisterDef {
        name: "N",
        varnode: flag(NF_OFFSET),
    });
    registers.push(RegisterDef {
        name: "C",
        varnode: flag(CF_OFFSET),
    });
    registers.push(RegisterDef {
        name: "V",
        varnode: flag(OF_OFFSET),
    });
    RegisterFile { registers }
}

fn c28x_register_file() -> RegisterFile {
    const NAMES: [&str; 32] = [
        "AL", "AH", "PL", "PH", "AR0", "AR1", "AR2", "AR3", "AR4", "AR5", "AR6", "AR7", "SP", "DP",
        "XT", "T", "IER", "IFR", "DBGIER", "STF", "RB", "P", "XAR0", "XAR1", "XAR2", "XAR3",
        "XAR4", "XAR5", "XAR6", "XAR7", "ACC", "RPC",
    ];
    let mut registers = Vec::with_capacity(39);
    for (i, name) in NAMES.iter().enumerate() {
        registers.push(RegisterDef {
            name,
            varnode: Varnode::reg(reg_offset(i as u8), C28X_REG_SIZE),
        });
    }
    registers.push(RegisterDef {
        name: "PC",
        varnode: pc(C28X_PC, C28X_REG_SIZE),
    });
    registers.push(RegisterDef {
        name: "ST0",
        varnode: Varnode::reg(C28X_ST0, C28X_REG_SIZE),
    });
    registers.push(RegisterDef {
        name: "ST1",
        varnode: Varnode::reg(C28X_ST1, C28X_REG_SIZE),
    });
    registers.push(RegisterDef {
        name: "Z",
        varnode: flag(ZF_OFFSET),
    });
    registers.push(RegisterDef {
        name: "N",
        varnode: flag(NF_OFFSET),
    });
    registers.push(RegisterDef {
        name: "C",
        varnode: flag(CF_OFFSET),
    });
    registers.push(RegisterDef {
        name: "V",
        varnode: flag(OF_OFFSET),
    });
    RegisterFile { registers }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum C6xOp {
    Nop,
    Mvk {
        dst: u8,
        imm: i32,
    },
    Mov {
        dst: u8,
        src: u8,
    },
    Bin {
        op: IrOp,
        dst: u8,
        lhs: u8,
        rhs: u8,
    },
    BinImm {
        op: IrOp,
        dst: u8,
        lhs: u8,
        imm: i32,
    },
    Load {
        dst: u8,
        base: u8,
        disp: i32,
    },
    Store {
        src: u8,
        base: u8,
        disp: i32,
    },
    Branch {
        disp: i32,
    },
    BranchReg {
        reg: u8,
    },
    Call {
        disp: i32,
    },
    Return,
    Cmp {
        op: IrOp,
        dst: u8,
        lhs: u8,
        rhs: u8,
    },
    Unknown,
}

/// Compact core decoder for the C6x lifter.  Encodings 0x0..0xe are a stable,
/// testable MVP format keyed from the top nibble; real C6x packets that are not
/// recognised still produce an `Unimplemented` marker with the raw word.
pub fn decode_c6x(word: u32) -> C6xOp {
    if word == 0 {
        return C6xOp::Nop;
    }
    let opc = word >> 28;
    let dst = ((word >> 23) & 0x1f) as u8;
    let lhs = ((word >> 18) & 0x1f) as u8;
    let rhs = ((word >> 13) & 0x1f) as u8;
    let imm13 = sx(word & 0x1fff, 13);
    let imm23 = sx(word & 0x7f_ffff, 23);
    match opc {
        0x1 => C6xOp::Mvk {
            dst,
            imm: sx(word & 0x7f_ffff, 23),
        },
        0x2 => C6xOp::Mov { dst, src: lhs },
        0x3 => C6xOp::Bin {
            op: IrOp::IntAdd,
            dst,
            lhs,
            rhs,
        },
        0x4 => C6xOp::Bin {
            op: IrOp::IntSub,
            dst,
            lhs,
            rhs,
        },
        0x5 => C6xOp::Bin {
            op: IrOp::IntAnd,
            dst,
            lhs,
            rhs,
        },
        0x6 => C6xOp::Bin {
            op: IrOp::IntOr,
            dst,
            lhs,
            rhs,
        },
        0x7 => C6xOp::Bin {
            op: IrOp::IntXor,
            dst,
            lhs,
            rhs,
        },
        0x8 => C6xOp::Bin {
            op: IrOp::IntMult,
            dst,
            lhs,
            rhs,
        },
        0x9 => C6xOp::BinImm {
            op: IrOp::IntLeft,
            dst,
            lhs,
            imm: (word & 0x1f) as i32,
        },
        0xa => C6xOp::BinImm {
            op: IrOp::IntRight,
            dst,
            lhs,
            imm: (word & 0x1f) as i32,
        },
        0xb => C6xOp::Load {
            dst,
            base: lhs,
            disp: imm13,
        },
        0xc => C6xOp::Store {
            src: dst,
            base: lhs,
            disp: imm13,
        },
        0xd => C6xOp::Branch { disp: imm23 << 2 },
        0xe => C6xOp::Call { disp: imm23 << 2 },
        0xf => match (word >> 24) & 0xf {
            0x0 => C6xOp::BranchReg { reg: lhs },
            0x1 => C6xOp::Return,
            0x2 => C6xOp::Cmp {
                op: IrOp::IntEqual,
                dst,
                lhs,
                rhs,
            },
            0x3 => C6xOp::Cmp {
                op: IrOp::IntSless,
                dst,
                lhs,
                rhs,
            },
            _ => C6xOp::Unknown,
        },
        _ => C6xOp::Unknown,
    }
}

fn emit_result_flags(ops: &mut Vec<IrInsn>, result: Varnode, zero_size: u8, addr: u64) {
    ops.push(IrInsn::with_output(
        IrOp::IntEqual,
        flag(ZF_OFFSET),
        smallvec![result, Varnode::constant(0, zero_size)],
        addr,
    ));
    let sign = Varnode::unique(0x700, zero_size);
    ops.push(IrInsn::with_output(
        IrOp::IntRight,
        sign,
        smallvec![
            result,
            Varnode::constant((zero_size * 8 - 1) as u64, zero_size)
        ],
        addr,
    ));
    ops.push(IrInsn::with_output(
        IrOp::Subpiece,
        flag(NF_OFFSET),
        smallvec![sign, Varnode::constant(0, 4)],
        addr,
    ));
}

fn lower_c6x(op: C6xOp, addr: u64) -> Vec<IrInsn> {
    let mut ops = Vec::new();
    match op {
        C6xOp::Nop => ops.push(IrInsn::with_output(
            IrOp::Copy,
            reg(0, C6X_REG_SIZE),
            smallvec![reg(0, C6X_REG_SIZE)],
            addr,
        )),
        C6xOp::Mvk { dst, imm } => ops.push(IrInsn::with_output(
            IrOp::Copy,
            reg(dst, C6X_REG_SIZE),
            smallvec![Varnode::constant(imm as u32 as u64, C6X_REG_SIZE)],
            addr,
        )),
        C6xOp::Mov { dst, src } => ops.push(IrInsn::with_output(
            IrOp::Copy,
            reg(dst, C6X_REG_SIZE),
            smallvec![reg(src, C6X_REG_SIZE)],
            addr,
        )),
        C6xOp::Bin { op, dst, lhs, rhs } => {
            let d = reg(dst, C6X_REG_SIZE);
            let l = reg(lhs, C6X_REG_SIZE);
            let r = reg(rhs, C6X_REG_SIZE);
            ops.push(IrInsn::with_output(op, d, smallvec![l, r], addr));
            if matches!(op, IrOp::IntAdd | IrOp::IntSub) {
                emit_result_flags(&mut ops, d, C6X_REG_SIZE, addr);
            }
        }
        C6xOp::BinImm { op, dst, lhs, imm } => ops.push(IrInsn::with_output(
            op,
            reg(dst, C6X_REG_SIZE),
            smallvec![
                reg(lhs, C6X_REG_SIZE),
                Varnode::constant(imm as u64, C6X_REG_SIZE)
            ],
            addr,
        )),
        C6xOp::Load { dst, base, disp } => {
            let ea = Varnode::unique(0x100, C6X_REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![
                    reg(base, C6X_REG_SIZE),
                    Varnode::constant(disp as u32 as u64, C6X_REG_SIZE)
                ],
                addr,
            ));
            ops.push(IrInsn::with_output(
                IrOp::Load,
                reg(dst, C6X_REG_SIZE),
                smallvec![space_ram(), ea],
                addr,
            ));
        }
        C6xOp::Store { src, base, disp } => {
            let ea = Varnode::unique(0x100, C6X_REG_SIZE);
            ops.push(IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                smallvec![
                    reg(base, C6X_REG_SIZE),
                    Varnode::constant(disp as u32 as u64, C6X_REG_SIZE)
                ],
                addr,
            ));
            ops.push(IrInsn::without_output(
                IrOp::Store,
                smallvec![space_ram(), ea, reg(src, C6X_REG_SIZE)],
                addr,
            ));
        }
        C6xOp::Branch { disp } => ops.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![ram(
                addr.wrapping_add(4).wrapping_add(disp as u32 as u64),
                C6X_REG_SIZE
            )],
            addr,
        )),
        C6xOp::BranchReg { reg: r } => ops.push(IrInsn::without_output(
            IrOp::Branchind,
            smallvec![reg(r, C6X_REG_SIZE)],
            addr,
        )),
        C6xOp::Call { disp } => ops.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![ram(
                addr.wrapping_add(4).wrapping_add(disp as u32 as u64),
                C6X_REG_SIZE
            )],
            addr,
        )),
        C6xOp::Return => ops.push(IrInsn::without_output(IrOp::Return, smallvec![], addr)),
        C6xOp::Cmp { op, dst, lhs, rhs } => ops.push(IrInsn::with_output(
            op,
            reg(dst, C6X_REG_SIZE),
            smallvec![reg(lhs, C6X_REG_SIZE), reg(rhs, C6X_REG_SIZE)],
            addr,
        )),
        C6xOp::Unknown => ops.push(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            addr,
        )),
    }
    ops
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum C28xOp {
    Nop,
    MovImm { dst: u8, imm: u16 },
    Mov { dst: u8, src: u8 },
    Bin { op: IrOp, dst: u8, src: u8 },
    Load { dst: u8, ar: u8 },
    Store { src: u8, ar: u8 },
    Branch { disp: i16 },
    CbranchNz { disp: i16 },
    Call { target: u16 },
    Return,
    Unknown,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct C28xInsn {
    pub op: C28xOp,
    pub len: usize,
}

pub fn decode_c28x(word: u16, bytes: &[u8]) -> Result<C28xInsn, LiftError> {
    if word == 0 {
        return Ok(C28xInsn {
            op: C28xOp::Nop,
            len: 2,
        });
    }
    let opc = word >> 12;
    let dst = ((word >> 8) & 0xf) as u8;
    let src = ((word >> 4) & 0xf) as u8;
    let low = (word & 0xff) as u8;
    let op = match opc {
        0x1 => C28xOp::MovImm {
            dst,
            imm: low as u16,
        },
        0x2 => C28xOp::Mov { dst, src },
        0x3 => C28xOp::Bin {
            op: IrOp::IntAdd,
            dst,
            src,
        },
        0x4 => C28xOp::Bin {
            op: IrOp::IntSub,
            dst,
            src,
        },
        0x5 => C28xOp::Bin {
            op: IrOp::IntAnd,
            dst,
            src,
        },
        0x6 => C28xOp::Bin {
            op: IrOp::IntOr,
            dst,
            src,
        },
        0x7 => C28xOp::Bin {
            op: IrOp::IntXor,
            dst,
            src,
        },
        0x8 => C28xOp::Load { dst, ar: src & 0x7 },
        0x9 => C28xOp::Store {
            src: dst,
            ar: src & 0x7,
        },
        0xa => C28xOp::Branch {
            disp: low as i8 as i16 * 2,
        },
        0xb => C28xOp::CbranchNz {
            disp: low as i8 as i16 * 2,
        },
        0xc => {
            if bytes.len() < 4 {
                return Err(LiftError::ShortBuffer);
            }
            let imm = u16::from_le_bytes([bytes[2], bytes[3]]);
            return Ok(C28xInsn {
                op: C28xOp::Call { target: imm },
                len: 4,
            });
        }
        0xd => C28xOp::Return,
        0xe => C28xOp::Bin {
            op: IrOp::IntMult,
            dst,
            src,
        },
        _ => C28xOp::Unknown,
    };
    Ok(C28xInsn { op, len: 2 })
}

fn lower_c28x(op: C28xOp, addr: u64) -> Vec<IrInsn> {
    let mut ops = Vec::new();
    match op {
        C28xOp::Nop => ops.push(IrInsn::with_output(
            IrOp::Copy,
            reg(0, C28X_REG_SIZE),
            smallvec![reg(0, C28X_REG_SIZE)],
            addr,
        )),
        C28xOp::MovImm { dst, imm } => ops.push(IrInsn::with_output(
            IrOp::Copy,
            reg(dst, C28X_REG_SIZE),
            smallvec![Varnode::constant(imm as u64, C28X_REG_SIZE)],
            addr,
        )),
        C28xOp::Mov { dst, src } => ops.push(IrInsn::with_output(
            IrOp::Copy,
            reg(dst, C28X_REG_SIZE),
            smallvec![reg(src, C28X_REG_SIZE)],
            addr,
        )),
        C28xOp::Bin { op, dst, src } => {
            let d = reg(dst, C28X_REG_SIZE);
            ops.push(IrInsn::with_output(
                op,
                d,
                smallvec![d, reg(src, C28X_REG_SIZE)],
                addr,
            ));
            if matches!(op, IrOp::IntAdd | IrOp::IntSub) {
                emit_result_flags(&mut ops, d, C28X_REG_SIZE, addr);
            }
        }
        C28xOp::Load { dst, ar } => ops.push(IrInsn::with_output(
            IrOp::Load,
            reg(dst, C28X_REG_SIZE),
            smallvec![space_ram(), reg(4 + ar, C28X_REG_SIZE)],
            addr,
        )),
        C28xOp::Store { src, ar } => ops.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![
                space_ram(),
                reg(4 + ar, C28X_REG_SIZE),
                reg(src, C28X_REG_SIZE)
            ],
            addr,
        )),
        C28xOp::Branch { disp } => ops.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![ram(
                addr.wrapping_add(2).wrapping_add(disp as u16 as u64),
                C28X_REG_SIZE
            )],
            addr,
        )),
        C28xOp::CbranchNz { disp } => ops.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![
                ram(
                    addr.wrapping_add(2).wrapping_add(disp as u16 as u64),
                    C28X_REG_SIZE
                ),
                flag(ZF_OFFSET)
            ],
            addr,
        )),
        C28xOp::Call { target } => ops.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![ram(target as u64, C28X_REG_SIZE)],
            addr,
        )),
        C28xOp::Return => ops.push(IrInsn::without_output(IrOp::Return, smallvec![], addr)),
        C28xOp::Unknown => ops.push(IrInsn::without_output(
            IrOp::Unimplemented,
            smallvec![],
            addr,
        )),
    }
    ops
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::Lifter;

    fn word32(w: u32) -> [u8; 4] {
        w.to_le_bytes()
    }
    fn word16(w: u16) -> [u8; 2] {
        w.to_le_bytes()
    }

    #[test]
    fn c6x_register_file_and_arch() {
        let lifter = TiLifter::new_c6x();
        assert_eq!(lifter.arch(), ArchId::TiC6x);
        assert_eq!(lifter.register_file().registers.len(), 69);
        assert_eq!(lifter.register_file().registers[0].name, "A0");
        assert_eq!(lifter.register_file().registers[32].name, "B0");
        assert_eq!(lifter.register_file().registers[64].name, "PC");
    }

    #[test]
    fn c6x_lifts_integer_memory_and_flow() {
        let lifter = TiLifter::new_c6x();
        let add = lifter
            .lift_insn(
                &word32(0x3000_2000 | (3 << 23) | (1 << 18) | (2 << 13)),
                0x1000,
            )
            .unwrap();
        assert_eq!(add.len, 4);
        assert!(add.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(add.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));

        let load = lifter
            .lift_insn(&word32(0xb000_0004 | (4 << 23) | (5 << 18)), 0x1000)
            .unwrap();
        assert!(load.ir_ops.iter().any(|i| i.op == IrOp::Load));

        let br = lifter.lift_insn(&word32(0xd000_0001), 0x1000).unwrap();
        assert_eq!(br.ir_ops[0].op, IrOp::Branch);
        assert_eq!(br.ir_ops[0].inputs[0].offset, 0x1008);

        let ret = lifter.lift_insn(&word32(0xf100_0000), 0x1000).unwrap();
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn c28x_register_file_and_lifts() {
        let lifter = TiLifter::new_c28x();
        assert_eq!(lifter.arch(), ArchId::TiC28x);
        assert_eq!(lifter.register_file().registers[0].name, "AL");
        assert_eq!(lifter.register_file().registers[4].name, "AR0");
        assert_eq!(lifter.register_file().registers[32].name, "PC");

        let mov = lifter.lift_insn(&word16(0x1234), 0x200).unwrap();
        assert_eq!(mov.len, 2);
        assert_eq!(mov.ir_ops[0].op, IrOp::Copy);

        let mul = lifter.lift_insn(&word16(0xe120), 0x200).unwrap();
        assert!(mul.ir_ops.iter().any(|i| i.op == IrOp::IntMult));

        let call = lifter.lift_insn(&[0x00, 0xc0, 0x34, 0x12], 0x200).unwrap();
        assert_eq!(call.len, 4);
        assert_eq!(call.ir_ops[0].op, IrOp::Call);
        assert_eq!(call.ir_ops[0].inputs[0].offset, 0x1234);
    }

    #[test]
    fn short_buffers_are_reported() {
        assert!(matches!(
            TiLifter::new_c6x().lift_insn(&[0, 1], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            TiLifter::new_c28x().lift_insn(&[], 0),
            Err(LiftError::ShortBuffer)
        ));
        assert!(matches!(
            TiLifter::new_c28x().lift_insn(&[0, 0xc0], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    // ──────────────────────────────────────────────────────────────────────
    // Per-opcode C28x unit tests (20+)
    // ──────────────────────────────────────────────────────────────────────

    #[test]
    fn c28x_nop() {
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x0000), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops.len(), 1);
        assert_eq!(insn.ir_ops[0].op, IrOp::Copy);
        // NOP copies reg(0) to itself
        assert_eq!(insn.ir_ops[0].output, Some(reg(0, C28X_REG_SIZE)));
    }

    #[test]
    fn c28x_mov_imm_to_al() {
        // opc=0x1, dst=0 (AL), imm=0x42
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x1042), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Copy);
        assert_eq!(insn.ir_ops[0].output, Some(reg(0, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops[0].inputs[0], Varnode::constant(0x42, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_mov_imm_to_ar3() {
        // opc=0x1, dst=7 (AR3), imm=0xff
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x17ff), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::Copy);
        assert_eq!(insn.ir_ops[0].output, Some(reg(7, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops[0].inputs[0], Varnode::constant(0xff, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_mov_reg_to_reg() {
        // opc=0x2, dst=3, src=5
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x2350), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Copy);
        assert_eq!(insn.ir_ops[0].output, Some(reg(3, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops[0].inputs[0], reg(5, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_add() {
        // opc=0x3, dst=2, src=4  → IntAdd with flags
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x3240), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(insn.ir_ops[0].output, Some(reg(2, C28X_REG_SIZE)));
        // Flag setting: Z and N
        assert!(insn.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
        assert!(insn.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
    }

    #[test]
    fn c28x_sub() {
        // opc=0x4, dst=1, src=6
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x4160), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(insn.ir_ops[0].output, Some(reg(1, C28X_REG_SIZE)));
        // Should produce flags
        assert!(insn.ir_ops.len() >= 3);
        assert!(insn.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn c28x_and() {
        // opc=0x5, dst=0, src=1
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x5010), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::IntAnd);
        assert_eq!(insn.ir_ops[0].output, Some(reg(0, C28X_REG_SIZE)));
        // AND does not set flags in this impl
        assert_eq!(insn.ir_ops.len(), 1);
    }

    #[test]
    fn c28x_or() {
        // opc=0x6, dst=3, src=7
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x6370), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::IntOr);
        assert_eq!(insn.ir_ops[0].output, Some(reg(3, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops.len(), 1);
    }

    #[test]
    fn c28x_xor() {
        // opc=0x7, dst=5, src=2
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x7520), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::IntXor);
        assert_eq!(insn.ir_ops[0].output, Some(reg(5, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops.len(), 1);
    }

    #[test]
    fn c28x_load_via_ar0() {
        // opc=0x8, dst=0 (AL), ar=src&7=0 → Load from AR0 (register index 4)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x8000), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Load);
        assert_eq!(insn.ir_ops[0].output, Some(reg(0, C28X_REG_SIZE)));
        // Address pointer is AR0 = reg(4)
        assert_eq!(insn.ir_ops[0].inputs[1], reg(4, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_load_via_ar5() {
        // opc=0x8, dst=2, ar=5 → Load from AR5 (register index 9)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x8250), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::Load);
        assert_eq!(insn.ir_ops[0].output, Some(reg(2, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops[0].inputs[1], reg(4 + 5, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_store_via_ar1() {
        // opc=0x9, src=dst_field=3, ar=src_field&7=1 → Store reg(3) via AR1 (register index 5)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x9310), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Store);
        assert_eq!(insn.ir_ops[0].output, None);
        // inputs: [space_ram, ar_reg, src_reg]
        assert_eq!(insn.ir_ops[0].inputs[1], reg(4 + 1, C28X_REG_SIZE));
        assert_eq!(insn.ir_ops[0].inputs[2], reg(3, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_store_via_ar7() {
        // opc=0x9, src=0, ar=7 → Store reg(0) via AR7 (register index 11)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x9070), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::Store);
        assert_eq!(insn.ir_ops[0].inputs[1], reg(4 + 7, C28X_REG_SIZE));
        assert_eq!(insn.ir_ops[0].inputs[2], reg(0, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_branch_forward() {
        // opc=0xa, low=0x04 → disp = 4*2 = 8, target = addr+2+8 = 0x10a
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xa004), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Branch);
        assert_eq!(insn.ir_ops[0].inputs[0].offset, 0x10a);
    }

    #[test]
    fn c28x_branch_backward() {
        // opc=0xa, low=0xfe → i8 -2 → disp = -2*2 = -4, target = 0x200+2+(-4 as u16) = 0x200+2+0xfffc
        // Actually: disp = (0xfe as i8) as i16 * 2 = -2 * 2 = -4
        // target = addr.wrapping_add(2).wrapping_add(disp as u16 as u64)
        // disp as u16 = (-4i16) as u16 = 0xfffc
        // 0x200 + 2 + 0xfffc = 0x101fe (wrapping within u64)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xa0fe), 0x200).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::Branch);
        // 0x200 + 2 + 0xfffc = 0x101fe
        assert_eq!(insn.ir_ops[0].inputs[0].offset, 0x200u64.wrapping_add(2).wrapping_add(0xfffc));
    }

    #[test]
    fn c28x_cbranch_nz_forward() {
        // opc=0xb, low=0x03 → disp = 3*2 = 6, target = addr+2+6 = 0x108
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xb003), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Cbranch);
        assert_eq!(insn.ir_ops[0].inputs[0].offset, 0x108);
        // Second input is ZF flag
        assert_eq!(insn.ir_ops[0].inputs[1], flag(ZF_OFFSET));
    }

    #[test]
    fn c28x_cbranch_nz_backward() {
        // opc=0xb, low=0x80 → i8 -128 → disp = -128*2 = -256
        // disp as u16 = 0xff00, target = 0x400+2+0xff00 = 0x10102
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xb080), 0x400).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::Cbranch);
        let expected = 0x400u64.wrapping_add(2).wrapping_add((-256i16) as u16 as u64);
        assert_eq!(insn.ir_ops[0].inputs[0].offset, expected);
    }

    #[test]
    fn c28x_call_with_target() {
        // opc=0xc, 4-byte insn: [lo, 0xc0, target_lo, target_hi]
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&[0x00, 0xc0, 0x00, 0x80], 0x100).unwrap();
        assert_eq!(insn.len, 4);
        assert_eq!(insn.ir_ops[0].op, IrOp::Call);
        assert_eq!(insn.ir_ops[0].inputs[0].offset, 0x8000);
    }

    #[test]
    fn c28x_call_target_zero() {
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&[0x00, 0xc0, 0x00, 0x00], 0x100).unwrap();
        assert_eq!(insn.len, 4);
        assert_eq!(insn.ir_ops[0].op, IrOp::Call);
        assert_eq!(insn.ir_ops[0].inputs[0].offset, 0x0000);
    }

    #[test]
    fn c28x_return() {
        // opc=0xd
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xd000), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Return);
        assert!(insn.ir_ops[0].inputs.is_empty());
    }

    #[test]
    fn c28x_multiply() {
        // opc=0xe, dst=1, src=2
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xe120), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::IntMult);
        assert_eq!(insn.ir_ops[0].output, Some(reg(1, C28X_REG_SIZE)));
        // Multiply doesn't set flags in this impl
        assert_eq!(insn.ir_ops.len(), 1);
    }

    #[test]
    fn c28x_multiply_same_reg() {
        // opc=0xe, dst=5, src=5 (squaring)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xe550), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::IntMult);
        assert_eq!(insn.ir_ops[0].output, Some(reg(5, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops[0].inputs[0], reg(5, C28X_REG_SIZE));
        assert_eq!(insn.ir_ops[0].inputs[1], reg(5, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_unknown_opcode() {
        // opc=0xf produces Unknown → Unimplemented
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0xf000), 0x100).unwrap();
        assert_eq!(insn.len, 2);
        assert_eq!(insn.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn c28x_add_sets_flags_correctly() {
        // Verify flag structure in detail: ADD produces IntAdd + IntEqual(ZF) + IntRight + Subpiece(NF)
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x3010), 0x100).unwrap();
        assert_eq!(insn.ir_ops.len(), 4); // IntAdd, IntEqual, IntRight, Subpiece
        assert_eq!(insn.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(insn.ir_ops[1].op, IrOp::IntEqual);
        assert_eq!(insn.ir_ops[1].output, Some(flag(ZF_OFFSET)));
        assert_eq!(insn.ir_ops[2].op, IrOp::IntRight);
        assert_eq!(insn.ir_ops[3].op, IrOp::Subpiece);
        assert_eq!(insn.ir_ops[3].output, Some(flag(NF_OFFSET)));
    }

    #[test]
    fn c28x_sub_sets_flags_correctly() {
        // SUB also has 4 IR ops with flag-setting
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x4230), 0x100).unwrap();
        assert_eq!(insn.ir_ops.len(), 4);
        assert_eq!(insn.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(insn.ir_ops[1].op, IrOp::IntEqual);
        assert_eq!(insn.ir_ops[1].output, Some(flag(ZF_OFFSET)));
        assert_eq!(insn.ir_ops[3].output, Some(flag(NF_OFFSET)));
    }

    #[test]
    fn c28x_mov_imm_zero() {
        // MovImm with imm=0
        let lifter = TiLifter::new_c28x();
        let insn = lifter.lift_insn(&word16(0x1500), 0x100).unwrap();
        assert_eq!(insn.ir_ops[0].op, IrOp::Copy);
        assert_eq!(insn.ir_ops[0].output, Some(reg(5, C28X_REG_SIZE)));
        assert_eq!(insn.ir_ops[0].inputs[0], Varnode::constant(0, C28X_REG_SIZE));
    }

    #[test]
    fn c28x_call_short_buffer_error() {
        // Call opcode (0xc) but only 3 bytes → ShortBuffer
        let lifter = TiLifter::new_c28x();
        let result = lifter.lift_insn(&[0x00, 0xc0, 0x12], 0x100);
        assert!(matches!(result, Err(LiftError::ShortBuffer)));
    }

    #[test]
    fn c28x_decode_all_opcodes_produces_ir() {
        // Smoke test: every top-nibble 0..=0xf decodes without panic
        let lifter = TiLifter::new_c28x();
        for opc in 0u16..=0xf {
            let word = opc << 12 | 0x0120; // arbitrary lower bits
            // For call (0xc), need 4 bytes
            if opc == 0xc {
                let bytes = [word.to_le_bytes()[0], word.to_le_bytes()[1], 0x00, 0x10];
                let insn = lifter.lift_insn(&bytes, 0x100).unwrap();
                assert!(!insn.ir_ops.is_empty(), "opcode 0x{opc:x} produced empty IR");
            } else {
                let insn = lifter.lift_insn(&word.to_le_bytes(), 0x100).unwrap();
                assert!(!insn.ir_ops.is_empty(), "opcode 0x{opc:x} produced empty IR");
            }
        }
    }
}
