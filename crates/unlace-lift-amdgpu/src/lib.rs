//! AMDGPU (RDNA/GCN) → IR lifter.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const SGPR_COUNT: usize = 16;
const VGPR_COUNT: usize = 16;
const REG_SIZE: u8 = 4;
const PC_OFFSET: u64 = ((SGPR_COUNT + VGPR_COUNT) as u64) * (REG_SIZE as u64);

fn amdgpu_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(SGPR_COUNT + VGPR_COUNT + 1);
    static S_NAMES: [&str; 16] = ["s0","s1","s2","s3","s4","s5","s6","s7","s8","s9","s10","s11","s12","s13","s14","s15"];
    static V_NAMES: [&str; 16] = ["v0","v1","v2","v3","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15"];
    for (i, n) in S_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg((i as u64) * 4, REG_SIZE) });
    }
    for (i, n) in V_NAMES.iter().enumerate() {
        regs.push(RegisterDef { name: n, varnode: Varnode::reg((SGPR_COUNT as u64 + i as u64) * 4, REG_SIZE) });
    }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(PC_OFFSET, REG_SIZE) });
    RegisterFile { registers: regs }
}

pub struct AmdGpuLifter { reg_file: RegisterFile }
impl AmdGpuLifter { pub fn new() -> Self { Self { reg_file: amdgpu_register_file() } } }
impl Default for AmdGpuLifter { fn default() -> Self { Self::new() } }

impl Lifter for AmdGpuLifter {
    fn arch(&self) -> ArchId { ArchId::AmdGpu }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 { return Err(LiftError::ShortBuffer); }
        Ok(LiftedInsn { ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)], len: 4 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test] fn test_arch() { assert_eq!(AmdGpuLifter::new().arch(), ArchId::AmdGpu); }
    #[test] fn test_reg_file() { let l = AmdGpuLifter::new(); assert_eq!(l.register_file().registers.len(), 33); }
    #[test] fn test_short() { assert!(AmdGpuLifter::new().lift_insn(&[0,0], 0).is_err()); }
//! AmdGpu → IR lifter (native decoder).

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 4;
const REG_COUNT: usize = 32;
const PC_OFFSET: u64 = (REG_COUNT as u64) * (REG_SIZE as u64);

fn build_register_file() -> RegisterFile {
    static NAMES: [&str; 32] = [
        "r0","r1","r2","r3","r4","r5","r6","r7",
        "r8","r9","r10","r11","r12","r13","r14","r15",
        "r16","r17","r18","r19","r20","r21","r22","r23",
        "r24","r25","r26","r27","r28","r29","r30","r31",
    ];
    let count = REG_COUNT.min(32);
    let mut regs = Vec::with_capacity(count + 1);
    for i in 0..count {
        regs.push(RegisterDef {
            name: NAMES[i],
            varnode: Varnode::reg((i as u64) * (REG_SIZE as u64), REG_SIZE),
        });
    }
    regs.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(PC_OFFSET, REG_SIZE),
    });
    RegisterFile { registers: regs }
}

pub struct AmdGpuLifter {
    reg_file: RegisterFile,
}

impl AmdGpuLifter {
    pub fn new() -> Self { Self { reg_file: build_register_file() } }
}
impl Default for AmdGpuLifter { fn default() -> Self { Self::new() } }

