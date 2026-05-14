//! Tests for the SPARC v8 lifter.

use unlace_ir::{ArchId, IrOp, Lifter, Varnode};

use crate::lift::{SPARC_FLAG_C, SPARC_FLAG_N, SPARC_FLAG_V, SPARC_FLAG_Z};
use crate::SparcLifter;

fn lifter() -> SparcLifter {
    SparcLifter::new()
}

// ---------------------------------------------------------------------------
// Test 1: Architecture identification
// ---------------------------------------------------------------------------
#[test]
fn test_arch() {
    assert_eq!(lifter().arch(), ArchId::Sparc);
}

// ---------------------------------------------------------------------------
// Test 2: Register file covers all register windows
// ---------------------------------------------------------------------------
#[test]
fn test_register_file_windows() {
    let l = lifter();
    let rf = l.register_file();
    // 32 GPRs + 4 icc flags + PC = 37
    assert_eq!(rf.registers.len(), 37);
    // Globals
    assert_eq!(rf.registers[0].name, "g0");
    assert_eq!(rf.registers[7].name, "g7");
    // Outs
    assert_eq!(rf.registers[8].name, "o0");
    assert_eq!(rf.registers[15].name, "o7");
    // Locals
    assert_eq!(rf.registers[16].name, "l0");
    assert_eq!(rf.registers[23].name, "l7");
    // Ins
    assert_eq!(rf.registers[24].name, "i0");
    assert_eq!(rf.registers[31].name, "i7");
    // ICC flags
    assert_eq!(rf.registers[32].name, "icc_n");
    assert_eq!(rf.registers[33].name, "icc_z");
    assert_eq!(rf.registers[34].name, "icc_v");
    assert_eq!(rf.registers[35].name, "icc_c");
    // PC
    assert_eq!(rf.registers[36].name, "pc");
}

// ---------------------------------------------------------------------------
// Test 3: NOP
// ---------------------------------------------------------------------------
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

// ---------------------------------------------------------------------------
// Test 4: ADD (register form)
// ---------------------------------------------------------------------------
#[test]
fn test_add_reg() {
    // add %g1, %g2, %g3 => op=10, rd=3, op3=000000, rs1=1, i=0, rs2=2
    let word: u32 = 0b10_00011_000000_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x2000)
        .expect("should decode ADD reg");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    // Should NOT set condition codes
    assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
}

// ---------------------------------------------------------------------------
// Test 5: ADDcc sets condition codes
// ---------------------------------------------------------------------------
#[test]
fn test_addcc_sets_flags() {
    // addcc %g1, %g2, %g3 => op=10, rd=3, op3=010000, rs1=1, i=0, rs2=2
    let word: u32 = 0b10_00011_010000_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x2000)
        .expect("should decode ADDcc");
    assert_eq!(result.len, 4);
    // Must set Z flag
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual && i.output == Some(SPARC_FLAG_Z)),
        "ADDcc must set Z flag"
    );
    // Must set N flag
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntSless && i.output == Some(SPARC_FLAG_N)),
        "ADDcc must set N flag"
    );
    // Must set C flag (carry)
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntCarry && i.output == Some(SPARC_FLAG_C)),
        "ADDcc must set C flag"
    );
    // Must set V flag (overflow)
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntScarry && i.output == Some(SPARC_FLAG_V)),
        "ADDcc must set V flag"
    );
}

// ---------------------------------------------------------------------------
// Test 6: SUBcc sets condition codes
// ---------------------------------------------------------------------------
#[test]
fn test_subcc_sets_flags() {
    // subcc %g1, %g2, %g3 => op=10, rd=3, op3=010100, rs1=1, i=0, rs2=2
    let word: u32 = 0b10_00011_010100_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x2000)
        .expect("should decode SUBcc");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual && i.output == Some(SPARC_FLAG_Z)),
        "SUBcc must set Z flag"
    );
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntSborrow && i.output == Some(SPARC_FLAG_C)),
        "SUBcc must set C flag (borrow)"
    );
}

// ---------------------------------------------------------------------------
// Test 7: LD (word) and ST (word)
// ---------------------------------------------------------------------------
#[test]
fn test_ld_st_word() {
    // ld [%g1 + %g2], %g3 => op=11, rd=3, op3=000000, rs1=1, i=0, rs2=2
    let ld_word: u32 = 0b11_00011_000000_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&ld_word.to_be_bytes(), 0x3000)
        .expect("should decode LD");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    // Should NOT emit IntZext/IntSext for word-sized load
    assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::IntZext || i.op == IrOp::IntSext));

    // st %g3, [%g1 + 4] => op=11, rd=3, op3=000100, rs1=1, i=1, simm13=4
    let st_word: u32 = 0b11_00011_000100_00001_1_0000000000100;
    let result = lifter()
        .lift_insn(&st_word.to_be_bytes(), 0x3004)
        .expect("should decode ST");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
}

