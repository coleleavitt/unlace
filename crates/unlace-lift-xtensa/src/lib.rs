//! Xtensa LX6/LX106 (ESP32 / ESP8266) → IR lifter.
//!
//! This crate implements a compact decoder for the base 24-bit Xtensa core
//! instruction formats plus the common 16-bit density forms used heavily by
//! ESP32/ESP8266 firmware. Unsupported opcodes intentionally lift to
//! [`IrOp::Unimplemented`] instead of failing so mixed firmware can still be
//! scanned and partially decompiled.

use smallvec::SmallVec;
use tracing::trace;

use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const NUM_AR_REGS: usize = 16;
const SAR_OFFSET: u64 = 16 * 4;
const WINDOW_BASE_OFFSET: u64 = SAR_OFFSET + 4;
const PS_OFFSET: u64 = WINDOW_BASE_OFFSET + 4;
const UNIQUE_BASE: u64 = 0x2000;

#[inline]
fn ar(idx: u8) -> Varnode {
    Varnode::reg((idx as u64) * 4, 4)
}

#[inline]
fn sar() -> Varnode {
    Varnode::reg(SAR_OFFSET, 4)
}

#[inline]
fn window_base() -> Varnode {
    Varnode::reg(WINDOW_BASE_OFFSET, 4)
}

#[inline]
fn ps() -> Varnode {
    Varnode::reg(PS_OFFSET, 4)
}

#[inline]
fn imm32(v: u32) -> Varnode {
    Varnode::constant(v as u64, 4)
}

#[inline]
fn tmp(idx: u64) -> Varnode {
    Varnode::unique(UNIQUE_BASE + idx * 8, 4)
}

#[inline]
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 4)
}

#[inline]
fn read_u16(bytes: &[u8]) -> Result<u16, LiftError> {
    if bytes.len() < 2 {
        return Err(LiftError::ShortBuffer);
    }
    Ok(u16::from_le_bytes([bytes[0], bytes[1]]))
}

#[inline]
fn read_u24(bytes: &[u8]) -> Result<u32, LiftError> {
    if bytes.len() < 3 {
        return Err(LiftError::ShortBuffer);
    }
    Ok((bytes[0] as u32) | ((bytes[1] as u32) << 8) | ((bytes[2] as u32) << 16))
}

#[inline]
fn sign_extend(value: u32, bits: u32) -> i32 {
    let shift = 32 - bits;
    ((value << shift) as i32) >> shift
}

#[inline]
fn op0(w: u32) -> u8 {
    (w & 0x0f) as u8
}

#[inline]
fn t_field(w: u32) -> u8 {
    ((w >> 4) & 0x0f) as u8
}

#[inline]
fn s_field(w: u32) -> u8 {
    ((w >> 8) & 0x0f) as u8
}

#[inline]
fn r_field(w: u32) -> u8 {
    ((w >> 12) & 0x0f) as u8
}

#[inline]
fn op1(w: u32) -> u8 {
    ((w >> 16) & 0x0f) as u8
}

#[inline]
fn op2(w: u32) -> u8 {
    ((w >> 20) & 0x0f) as u8
}

#[inline]
fn imm8(w: u32) -> u8 {
    ((w >> 16) & 0xff) as u8
}

fn unimplemented(addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Unimplemented,
            SmallVec::new(),
            addr,
        )],
        len,
    }
}

fn empty(len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: Vec::new(),
        len,
    }
}

fn binop(op: IrOp, dst: Varnode, lhs: Varnode, rhs: Varnode, addr: u64) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            op,
            dst,
            SmallVec::from_slice(&[lhs, rhs]),
            addr,
        )],
        len: 3,
    }
}

fn copy(dst: Varnode, src: Varnode, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::with_output(
            IrOp::Copy,
            dst,
            SmallVec::from_slice(&[src]),
            addr,
        )],
        len,
    }
}