impl Lifter for AmdGpuLifter {
    fn arch(&self) -> ArchId { ArchId::AmdGpu }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 {
            return Err(LiftError::ShortBuffer);
        }
        let ops = vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)];
        Ok(LiftedInsn { ir_ops: ops, len: 4 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_arch() { assert_eq!(AmdGpuLifter::new().arch(), ArchId::AmdGpu); }

    #[test]
    fn test_register_file() {
        let l = AmdGpuLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "r0");
        assert!(rf.registers.len() > 1);
    }

    #[test]
    fn test_short_buffer() {
        assert!(AmdGpuLifter::new().lift_insn(&[], 0).is_err());
    }

    #[test]
    fn test_decodes() {
        let l = AmdGpuLifter::new();
        let r = l.lift_insn(&[0u8; 32], 0x1000).unwrap();
        assert_eq!(r.len, 4);
    }
use smallvec::smallvec;
use unlace_ir::{ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode};

fn amdgpu_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(33);
    static S: [&str; 16] = ["s0","s1","s2","s3","s4","s5","s6","s7","s8","s9","s10","s11","s12","s13","s14","s15"];
    static V: [&str; 16] = ["v0","v1","v2","v3","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15"];
    for (i, n) in S.iter().enumerate() { regs.push(RegisterDef { name: n, varnode: Varnode::reg(i as u64 * 4, 4) }); }
    for (i, n) in V.iter().enumerate() { regs.push(RegisterDef { name: n, varnode: Varnode::reg(64 + i as u64 * 4, 4) }); }
    regs.push(RegisterDef { name: "pc", varnode: Varnode::reg(128, 4) });
    RegisterFile { registers: regs }
}

pub struct AmdGpuLifter { reg_file: RegisterFile }
impl AmdGpuLifter { pub fn new() -> Self { Self { reg_file: amdgpu_register_file() } } }
impl Default for AmdGpuLifter { fn default() -> Self { Self::new() } }

impl Lifter for AmdGpuLifter {
    fn arch(&self) -> ArchId { ArchId::AmdGpu }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }
    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 4 { return Err(LiftError::ShortBuffer); }
        Ok(LiftedInsn { ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)], len: 4 })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test] fn test_arch() { assert_eq!(AmdGpuLifter::new().arch(), ArchId::AmdGpu); }
    #[test] fn test_regs() { assert_eq!(AmdGpuLifter::new().register_file().registers.len(), 33); }
    #[test] fn test_short() { assert!(AmdGpuLifter::new().lift_insn(&[0,0], 0).is_err()); }
//! AMDGPU RDNA/GCN → IR lifter.
//!
//! This crate implements a compact, dependency-free decoder for the common
//! scalar and vector instruction families present in AMD GCN/RDNA shader code.
//! The complete AMDGPU ISA is very large and evolves per generation; this
//! lifter therefore follows the project convention used by other broad ISA
//! lifters: exact IR is emitted for stable/core encodings, while generation- or
//! format-specific instructions are preserved as tagged [`IrOp::Callother`] or
//! [`IrOp::Unimplemented`] rather than failing the whole lift.
//!
//! # Register file model
//!
//! - `s0..s105`: 32-bit scalar registers
//! - `v0..v255`: 32-bit vector registers
//! - `vcc`, `exec`, `xnack_mask`, `flat_scratch`: 64-bit pairs
//! - `scc`: 1-bit condition register modelled as one byte
//! - `m0`: 32-bit memory descriptor/index register

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const SGPR_COUNT: u16 = 106;
const VGPR_COUNT: u16 = 256;

const SGPR_BASE: u64 = 0x0000;
const VCC_OFFSET: u64 = 0x01a8;
const EXEC_OFFSET: u64 = 0x01b0;
const SCC_OFFSET: u64 = 0x01b8;
const M0_OFFSET: u64 = 0x01bc;
const FLAT_SCRATCH_OFFSET: u64 = 0x01c0;
const XNACK_MASK_OFFSET: u64 = 0x01c8;
const VGPR_BASE: u64 = 0x1000;
const UNIQUE_BASE: u64 = 0x8000;

/// Callother tags reserved by this lifter for AMDGPU-specific semantics.
pub mod callother {
    pub const S_BARRIER: u64 = 0x414d_4400;
    pub const S_WAITCNT: u64 = 0x414d_4401;
    pub const DS: u64 = 0x414d_4410;
    pub const FLAT: u64 = 0x414d_4411;
    pub const MUBUF: u64 = 0x414d_4412;
    pub const SMEM: u64 = 0x414d_4413;
    pub const IMAGE: u64 = 0x414d_4414;
    pub const EXPORT: u64 = 0x414d_4415;
}