// ---------------------------------------------------------------------------
// Test 8: LDUB (unsigned byte) with zero-extension
// ---------------------------------------------------------------------------
#[test]
fn test_ldub_zext() {
    // ldub [%g1 + 0], %g3 => op=11, rd=3, op3=000001, rs1=1, i=1, simm13=0
    let word: u32 = 0b11_00011_000001_00001_1_0000000000000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x3000)
        .expect("should decode LDUB");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntZext),
        "LDUB must zero-extend to register width"
    );
}

// ---------------------------------------------------------------------------
// Test 9: LDSB (signed byte) with sign-extension
// ---------------------------------------------------------------------------
#[test]
fn test_ldsb_sext() {
    // ldsb [%g1 + 0], %g3 => op=11, rd=3, op3=001001, rs1=1, i=1, simm13=0
    let word: u32 = 0b11_00011_001001_00001_1_0000000000000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x3000)
        .expect("should decode LDSB");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::IntSext),
        "LDSB must sign-extend to register width"
    );
}

// ---------------------------------------------------------------------------
// Test 10: SAVE (register window rotation)
// ---------------------------------------------------------------------------
#[test]
fn test_save() {
    // save %sp, -96, %sp => 0x9de3bfa0
    let result = lifter()
        .lift_insn(&0x9de3bfa0u32.to_be_bytes(), 0x4000)
        .expect("should decode SAVE");
    assert_eq!(result.len, 4);
    // SAVE emits: IntAdd (compute sp-96), Callother #0 (window rotate), Copy (write to new sp)
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
        "SAVE must emit Callother for window rotation"
    );
}

// ---------------------------------------------------------------------------
// Test 11: RESTORE (register window pop)
// ---------------------------------------------------------------------------
#[test]
fn test_restore() {
    // restore %g0, %g0, %g0 => op=10, rd=0, op3=111101, rs1=0, i=0, rs2=0
    let word: u32 = 0b10_00000_111101_00000_0_00000000_00000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x4004)
        .expect("should decode RESTORE");
    assert_eq!(result.len, 4);
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::Callother),
        "RESTORE must emit Callother for window rotation"
    );
    // Callother for restore uses constant 1
    let co = result.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
    assert_eq!(co.inputs[0], Varnode::constant(1, 4));
}

// ---------------------------------------------------------------------------
// Test 12: BA (branch always)
// ---------------------------------------------------------------------------
#[test]
fn test_ba() {
    // ba +16 => op=00, cond=1000, op2=010, disp22=4 (4*4=16 bytes)
    let word: u32 = (0b00 << 30) | (0b1000 << 25) | (0b010 << 22) | 4;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x1000)
        .expect("should decode BA");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    let br = result.ir_ops.iter().find(|i| i.op == IrOp::Branch).unwrap();
    assert_eq!(br.inputs[0].offset, 0x1010); // 0x1000 + 4*4
}

// ---------------------------------------------------------------------------
// Test 13: BNE (branch not equal)
// ---------------------------------------------------------------------------
#[test]
fn test_bne() {
    // bne +8 => op=00, cond=1001, op2=010, disp22=2 (2*4=8 bytes)
    let word: u32 = (0b00 << 30) | (0b1001 << 25) | (0b010 << 22) | 2;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x2000)
        .expect("should decode BNE");
    assert_eq!(result.len, 4);
    // BNE negates Z flag, then conditional branches
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
}

// ---------------------------------------------------------------------------
// Test 14: BG (branch greater)
// ---------------------------------------------------------------------------
#[test]
fn test_bg() {
    // bg +20 => op=00, cond=1010, op2=010, disp22=5 (5*4=20 bytes)
    let word: u32 = (0b00 << 30) | (0b1010 << 25) | (0b010 << 22) | 5;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x3000)
        .expect("should decode BG");
    assert_eq!(result.len, 4);
    // BG computes !(Z || (N ^ V))
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolXor));
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolOr));
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::BoolNegate));
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
}

// ---------------------------------------------------------------------------
// Test 15: CALL
// ---------------------------------------------------------------------------
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
    // CALL saves PC into %o7 (register 15)
    let o7_varnode = Varnode::reg(15 * 4, 4);
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::Copy && i.output == Some(o7_varnode)),
        "CALL must save PC to %%o7"
    );
}

// ---------------------------------------------------------------------------
// Test 16: JMPL as return (retl: jmpl %o7+8, %g0)
// ---------------------------------------------------------------------------
#[test]
fn test_jmpl_retl() {
    // jmpl %o7+8, %g0 => op=10, rd=0, op3=111000, rs1=15, i=1, simm13=8
    let word: u32 = 0b10_00000_111000_01111_1_0000000001000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x5000)
        .expect("should decode JMPL (retl)");
    assert_eq!(result.len, 4);
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::Return),
        "jmpl %%o7+8, %%g0 should be lifted as Return"
    );
}

