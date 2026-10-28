//! Tests for the SPARC lifter.

// Test instruction words are spelled field by field, zero fields included.
#![allow(clippy::identity_op, clippy::unusual_byte_groupings)]

use unlace_ir::{ArchId, IrOp, Lifter};

use crate::SparcLifter;

fn lifter() -> SparcLifter {
    SparcLifter::new()
}

#[test]
fn test_arch() {
    assert_eq!(lifter().arch(), ArchId::Sparc);
}

#[test]
fn test_register_file() {
    let l = lifter();
    let rf = l.register_file();
    // 32 GPRs + PC = 33
    assert_eq!(rf.registers.len(), 33);
    assert_eq!(rf.registers[0].name, "g0");
    assert_eq!(rf.registers[8].name, "o0");
    assert_eq!(rf.registers[16].name, "l0");
    assert_eq!(rf.registers[24].name, "i0");
    assert_eq!(rf.registers[32].name, "pc");
}

#[test]
fn test_nop() {
    // NOP = 0x01000000 (sethi %g0, 0)
    let result = lifter()
        .lift_insn(&0x0100_0000u32.to_be_bytes(), 0x1000)
        .expect("should decode NOP");
    assert_eq!(result.len, 4);
    assert!(!result.ir_ops.is_empty());
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
}

#[test]
fn test_add_reg() {
    // add %g1, %g2, %g3 => op=10, rd=3, op3=000000, rs1=1, i=0, rs2=2
    let word: u32 = 0b10_00011_000000_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x2000)
        .expect("should decode ADD reg");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
}

#[test]
fn test_sub_imm() {
    // sub %g1, 3, %g4 => op=10, rd=4, op3=000100, rs1=1, i=1, simm13=3
    let word: u32 = 0b10_00100_000100_00001_1_0000000000011;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x2004)
        .expect("should decode SUB imm");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
}

#[test]
fn test_load() {
    // ld [%g1 + %g2], %g3 => op=11, rd=3, op3=000000, rs1=1, i=0, rs2=2
    let word: u32 = 0b11_00011_000000_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x3000)
        .expect("should decode LD");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
}

#[test]
fn test_store() {
    // st %g3, [%g1 + 4] => op=11, rd=3, op3=000100, rs1=1, i=1, simm13=4
    let word: u32 = 0b11_00011_000100_00001_1_0000000000100;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x3004)
        .expect("should decode ST");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
}

#[test]
fn test_call() {
    // call +256 => op=01, disp30 = 64 (64*4 = 256 byte offset)
    let word: u32 = (0b01 << 30) | 64;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x4000)
        .expect("should decode CALL");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Call));
    // Target should be 0x4000 + 64*4 = 0x4100
    let call_op = result.ir_ops.iter().find(|i| i.op == IrOp::Call).unwrap();
    assert_eq!(call_op.inputs[0].offset, 0x4100);
}