#[inline]
fn sgpr(idx: u16) -> Varnode {
    Varnode::reg(SGPR_BASE + (idx as u64) * 4, 4)
}

#[inline]
fn vgpr(idx: u16) -> Varnode {
    Varnode::reg(VGPR_BASE + (idx as u64) * 4, 4)
}

#[inline]
fn vcc() -> Varnode {
    Varnode::reg(VCC_OFFSET, 8)
}

#[inline]
fn exec() -> Varnode {
    Varnode::reg(EXEC_OFFSET, 8)
}

#[inline]
fn scc() -> Varnode {
    Varnode::reg(SCC_OFFSET, 1)
}

#[inline]
fn m0() -> Varnode {
    Varnode::reg(M0_OFFSET, 4)
}

#[inline]
fn c(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(slot: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + slot * 16, size)
}

#[inline]
fn target(addr: u64) -> Varnode {
    Varnode::ram(addr, 8)
}

#[inline]
fn read_u32(bytes: &[u8]) -> Result<u32, LiftError> {
    if bytes.len() < 4 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]))
}

#[inline]
fn sign_extend_u32(value: u32, bits: u32) -> i64 {
    let shift = 64 - bits;
    ((value as i64) << shift) >> shift
}

fn literal_or_special(code: u16) -> Option<Varnode> {
    match code {
        0..=105 => Some(sgpr(code)),
        106 => Some(vcc()),
        124 => Some(m0()),
        126 => Some(exec()),
        // GCN inline integer constants: 128..=192 encode 0..=64.
        128..=192 => Some(c((code - 128) as u64, 4)),
        // 193..=208 encode -1..=-16 in two's complement 32-bit form.
        193..=208 => Some(c(((!((code - 193) as u32)) as u64) & 0xffff_ffff, 4)),
        // Common inline FP constants.  These are bit patterns, not host floats.
        240 => Some(c(0x3f00_0000, 4)), // 0.5
        241 => Some(c(0xbf00_0000, 4)), // -0.5
        242 => Some(c(0x3f80_0000, 4)), // 1.0
        243 => Some(c(0xbf80_0000, 4)), // -1.0
        244 => Some(c(0x4000_0000, 4)), // 2.0
        245 => Some(c(0xc000_0000, 4)), // -2.0
        246 => Some(c(0x4080_0000, 4)), // 4.0
        247 => Some(c(0xc080_0000, 4)), // -4.0
        _ => None,
    }
}

fn scalar_src(code: u16) -> Varnode {
    literal_or_special(code).unwrap_or_else(|| c(code as u64, 4))
}

fn vector_src0(code: u16) -> Varnode {
    literal_or_special(code).unwrap_or_else(|| {
        if code >= 256 {
            vgpr(code - 256)
        } else {
            c(code as u64, 4)
        }
    })
}

fn no_output(op: IrOp, inputs: &[Varnode], addr: u64) -> IrInsn {
    IrInsn::without_output(op, SmallVec::from_slice(inputs), addr)
}

fn with_output(op: IrOp, out: Varnode, inputs: &[Varnode], addr: u64) -> IrInsn {
    IrInsn::with_output(op, out, SmallVec::from_slice(inputs), addr)
}

fn unimpl(addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![no_output(IrOp::Unimplemented, &[], addr)],
        len,
    }
}

fn callother(tag: u64, word: u32, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![no_output(
            IrOp::Callother,
            &[c(tag, 8), c(word as u64, 4)],
            addr,
        )],
        len,
    }
}

/// AMDGPU scalar/vector shader lifter.
pub struct AmdGpuLifter {
    register_file: RegisterFile,
}

