//! I8051 → IR lifter (§5.13 stub→Beta promotion).
//!
//! Intel 8051 is a CISC microcontroller ISA with 1/2/3-byte
//! instructions. The first byte is the opcode; some opcodes embed a
//! register index in their low 3 bits (`Rn = bits 2..0`). This MVP
//! covers ~30 of the most common opcodes.

use smallvec::smallvec;
use unlace_ir::{
    ArchId, IrInsn, IrOp, LiftError, LiftedInsn, Lifter, RegisterDef, RegisterFile, Varnode,
};

const REG_SIZE: u8 = 1;

const REG_A: u64 = 0;
const REG_B: u64 = 1;
const REG_R0: u64 = 2;
const PC_OFFSET: u64 = 10;

fn vn_a() -> Varnode {
    Varnode::reg(REG_A, REG_SIZE)
}
fn vn_b() -> Varnode {
    Varnode::reg(REG_B, REG_SIZE)
}
fn vn_r(idx: u8) -> Varnode {
    Varnode::reg(REG_R0 + idx as u64, REG_SIZE)
}
fn const_vn(v: u64) -> Varnode {
    Varnode::constant(v, REG_SIZE)
}
fn ram_target(addr: u64) -> Varnode {
    Varnode::ram(addr, 2)
}

fn build_register_file() -> RegisterFile {
    let mut regs = vec![
        RegisterDef { name: "A", varnode: vn_a() },
        RegisterDef { name: "B", varnode: vn_b() },
    ];
    for i in 0..8u8 {
        let name = match i {
            0 => "R0", 1 => "R1", 2 => "R2", 3 => "R3",
            4 => "R4", 5 => "R5", 6 => "R6", _ => "R7",
        };
        regs.push(RegisterDef { name, varnode: vn_r(i) });
    }
    regs.push(RegisterDef {
        name: "PC",
        varnode: Varnode::reg(PC_OFFSET, REG_SIZE),
    });
    RegisterFile { registers: regs }
}

pub struct I8051Lifter {
    reg_file: RegisterFile,
}

impl I8051Lifter {
    pub fn new() -> Self {
        Self { reg_file: build_register_file() }
    }
}

impl Default for I8051Lifter {
    fn default() -> Self { Self::new() }
}

impl Lifter for I8051Lifter {
    fn arch(&self) -> ArchId { ArchId::I8051 }
    fn register_file(&self) -> &RegisterFile { &self.reg_file }

    fn lift_insn(&self, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
        if bytes.is_empty() {
            return Err(LiftError::ShortBuffer);
        }
        decode(bytes[0], bytes, addr)
    }
}

