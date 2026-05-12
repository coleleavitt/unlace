//! Infineon TriCore → IR lifter.
//!
//! This crate implements a compact TriCore TC1.x decoder/lifter covering the
//! common 16-bit and 32-bit core forms used in automotive firmware: arithmetic,
//! bitwise operations, moves, loads/stores, calls, jumps, and conditional
//! branches.  Unknown encodings are represented as [`IrOp::Unimplemented`] so
//! callers can continue lifting surrounding code.
//!
//! TriCore instructions are little-endian.  The least-significant bit of the
//! first byte selects the instruction size in the architectural encoding:
//! `0` denotes a 16-bit instruction and `1` denotes a 32-bit instruction.  The
//! lifter also treats `0x00 0x00` as a 16-bit NOP.

use smallvec::SmallVec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const UNIQUE_BASE: u64 = 0x3000;
const PC_OFFSET: u64 = 0x200;
const PSW_OFFSET: u64 = 0x208;
const PCXI_OFFSET: u64 = 0x210;
const FCX_OFFSET: u64 = 0x218;
const LCX_OFFSET: u64 = 0x220;
const ISP_OFFSET: u64 = 0x228;
const ICR_OFFSET: u64 = 0x230;
const BTV_OFFSET: u64 = 0x238;
const BIV_OFFSET: u64 = 0x240;
const SYSCON_OFFSET: u64 = 0x248;

const D_REG_NAMES: [&str; 16] = [
    "d0", "d1", "d2", "d3", "d4", "d5", "d6", "d7", "d8", "d9", "d10", "d11", "d12", "d13", "d14",
    "d15",
];
const A_REG_NAMES: [&str; 16] = [
    "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8", "a9", "a10", "a11", "a12", "a13", "a14",
    "a15",
];

#[inline]
fn dreg(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * 8, 4)
}

#[inline]
fn areg(idx: u8) -> Varnode {
    Varnode::reg(0x100 + (idx as u64) * 8, 4)
}

#[inline]
fn const_vn(value: u64, size: u8) -> Varnode {
    Varnode::constant(value, size)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, size)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 4)
}

#[inline]
fn read16(bytes: &[u8]) -> Result<u16, LiftError> {
    if bytes.len() < 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_le_bytes([bytes[0], bytes[1]]))
}

#[inline]
fn read32(bytes: &[u8]) -> Result<u32, LiftError> {
    if bytes.len() < 4 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]))
}

#[inline]
fn sign_extend(value: u32, bits: u8) -> i32 {
    let shift = 32 - bits as u32;
    ((value << shift) as i32) >> shift
}

fn unimplemented(addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::<[Varnode; 3]>::new(),
            addr,
        )],
        len,
    }
}

fn copy(out: Varnode, input: Varnode, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            IrOp::Copy,
            out,
            SmallVec::from_slice(&[input]),
            addr,
        )],
        len,
    }
}

fn binop(op: IrOp, out: Varnode, lhs: Varnode, rhs: Varnode, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            op,
            out,
            SmallVec::from_slice(&[lhs, rhs]),
            addr,
        )],
        len,
    }
}

fn branch_to(target: u64, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Branch,
            SmallVec::from_slice(&[ram_target(target)]),
            addr,
        )],
        len,
    }
}

fn call_to(target: u64, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Call,
            SmallVec::from_slice(&[ram_target(target)]),
            addr,
        )],
        len,
    }
}

/// TriCore lifter with a fixed TC1.x register model.
pub struct TriCoreLifter {
    register_file: RegisterFile,
}