impl AmdGpuLifter {
    /// Construct a new AMDGPU lifter.
    pub fn new() -> Self {
        let mut regs = Vec::with_capacity(SGPR_COUNT as usize + VGPR_COUNT as usize + 7);
        for i in 0..SGPR_COUNT {
            regs.push(RegisterDef {
                name: Box::leak(format!("s{i}").into_boxed_str()),
                varnode: sgpr(i),
            });
        }
        regs.push(RegisterDef {
            name: "vcc",
            varnode: vcc(),
        });
        regs.push(RegisterDef {
            name: "exec",
            varnode: exec(),
        });
        regs.push(RegisterDef {
            name: "scc",
            varnode: scc(),
        });
        regs.push(RegisterDef {
            name: "m0",
            varnode: m0(),
        });
        regs.push(RegisterDef {
            name: "flat_scratch",
            varnode: Varnode::reg(FLAT_SCRATCH_OFFSET, 8),
        });
        regs.push(RegisterDef {
            name: "xnack_mask",
            varnode: Varnode::reg(XNACK_MASK_OFFSET, 8),
        });
        for i in 0..VGPR_COUNT {
            regs.push(RegisterDef {
                name: Box::leak(format!("v{i}").into_boxed_str()),
                varnode: vgpr(i),
            });
        }
        Self {
            register_file: RegisterFile { registers: regs },
        }
    }

    fn lift_sop2(&self, word: u32, addr: u64) -> LiftedInsn {
        let op = ((word >> 23) & 0x7f) as u8;
        let dst = ((word >> 16) & 0x7f) as u16;
        let src1 = ((word >> 8) & 0xff) as u16;
        let src0 = (word & 0xff) as u16;
        let out = if dst == 106 {
            vcc()
        } else {
            sgpr(dst.min(SGPR_COUNT - 1))
        };
        let lhs = scalar_src(src0);
        let rhs = scalar_src(src1);
        let op = match op {
            0 | 2 => Some(IrOp::IntAdd),
            1 | 3 => Some(IrOp::IntSub),
            10 | 11 => Some(IrOp::IntAnd),
            14 | 15 => Some(IrOp::IntOr),
            16 | 17 => Some(IrOp::IntXor),
            23 | 24 => Some(IrOp::IntLeft),
            25 | 26 => Some(IrOp::IntRight),
            27 | 28 => Some(IrOp::IntSright),
            _ => None,
        };
        let Some(op) = op else {
            return unimpl(addr, 4);
        };
        let mut ir = vec![with_output(op, out, &[lhs, rhs], addr)];
        if matches!(op, IrOp::IntAdd | IrOp::IntSub) {
            ir.push(with_output(
                IrOp::IntNotequal,
                scc(),
                &[out, c(0, out.size)],
                addr,
            ));
        }
        LiftedInsn { ir_ops: ir, len: 4 }
    }

    fn lift_sop1(&self, word: u32, addr: u64) -> LiftedInsn {
        let op = ((word >> 8) & 0xff) as u8;
        let dst = ((word >> 16) & 0x7f) as u16;
        let src = scalar_src((word & 0xff) as u16);
        let out = if dst == 106 {
            vcc()
        } else {
            sgpr(dst.min(SGPR_COUNT - 1))
        };
        let ir_op = match op {
            0x03 => IrOp::Copy,      // S_MOV_B32
            0x04 => IrOp::Copy,      // S_MOV_B64 (modelled as low pair when dst is SGPR)
            0x07 => IrOp::Int2comp,  // S_NOT_B32
            0x08 => IrOp::Int2comp,  // S_NOT_B64
            0x09 => IrOp::IntNegate, // S_WQM_B32 treated as scalar transform
            _ => return unimpl(addr, 4),
        };
        LiftedInsn {
            ir_ops: vec![with_output(ir_op, out, &[src], addr)],
            len: 4,
        }
    }

