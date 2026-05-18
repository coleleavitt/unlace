//! AppleAgx → IR lifter (Apple M-series GPU, native decoder).
//!
//! Apple AGX (used on Apple M-series SoCs) is a partially undocumented GPU ISA.
//! This lifter models a conservative core: fixed-width 32-bit instructions with
//! a primary opcode in the low byte, destination/source register IDs in
//! subsequent nibbles, and an optional 16-bit immediate in the upper half.
//!
//! # Instruction encoding
//!
//! ```text
//! bits  0..=7   opcode
//! bits  8..=11  dst register (0-15)
//! bits 12..=15  src0 register (0-15)
//! bits 16..=19  src1 register (0-15)
//! bits 20..=31  imm12 (signed, for branches/memory offsets)
//! ```
//!
//! Unknown opcodes lift to [`IrOp::Unimplemented`] to allow partial
//! decompilation while decoder coverage grows.

use smallvec::{SmallVec, smallvec};
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

/// Fixed instruction size in bytes.
pub const INSN_SIZE: usize = 4;

/// Number of general-purpose 32-bit scalar registers.
pub const NUM_GPRS: usize = 16;

const GPR_BASE: u64 = 0;
const SPECIAL_BASE: u64 = GPR_BASE + (NUM_GPRS as u64) * 4;
const REG_PC: u64 = SPECIAL_BASE;
const REG_SP: u64 = SPECIAL_BASE + 4;
const UNIQUE_BASE: u64 = 0x2000;

/// CALLOTHER tag for texture/sample operations.
pub const CALLOTHER_TEXLD: u64 = 0xAA_00;
/// CALLOTHER tag for barrier operations.
pub const CALLOTHER_BARRIER: u64 = 0xAA_01;
/// CALLOTHER tag for wait (thread synchronization) operations.
pub const CALLOTHER_WAIT: u64 = 0xAA_02;
/// CALLOTHER tag for discard (fragment kill) operations.
pub const CALLOTHER_DISC: u64 = 0xAA_03;

// Opcode constants
const OP_NOP: u8 = 0x00;
const OP_IADD: u8 = 0x01;
const OP_ISUB: u8 = 0x02;
const OP_IMUL: u8 = 0x03;
const OP_FADD: u8 = 0x04;
const OP_FSUB: u8 = 0x05;
const OP_FMUL: u8 = 0x06;
const OP_MOV: u8 = 0x07;
const OP_LD: u8 = 0x08;
const OP_ST: u8 = 0x09;
const OP_BRANCH: u8 = 0x0A;
const OP_WAIT: u8 = 0x0B;
const OP_RETURN: u8 = 0x0C;
const OP_BARRIER: u8 = 0x0D;
const OP_TEXLD: u8 = 0x0E;
const OP_DISC: u8 = 0x0F;

#[inline]
fn gpr(idx: u8, size: u8) -> Varnode {
    Varnode::reg(GPR_BASE + ((idx as u64) % NUM_GPRS as u64) * 4, size)
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
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 4)
}

/// Decoded Apple AGX instruction.
#[derive(Debug, Clone, Copy)]
struct AppleAgxInsn {
    opcode: u8,
    dst: u8,
    src0: u8,
    src1: u8,
    imm12: i16,
}

impl AppleAgxInsn {
    fn decode(bytes: &[u8]) -> Result<Self, LiftError> {
        if bytes.len() < INSN_SIZE {
            return Err(LiftError::ShortBuffer);
        }
        let word = u32::from_le_bytes(bytes[..INSN_SIZE].try_into().expect("slice length checked"));
        let opcode = (word & 0xFF) as u8;
        let dst = ((word >> 8) & 0x0F) as u8;
        let src0 = ((word >> 12) & 0x0F) as u8;
        let src1 = ((word >> 16) & 0x0F) as u8;
        // imm12 is a sign-extended 12-bit value in bits 20..31
        let raw_imm = ((word >> 20) & 0xFFF) as u16;
        let imm12 = if raw_imm & 0x800 != 0 {
            // Sign extend from 12 bits
            (raw_imm | 0xF000) as i16
        } else {
            raw_imm as i16
        };
        Ok(Self {
            opcode,
            dst,
            src0,
            src1,
            imm12,
        })
    }

    fn relative_target(self, addr: u64) -> u64 {
        addr.wrapping_add(INSN_SIZE as u64)
            .wrapping_add(self.imm12 as i64 as u64)
    }

    fn imm_u64(self) -> u64 {
        self.imm12 as i32 as i64 as u64
    }
}

fn build_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(NUM_GPRS + 2);
    for i in 0..NUM_GPRS {
        let name: &'static str = Box::leak(format!("r{i}").into_boxed_str());
        regs.push(RegisterDef {
            name,
            varnode: gpr(i as u8, 4),
        });
    }
    regs.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(REG_PC, 4),
    });
    regs.push(RegisterDef {
        name: "sp",
        varnode: Varnode::reg(REG_SP, 4),
    });
    RegisterFile { registers: regs }
}

fn unimplemented(addr: u64) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::<[Varnode; 3]>::new(),
            addr,
        )],
        len: INSN_SIZE,
    }
}