impl TriCoreLifter {
    /// Create a new TriCore lifter.
    pub fn new() -> Self {
        let mut registers = Vec::with_capacity(43);
        for (idx, name) in D_REG_NAMES.iter().enumerate() {
            registers.push(RegisterDef {
                name,
                varnode: dreg(idx as u8),
            });
        }
        for (idx, name) in A_REG_NAMES.iter().enumerate() {
            registers.push(RegisterDef {
                name,
                varnode: areg(idx as u8),
            });
        }
        for (name, offset) in [
            ("PC", PC_OFFSET),
            ("PSW", PSW_OFFSET),
            ("PCXI", PCXI_OFFSET),
            ("FCX", FCX_OFFSET),
            ("LCX", LCX_OFFSET),
            ("ISP", ISP_OFFSET),
            ("ICR", ICR_OFFSET),
            ("BTV", BTV_OFFSET),
            ("BIV", BIV_OFFSET),
            ("SYSCON", SYSCON_OFFSET),
        ] {
            registers.push(RegisterDef {
                name,
                varnode: Varnode::reg(offset, 4),
            });
        }
        // Architectural aliases commonly used by TriCore ABIs.
        registers.push(RegisterDef {
            name: "sp",
            varnode: areg(10),
        });

        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let hw = read16(bytes)?;
        if hw == 0 {
            return Ok(LiftedInsn {
                ir_ops: vec![],
                len: 2,
            });
        }

        if bytes.len() < 4 || bytes[0] & 1 == 0 {
            Ok(self.lift16(hw, addr))
        } else {
            let word = read32(bytes)?;
            Ok(self.lift32(word, addr))
        }
    }

    fn lift16(&self, hw: u16, addr: u64) -> LiftedInsn {
        let op = (hw & 0x0f) as u8;
        let a = ((hw >> 4) & 0x0f) as u8;
        let b = ((hw >> 8) & 0x0f) as u8;
        let c = ((hw >> 12) & 0x0f) as u8;
        let imm8 = ((hw >> 8) & 0xff) as u8;
        let off8 = sign_extend(imm8 as u32, 8) as i64;

        match op {
            0x0 => copy(dreg(a), const_vn(0, 4), addr, 2),
            0x2 => copy(dreg(a), dreg(b), addr, 2),
            0x4 => binop(IrOp::IntAdd, dreg(a), dreg(a), dreg(b), addr, 2),
            0x6 => binop(IrOp::IntSub, dreg(a), dreg(a), dreg(b), addr, 2),
            0x8 => binop(IrOp::IntAnd, dreg(a), dreg(a), dreg(b), addr, 2),
            0xa => binop(IrOp::IntOr, dreg(a), dreg(a), dreg(b), addr, 2),
            0xc => {
                let target = (addr as i64 + (off8 << 1)) as u64;
                branch_to(target, addr, 2)
            }
            0xe => {
                let cond = tmp(0, 1);
                let target = (addr as i64 + (off8 << 1)) as u64;
                LiftedInsn {
                    ir_ops: vec![
                        IrInsn::with_output(
                            IrOp::IntEqual,
                            cond,
                            SmallVec::from_slice(&[dreg(a), const_vn(0, 4)]),
                            addr,
                        ),
                        IrInsn::without_output(
                            IrOp::Cbranch,
                            SmallVec::from_slice(&[ram_target(target), cond]),
                            addr,
                        ),
                    ],
                    len: 2,
                }
            }
            0xf => match c {
                0x0 => copy(areg(a), areg(b), addr, 2),
                0x1 => binop(
                    IrOp::IntAdd,
                    areg(a),
                    areg(a),
                    const_vn(b as u64, 4),
                    addr,
                    2,
                ),
                0x2 => LiftedInsn {
                    ir_ops: vec![IrInsn::without_output(
                        IrOp::Return,
                        SmallVec::<[Varnode; 3]>::new(),
                        addr,
                    )],
                    len: 2,
                },
                _ => unimplemented(addr, 2),
            },
            _ => unimplemented(addr, 2),
        }
    }