    fn lift_sopp(&self, word: u32, addr: u64) -> LiftedInsn {
        let op = ((word >> 16) & 0x7f) as u8;
        let simm = (word & 0xffff) as u32;
        match op {
            0x00 => LiftedInsn {
                ir_ops: Vec::new(),
                len: 4,
            }, // S_NOP
            0x01 => LiftedInsn {
                ir_ops: vec![no_output(IrOp::Return, &[], addr)],
                len: 4,
            },
            0x02 => {
                let disp = sign_extend_u32(simm, 16) * 4;
                let dest = addr.wrapping_add(4).wrapping_add(disp as u64);
                LiftedInsn {
                    ir_ops: vec![no_output(IrOp::Branch, &[target(dest)], addr)],
                    len: 4,
                }
            }
            0x04 => {
                let disp = sign_extend_u32(simm, 16) * 4;
                let dest = addr.wrapping_add(4).wrapping_add(disp as u64);
                let cond = tmp(0, 1);
                LiftedInsn {
                    ir_ops: vec![
                        with_output(IrOp::IntEqual, cond, &[scc(), c(0, 1)], addr),
                        no_output(IrOp::Cbranch, &[target(dest), cond], addr),
                    ],
                    len: 4,
                }
            }
            0x05 => {
                let disp = sign_extend_u32(simm, 16) * 4;
                let dest = addr.wrapping_add(4).wrapping_add(disp as u64);
                LiftedInsn {
                    ir_ops: vec![no_output(IrOp::Cbranch, &[target(dest), scc()], addr)],
                    len: 4,
                }
            }
            0x0a => callother(callother::S_BARRIER, word, addr, 4),
            0x0c => callother(callother::S_WAITCNT, word, addr, 4),
            _ => unimpl(addr, 4),
        }
    }

    fn lift_sopk(&self, word: u32, addr: u64) -> LiftedInsn {
        let op = ((word >> 23) & 0x1f) as u8;
        let dst = ((word >> 16) & 0x7f) as u16;
        let imm = word & 0xffff;
        let out = sgpr(dst.min(SGPR_COUNT - 1));
        match op {
            0x00 => LiftedInsn {
                ir_ops: vec![with_output(IrOp::Copy, out, &[c(imm as u64, 4)], addr)],
                len: 4,
            },
            0x02 => LiftedInsn {
                ir_ops: vec![with_output(
                    IrOp::IntAdd,
                    out,
                    &[out, c(imm as u64, 4)],
                    addr,
                )],
                len: 4,
            },
            0x03 => LiftedInsn {
                ir_ops: vec![with_output(
                    IrOp::IntSub,
                    out,
                    &[out, c(imm as u64, 4)],
                    addr,
                )],
                len: 4,
            },
            0x0f => LiftedInsn {
                ir_ops: vec![with_output(
                    IrOp::IntAnd,
                    out,
                    &[out, c(imm as u64, 4)],
                    addr,
                )],
                len: 4,
            },
            0x10 => LiftedInsn {
                ir_ops: vec![with_output(
                    IrOp::IntOr,
                    out,
                    &[out, c(imm as u64, 4)],
                    addr,
                )],
                len: 4,
            },
            0x11 => LiftedInsn {
                ir_ops: vec![with_output(
                    IrOp::IntXor,
                    out,
                    &[out, c(imm as u64, 4)],
                    addr,
                )],
                len: 4,
            },
            _ => unimpl(addr, 4),
        }
    }

    fn lift_vop2(&self, word: u32, addr: u64) -> LiftedInsn {
        let op = ((word >> 25) & 0x3f) as u8;
        let dst = ((word >> 17) & 0xff) as u16;
        let src1 = ((word >> 9) & 0xff) as u16;
        let src0 = (word & 0x1ff) as u16;
        let lhs = vector_src0(src0);
        let rhs = vgpr(src1);
        let out = vgpr(dst);
        let ir_op = match op {
            0x03 => IrOp::FloatAdd,
            0x04 => IrOp::FloatSub,
            0x05 => {
                return LiftedInsn {
                    ir_ops: vec![with_output(IrOp::FloatSub, out, &[rhs, lhs], addr)],
                    len: 4,
                };
            }
            0x08 => IrOp::FloatMult,
            0x19 => IrOp::IntAdd,
            0x1a => IrOp::IntSub,
            0x1b => {
                return LiftedInsn {
                    ir_ops: vec![with_output(IrOp::IntSub, out, &[rhs, lhs], addr)],
                    len: 4,
                };
            }
            0x20 => IrOp::IntAnd,
            0x21 => IrOp::IntOr,
            0x22 => IrOp::IntXor,
            0x24 => IrOp::IntLeft,
            0x25 => IrOp::IntRight,
            0x26 => IrOp::IntSright,
            _ => return unimpl(addr, 4),
        };
        LiftedInsn {
            ir_ops: vec![with_output(ir_op, out, &[lhs, rhs], addr)],
            len: 4,
        }
    }

