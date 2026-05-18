//! NVIDIA SASS (sm_70+) → IR lifter.
//!
//! This crate provides a compact, table-driven MVP lifter for Volta-and-newer
//! NVIDIA SASS.  Real SASS encodings are 128-bit instruction records (a 64-bit
//! opcode word plus a 64-bit control word).  The decoder intentionally accepts
//! either the raw 16-byte record or an 8-byte opcode word so tests and higher
//! layers can lift isolated instructions.
//!
//! NVIDIA does not publish a stable bit-level SASS encoding.  For the subset
//! below we recognize the common opcode-class byte used by sm_70+ tools and map
//! source/destination fields in a conservative register/immediate layout.  Any
//! unknown instruction decodes successfully to [`IrOp::Unimplemented`] instead
//! of failing, matching the rest of unlace's architecture MVP lifters.
//!
//! # Supported instruction classes
//!
//! - Integer: `IADD`, `IADD3`, `ISUB`, `IMUL`, `IMAD`, `LOP3`, `SHF`
//! - Floating point: `FADD`, `FMUL`, `FFMA`
//! - Data movement and memory: `MOV`, `LDG`, `STG`, `LDS`, `STS`
//! - Control flow: `BRA`, `CALL`, `RET`, `EXIT`

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, SpaceId,
    Varnode,
};

const INSN_LEN: usize = 16;
const OPCODE_LEN_ONLY: usize = 8;
const GPR_COUNT: usize = 256;
const PRED_COUNT: usize = 8;
const REG_SIZE: u8 = 4;
const ADDR_SIZE: u8 = 8;
const UNIQUE_BASE: u64 = 0x70_0000;
const PRED_BASE: u64 = 0x10_0000;
const SPECIAL_BASE: u64 = 0x20_0000;

const OP_NOP: u8 = 0x00;
const OP_MOV: u8 = 0x01;
const OP_IADD3: u8 = 0x10;
const OP_IMAD: u8 = 0x11;
const OP_LOP3: u8 = 0x12;
const OP_SHF: u8 = 0x13;
const OP_IADD: u8 = 0x14;
const OP_ISUB: u8 = 0x15;
const OP_IMUL: u8 = 0x16;
const OP_FADD: u8 = 0x20;
const OP_FMUL: u8 = 0x21;
const OP_FFMA: u8 = 0x22;
const OP_LDG: u8 = 0x30;
const OP_STG: u8 = 0x31;
const OP_LDS: u8 = 0x32;
const OP_STS: u8 = 0x33;
const OP_BRA: u8 = 0x40;
const OP_CALL: u8 = 0x41;
const OP_RET: u8 = 0x42;
const OP_EXIT: u8 = 0x43;

#[inline]
fn gpr(idx: u8) -> Varnode {
    Varnode::reg(idx as u64 * REG_SIZE as u64, REG_SIZE)
}

#[inline]
fn pred(idx: u8) -> Varnode {
    Varnode::reg(PRED_BASE + idx as u64, 1)
}

#[inline]
fn special(offset: u64, size: u8) -> Varnode {
    Varnode::reg(SPECIAL_BASE + offset, size)
}

#[inline]
fn imm32(value: u32) -> Varnode {
    Varnode::constant(value as u64, REG_SIZE)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, ADDR_SIZE)
}

#[inline]
fn tmp(idx: u64, size: u8) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 16, size)
}

fn read_word(bytes: &[u8]) -> Result<u64, LiftError> {
    if bytes.len() < OPCODE_LEN_ONLY {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u64::from_le_bytes(
        bytes[..8].try_into().expect("slice length checked"),
    ))
}

#[inline]
fn opcode(word: u64) -> u8 {
    (word & 0xff) as u8
}

#[inline]
fn dst(word: u64) -> Varnode {
    gpr(((word >> 8) & 0xff) as u8)
}

#[inline]
fn src1(word: u64) -> Varnode {
    gpr(((word >> 16) & 0xff) as u8)
}

#[inline]
fn src2(word: u64) -> Varnode {
    gpr(((word >> 24) & 0xff) as u8)
}

#[inline]
fn src3(word: u64) -> Varnode {
    gpr(((word >> 32) & 0xff) as u8)
}

#[inline]
fn imm20(word: u64) -> u32 {
    ((word >> 40) & 0x000f_ffff) as u32
}

