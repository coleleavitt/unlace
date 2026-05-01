//! ARM / AArch64 → IR lifter (via capstone).

pub mod lift;
mod ops;
pub mod register_file;

pub use lift::ArmLifter;

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, IrOp, Lifter};

    use crate::ArmLifter;

    fn lifter() -> ArmLifter {
        ArmLifter::new()
    }

    #[test]
    fn test_arch() {
        assert_eq!(lifter().arch(), ArchId::AArch64);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        assert!(!rf.registers.is_empty());
        assert_eq!(rf.registers.len(), 34);
        assert_eq!(rf.registers[0].name, "X0");
        assert_eq!(rf.registers[30].name, "X30");
        assert_eq!(rf.registers[31].name, "SP");
        assert_eq!(rf.registers[32].name, "PC");
        assert_eq!(rf.registers[33].name, "NZCV");
    }

    #[test]
    fn test_add_reg_reg() {
        // ADD X0, X1, X2  →  8b020020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x02, 0x8b], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn test_sub_reg_reg() {
        // SUB X0, X1, X2  →  cb020020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x02, 0xcb], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    #[test]
    fn test_and_reg_reg() {
        // AND X0, X1, X2  →  8a020020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x02, 0x8a], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_orr_reg_reg() {
        // ORR X0, X1, X2  →  aa020020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x02, 0xaa], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn test_eor_reg_reg() {
        // EOR X0, X1, X2  →  ca020020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x02, 0xca], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    #[test]
    fn test_mov_reg_reg() {
        // MOV X0, X1  →  aa0103e0  (ORR X0, XZR, X1)
        let result = lifter()
            .lift_insn(&[0xe0, 0x03, 0x01, 0xaa], 0x1000)
            .expect("should decode");
        assert!(!result.ir_ops.is_empty());
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_ldr_mem() {
        // LDR X0, [X1]  →  f9400020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x40, 0xf9], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }

    #[test]
    fn test_str_mem() {
        // STR X0, [X1]  →  f9000020
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x00, 0xf9], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_b_unconditional() {
        // B #0x100  →  14000040
        let result = lifter()
            .lift_insn(&[0x40, 0x00, 0x00, 0x14], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    }

    #[test]
    fn test_bl() {
        // BL #0x100  →  94000040
        let result = lifter()
            .lift_insn(&[0x40, 0x00, 0x00, 0x94], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Call));
    }

    #[test]
    fn test_br() {
        // BR X8  →  d61f0100
        let result = lifter()
            .lift_insn(&[0x00, 0x01, 0x1f, 0xd6], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branchind));
    }

    #[test]
    fn test_blr() {
        // BLR X8  →  d63f0100
        let result = lifter()
            .lift_insn(&[0x00, 0x01, 0x3f, 0xd6], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Callind));
    }

    #[test]
    fn test_cbz() {
        // CBZ X0, #0x10  →  b4000080
        let result = lifter()
            .lift_insn(&[0x80, 0x00, 0x00, 0xb4], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_cbnz() {
        // CBNZ X0, #0x10  →  b5000080
        let result = lifter()
            .lift_insn(&[0x80, 0x00, 0x00, 0xb5], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntNotequal));
    }

    #[test]
    fn test_ret() {
        // RET  →  d65f03c0
        let result = lifter()
            .lift_insn(&[0xc0, 0x03, 0x5f, 0xd6], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Return));
    }

    #[test]
    fn test_cmp() {
        // CMP X0, X1  →  eb01001f
        let result = lifter()
            .lift_insn(&[0x1f, 0x00, 0x01, 0xeb], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn test_tst() {
        // TST X0, X1  →  ea01001f
        let result = lifter()
            .lift_insn(&[0x1f, 0x00, 0x01, 0xea], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_nop() {
        // NOP  →  d503201f
        let result = lifter()
            .lift_insn(&[0x1f, 0x20, 0x03, 0xd5], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(!result.ir_ops.is_empty());
    }

    #[test]
    fn test_unknown_insn() {
        // some unrecognized instruction
        let result = lifter().lift_insn(&[0xff, 0xff, 0xff, 0xff], 0x1000);
        // Could either decode to something Unimplemented or fail to decode
        match result {
            Ok(lifted) => {
                assert!(lifted.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
            }
            Err(_) => {} // decode failure is acceptable
        }
    }

    #[test]
    fn test_empty_buffer() {
        let result = lifter().lift_insn(&[], 0x1000);
        assert!(result.is_err());
    }

    #[test]
    fn test_short_buffer() {
        let result = lifter().lift_insn(&[0x20, 0x00], 0x1000);
        assert!(result.is_err());
    }

    #[test]
    fn test_b_eq_conditional() {
        // B.EQ #0x10  →  54000080
        let result = lifter()
            .lift_insn(&[0x80, 0x00, 0x00, 0x54], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    #[test]
    fn test_stp() {
        // STP X29, X30, [SP, #-16]!  →  a9bf7bfd
        let result = lifter()
            .lift_insn(&[0xfd, 0x7b, 0xbf, 0xa9], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_ldp() {
        // LDP X29, X30, [SP], #16  →  a8c17bfd
        let result = lifter()
            .lift_insn(&[0xfd, 0x7b, 0xc1, 0xa8], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }

    #[test]
    fn test_add_imm() {
        // ADD X0, X1, #42  →  9100a820
        let result = lifter()
            .lift_insn(&[0x20, 0xa8, 0x00, 0x91], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn test_sub_imm() {
        // SUB X0, X1, #42  →  d100a820
        let result = lifter()
            .lift_insn(&[0x20, 0xa8, 0x00, 0xd1], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    #[test]
    fn arm64_mul_lifts_to_intmult() {
        // MUL X0, X1, X2  →  9b027c20
        let result = lifter()
            .lift_insn(&[0x20, 0x7c, 0x02, 0x9b], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_sdiv_lifts_to_intsdiv() {
        // SDIV X3, X0, X1  →  9ac10c03
        let result = lifter()
            .lift_insn(&[0x03, 0x0c, 0xc1, 0x9a], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSdiv));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_udiv_lifts_to_intdiv() {
        // UDIV X3, X0, X1  →  9ac10803
        let result = lifter()
            .lift_insn(&[0x03, 0x08, 0xc1, 0x9a], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntDiv));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_madd_lifts_to_multiply_add() {
        // MADD X4, X1, X2, X3  →  9b020c24
        let result = lifter()
            .lift_insn(&[0x24, 0x0c, 0x02, 0x9b], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_msub_lifts_to_multiply_sub() {
        // MSUB X4, X1, X2, X3  →  9b028c24
        let result = lifter()
            .lift_insn(&[0x24, 0x8c, 0x02, 0x9b], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    fn assert_callother_tag(bytes: &[u8], tag: u64) {
        let result = lifter().lift_insn(bytes, 0x1000).expect("should decode");
        let call = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("should emit Callother");
        assert_eq!(call.inputs[0].offset, tag);
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_csel_lifts_to_callother() {
        // CSEL X2, X0, X1, LT  →  9a81b002
        assert_callother_tag(&[0x02, 0xb0, 0x81, 0x9a], 0x330);
    }

    #[test]
    fn arm64_csinc_lifts_to_callother() {
        // CSINC X3, X0, X1, EQ  →  9a810403
        assert_callother_tag(&[0x03, 0x04, 0x81, 0x9a], 0x331);
    }

    #[test]
    fn arm64_csinv_lifts_to_callother() {
        // CSINV X4, X0, X1, NE  →  da811004
        assert_callother_tag(&[0x04, 0x10, 0x81, 0xda], 0x332);
    }

    #[test]
    fn arm64_csneg_lifts_to_callother() {
        // CSNEG X5, X0, X1, GE  →  da81a405
        assert_callother_tag(&[0x05, 0xa4, 0x81, 0xda], 0x333);
    }

    #[test]
    fn test_no_panic_on_various() {
        let cases: Vec<&[u8]> = vec![
            &[0x1f, 0x20, 0x03, 0xd5], // NOP
            &[0xc0, 0x03, 0x5f, 0xd6], // RET
            &[0x00, 0x00, 0x00, 0x14], // B #0
            &[0x00, 0x00, 0x40, 0xf9], // LDR X0, [X0]
        ];
        for bytes in cases {
            let result = lifter().lift_insn(bytes, 0x1000);
            assert!(result.is_ok(), "should not panic on {bytes:?}");
            let lifted = result.expect("already asserted Ok");
            assert!(
                !lifted.ir_ops.is_empty(),
                "should produce at least one op for {bytes:?}"
            );
        }
    }
}