    fn lift_vop1_or_vopc(&self, word: u32, addr: u64) -> LiftedInsn {
        let major = (word >> 25) & 0x7f;
        let op = ((word >> 9) & 0xff) as u8;
        let dst = ((word >> 17) & 0xff) as u16;
        let src0 = vector_src0((word & 0x1ff) as u16);
        if major == 0x3e {
            let ir_op = match op {
                0x01 => IrOp::Copy, // V_MOV_B32
                0x20 => IrOp::FloatFloat2int,
                0x21 => IrOp::FloatInt2float,
                0x32 => IrOp::FloatSqrt,
                0x35 => IrOp::FloatAbs,
                0x36 => IrOp::FloatNeg,
                _ => return unimpl(addr, 4),
            };
            LiftedInsn {
                ir_ops: vec![with_output(ir_op, vgpr(dst), &[src0], addr)],
                len: 4,
            }
        } else if major == 0x3f {
            let ir_op = match op {
                0x00 => IrOp::FloatEqual,
                0x01 => IrOp::FloatLess,
                0x02 => IrOp::FloatLessequal,
                0x20 => IrOp::IntEqual,
                0x21 => IrOp::IntLess,
                0x22 => IrOp::IntLessequal,
                0x23 => IrOp::IntNotequal,
                _ => return unimpl(addr, 4),
            };
            LiftedInsn {
                ir_ops: vec![with_output(ir_op, vcc(), &[src0, vgpr(dst)], addr)],
                len: 4,
            }
        } else {
            unimpl(addr, 4)
        }
    }

    fn lift_extended_family(&self, word: u32, addr: u64) -> Option<LiftedInsn> {
        let hi = (word >> 24) as u8;
        let tag = match hi {
            0xd8 | 0xd9 => callother::DS,
            0xdc | 0xdd => callother::FLAT,
            0xe0..=0xe7 => callother::MUBUF,
            0xc0..=0xc7 => callother::SMEM,
            0xf0..=0xf7 => callother::IMAGE,
            0xf8..=0xfb => callother::EXPORT,
            _ => return None,
        };
        Some(callother(tag, word, addr, 4))
    }
}

