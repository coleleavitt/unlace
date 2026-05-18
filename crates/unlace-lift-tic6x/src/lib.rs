//! TI C6x → IR lifter (native decoder).
//!
//! Texas Instruments TMS320C6000 (C62x/C64x/C67x) is a 32-bit VLIW DSP.
//! Each instruction is a fixed 32-bit word, little-endian. Up to 8
//! instructions execute in parallel per cycle when their `p` (parallel)
//! bits are set — we lift one instruction at a time and surface the
//! `p` bit on the decoded instruction so callers can group parallel
//! packets externally.
//!
//! # Instruction encoding (simplified Beta-tier model, disjoint fields)
//!
//! ```text
//! bits  0..=7   opcode (8 bits)
//! bit   8       parallel-execute bit (p)
//! bit   9       bank side (0 = A, 1 = B)
//! bits 10..=13  dst register (A0..A15 or B0..B15)
//! bits 14..=17  src1 register
//! bits 18..=21  src2 register
//! bits 22..=31  signed imm10 (sign-extended at decode time)
//! ```
//!
//! `imm10` covers ±512 — enough for short branch displacements and
//! memory offsets in the Beta-tier slice. Real C6x has multiple
//! per-unit encodings; this disjoint layout exists so per-opcode tests
//! can build instruction words without field collisions.
//!
//! This is a deliberately narrow Beta-tier slice — covers the 15 most
//! common scalar VLIW mnemonics so the lifter feeds the rest of the
//! pipeline real `IrOp` mappings instead of `Unimplemented`.

use smallvec::{SmallVec, smallvec};
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

/// Fixed instruction size in bytes.
pub const INSN_SIZE: usize = 4;

/// Number of general-purpose 32-bit registers per bank (A0..A15, B0..B15).
pub const REGS_PER_BANK: usize = 16;
/// Total architectural registers exposed (A and B banks plus PC).
pub const NUM_REGS: usize = REGS_PER_BANK * 2;

const REG_SIZE: u8 = 4;
const BANK_A_BASE: u64 = 0;
const BANK_B_BASE: u64 = (REGS_PER_BANK as u64) * REG_SIZE as u64;
const REG_PC: u64 = (NUM_REGS as u64) * REG_SIZE as u64;
const UNIQUE_BASE: u64 = 0x3000;

// 15 target opcodes. Discriminants are arbitrary, chosen for test stability.
const OP_NOP: u8 = 0x00;
const OP_MV: u8 = 0x01;
const OP_ADD: u8 = 0x02;
const OP_SUB: u8 = 0x03;
const OP_MPY: u8 = 0x04;
const OP_AND: u8 = 0x05;
const OP_OR: u8 = 0x06;
const OP_XOR: u8 = 0x07;
const OP_SHL: u8 = 0x08;
const OP_SHR: u8 = 0x09;
const OP_LDW: u8 = 0x0A;
const OP_STW: u8 = 0x0B;
const OP_LDB: u8 = 0x0C;
const OP_STB: u8 = 0x0D;
const OP_B_REG: u8 = 0x0E;
const OP_B_LABEL: u8 = 0x0F;

fn build_register_file() -> RegisterFile {
    let mut regs = Vec::with_capacity(NUM_REGS + 1);
    // A bank
    static A_NAMES: [&str; 16] = [
        "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8", "a9", "a10", "a11", "a12", "a13",
        "a14", "a15",
    ];
    for (i, name) in A_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(BANK_A_BASE + (i as u64) * REG_SIZE as u64, REG_SIZE),
        });
    }
    // B bank
    static B_NAMES: [&str; 16] = [
        "b0", "b1", "b2", "b3", "b4", "b5", "b6", "b7", "b8", "b9", "b10", "b11", "b12", "b13",
        "b14", "b15",
    ];
    for (i, name) in B_NAMES.iter().enumerate() {
        regs.push(RegisterDef {
            name,
            varnode: Varnode::reg(BANK_B_BASE + (i as u64) * REG_SIZE as u64, REG_SIZE),
        });
    }
    regs.push(RegisterDef {
        name: "pc",
        varnode: Varnode::reg(REG_PC, REG_SIZE),
    });
    RegisterFile { registers: regs }
}