fn decode(op: u8, bytes: &[u8], addr: u64) -> Result<LiftedInsn, LiftError> {
    if op == 0x00 {
        return Ok(LiftedInsn { ir_ops: Vec::new(), len: 1 });
    }
    if op == 0x22 || op == 0x32 {
        return ret(addr, 1);
    }
    if op == 0xE4 {
        return ok1(IrInsn::with_output(IrOp::Copy, vn_a(), smallvec![const_vn(0)], addr));
    }
    if op == 0xF4 {
        return ok1(IrInsn::with_output(
            IrOp::IntXor, vn_a(),
            smallvec![vn_a(), const_vn(0xFF)], addr));
    }
    if matches!(op, 0x03 | 0x13 | 0x23 | 0x33) {
        return ok1(IrInsn::with_output(IrOp::Callother, vn_a(), smallvec![vn_a()], addr));
    }
    if op == 0xA4 {
        return ok1(IrInsn::with_output(IrOp::IntMult, vn_a(),
            smallvec![vn_a(), vn_b()], addr));
    }
    if op == 0x84 {
        return ok1(IrInsn::with_output(IrOp::IntDiv, vn_a(),
            smallvec![vn_a(), vn_b()], addr));
    }
    if op == 0x80 {
        let rel = *bytes.get(1).ok_or(LiftError::ShortBuffer)? as i8;
        let target = (addr as i64 + 2 + rel as i64) as u64;
        return ok_n(vec![IrInsn::without_output(IrOp::Branch,
            smallvec![ram_target(target)], addr)], 2);
    }
    if op == 0x02 {
        if bytes.len() < 3 { return Err(LiftError::ShortBuffer); }
        let target = ((bytes[1] as u64) << 8) | bytes[2] as u64;
        return ok_n(vec![IrInsn::without_output(IrOp::Branch,
            smallvec![ram_target(target)], addr)], 3);
    }
    if op == 0x12 {
        if bytes.len() < 3 { return Err(LiftError::ShortBuffer); }
        let target = ((bytes[1] as u64) << 8) | bytes[2] as u64;
        return ok_n(vec![IrInsn::without_output(IrOp::Call,
            smallvec![ram_target(target)], addr)], 3);
    }
    if op & 0x1F == 0x01 {
        if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
        let high = ((op as u64) >> 5) << 8;
        let target = ((addr + 2) & 0xF800) | high | bytes[1] as u64;
        return ok_n(vec![IrInsn::without_output(IrOp::Branch,
            smallvec![ram_target(target)], addr)], 2);
    }
    if op & 0x1F == 0x11 {
        if bytes.len() < 2 { return Err(LiftError::ShortBuffer); }
        let high = ((op as u64) >> 5) << 8;
        let target = ((addr + 2) & 0xF800) | high | bytes[1] as u64;
        return ok_n(vec![IrInsn::without_output(IrOp::Call,
            smallvec![ram_target(target)], addr)], 2);
    }
    if matches!(op, 0x40 | 0x50 | 0x60 | 0x70) {
        let rel = *bytes.get(1).ok_or(LiftError::ShortBuffer)? as i8;
        let target = (addr as i64 + 2 + rel as i64) as u64;
        return ok_n(vec![IrInsn::without_output(IrOp::Cbranch,
            smallvec![ram_target(target), vn_a()], addr)], 2);
    }
    let rn_idx = op & 0x07;
    if (0x08..=0x0F).contains(&op) {
        let r = vn_r(rn_idx);
        return ok1(IrInsn::with_output(IrOp::IntAdd, r,
            smallvec![r, const_vn(1)], addr));
    }
    if (0x18..=0x1F).contains(&op) {
        let r = vn_r(rn_idx);
        return ok1(IrInsn::with_output(IrOp::IntSub, r,
            smallvec![r, const_vn(1)], addr));
    }
    if (0x28..=0x2F).contains(&op) || (0x38..=0x3F).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::IntAdd, vn_a(),
            smallvec![vn_a(), vn_r(rn_idx)], addr));
    }
    if (0x98..=0x9F).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::IntSub, vn_a(),
            smallvec![vn_a(), vn_r(rn_idx)], addr));
    }
    if (0x58..=0x5F).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::IntAnd, vn_a(),
            smallvec![vn_a(), vn_r(rn_idx)], addr));
    }
    if (0x48..=0x4F).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::IntOr, vn_a(),
            smallvec![vn_a(), vn_r(rn_idx)], addr));
    }
    if (0x68..=0x6F).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::IntXor, vn_a(),
            smallvec![vn_a(), vn_r(rn_idx)], addr));
    }
    if (0xE8..=0xEF).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::Copy, vn_a(),
            smallvec![vn_r(rn_idx)], addr));
    }
    if (0xF8..=0xFF).contains(&op) {
        return ok1(IrInsn::with_output(IrOp::Copy, vn_r(rn_idx),
            smallvec![vn_a()], addr));
    }
    if op == 0x74 {
        let imm = *bytes.get(1).ok_or(LiftError::ShortBuffer)? as u64;
        return ok_n(vec![IrInsn::with_output(IrOp::Copy, vn_a(),
            smallvec![const_vn(imm)], addr)], 2);
    }
    if (0x78..=0x7F).contains(&op) {
        let imm = *bytes.get(1).ok_or(LiftError::ShortBuffer)? as u64;
        return ok_n(vec![IrInsn::with_output(IrOp::Copy, vn_r(rn_idx),
            smallvec![const_vn(imm)], addr)], 2);
    }
    if (0xD8..=0xDF).contains(&op) {
        let rel = *bytes.get(1).ok_or(LiftError::ShortBuffer)? as i8;
        let target = (addr as i64 + 2 + rel as i64) as u64;
        let r = vn_r(rn_idx);
        return ok_n(vec![
            IrInsn::with_output(IrOp::IntSub, r, smallvec![r, const_vn(1)], addr),
            IrInsn::without_output(IrOp::Cbranch,
                smallvec![ram_target(target), r], addr),
        ], 2);
    }
    Ok(LiftedInsn {
        ir_ops: vec![IrInsn::without_output(IrOp::Unimplemented, smallvec![], addr)],
        len: 1,
    })
}

fn ok1(insn: IrInsn) -> Result<LiftedInsn, LiftError> {
    Ok(LiftedInsn { ir_ops: vec![insn], len: 1 })
}