/// Apple AGX (M-series GPU) lifter.
pub struct AppleAgxLifter {
    reg_file: RegisterFile,
}

impl AppleAgxLifter {
    pub fn new() -> Self {
        Self {
            reg_file: build_register_file(),
        }
    }

    fn lift_int_binop(&self, insn: AppleAgxInsn, addr: u64, op: IrOp) -> LiftedInsn {
        LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                gpr(insn.dst, 4),
                smallvec![gpr(insn.src0, 4), gpr(insn.src1, 4)],
                addr,
            )],
            len: INSN_SIZE,
        }
    }

    fn lift_float_binop(&self, insn: AppleAgxInsn, addr: u64, op: IrOp) -> LiftedInsn {
        LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                op,
                gpr(insn.dst, 4),
                smallvec![gpr(insn.src0, 4), gpr(insn.src1, 4)],
                addr,
            )],
            len: INSN_SIZE,
        }
    }

    fn lift_callother(
        &self,
        insn: AppleAgxInsn,
        addr: u64,
        tag: u64,
        output: Option<Varnode>,
    ) -> LiftedInsn {
        let inputs = smallvec![
            const_vn(tag, 4),
            gpr(insn.dst, 4),
            gpr(insn.src0, 4),
            gpr(insn.src1, 4),
        ];
        let ir = match output {
            Some(out) => IrInsn::with_output(IrOp::Callother, out, inputs, addr),
            None => IrInsn::without_output(IrOp::Callother, inputs, addr),
        };
        LiftedInsn {
            ir_ops: vec![ir],
            len: INSN_SIZE,
        }
    }

    fn lift_inner(&self, insn: AppleAgxInsn, addr: u64) -> LiftedInsn {
        match insn.opcode {
            OP_NOP => LiftedInsn {
                ir_ops: Vec::new(),
                len: INSN_SIZE,
            },
            OP_IADD => self.lift_int_binop(insn, addr, IrOp::IntAdd),
            OP_ISUB => self.lift_int_binop(insn, addr, IrOp::IntSub),
            OP_IMUL => self.lift_int_binop(insn, addr, IrOp::IntMult),
            OP_FADD => self.lift_float_binop(insn, addr, IrOp::FloatAdd),
            OP_FSUB => self.lift_float_binop(insn, addr, IrOp::FloatSub),
            OP_FMUL => self.lift_float_binop(insn, addr, IrOp::FloatMult),
            OP_MOV => LiftedInsn {
                ir_ops: vec![IrInsn::with_output(
                    IrOp::Copy,
                    gpr(insn.dst, 4),
                    smallvec![gpr(insn.src0, 4)],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_LD => {
                let ea = tmp(0, 4);
                let mut ops = Vec::with_capacity(2);
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    ea,
                    smallvec![gpr(insn.src0, 4), const_vn(insn.imm_u64(), 4)],
                    addr,
                ));
                ops.push(IrInsn::with_output(
                    IrOp::Load,
                    gpr(insn.dst, 4),
                    smallvec![ea],
                    addr,
                ));
                LiftedInsn {
                    ir_ops: ops,
                    len: INSN_SIZE,
                }
            }
            OP_ST => {
                let ea = tmp(0, 4);
                let mut ops = Vec::with_capacity(2);
                ops.push(IrInsn::with_output(
                    IrOp::IntAdd,
                    ea,
                    smallvec![gpr(insn.src0, 4), const_vn(insn.imm_u64(), 4)],
                    addr,
                ));
                ops.push(IrInsn::without_output(
                    IrOp::Store,
                    smallvec![ea, gpr(insn.src1, 4)],
                    addr,
                ));
                LiftedInsn {
                    ir_ops: ops,
                    len: INSN_SIZE,
                }
            }
            OP_BRANCH => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(
                    IrOp::Branch,
                    smallvec![ram_target(insn.relative_target(addr))],
                    addr,
                )],
                len: INSN_SIZE,
            },
            OP_WAIT => self.lift_callother(insn, addr, CALLOTHER_WAIT, None),
            OP_RETURN => LiftedInsn {
                ir_ops: vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
                len: INSN_SIZE,
            },
            OP_BARRIER => self.lift_callother(insn, addr, CALLOTHER_BARRIER, None),
            OP_TEXLD => self.lift_callother(insn, addr, CALLOTHER_TEXLD, Some(gpr(insn.dst, 4))),
            OP_DISC => self.lift_callother(insn, addr, CALLOTHER_DISC, None),
            _ => unimplemented(addr),
        }
    }
}

impl Default for AppleAgxLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for AppleAgxLifter {
    fn arch(&self) -> ArchId {
        ArchId::AppleAgx
    }
    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let insn = AppleAgxInsn::decode(bytes)?;
        Ok(self.lift_inner(insn, addr))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Helper to encode a synthetic AppleAGX instruction.
    fn encode(opcode: u8, dst: u8, src0: u8, src1: u8, imm12: i16) -> [u8; 4] {
        let raw_imm = (imm12 as u16) & 0xFFF;
        let word: u32 = (opcode as u32)
            | ((dst as u32 & 0x0F) << 8)
            | ((src0 as u32 & 0x0F) << 12)
            | ((src1 as u32 & 0x0F) << 16)
            | ((raw_imm as u32) << 20);
        word.to_le_bytes()
    }