#[inline]
fn signed_imm20(word: u64) -> i64 {
    let raw = imm20(word) as i32;
    ((raw << 12) >> 12) as i64
}

#[inline]
fn has_imm(word: u64) -> bool {
    ((word >> 63) & 1) != 0
}

#[inline]
fn operand2(word: u64) -> Varnode {
    if has_imm(word) {
        imm32(imm20(word))
    } else {
        src2(word)
    }
}

fn unimplemented(addr: u64) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            Vec::new(),
            addr,
        )],
        len: INSN_LEN,
    }
}

fn lift_binary(op: IrOp, out: Varnode, a: Varnode, b: Varnode, addr: u64) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(op, out, vec![a, b], addr)],
        len: INSN_LEN,
    }
}

fn lift_iadd3(word: u64, addr: u64) -> LiftedInsn {
    let out = dst(word);
    let a = src1(word);
    let b = operand2(word);
    let c = src3(word);
    if c.offset == 0 {
        lift_binary(IrOp::IntAdd, out, a, b, addr)
    } else {
        let sum = tmp(0, REG_SIZE);
        LiftedInsn {
            ir_ops: vec![
                IrInsn::with_output(IrOp::IntAdd, sum, vec![a, b], addr),
                IrInsn::with_output(IrOp::IntAdd, out, vec![sum, c], addr),
            ],
            len: INSN_LEN,
        }
    }
}

fn lift_imad_or_ffma(first: IrOp, second: IrOp, word: u64, addr: u64) -> LiftedInsn {
    let product = tmp(0, REG_SIZE);
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(first, product, vec![src1(word), operand2(word)], addr),
            IrInsn::with_output(second, dst(word), vec![product, src3(word)], addr),
        ],
        len: INSN_LEN,
    }
}

fn lift_lop3(word: u64, addr: u64) -> LiftedInsn {
    // LOP3 is an arbitrary three-input LUT.  Preserve the LUT byte as an input
    // to a CALLOTHER so downstream analyses know the instruction was decoded.
    let lut = Varnode::constant((word >> 48) & 0xff, 1);
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            IrOp::Callother,
            dst(word),
            vec![
                Varnode::constant(OP_LOP3 as u64, 1),
                src1(word),
                src2(word),
                src3(word),
                lut,
            ],
            addr,
        )],
        len: INSN_LEN,
    }
}

fn lift_shf(word: u64, addr: u64) -> LiftedInsn {
    let right = ((word >> 56) & 1) != 0;
    lift_binary(
        if right { IrOp::IntRight } else { IrOp::IntLeft },
        dst(word),
        src1(word),
        operand2(word),
        addr,
    )
}

fn address_from_base_disp(word: u64) -> Varnode {
    let base = ((word >> 16) & 0xff) as u8;
    if base == 0xff {
        Varnode::constant(imm20(word) as u64, ADDR_SIZE)
    } else if imm20(word) == 0 {
        gpr(base)
    } else {
        // Fold base+disp into a unique temporary via INT_ADD in callers.
        tmp(1, ADDR_SIZE)
    }
}

fn lift_load(word: u64, addr: u64) -> LiftedInsn {
    let base = ((word >> 16) & 0xff) as u8;
    let disp = imm20(word);
    let ram_space = Varnode::constant(SpaceId::Ram as u64, ADDR_SIZE);
    let address = address_from_base_disp(word);
    let mut ir_ops = Vec::new();
    if base != 0xff && disp != 0 {
        ir_ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            address,
            vec![gpr(base), Varnode::constant(disp as u64, ADDR_SIZE)],
            addr,
        ));
    }
    ir_ops.push(IrInsn::with_output(
        IrOp::Load,
        dst(word),
        vec![ram_space, address],
        addr,
    ));
    LiftedInsn {
        ir_ops,
        len: INSN_LEN,
    }
}

fn lift_store(word: u64, addr: u64) -> LiftedInsn {
    let base = ((word >> 16) & 0xff) as u8;
    let disp = imm20(word);
    let ram_space = Varnode::constant(SpaceId::Ram as u64, ADDR_SIZE);
    let address = address_from_base_disp(word);
    let value = dst(word);
    let mut ir_ops = Vec::new();
    if base != 0xff && disp != 0 {
        ir_ops.push(IrInsn::with_output(
            IrOp::IntAdd,
            address,
            vec![gpr(base), Varnode::constant(disp as u64, ADDR_SIZE)],
            addr,
        ));
    }
    ir_ops.push(IrInsn::without_output(
        IrOp::Store,
        vec![ram_space, address, value],
        addr,
    ));
    LiftedInsn {
        ir_ops,
        len: INSN_LEN,
    }
}