// ---------------------------------------------------------------------------
// Test 17: JMPL as indirect call (jmpl %g1, %o7)
// ---------------------------------------------------------------------------
#[test]
fn test_jmpl_indirect_call() {
    // jmpl %g1+0, %o7 => op=10, rd=15(o7), op3=111000, rs1=1, i=1, simm13=0
    let word: u32 = 0b10_01111_111000_00001_1_0000000000000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x5000)
        .expect("should decode JMPL (indirect call)");
    assert_eq!(result.len, 4);
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::Callind),
        "jmpl with rd!=g0 should be lifted as Callind"
    );
}

// ---------------------------------------------------------------------------
// Test 18: STB (store byte) truncates
// ---------------------------------------------------------------------------
#[test]
fn test_stb() {
    // stb %g3, [%g1 + 0] => op=11, rd=3, op3=000101, rs1=1, i=1, simm13=0
    let word: u32 = 0b11_00011_000101_00001_1_0000000000000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x6000)
        .expect("should decode STB");
    assert_eq!(result.len, 4);
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    assert!(
        result.ir_ops.iter().any(|i| i.op == IrOp::Subpiece),
        "STB must truncate register to byte via Subpiece"
    );
}

// ---------------------------------------------------------------------------
// Test 19: LDD (load doubleword) loads two words
// ---------------------------------------------------------------------------
#[test]
fn test_ldd() {
    // ldd [%g1 + 0], %g2 => op=11, rd=2, op3=000011, rs1=1, i=1, simm13=0
    let word: u32 = 0b11_00010_000011_00001_1_0000000000000;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x7000)
        .expect("should decode LDD");
    assert_eq!(result.len, 4);
    // LDD should emit two Load operations (one for rd, one for rd+1)
    let load_count = result.ir_ops.iter().filter(|i| i.op == IrOp::Load).count();
    assert_eq!(load_count, 2, "LDD must emit two Load ops");
}

// ---------------------------------------------------------------------------
// Test 20: g0 writes are discarded (ADD to g0)
// ---------------------------------------------------------------------------
#[test]
fn test_g0_write_discarded() {
    // add %g1, %g2, %g0 => op=10, rd=0, op3=000000, rs1=1, i=0, rs2=2
    let word: u32 = 0b10_00000_000000_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&word.to_be_bytes(), 0x8000)
        .expect("should decode ADD to g0");
    assert_eq!(result.len, 4);
    // Should emit IntAdd but to a unique space (not register 0)
    let add_op = result.ir_ops.iter().find(|i| i.op == IrOp::IntAdd).unwrap();
    let output = add_op.output.unwrap();
    // Must NOT write to register offset 0 (that would be g0)
    assert_ne!(
        output,
        Varnode::reg(0, 4),
        "Writes to g0 must be redirected to unique space"
    );
}

// ---------------------------------------------------------------------------
// Test 21: SLL/SRL/SRA
// ---------------------------------------------------------------------------
#[test]
fn test_shifts() {
    // sll %g1, 4, %g3 => op=10, rd=3, op3=100101, rs1=1, i=1, simm13=4
    let sll_word: u32 = 0b10_00011_100101_00001_1_0000000000100;
    let result = lifter()
        .lift_insn(&sll_word.to_be_bytes(), 0x9000)
        .expect("should decode SLL");
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));

    // srl %g1, 4, %g3 => op=10, rd=3, op3=100110, rs1=1, i=1, simm13=4
    let srl_word: u32 = 0b10_00011_100110_00001_1_0000000000100;
    let result = lifter()
        .lift_insn(&srl_word.to_be_bytes(), 0x9004)
        .expect("should decode SRL");
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));

    // sra %g1, 4, %g3 => op=10, rd=3, op3=100111, rs1=1, i=1, simm13=4
    let sra_word: u32 = 0b10_00011_100111_00001_1_0000000000100;
    let result = lifter()
        .lift_insn(&sra_word.to_be_bytes(), 0x9008)
        .expect("should decode SRA");
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
}

// ---------------------------------------------------------------------------
// Test 22: AND/OR/XOR
// ---------------------------------------------------------------------------
#[test]
fn test_logic_ops() {
    // and %g1, %g2, %g3 => op=10, rd=3, op3=000001, rs1=1, i=0, rs2=2
    let and_word: u32 = 0b10_00011_000001_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&and_word.to_be_bytes(), 0xa000)
        .expect("should decode AND");
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));

    // or %g1, %g2, %g3 => op=10, rd=3, op3=000010, rs1=1, i=0, rs2=2
    let or_word: u32 = 0b10_00011_000010_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&or_word.to_be_bytes(), 0xa004)
        .expect("should decode OR");
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));

    // xor %g1, %g2, %g3 => op=10, rd=3, op3=000011, rs1=1, i=0, rs2=2
    let xor_word: u32 = 0b10_00011_000011_00001_0_00000000_00010;
    let result = lifter()
        .lift_insn(&xor_word.to_be_bytes(), 0xa008)
        .expect("should decode XOR");
    assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
}