    #[test]
    fn test_arch() {
        assert_eq!(AppleAgxLifter::new().arch(), ArchId::AppleAgx);
    }

    #[test]
    fn test_register_file() {
        let l = AppleAgxLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[15].name, "r15");
        assert_eq!(rf.registers[NUM_GPRS].name, "pc");
        assert_eq!(rf.registers[NUM_GPRS + 1].name, "sp");
        assert_eq!(rf.registers.len(), NUM_GPRS + 2);
    }

    #[test]
    fn test_short_buffer() {
        let l = AppleAgxLifter::new();
        assert!(matches!(
            l.lift_insn(&[0; 3], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    #[test]
    fn test_iadd() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_IADD, 1, 2, 3, 0), 0x1000).unwrap();
        assert_eq!(r.len, INSN_SIZE);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(r.ir_ops[0].output, Some(gpr(1, 4)));
        assert_eq!(r.ir_ops[0].inputs[0], gpr(2, 4));
        assert_eq!(r.ir_ops[0].inputs[1], gpr(3, 4));
    }

    #[test]
    fn test_isub() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_ISUB, 4, 5, 6, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(r.ir_ops[0].output, Some(gpr(4, 4)));
    }

    #[test]
    fn test_imul() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_IMUL, 0, 1, 2, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntMult);
    }

    #[test]
    fn test_float_ops() {
        let l = AppleAgxLifter::new();

        let fadd = l.lift_insn(&encode(OP_FADD, 1, 2, 3, 0), 0).unwrap();
        assert_eq!(fadd.ir_ops[0].op, IrOp::FloatAdd);
        assert_eq!(fadd.ir_ops[0].output, Some(gpr(1, 4)));

        let fsub = l.lift_insn(&encode(OP_FSUB, 4, 5, 6, 0), 0).unwrap();
        assert_eq!(fsub.ir_ops[0].op, IrOp::FloatSub);

        let fmul = l.lift_insn(&encode(OP_FMUL, 7, 8, 9, 0), 0).unwrap();
        assert_eq!(fmul.ir_ops[0].op, IrOp::FloatMult);
    }

    #[test]
    fn test_mov() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_MOV, 3, 7, 0, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(gpr(3, 4)));
        assert_eq!(r.ir_ops[0].inputs[0], gpr(7, 4));
    }

    #[test]
    fn test_load_store() {
        let l = AppleAgxLifter::new();

        // Load: dst=r1, base=r2, offset=8
        let ld = l.lift_insn(&encode(OP_LD, 1, 2, 0, 8), 0x2000).unwrap();
        assert_eq!(ld.ir_ops[0].op, IrOp::IntAdd); // EA calc
        assert_eq!(ld.ir_ops[1].op, IrOp::Load);
        assert_eq!(ld.ir_ops[1].output, Some(gpr(1, 4)));

        // Store: base=r2, value=r3, offset=-4
        let st = l.lift_insn(&encode(OP_ST, 0, 2, 3, -4), 0x2004).unwrap();
        assert_eq!(st.ir_ops[0].op, IrOp::IntAdd); // EA calc
        assert_eq!(st.ir_ops[1].op, IrOp::Store);
        assert_eq!(st.ir_ops[1].inputs[1], gpr(3, 4));
    }

    #[test]
    fn test_branch() {
        let l = AppleAgxLifter::new();
        // Branch forward by 0x10 from addr 0x1000 → target = 0x1000 + 4 + 0x10 = 0x1014
        let r = l.lift_insn(&encode(OP_BRANCH, 0, 0, 0, 0x10), 0x1000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
        assert_eq!(r.ir_ops[0].inputs[0], ram_target(0x1014));
    }

    #[test]
    fn test_return() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_RETURN, 0, 0, 0, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Return);
        assert_eq!(r.ir_ops[0].output, None);
    }

    #[test]
    fn test_wait() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_WAIT, 0, 0, 0, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
        assert_eq!(r.ir_ops[0].output, None);
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(CALLOTHER_WAIT, 4));
    }

    #[test]
    fn test_barrier() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_BARRIER, 0, 0, 0, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
        assert_eq!(r.ir_ops[0].output, None);
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(CALLOTHER_BARRIER, 4));
    }

    #[test]
    fn test_texld() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_TEXLD, 1, 2, 3, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
        assert_eq!(r.ir_ops[0].output, Some(gpr(1, 4)));
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(CALLOTHER_TEXLD, 4));
    }

    #[test]
    fn test_disc() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(OP_DISC, 0, 0, 0, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Callother);
        assert_eq!(r.ir_ops[0].output, None);
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(CALLOTHER_DISC, 4));
    }

    #[test]
    fn test_unknown_opcode_unimplemented() {
        let l = AppleAgxLifter::new();
        let r = l.lift_insn(&encode(0xFF, 0, 0, 0, 0), 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }
}