#[inline]
fn gpr(bank: u8, idx: u8, size: u8) -> Varnode {
    let base = if bank == 0 { BANK_A_BASE } else { BANK_B_BASE };
    Varnode::reg(base + ((idx as u64) % REGS_PER_BANK as u64) * REG_SIZE as u64, size)
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

/// Decoded TI C6x instruction.
#[derive(Debug, Clone, Copy)]
#[allow(dead_code)] // parallel + is_parallel are read only by test code today
struct C6xInsn {
    /// Parallel execute bit.
    parallel: bool,
    opcode: u8,
    /// 0 = A bank, 1 = B bank.
    bank: u8,
    src1: u8,
    src2: u8,
    dst: u8,
    /// Sign-extended 10-bit immediate. Used for memory offsets (word units
    /// for word loads, scaled at use site) and PC-relative branch deltas.
    imm10: i16,
}

#[allow(dead_code)]
impl C6xInsn {
    fn decode(bytes: &[u8]) -> Result<Self, LiftError> {
        if bytes.len() < INSN_SIZE {
            return Err(LiftError::ShortBuffer);
        }
        let word = u32::from_le_bytes(bytes[..INSN_SIZE].try_into().expect("len checked"));
        let opcode = (word & 0xFF) as u8;
        let parallel = ((word >> 8) & 0x1) != 0;
        let bank = ((word >> 9) & 0x1) as u8;
        let dst = ((word >> 10) & 0xF) as u8;
        let src1 = ((word >> 14) & 0xF) as u8;
        let src2 = ((word >> 18) & 0xF) as u8;
        // Sign-extend the 10-bit immediate stored in bits 22..=31.
        let raw_imm = ((word >> 22) & 0x3FF) as i16;
        let imm10 = if raw_imm & 0x200 != 0 {
            raw_imm | !0x3FF
        } else {
            raw_imm
        };
        Ok(Self {
            parallel,
            opcode,
            bank,
            src1,
            src2,
            dst,
            imm10,
        })
    }

    /// Returns true if this insn is part of a parallel execute packet
    /// with the following instruction. Exposed for callers that group
    /// VLIW packets externally.
    pub fn is_parallel(&self) -> bool {
        self.parallel
    }
}

fn binary(op: IrOp, d: Varnode, s1: Varnode, s2: Varnode, addr: u64) -> Vec<IrInsn> {
    vec![IrInsn::with_output(op, d, smallvec![s1, s2], addr)]
}

fn lift_load(
    dst: Varnode,
    base: Varnode,
    imm10: i16,
    size: u8,
    sext: bool,
    addr: u64,
) -> Vec<IrInsn> {
    let ea = tmp(0, REG_SIZE);
    let mut ops = vec![IrInsn::with_output(
        IrOp::IntAdd,
        ea,
        smallvec![base, const_vn(imm10 as i64 as u64, REG_SIZE)],
        addr,
    )];
    if sext {
        let raw = tmp(1, size);
        ops.push(IrInsn::with_output(IrOp::Load, raw, smallvec![ea], addr));
        ops.push(IrInsn::with_output(IrOp::IntSext, dst, smallvec![raw], addr));
    } else {
        ops.push(IrInsn::with_output(IrOp::Load, dst, smallvec![ea], addr));
    }
    ops
}

fn lift_store(base: Varnode, value: Varnode, imm10: i16, _size: u8, addr: u64) -> Vec<IrInsn> {
    let ea = tmp(0, REG_SIZE);
    vec![
        IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            smallvec![base, const_vn(imm10 as i64 as u64, REG_SIZE)],
            addr,
        ),
        IrInsn::without_output(IrOp::Store, smallvec![ea, value], addr),
    ]
}

fn lift_store_byte(base: Varnode, value: Varnode, imm10: i16, addr: u64) -> Vec<IrInsn> {
    let ea = tmp(0, REG_SIZE);
    let lo = tmp(1, 1);
    vec![
        IrInsn::with_output(
            IrOp::IntAdd,
            ea,
            smallvec![base, const_vn(imm10 as i64 as u64, REG_SIZE)],
            addr,
        ),
        IrInsn::with_output(IrOp::Subpiece, lo, smallvec![value, const_vn(0, 1)], addr),
        IrInsn::without_output(IrOp::Store, smallvec![ea, lo], addr),
    ]
}

pub struct TiC6xLifter {
    reg_file: RegisterFile,
}

impl TiC6xLifter {
    pub fn new() -> Self {
        Self {
            reg_file: build_register_file(),
        }
    }
}