fn load(dst: Varnode, base: Varnode, offset: i32, addr: u64, len: usize) -> LiftedInsn {
    let ea = tmp(0);
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                SmallVec::from_slice(&[base, imm32(offset as u32)]),
                addr,
            ),
            IrInsn::with_output(IrOp::Load, dst, SmallVec::from_slice(&[ea]), addr),
        ],
        len,
    }
}

fn store(src: Varnode, base: Varnode, offset: i32, addr: u64, len: usize) -> LiftedInsn {
    let ea = tmp(0);
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                ea,
                SmallVec::from_slice(&[base, imm32(offset as u32)]),
                addr,
            ),
            IrInsn::without_output(IrOp::Store, SmallVec::from_slice(&[ea, src]), addr),
        ],
        len,
    }
}

fn branch(target: u64, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Branch,
            SmallVec::from_slice(&[ram_target(target)]),
            addr,
        )],
        len,
    }
}

fn call(target: u64, addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Call,
            SmallVec::from_slice(&[ram_target(target)]),
            addr,
        )],
        len,
    }
}

fn cond_branch(
    op: IrOp,
    lhs: Varnode,
    rhs: Varnode,
    target: u64,
    addr: u64,
    len: usize,
) -> LiftedInsn {
    let cond = tmp(0);
    LiftedInsn {
        ir_ops: vec![
            IrInsn::with_output(op, cond, SmallVec::from_slice(&[lhs, rhs]), addr),
            IrInsn::without_output(
                IrOp::Cbranch,
                SmallVec::from_slice(&[ram_target(target), cond]),
                addr,
            ),
        ],
        len,
    }
}

/// Xtensa lifter implementing [`Lifter`].
pub struct XtensaLifter {
    register_file: RegisterFile,
}

impl XtensaLifter {
    pub fn new() -> Self {
        const NAMES: [&str; NUM_AR_REGS] = [
            "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8", "a9", "a10", "a11", "a12", "a13",
            "a14", "a15",
        ];
        let mut registers = Vec::with_capacity(NUM_AR_REGS + 3);
        for (i, name) in NAMES.iter().enumerate() {
            registers.push(RegisterDef {
                name: *name,
                varnode: ar(i as u8),
            });
        }
        registers.push(RegisterDef {
            name: "sar",
            varnode: sar(),
        });
        registers.push(RegisterDef {
            name: "windowbase",
            varnode: window_base(),
        });
        registers.push(RegisterDef {
            name: "ps",
            varnode: ps(),
        });
        Self {
            register_file: RegisterFile { registers },
        }
    }

    fn lift_inner(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.len() < 2 {
            return Err(LiftError::ShortBuffer);
        }

        // Xtensa density extension opcodes are 16-bit and end in op0 0x8/0x9/0xd.
        // Decode these first so common ESP firmware prologues (`addi.n a1,a1,-16`,
        // `s32i.n a0,a1,12`, `retw.n`) are modeled instead of consuming the first
        // three bytes as a 24-bit instruction.
        let half = read_u16(bytes)?;
        let low_op = (half & 0x0f) as u8;
        if matches!(low_op, 0x8 | 0x9 | 0x0d) {
            return Ok(self.decode_density(half, addr));
        }

        let w = read_u24(bytes)?;
        trace!(addr = %format_args!("{addr:#x}"), word = %format_args!("{w:#08x}"), "decoding Xtensa instruction");

        Ok(match op0(w) {
            0x0 => self.decode_rrr(w, addr),
            0x2 | 0x7 => self.decode_rri8(w, addr),
            0x5 => self.decode_call(w, addr, true),
            0x6 => {
                if ((w >> 4) & 0x3) == 0 {
                    self.decode_call(w, addr, false)
                } else {
                    self.decode_bri12(w, addr)
                }
            }
            _ => unimplemented(addr, 3),
        })
    }