fn branch_target(word: u64, addr: u64) -> Varnode {
    let off = signed_imm20(word) * INSN_LEN as i64;
    ram_target(addr.wrapping_add(INSN_LEN as u64).wrapping_add(off as u64))
}

fn decode(word: u64, addr: u64) -> LiftedInsn {
    match opcode(word) {
        OP_NOP => LiftedInsn {
            ir_ops: Vec::new(),
            len: INSN_LEN,
        },
        OP_MOV => LiftedInsn {
            ir_ops: vec![IrInsn::with_output(
                IrOp::Copy,
                dst(word),
                vec![operand2(word)],
                addr,
            )],
            len: INSN_LEN,
        },
        OP_IADD3 => lift_iadd3(word, addr),
        OP_IMAD => lift_imad_or_ffma(IrOp::IntMult, IrOp::IntAdd, word, addr),
        OP_LOP3 => lift_lop3(word, addr),
        OP_SHF => lift_shf(word, addr),
        OP_IADD => lift_binary(IrOp::IntAdd, dst(word), src1(word), operand2(word), addr),
        OP_ISUB => lift_binary(IrOp::IntSub, dst(word), src1(word), operand2(word), addr),
        OP_IMUL => lift_binary(IrOp::IntMult, dst(word), src1(word), operand2(word), addr),
        OP_FADD => lift_binary(IrOp::FloatAdd, dst(word), src1(word), operand2(word), addr),
        OP_FMUL => lift_binary(IrOp::FloatMult, dst(word), src1(word), operand2(word), addr),
        OP_FFMA => lift_imad_or_ffma(IrOp::FloatMult, IrOp::FloatAdd, word, addr),
        OP_LDG => lift_load(word, addr),
        OP_STG => lift_store(word, addr),
        OP_LDS => lift_load(word, addr),
        OP_STS => lift_store(word, addr),
        OP_BRA => LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Branch,
                vec![branch_target(word, addr)],
                addr,
            )],
            len: INSN_LEN,
        },
        OP_CALL => LiftedInsn {
            ir_ops: vec![IrInsn::without_output(
                IrOp::Call,
                vec![branch_target(word, addr)],
                addr,
            )],
            len: INSN_LEN,
        },
        OP_RET => LiftedInsn {
            ir_ops: vec![IrInsn::without_output(IrOp::Return, Vec::new(), addr)],
            len: INSN_LEN,
        },
        OP_EXIT => LiftedInsn {
            ir_ops: vec![IrInsn::without_output(IrOp::Return, Vec::new(), addr)],
            len: INSN_LEN,
        },
        _ => unimplemented(addr),
    }
}

/// NVIDIA SASS lifter for sm_70+ instruction records.
pub struct SassLifter {
    register_file: RegisterFile,
}

impl SassLifter {
    pub fn new() -> Self {
        let mut registers = Vec::with_capacity(GPR_COUNT + PRED_COUNT + 6);
        for i in 0..GPR_COUNT {
            let name = Box::leak(format!("R{i}").into_boxed_str());
            registers.push(RegisterDef {
                name,
                varnode: gpr(i as u8),
            });
        }
        for i in 0..PRED_COUNT {
            let name = Box::leak(format!("P{i}").into_boxed_str());
            registers.push(RegisterDef {
                name,
                varnode: pred(i as u8),
            });
        }
        registers.extend([
            RegisterDef {
                name: "PT",
                varnode: pred(7),
            },
            RegisterDef {
                name: "URZ",
                varnode: special(0, REG_SIZE),
            },
            RegisterDef {
                name: "SR_TID",
                varnode: special(0x10, REG_SIZE),
            },
            RegisterDef {
                name: "SR_CTAID",
                varnode: special(0x20, REG_SIZE),
            },
            RegisterDef {
                name: "SR_LANEID",
                varnode: special(0x30, REG_SIZE),
            },
            RegisterDef {
                name: "PC",
                varnode: special(0x40, ADDR_SIZE),
            },
        ]);
        Self {
            register_file: RegisterFile { registers },
        }
    }
}