    fn lift32(&self, word: u32, addr: u64) -> LiftedInsn {
        let opcode = (word & 0xff) as u8;
        let a = ((word >> 8) & 0x0f) as u8;
        let b = ((word >> 12) & 0x0f) as u8;
        let c = ((word >> 16) & 0x0f) as u8;
        let imm16 = ((word >> 16) & 0xffff) as u16;
        let simm16 = sign_extend(imm16 as u32, 16);

        match opcode {
            // MOVH / MOV.U style immediate materialisation.
            0x01 => copy(dreg(a), const_vn((imm16 as u64) << 16, 4), addr, 4),
            // ADDI / ADDIH.
            0x03 => binop(
                IrOp::IntAdd,
                dreg(a),
                dreg(b),
                const_vn(simm16 as i64 as u64, 4),
                addr,
                4,
            ),
            0x05 => binop(
                IrOp::IntAdd,
                areg(a),
                areg(b),
                const_vn(simm16 as i64 as u64, 4),
                addr,
                4,
            ),
            // LD.W d[a], [a[b] + disp16].
            0x09 => self.lift_load_store(true, a, b, simm16, addr),
            // ST.W [a[b] + disp16], d[a].
            0x0b => self.lift_load_store(false, a, b, simm16, addr),
            0x0d => binop(IrOp::IntAdd, dreg(a), dreg(b), dreg(c), addr, 4),
            0x0f => binop(IrOp::IntSub, dreg(a), dreg(b), dreg(c), addr, 4),
            0x11 => binop(IrOp::IntAnd, dreg(a), dreg(b), dreg(c), addr, 4),
            0x13 => binop(IrOp::IntOr, dreg(a), dreg(b), dreg(c), addr, 4),
            0x15 => binop(IrOp::IntXor, dreg(a), dreg(b), dreg(c), addr, 4),
            0x17 => binop(IrOp::IntLeft, dreg(a), dreg(b), dreg(c), addr, 4),
            0x19 => binop(IrOp::IntRight, dreg(a), dreg(b), dreg(c), addr, 4),
            0x1b => binop(IrOp::IntSright, dreg(a), dreg(b), dreg(c), addr, 4),
            // J / CALL use a signed 24-bit halfword displacement.
            0x1d => {
                let disp = sign_extend((word >> 8) & 0x00ff_ffff, 24) as i64;
                branch_to((addr as i64 + (disp << 1)) as u64, addr, 4)
            }
            0x1f => {
                let disp = sign_extend((word >> 8) & 0x00ff_ffff, 24) as i64;
                call_to((addr as i64 + (disp << 1)) as u64, addr, 4)
            }
            // JEQ/JNE/JLT/JGE with two data registers and 8-bit signed displacement.
            0x21 | 0x23 | 0x25 | 0x27 => self.lift_cond_branch(opcode, a, b, c, addr),
            _ => unimplemented(addr, 4),
        }
    }

    fn lift_load_store(
        &self,
        is_load: bool,
        data_reg: u8,
        base_reg: u8,
        disp: i32,
        addr: u64,
    ) -> LiftedInsn {
        let ea = tmp(0, 4);
        let mut ir_ops = vec![IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            SmallVec::from_slice(&[areg(base_reg), const_vn(disp as i64 as u64, 4)]),
            addr,
        )];
        if is_load {
            ir_ops.push(IrInsn::with_output(
                IrOp::Load,
                dreg(data_reg),
                SmallVec::from_slice(&[ea]),
                addr,
            ));
        } else {
            ir_ops.push(IrInsn::without_output(
                IrOp::Store,
                SmallVec::from_slice(&[ea, dreg(data_reg)]),
                addr,
            ));
        }
        LiftedInsn { ir_ops, len: 4 }
    }

    fn lift_cond_branch(
        &self,
        opcode: u8,
        lhs_reg: u8,
        rhs_reg: u8,
        disp4: u8,
        addr: u64,
    ) -> LiftedInsn {
        let cond = tmp(0, 1);
        let cmp_op = match opcode {
            0x21 => IrOp::IntEqual,
            0x23 => IrOp::IntNotequal,
            0x25 => IrOp::IntSless,
            0x27 => IrOp::IntSlessequal,
            _ => IrOp::IntEqual,
        };
        let target = (addr as i64 + ((sign_extend(disp4 as u32, 4) as i64) << 1)) as u64;
        LiftedInsn {
            ir_ops: vec![
                IrInsn::with_output(
                    cmp_op,
                    cond,
                    SmallVec::from_slice(&[dreg(lhs_reg), dreg(rhs_reg)]),
                    addr,
                ),
                IrInsn::without_output(
                    IrOp::Cbranch,
                    SmallVec::from_slice(&[ram_target(target), cond]),
                    addr,
                ),
            ],
            len: 4,
        }
    }
}