    fn decode_rrr(&self, w: u32, addr: u64) -> LiftedInsn {
        let r = r_field(w);
        let s = s_field(w);
        let t = t_field(w);
        match (op2(w), op1(w)) {
            (0x0, 0x0) if r == 0 && s == 0 && t == 0 => empty(3),
            (0x0, 0x0) => binop(IrOp::IntAdd, ar(r), ar(s), ar(t), addr),
            (0xc, 0x0) => binop(IrOp::IntSub, ar(r), ar(s), ar(t), addr),
            (0x0, 0x1) => binop(IrOp::IntOr, ar(r), ar(s), ar(t), addr),
            (0x3, 0x1) => binop(IrOp::IntXor, ar(r), ar(s), ar(t), addr),
            (0x1, 0x0) => binop(IrOp::IntAnd, ar(r), ar(s), ar(t), addr),
            (0x6, 0x1) => copy(sar(), ar(t), addr, 3), // XSR/SAR-family fallback: preserve data flow.
            (0x0, 0x2) if r == 0 && s == 0 && t == 0 => empty(3), // NOP
            _ => unimplemented(addr, 3),
        }
    }

    fn decode_rri8(&self, w: u32, addr: u64) -> LiftedInsn {
        let s = s_field(w);
        let t = t_field(w);
        let r = r_field(w);
        let off = sign_extend(imm8(w) as u32, 8);
        let target = (addr as i64 + 4 + off as i64) as u64;

        match (op0(w), r) {
            (0x2, 0xc) => binop(IrOp::IntAdd, ar(t), ar(s), imm32(off as u32), addr), // ADDI
            (0x2, 0x0) => cond_branch(IrOp::IntEqual, ar(t), ar(s), target, addr, 3), // BEQ
            (0x2, 0x6) => cond_branch(IrOp::IntNotequal, ar(t), ar(s), target, addr, 3), // BNE
            (0x2, 0x1) => cond_branch(IrOp::IntSless, ar(s), ar(t), target, addr, 3), // BLT
            (0x2, 0x9) => cond_branch(IrOp::IntSlessequal, ar(s), ar(t), target, addr, 3), // BGE as !(s<t) approximation
            (0x2, 0x2) => cond_branch(IrOp::IntLess, ar(s), ar(t), target, addr, 3),       // BLTU
            (0x2, 0xa) => cond_branch(IrOp::IntLessequal, ar(s), ar(t), target, addr, 3), // BGEU approximation
            (0x2, 0x8) => load(ar(t), ar(s), off, addr, 3),                               // L32I
            (0x2, 0xe) => store(ar(t), ar(s), off, addr, 3),                              // S32I
            (0x7, 0x6) => load(ar(t), ar(s), off, addr, 3), // L8UI: zero-extension omitted in 32-bit AR model
            (0x7, 0x9) => load(ar(t), ar(s), off, addr, 3), // L16SI
            (0x7, 0xa) => load(ar(t), ar(s), off, addr, 3), // L16UI
            (0x7, 0x4) => copy(ar(s), imm32(off as u32), addr, 3), // MOVI
            (0x7, 0xe) => store(ar(t), ar(s), off, addr, 3), // S8I
            (0x7, 0xf) => store(ar(t), ar(s), off, addr, 3), // S16I
            _ => unimplemented(addr, 3),
        }
    }

    fn decode_call(&self, w: u32, addr: u64, is_call0: bool) -> LiftedInsn {
        let raw = (w >> 6) & 0x3ffff;
        let off = sign_extend(raw, 18) as i64;
        let target = if is_call0 {
            // CALL0 uses PC[31:2] + offset + 1, then appends two zero bits.
            (((addr as i64 >> 2) + off + 1) << 2) as u64
        } else {
            (addr as i64 + 4 + off) as u64
        };
        if is_call0 {
            call(target, addr, 3)
        } else {
            branch(target, addr, 3)
        }
    }