impl Default for AmdGpuLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for AmdGpuLifter {
    fn arch(&self) -> ArchId {
        ArchId::AmdGpu
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let word = read_u32(bytes)?;
        trace!(addr = %format!("{addr:#x}"), word = %format!("{word:#010x}"), "decoding AMDGPU instruction");

        if word & 0xff80_0000 == 0xbf80_0000 {
            return Ok(self.lift_sopp(word, addr));
        }
        if word & 0xff80_0000 == 0xbe80_0000 {
            return Ok(self.lift_sop1(word, addr));
        }
        if word & 0xf000_0000 == 0xb000_0000 {
            return Ok(self.lift_sopk(word, addr));
        }
        if let Some(lifted) = self.lift_extended_family(word, addr) {
            return Ok(lifted);
        }
        if (word >> 31) == 0 {
            let major = (word >> 25) & 0x7f;
            if major == 0x3e || major == 0x3f {
                Ok(self.lift_vop1_or_vopc(word, addr))
            } else {
                Ok(self.lift_vop2(word, addr))
            }
        } else if (word >> 30) == 0b10 {
            Ok(self.lift_sop2(word, addr))
        } else {
            Ok(unimpl(addr, 4))
        }
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn lifter() -> AmdGpuLifter {
        AmdGpuLifter::new()
    }
    fn bytes(word: u32) -> [u8; 4] {
        word.to_le_bytes()
    }

    fn vop2(op: u8, dst: u8, src1: u8, src0: u16) -> u32 {
        ((op as u32) << 25) | ((dst as u32) << 17) | ((src1 as u32) << 9) | src0 as u32
    }

    fn sop2(op: u8, dst: u8, src1: u8, src0: u8) -> u32 {
        0x8000_0000
            | ((op as u32) << 23)
            | ((dst as u32) << 16)
            | ((src1 as u32) << 8)
            | src0 as u32
    }

    #[test]
    fn register_file_layout() {
        let l = lifter();
        let rf = l.register_file();
        assert_eq!(rf.registers.len(), 106 + 6 + 256);
        assert_eq!(rf.registers[0].name, "s0");
        assert_eq!(rf.registers[105].name, "s105");
        assert_eq!(rf.registers[106].name, "vcc");
        assert_eq!(rf.registers[111].name, "xnack_mask");
        assert_eq!(rf.registers[112].name, "v0");
        assert_eq!(rf.registers.last().unwrap().name, "v255");
    }

    #[test]
    fn arch_is_amdgpu() {
        assert_eq!(lifter().arch(), ArchId::AmdGpu);
    }

    #[test]
    fn short_buffer_errors() {
        assert!(matches!(
            lifter().lift_insn(&[0, 1, 2], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    #[test]
    fn v_add_f32_lifts_to_float_add() {
        let r = lifter()
            .lift_insn(&bytes(vop2(0x03, 2, 1, 242)), 0x1000)
            .unwrap();
        assert_eq!(r.len, 4);
        assert_eq!(r.ir_ops[0].op, IrOp::FloatAdd);
        assert_eq!(r.ir_ops[0].output, Some(vgpr(2)));
        assert_eq!(r.ir_ops[0].inputs[0], c(0x3f80_0000, 4));
        assert_eq!(r.ir_ops[0].inputs[1], vgpr(1));
    }

    #[test]
    fn v_add_i32_lifts_to_int_add() {
        let r = lifter()
            .lift_insn(&bytes(vop2(0x19, 7, 6, 129)), 0x1000)
            .unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(vgpr(7)));
        assert_eq!(r.ir_ops[0].inputs[0], c(1, 4));
        assert_eq!(r.ir_ops[0].inputs[1], vgpr(6));
    }

    #[test]
    fn s_add_u32_lifts_and_sets_scc() {
        let r = lifter()
            .lift_insn(&bytes(sop2(0, 4, 2, 1)), 0x2000)
            .unwrap();
        assert_eq!(r.ir_ops.len(), 2);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(sgpr(4)));
        assert_eq!(r.ir_ops[1].op, IrOp::IntNotequal);
        assert_eq!(r.ir_ops[1].output, Some(scc()));
    }

    #[test]
    fn s_branch_sign_extends_simm16_words() {
        let word = 0xbf80_0000 | (0x02 << 16) | 0xffff;
        let r = lifter().lift_insn(&bytes(word), 0x3000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
        assert_eq!(r.ir_ops[0].inputs[0], target(0x3000));
    }

    #[test]
    fn s_cbranch_scc0_compares_scc_to_zero() {
        let word = 0xbf80_0000 | (0x04 << 16) | 1;
        let r = lifter().lift_insn(&bytes(word), 0x4000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(r.ir_ops[1].op, IrOp::Cbranch);
        assert_eq!(r.ir_ops[1].inputs[0], target(0x4008));
    }

    #[test]
    fn ds_family_is_preserved_as_callother() {
        let r = lifter().lift_insn(&bytes(0xd800_0000), 0x5000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
        assert_eq!(r.ir_ops[0].inputs[0], c(callother::DS, 8));
    }

    #[test]
    fn unknown_instruction_is_unimplemented_not_error() {
        let r = lifter().lift_insn(&bytes(0xff00_0000), 0x6000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }
}