impl Default for SassLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for SassLifter {
    fn arch(&self) -> ArchId {
        ArchId::NvidiaSass
    }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        Ok(decode(read_word(bytes)?, addr))
    }

    fn register_file(&self) -> &RegisterFile {
        &self.register_file
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn enc(op: u8, d: u8, a: u8, b: u8, c: u8, imm: u32, use_imm: bool) -> [u8; 16] {
        let mut word = op as u64
            | ((d as u64) << 8)
            | ((a as u64) << 16)
            | ((b as u64) << 24)
            | ((c as u64) << 32)
            | (((imm as u64) & 0x000f_ffff) << 40);
        if use_imm {
            word |= 1u64 << 63;
        }
        let mut bytes = [0u8; 16];
        bytes[..8].copy_from_slice(&word.to_le_bytes());
        bytes
    }

    #[test]
    fn reports_sass_arch_and_registers() {
        let lifter = SassLifter::new();
        assert_eq!(lifter.arch(), ArchId::NvidiaSass);
        assert!(
            lifter
                .register_file()
                .registers
                .iter()
                .any(|r| r.name == "R255")
        );
        assert!(
            lifter
                .register_file()
                .registers
                .iter()
                .any(|r| r.name == "SR_LANEID")
        );
    }

    #[test]
    fn short_buffer_is_decode_error() {
        let lifter = SassLifter::new();
        assert!(matches!(
            lifter.lift_insn(&[0; 7], 0),
            Err(LiftError::ShortBuffer)
        ));
    }

    #[test]
    fn unknown_opcode_is_unimplemented() {
        let lifter = SassLifter::new();
        let lifted = lifter
            .lift_insn(&enc(0xfe, 0, 0, 0, 0, 0, false), 0)
            .unwrap();
        assert_eq!(lifted.ir_ops[0].op, IrOp::Unimplemented);
    }

    // --- Per-opcode tests for the 15 target instructions ---

    #[test]
    fn lift_iadd() {
        let lifter = SassLifter::new();
        // IADD R3 = R1 + R2
        let lifted = lifter
            .lift_insn(&enc(OP_IADD, 3, 1, 2, 0, 0, false), 0x100)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[0].output, Some(gpr(3)));
        assert_eq!(lifted.ir_ops[0].inputs[0], gpr(1));
        assert_eq!(lifted.ir_ops[0].inputs[1], gpr(2));
    }

    #[test]
    fn lift_isub() {
        let lifter = SassLifter::new();
        // ISUB R5 = R10 - R20
        let lifted = lifter
            .lift_insn(&enc(OP_ISUB, 5, 10, 20, 0, 0, false), 0x200)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(lifted.ir_ops[0].output, Some(gpr(5)));
        assert_eq!(lifted.ir_ops[0].inputs[0], gpr(10));
        assert_eq!(lifted.ir_ops[0].inputs[1], gpr(20));
    }

    #[test]
    fn lift_imul() {
        let lifter = SassLifter::new();
        // IMUL R4 = R2 * R3
        let lifted = lifter
            .lift_insn(&enc(OP_IMUL, 4, 2, 3, 0, 0, false), 0x300)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntMult);
        assert_eq!(lifted.ir_ops[0].output, Some(gpr(4)));
        assert_eq!(lifted.ir_ops[0].inputs[0], gpr(2));
        assert_eq!(lifted.ir_ops[0].inputs[1], gpr(3));
    }

    #[test]
    fn lift_fadd() {
        let lifter = SassLifter::new();
        // FADD R6 = R1 + R2
        let lifted = lifter
            .lift_insn(&enc(OP_FADD, 6, 1, 2, 0, 0, false), 0x400)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::FloatAdd);
        assert_eq!(lifted.ir_ops[0].output, Some(gpr(6)));
        assert_eq!(lifted.ir_ops[0].inputs[0], gpr(1));
        assert_eq!(lifted.ir_ops[0].inputs[1], gpr(2));
    }

    #[test]
    fn lift_fmul() {
        let lifter = SassLifter::new();
        // FMUL R7 = R3 * R4
        let lifted = lifter
            .lift_insn(&enc(OP_FMUL, 7, 3, 4, 0, 0, false), 0x500)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::FloatMult);
        assert_eq!(lifted.ir_ops[0].output, Some(gpr(7)));
        assert_eq!(lifted.ir_ops[0].inputs[0], gpr(3));
        assert_eq!(lifted.ir_ops[0].inputs[1], gpr(4));
    }

    #[test]
    fn lift_ffma() {
        let lifter = SassLifter::new();
        // FFMA R8 = R1 * R2 + R3
        let lifted = lifter
            .lift_insn(&enc(OP_FFMA, 8, 1, 2, 3, 0, false), 0x600)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::FloatMult);
        assert_eq!(lifted.ir_ops[1].op, IrOp::FloatAdd);
        assert_eq!(lifted.ir_ops[1].output, Some(gpr(8)));
        // Second add uses the tmp product and src3
        assert_eq!(lifted.ir_ops[1].inputs[1], gpr(3));
    }

    #[test]
    fn lift_mov() {
        let lifter = SassLifter::new();
        // MOV R7, #0x12345
        let lifted = lifter
            .lift_insn(&enc(OP_MOV, 7, 0, 0, 0, 0x12345, true), 0)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Copy);
        assert_eq!(lifted.ir_ops[0].output, Some(gpr(7)));
        assert_eq!(lifted.ir_ops[0].inputs[0], imm32(0x12345));
    }

    #[test]
    fn lift_ldg() {
        let lifter = SassLifter::new();
        // LDG R8, [R9 + 0x40]
        let lifted = lifter
            .lift_insn(&enc(OP_LDG, 8, 9, 0, 0, 0x40, false), 0x2000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[1].op, IrOp::Load);
        assert_eq!(lifted.ir_ops[1].output, Some(gpr(8)));
    }

    #[test]
    fn lift_stg() {
        let lifter = SassLifter::new();
        // STG [R5 + 0x10], R2
        let lifted = lifter
            .lift_insn(&enc(OP_STG, 2, 5, 0, 0, 0x10, false), 0x3000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[1].op, IrOp::Store);
        // Store has no output
        assert_eq!(lifted.ir_ops[1].output, None);
    }

    #[test]
    fn lift_lds() {
        let lifter = SassLifter::new();
        // LDS R10, [R4 + 0x20] — shared memory load (same IR as LDG)
        let lifted = lifter
            .lift_insn(&enc(OP_LDS, 10, 4, 0, 0, 0x20, false), 0x4000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[1].op, IrOp::Load);
        assert_eq!(lifted.ir_ops[1].output, Some(gpr(10)));
    }

    #[test]
    fn lift_sts() {
        let lifter = SassLifter::new();
        // STS [R6 + 0x8], R3 — shared memory store (same IR as STG)
        let lifted = lifter
            .lift_insn(&enc(OP_STS, 3, 6, 0, 0, 0x8, false), 0x5000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 2);
        assert_eq!(lifted.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(lifted.ir_ops[1].op, IrOp::Store);
        assert_eq!(lifted.ir_ops[1].output, None);
    }

    #[test]
    fn lift_bra() {
        let lifter = SassLifter::new();
        // BRA +2 (offset 2 → target = 0x1000 + 16 + 2*16 = 0x1030)
        let lifted = lifter
            .lift_insn(&enc(OP_BRA, 0, 0, 0, 0, 2, false), 0x1000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Branch);
        assert_eq!(lifted.ir_ops[0].inputs[0], Varnode::ram(0x1030, ADDR_SIZE));
    }

    #[test]
    fn lift_call() {
        let lifter = SassLifter::new();
        // CALL +4 (offset 4 → target = 0x2000 + 16 + 4*16 = 0x2050)
        let lifted = lifter
            .lift_insn(&enc(OP_CALL, 0, 0, 0, 0, 4, false), 0x2000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Call);
        assert_eq!(lifted.ir_ops[0].inputs[0], Varnode::ram(0x2050, ADDR_SIZE));
    }

    #[test]
    fn lift_ret() {
        let lifter = SassLifter::new();
        let lifted = lifter
            .lift_insn(&enc(OP_RET, 0, 0, 0, 0, 0, false), 0x6000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Return);
        assert_eq!(lifted.ir_ops[0].output, None);
    }

    #[test]
    fn lift_exit() {
        let lifter = SassLifter::new();
        let lifted = lifter
            .lift_insn(&enc(OP_EXIT, 0, 0, 0, 0, 0, false), 0x7000)
            .unwrap();
        assert_eq!(lifted.len, 16);
        assert_eq!(lifted.ir_ops.len(), 1);
        assert_eq!(lifted.ir_ops[0].op, IrOp::Return);
        assert_eq!(lifted.ir_ops[0].output, None);
    }
}