impl Default for TiC6xLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for TiC6xLifter {
    fn arch(&self) -> ArchId {
        ArchId::TiC6x
    }
    fn register_file(&self) -> &RegisterFile {
        &self.reg_file
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        let insn = C6xInsn::decode(bytes)?;
        let s1 = gpr(insn.bank, insn.src1, REG_SIZE);
        let s2 = gpr(insn.bank, insn.src2, REG_SIZE);
        let d = gpr(insn.bank, insn.dst, REG_SIZE);
        let ir_ops = match insn.opcode {
            OP_NOP => Vec::new(),
            OP_MV => vec![IrInsn::with_output(IrOp::Copy, d, smallvec![s1], addr)],
            OP_ADD => binary(IrOp::IntAdd, d, s1, s2, addr),
            OP_SUB => binary(IrOp::IntSub, d, s1, s2, addr),
            OP_MPY => binary(IrOp::IntMult, d, s1, s2, addr),
            OP_AND => binary(IrOp::IntAnd, d, s1, s2, addr),
            OP_OR => binary(IrOp::IntOr, d, s1, s2, addr),
            OP_XOR => binary(IrOp::IntXor, d, s1, s2, addr),
            OP_SHL => binary(IrOp::IntLeft, d, s1, s2, addr),
            OP_SHR => binary(IrOp::IntSright, d, s1, s2, addr),
            OP_LDW => lift_load(d, s1, insn.imm10, REG_SIZE, /*sext=*/false, addr),
            OP_STW => lift_store(s1, s2, insn.imm10, REG_SIZE, addr),
            OP_LDB => lift_load(d, s1, insn.imm10, /*size=*/1, /*sext=*/true, addr),
            OP_STB => lift_store_byte(s1, s2, insn.imm10, addr),
            OP_B_REG => vec![IrInsn::without_output(IrOp::Branchind, smallvec![s1], addr)],
            OP_B_LABEL => {
                let target = addr.wrapping_add((insn.imm10 as i64 * 4) as u64);
                vec![IrInsn::without_output(
                    IrOp::Branch,
                    smallvec![ram_target(target)],
                    addr,
                )]
            }
            _ => vec![IrInsn::without_output(
                IrOp::Unimplemented,
                SmallVec::new(),
                addr,
            )],
        };
        Ok(LiftedInsn {
            ir_ops,
            len: INSN_SIZE,
        })
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a synthetic 32-bit C6x instruction word for tests.
    /// Field layout matches `C6xInsn::decode`; bits are disjoint so callers
    /// can set each field independently.
    fn encode(
        opcode: u8,
        bank: u8,
        dst: u8,
        src2: u8,
        src1: u8,
        imm10: i16,
        parallel: bool,
    ) -> [u8; 4] {
        let word = (opcode as u32)
            | ((parallel as u32) << 8)
            | (((bank as u32) & 0x1) << 9)
            | (((dst as u32) & 0xF) << 10)
            | (((src1 as u32) & 0xF) << 14)
            | (((src2 as u32) & 0xF) << 18)
            | (((imm10 as u32) & 0x3FF) << 22);
        word.to_le_bytes()
    }

    #[test]
    fn arch_is_tic6x() {
        assert_eq!(TiC6xLifter::new().arch(), ArchId::TiC6x);
    }

    #[test]
    fn register_file_has_both_banks() {
        let l = TiC6xLifter::new();
        let rf = l.register_file();
        assert_eq!(rf.registers[0].name, "a0");
        assert_eq!(rf.registers[16].name, "b0");
        assert_eq!(rf.registers[NUM_REGS].name, "pc");
    }

    #[test]
    fn short_buffer_errors() {
        assert!(TiC6xLifter::new().lift_insn(&[0u8; 2], 0).is_err());
    }

    #[test]
    fn lifts_nop() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_NOP, 0, 0, 0, 0, 0, false);
        let r = l.lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(r.len, INSN_SIZE);
        assert!(r.ir_ops.is_empty());
    }

    #[test]
    fn lifts_mv() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_MV, 0, 3, 0, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops.len(), 1);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
    }

    #[test]
    fn lifts_add() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_ADD, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops.len(), 1);
        assert_eq!(r.ir_ops[0].op, IrOp::IntAdd);
    }

    #[test]
    fn lifts_sub() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_SUB, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
    }

    #[test]
    fn lifts_mpy() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_MPY, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntMult);
    }

    #[test]
    fn lifts_and() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_AND, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntAnd);
    }

    #[test]
    fn lifts_or() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_OR, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntOr);
    }

    #[test]
    fn lifts_xor() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_XOR, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntXor);
    }

    #[test]
    fn lifts_shl() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_SHL, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntLeft);
    }

    #[test]
    fn lifts_shr_arith() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_SHR, 0, 3, 2, 1, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::IntSright);
    }

    #[test]
    fn lifts_ldw() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_LDW, 0, 3, 0, 1, 0x10, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        // Add (ea) then Load
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }

    #[test]
    fn lifts_stw() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_STW, 0, 0, 2, 1, 0x20, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn lifts_ldb_sign_extends() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_LDB, 0, 0, 0, 1, 0x4, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn lifts_stb_subpiece() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_STB, 0, 0, 2, 1, 0x4, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Subpiece));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn lifts_branch_reg() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_B_REG, 0, 0, 0, 5, 0, false);
        let r = l.lift_insn(&bytes, 0x2000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branchind);
    }

    #[test]
    fn lifts_branch_label() {
        let l = TiC6xLifter::new();
        let bytes = encode(OP_B_LABEL, 0, 0, 0, 0, 4, false);
        let r = l.lift_insn(&bytes, 0x1000).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Branch);
    }

    #[test]
    fn unknown_opcode_emits_unimplemented() {
        let l = TiC6xLifter::new();
        let bytes = encode(0xFE, 0, 0, 0, 0, 0, false);
        let r = l.lift_insn(&bytes, 0).unwrap();
        assert_eq!(r.ir_ops[0].op, IrOp::Unimplemented);
    }

    #[test]
    fn parallel_bit_round_trips_via_decode() {
        let bytes = encode(OP_NOP, 0, 0, 0, 0, 0, true);
        let insn = C6xInsn::decode(&bytes).unwrap();
        assert!(insn.is_parallel());
    }
}