impl Default for TriCoreLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for TriCoreLifter {
    fn arch(&self) -> ArchId {
        ArchId::TriCore
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
    use unlace_ir::SpaceId;

    fn lift(bytes: &[u8]) -> LiftedInsn {
        TriCoreLifter::new().lift_insn(bytes, 0x1000).unwrap()
    }

    fn enc16(op: u8, a: u8, b: u8, c: u8) -> [u8; 2] {
        (((c as u16) << 12) | ((b as u16) << 8) | ((a as u16) << 4) | (op as u16)).to_le_bytes()
    }

    fn enc32(op: u8, a: u8, b: u8, c: u8, imm_hi: u16) -> [u8; 4] {
        let word = (op as u32)
            | ((a as u32) << 8)
            | ((b as u32) << 12)
            | ((c as u32) << 16)
            | ((imm_hi as u32) << 16);
        word.to_le_bytes()
    }

    #[test]
    fn register_file_layout() {
        let lifter = TriCoreLifter::new();
        let rf = lifter.register_file();
        assert_eq!(rf.registers[0].name, "d0");
        assert_eq!(rf.registers[15].name, "d15");
        assert_eq!(rf.registers[16].name, "a0");
        assert_eq!(rf.registers[31].name, "a15");
        assert!(
            rf.registers
                .iter()
                .any(|r| r.name == "sp" && r.varnode == areg(10))
        );
        assert_eq!(lifter.arch(), ArchId::TriCore);
    }

    #[test]
    fn short_buffer_reports_error() {
        assert!(matches!(
            TriCoreLifter::new().lift_insn(&[0x01], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    #[test]
    fn lifts_16bit_nop() {
        let lifted = lift(&[0, 0]);
        assert_eq!(lifted.len, 2);
        assert!(lifted.ir_ops.is_empty());
    }

    #[test]
    fn lifts_16bit_move_and_alu() {
        let mov = lift(&enc16(0x2, 1, 2, 0));
        assert_eq!(mov.len, 2);
        assert_eq!(mov.ir_ops[0].op, IrOp::Copy);
        assert_eq!(mov.ir_ops[0].output.unwrap(), dreg(1));

        let add = lift(&enc16(0x4, 3, 4, 0));
        assert_eq!(add.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(add.ir_ops[0].output.unwrap(), dreg(3));
    }

    #[test]
    fn lifts_16bit_branch_and_return() {
        let br = TriCoreLifter::new()
            .lift_insn(&enc16(0xc, 0, 2, 0), 0x1000)
            .unwrap();
        assert_eq!(br.ir_ops[0].op, IrOp::Branch);
        assert_eq!(br.ir_ops[0].inputs[0].offset, 0x1004);

        let ret = lift(&enc16(0xf, 0, 1, 2));
        assert_eq!(ret.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn lifts_32bit_immediates_and_arithmetic() {
        let movh = lift(&enc32(0x01, 5, 0, 0, 0x1234));
        assert_eq!(movh.len, 4);
        assert_eq!(movh.ir_ops[0].op, IrOp::Copy);
        assert_eq!(movh.ir_ops[0].output.unwrap(), dreg(5));

        let add = lift(&enc32(0x0d, 1, 2, 3, 0));
        assert_eq!(add.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(add.ir_ops[0].inputs[0], dreg(2));
        assert_eq!(add.ir_ops[0].inputs[1], dreg(3));
    }

    #[test]
    fn lifts_load_and_store_with_effective_address() {
        let ld = lift(&enc32(0x09, 2, 10, 0, 4));
        assert_eq!(ld.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(ld.ir_ops[1].op, IrOp::Load);
        assert_eq!(ld.ir_ops[1].output.unwrap(), dreg(2));

        let st = lift(&enc32(0x0b, 2, 10, 0, 4));
        assert_eq!(st.ir_ops[1].op, IrOp::Store);
        assert_eq!(st.ir_ops[1].inputs[1], dreg(2));
    }

    #[test]
    fn lifts_call_and_conditional_branch() {
        let call = TriCoreLifter::new()
            .lift_insn(&enc32(0x1f, 2, 0, 0, 0), 0x1000)
            .unwrap();
        assert_eq!(call.ir_ops[0].op, IrOp::Call);
        assert_eq!(call.ir_ops[0].inputs[0].space, SpaceId::Ram);

        let jeq = TriCoreLifter::new()
            .lift_insn(&enc32(0x21, 1, 2, 3, 0), 0x1000)
            .unwrap();
        assert_eq!(jeq.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(jeq.ir_ops[1].op, IrOp::Cbranch);
    }

    #[test]
    fn unknown_32bit_opcode_is_unimplemented() {
        let lifted = lift(&[0xff, 0, 0, 0]);
        assert_eq!(lifted.len, 4);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }
}
