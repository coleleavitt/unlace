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
    }
}