    fn decode_bri12(&self, w: u32, addr: u64) -> LiftedInsn {
        let s = s_field(w);
        let m = ((w >> 6) & 0x3) as u8;
        let n = ((w >> 4) & 0x3) as u8;
        let imm12 = (w >> 12) & 0x0fff;
        let target = (addr as i64 + 4 + sign_extend(imm12, 12) as i64) as u64;
        match (m, n) {
            (0x0, 0x1) => cond_branch(IrOp::IntEqual, ar(s), imm32(0), target, addr, 3),
            (0x1, 0x1) => cond_branch(IrOp::IntNotequal, ar(s), imm32(0), target, addr, 3),
            (0x2, 0x1) => cond_branch(IrOp::IntSless, ar(s), imm32(0), target, addr, 3),
            (0x3, 0x1) => cond_branch(IrOp::IntSlessequal, imm32(0), ar(s), target, addr, 3),
            _ => unimplemented(addr, 3),
        }
    }

    fn decode_density(&self, half: u16, addr: u64) -> LiftedInsn {
        let op = (half & 0x0f) as u8;
        let t = ((half >> 4) & 0x0f) as u8;
        let s = ((half >> 8) & 0x0f) as u8;
        let r = ((half >> 12) & 0x0f) as u8;

        match op {
            0x8 => binop(IrOp::IntAdd, ar(r), ar(s), ar(t), addr).with_len(2), // ADD.N
            0x9 => {
                let imm = if t == 0 { 1 } else { t as u32 };
                binop(IrOp::IntAdd, ar(r), ar(s), imm32(imm), addr).with_len(2) // ADDI.N
            }
            0x0d => match (r, s, t) {
                (0x0, 0x0, 0x0) => empty(2),     // NOP.N
                (0x0, 0x0, 0x3) => ret(addr, 2), // RET.N
                (0x0, 0x0, 0x1) => ret(addr, 2), // RETW.N
                (0xf, _, 0x0) => load(ar(s), ar(1), ((r & 0x0f) as i32) * 4, addr, 2),
                _ => unimplemented(addr, 2),
            },
            _ => unimplemented(addr, 2),
        }
    }
}

fn ret(addr: u64, len: usize) -> LiftedInsn {
    LiftedInsn {
        ir_ops: vec![IrInsn::without_output(
            IrOp::Return,
            SmallVec::from_slice(&[ar(0)]),
            addr,
        )],
        len,
    }
}

trait LiftedInsnExt {
    fn with_len(self, len: usize) -> Self;
}

impl LiftedInsnExt for LiftedInsn {
    fn with_len(mut self, len: usize) -> Self {
        self.len = len;
        self
    }
}

impl Default for XtensaLifter {
    fn default() -> Self {
        Self::new()
    }
}