fn ok_n(ir_ops: Vec<IrInsn>, len: usize) -> Result<LiftedInsn, LiftError> {
    Ok(LiftedInsn { ir_ops, len })
}

fn ret(addr: u64, len: usize) -> Result<LiftedInsn, LiftError> {
    Ok(LiftedInsn {
        ir_ops: vec![IrInsn::without_output(IrOp::Return, smallvec![], addr)],
        len,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn l(bytes: &[u8]) -> LiftedInsn {
        I8051Lifter::new().lift_insn(bytes, 0x100).unwrap()
    }

    #[test]
    fn test_arch() {
        assert_eq!(I8051Lifter::new().arch(), ArchId::I8051);
    }

    #[test]
    fn test_short_buffer() {
        assert!(I8051Lifter::new().lift_insn(&[], 0).is_err());
    }

    #[test]
    fn nop() {
        let r = l(&[0x00]);
        assert!(r.ir_ops.is_empty());
    }

    #[test]
    fn ret_and_reti() {
        assert_eq!(l(&[0x22]).ir_ops[0].op, IrOp::Return);
        assert_eq!(l(&[0x32]).ir_ops[0].op, IrOp::Return);
    }

    #[test]
    fn clr_a_cpl_a() {
        assert_eq!(l(&[0xE4]).ir_ops[0].op, IrOp::Copy);
        assert_eq!(l(&[0xF4]).ir_ops[0].op, IrOp::IntXor);
    }

    #[test]
    fn rotates_lift_to_callother() {
        for op in [0x03u8, 0x13, 0x23, 0x33] {
            assert_eq!(l(&[op]).ir_ops[0].op, IrOp::Callother);
        }
    }

    #[test]
    fn mul_div_ab() {
        assert_eq!(l(&[0xA4]).ir_ops[0].op, IrOp::IntMult);
        assert_eq!(l(&[0x84]).ir_ops[0].op, IrOp::IntDiv);
    }

    #[test]
    fn sjmp_ljmp_lcall() {
        assert_eq!(l(&[0x80, 0x04]).ir_ops[0].op, IrOp::Branch);
        assert_eq!(l(&[0x02, 0x12, 0x34]).ir_ops[0].op, IrOp::Branch);
        assert_eq!(l(&[0x12, 0x12, 0x34]).ir_ops[0].op, IrOp::Call);
    }

    #[test]
    fn ajmp_acall() {
        assert_eq!(l(&[0x21, 0x50]).ir_ops[0].op, IrOp::Branch);
        assert_eq!(l(&[0x11, 0x50]).ir_ops[0].op, IrOp::Call);
    }

    #[test]
    fn conditional_branches() {
        for op in [0x40u8, 0x50, 0x60, 0x70] {
            assert_eq!(l(&[op, 0x02]).ir_ops[0].op, IrOp::Cbranch);
        }
    }

    #[test]
    fn inc_dec_rn() {
        assert_eq!(l(&[0x0B]).ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(l(&[0x1D]).ir_ops[0].op, IrOp::IntSub);
    }

    #[test]
    fn alu_a_rn() {
        assert_eq!(l(&[0x28]).ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(l(&[0x39]).ir_ops[0].op, IrOp::IntAdd);
        assert_eq!(l(&[0x9A]).ir_ops[0].op, IrOp::IntSub);
        assert_eq!(l(&[0x58]).ir_ops[0].op, IrOp::IntAnd);
        assert_eq!(l(&[0x48]).ir_ops[0].op, IrOp::IntOr);
        assert_eq!(l(&[0x68]).ir_ops[0].op, IrOp::IntXor);
    }

    #[test]
    fn mov_a_rn_and_rn_a() {
        let r = l(&[0xEB]);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].output, Some(vn_a()));
        let r = l(&[0xFD]);
        assert_eq!(r.ir_ops[0].output, Some(vn_r(5)));
    }

    #[test]
    fn mov_imm() {
        let r = l(&[0x74, 0xAB]);
        assert_eq!(r.ir_ops[0].op, IrOp::Copy);
        assert_eq!(r.ir_ops[0].inputs[0], const_vn(0xAB));
        let r = l(&[0x7A, 0x55]);
        assert_eq!(r.ir_ops[0].output, Some(vn_r(2)));
    }

    #[test]
    fn djnz_rn() {
        let r = l(&[0xD8, 0x04]);
        assert_eq!(r.ir_ops[0].op, IrOp::IntSub);
        assert_eq!(r.ir_ops[1].op, IrOp::Cbranch);
    }
}