impl Lifter for XtensaLifter {
    fn arch(&self) -> ArchId {
        ArchId::Xtensa
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

    fn lifter() -> XtensaLifter {
        XtensaLifter::new()
    }

    fn enc_rrr(op2: u8, op1: u8, r: u8, s: u8, t: u8) -> [u8; 3] {
        let w = ((op2 as u32) << 20)
            | ((op1 as u32) << 16)
            | ((r as u32) << 12)
            | ((s as u32) << 8)
            | ((t as u32) << 4);
        [
            (w & 0xff) as u8,
            ((w >> 8) & 0xff) as u8,
            ((w >> 16) & 0xff) as u8,
        ]
    }

    fn enc_rri8(op0: u8, r: u8, s: u8, t: u8, imm: u8) -> [u8; 3] {
        let w = ((imm as u32) << 16)
            | ((r as u32) << 12)
            | ((s as u32) << 8)
            | ((t as u32) << 4)
            | op0 as u32;
        [
            (w & 0xff) as u8,
            ((w >> 8) & 0xff) as u8,
            ((w >> 16) & 0xff) as u8,
        ]
    }

    #[test]
    fn reports_xtensa_and_registers() {
        let l = lifter();
        assert_eq!(l.arch(), ArchId::Xtensa);
        assert!(l.register_file().registers.iter().any(|r| r.name == "a0"));
        assert!(
            l.register_file()
                .registers
                .iter()
                .any(|r| r.name == "windowbase")
        );
    }

    #[test]
    fn lifts_add_sub_and_logic_rrr() {
        let add = lifter().lift_insn(&enc_rrr(0, 0, 2, 3, 4), 0x4000).unwrap();
        assert_eq!(add.len, 3);
        assert_eq!(add.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(add.ir_ops[0].output, Some(ar(2)));

        let sub = lifter()
            .lift_insn(&enc_rrr(0xc, 0, 2, 3, 4), 0x4000)
            .unwrap();
        assert_eq!(sub.ir_ops[0].op, IrOp::IntSub);

        let or = lifter().lift_insn(&enc_rrr(0, 1, 2, 3, 4), 0x4000).unwrap();
        assert_eq!(or.ir_ops[0].op, IrOp::IntOr);

        let xor = lifter().lift_insn(&enc_rrr(3, 1, 2, 3, 4), 0x4000).unwrap();
        assert_eq!(xor.ir_ops[0].op, IrOp::IntXor);
    }

    #[test]
    fn lifts_addi_l32i_s32i() {
        let addi = lifter().lift_insn(&enc_rri8(0x2, 0xc, 3, 2, 5), 0).unwrap();
        assert_eq!(addi.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(addi.ir_ops[0].output, Some(ar(2)));

        let l32i = lifter().lift_insn(&enc_rri8(0x2, 0x8, 3, 2, 4), 0).unwrap();
        assert_eq!(l32i.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(l32i.ir_ops[1].op, IrOp::Load);
        assert_eq!(l32i.ir_ops[1].output, Some(ar(2)));

        let s32i = lifter().lift_insn(&enc_rri8(0x2, 0xe, 3, 2, 4), 0).unwrap();
        assert_eq!(s32i.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(s32i.ir_ops[1].op, IrOp::Store);
    }

    #[test]
    fn lifts_beq_bne_and_j_call0() {
        let beq = lifter()
            .lift_insn(&enc_rri8(0x2, 0x0, 3, 2, 0xfc), 0x1000)
            .unwrap();
        assert_eq!(beq.ir_ops[0].op, IrOp::IntEqual);
        assert_eq!(beq.ir_ops[1].op, IrOp::Cbranch);
        assert_eq!(beq.ir_ops[1].inputs[0], ram_target(0x1000));

        let bne = lifter()
            .lift_insn(&enc_rri8(0x2, 0x6, 3, 2, 8), 0x1000)
            .unwrap();
        assert_eq!(bne.ir_ops[0].op, IrOp::IntNotequal);
        assert_eq!(bne.ir_ops[1].inputs[0], ram_target(0x100c));

        let j = lifter().lift_insn(&[0x46, 0x00, 0x00], 0x2000).unwrap();
        assert_eq!(j.ir_ops[0].op, IrOp::Branch);
        assert_eq!(j.ir_ops[0].inputs[0], ram_target(0x2005));

        let call0 = lifter().lift_insn(&[0x05, 0x00, 0x00], 0x2000).unwrap();
        assert_eq!(call0.ir_ops[0].op, IrOp::Call);
        assert_eq!(call0.ir_ops[0].inputs[0], ram_target(0x2004));
    }

    #[test]
    fn lifts_density_nop_addi_ret() {
        let nop = lifter().lift_insn(&[0x0d, 0x00], 0x10).unwrap();
        assert!(nop.ir_ops.is_empty());
        assert_eq!(nop.len, 2);

        let addi_n = lifter().lift_insn(&[0x19, 0x11], 0x10).unwrap();
        assert_eq!(addi_n.len, 2);
        assert_eq!(addi_n.ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(addi_n.ir_ops[0].output, Some(ar(1)));

        let retw_n = lifter().lift_insn(&[0x1d, 0x00], 0x10).unwrap();
        assert_eq!(retw_n.ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn unsupported_is_non_fatal() {
        let result = lifter().lift_insn(&[0xff, 0xff, 0xff], 0).unwrap();
        assert_eq!(result.ir_ops[0].op, IrOp::Unimplemented);
    }
}
