//! ARM / AArch64 → IR lifter (via capstone).

pub mod lift;
mod ops;
pub mod register_file;

pub use lift::ArmLifter;

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, IrOp, Lifter};

    use crate::ArmLifter;
    use crate::lift::{
        ARM_FLAG_C, ARM_FLAG_N, ARM_FLAG_V, ARM_FLAG_Z, ArmLiftMode, CALLOTHER_AARCH64_CCMP,
        CALLOTHER_INT_MULT_HIGH, CALLOTHER_INT_SMULT_HIGH, ItState, LdmStmAddressing,
        decode_arm_ldm_stm, decode_it, decode_thumb1_ldm_stm, decode_thumb1_push_pop,
        expand_reg_list, try_aarch64_ccmp, try_aarch64_csel,
    };

    #[test]
    fn expand_reg_list_ldmia_three_regs() {
        let got = expand_reg_list(0b0000_0000_0000_1110, LdmStmAddressing::Ia);
        assert_eq!(got, vec![(0, 1), (4, 2), (8, 3)]);
    }

    #[test]
    fn expand_reg_list_stmdb_pre_decrement() {
        let got = expand_reg_list(0b1111_0000, LdmStmAddressing::Db);
        assert_eq!(got, vec![(-16, 4), (-12, 5), (-8, 6), (-4, 7)]);
    }

    #[test]
    fn expand_reg_list_ldmib_offsets_shift() {
        let got = expand_reg_list(0b0000_0000_0000_1110, LdmStmAddressing::Ib);
        assert_eq!(got, vec![(4, 1), (8, 2), (12, 3)]);
    }

    #[test]
    fn expand_reg_list_ldmda_lowest_addr_lowest_reg() {
        let got = expand_reg_list(0b0000_0000_0000_1110, LdmStmAddressing::Da);
        assert_eq!(got, vec![(-8, 1), (-4, 2), (0, 3)]);
    }

    #[test]
    fn decode_arm_ldmia_writeback() {
        // LDMIA r0!, {r1,r2,r3} = 0xE8B0000E
        let (addr, rn, list, w, l) = decode_arm_ldm_stm(0xE8B0_000E).expect("ldm decode");
        assert_eq!(addr, LdmStmAddressing::Ia);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x000E);
        assert!(w);
        assert!(l);
    }

    #[test]
    fn decode_arm_stmdb_no_writeback() {
        // STMDB r0, {r1} = 0xE9000002  (P=1,U=0,W=0,L=0)
        let (addr, rn, list, w, l) = decode_arm_ldm_stm(0xE900_0002).expect("stmdb decode");
        assert_eq!(addr, LdmStmAddressing::Db);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x0002);
        assert!(!w);
        assert!(!l);
    }

    #[test]
    fn decode_arm_ldm_rejects_non_block_class() {
        assert!(decode_arm_ldm_stm(0xE3A0_0000).is_none());
    }

    #[test]
    fn decode_thumb_push() {
        // PUSH {r4, lr} = 0xB510 → DB sp!, {r4, lr}
        let (addr, rn, list, w, l) = decode_thumb1_push_pop(0xB510).expect("push decode");
        assert_eq!(addr, LdmStmAddressing::Db);
        assert_eq!(rn, 13);
        assert_eq!(list, 0x4010);
        assert!(w);
        assert!(!l);
    }

    #[test]
    fn decode_thumb_pop_pc() {
        // POP {r4, pc} = 0xBD10 → IA sp!, {r4, pc}
        let (addr, rn, list, w, l) = decode_thumb1_push_pop(0xBD10).expect("pop decode");
        assert_eq!(addr, LdmStmAddressing::Ia);
        assert_eq!(rn, 13);
        assert_eq!(list, 0x8010);
        assert!(w);
        assert!(l);
    }

    #[test]
    fn decode_thumb_ldm_basic() {
        // LDM r0!, {r1,r2} = 0xC803  (1100 1 000 0000_0011)
        let (addr, rn, list, w, l) = decode_thumb1_ldm_stm(0xC803).expect("thumb ldm");
        assert_eq!(addr, LdmStmAddressing::Ia);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x0003);
        assert!(w);
        assert!(l);
    }

    #[test]
    fn decode_it_eq() {
        let s = decode_it(0xBF08).expect("IT EQ");
        assert_eq!(
            s,
            ItState {
                firstcond: 0,
                conds: vec![0],
            }
        );
    }

    #[test]
    fn decode_itt_eq() {
        let s = decode_it(0xBF04).expect("ITT EQ");
        assert_eq!(s.firstcond, 0);
        assert_eq!(s.conds, vec![0, 0]);
    }

    #[test]
    fn decode_ite_eq() {
        let s = decode_it(0xBF0C).expect("ITE EQ");
        assert_eq!(s.firstcond, 0);
        assert_eq!(s.conds, vec![0, 1]);
    }

    #[test]
    fn decode_ittt_eq() {
        let s = decode_it(0xBF02).expect("ITTT EQ");
        assert_eq!(s.firstcond, 0);
        assert_eq!(s.conds, vec![0, 0, 0]);
    }

    #[test]
    fn decode_iteee_ne() {
        // firstcond=NE=1, mask=0b0001 → ITEEE  →  insn = 0xBF11
        let s = decode_it(0xBF11).expect("ITEEE NE");
        assert_eq!(s.firstcond, 1);
        assert_eq!(s.conds, vec![1, 0, 0, 0]);
    }

    #[test]
    fn decode_it_rejects_non_it() {
        assert!(decode_it(0x4770).is_none()); // BX LR
        assert!(decode_it(0xBF00).is_none()); // mask=0 → NOP hint
    }

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
    fn try_aarch64_csel_recognizes_csel_x0_x1_x2_eq() {
        // CSEL X0, X1, X2, EQ  →  0x9A820020
        let d = try_aarch64_csel(0x9A82_0020).expect("CSEL must decode");
        assert!(d.sf);
        assert_eq!(d.op, 0);
        assert_eq!(d.rd, 0);
        assert_eq!(d.rn, 1);
        assert_eq!(d.rm, 2);
        assert_eq!(d.cond, 0);
    }

    #[test]
    fn try_aarch64_csel_recognizes_csinc() {
        // CSINC W3, W4, W5, NE  →  0x1A851483
        let d = try_aarch64_csel(0x1A85_1483).expect("CSINC must decode");
        assert!(!d.sf);
        assert_eq!(d.op, 1);
        assert_eq!(d.rd, 3);
        assert_eq!(d.rn, 4);
        assert_eq!(d.rm, 5);
        assert_eq!(d.cond, 1);
    }

    #[test]
    fn try_aarch64_csel_recognizes_cset() {
        // CSET X0, EQ  ≡  CSINC X0, XZR, XZR, NE  →  0x9A9F17E0
        let d = try_aarch64_csel(0x9A9F_17E0).expect("CSET must decode");
        assert!(d.sf);
        assert_eq!(d.op, 1);
        assert_eq!(d.rn, 31);
        assert_eq!(d.rm, 31);
        assert_eq!(d.cond, 1);
    }

    #[test]
    fn csel_lifts_to_callother() {
        let r = lifter()
            .lift_insn(&[0x20, 0x00, 0x82, 0x9a], 0x1000)
            .expect("CSEL decodes");
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Callother));
    }

    #[test]
    fn non_csel_falls_through() {
        // MOVZ X0, #5  →  0xD28000A0
        assert!(try_aarch64_csel(0xD280_00A0).is_none());
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
    fn arm64_ubfm_lifts_to_shift_and_mask() {
        // UBFM/UBFX X0, X1, #4, #11  →  d3442c20
        let result = lifter()
            .lift_insn(&[0x20, 0x2c, 0x44, 0xd3], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_ubfm_lsl_alias_lifts_to_left_shift() {
        // UBFM/LSL X0, X1, #61, #60  →  d37df020 (Capstone reports LSL X0, X1, #3)
        let result = lifter()
            .lift_insn(&[0x20, 0xf0, 0x7d, 0xd3], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_sbfm_lifts_to_signed_extract() {
        // SBFM/SXTB X2, X3, #0, #7  →  93401c62
        let result = lifter()
            .lift_insn(&[0x62, 0x1c, 0x40, 0x93], 0x1000)
            .expect("should decode");
        assert!(
            result
                .ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSright || i.op == IrOp::IntSext)
        );
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_extr_lifts_to_shift_or() {
        // EXTR X4, X5, X6, #16  →  93c640a4
        let result = lifter()
            .lift_insn(&[0xa4, 0x40, 0xc6, 0x93], 0x1000)
            .expect("should decode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm64_ldxr_lifts_to_callother() {
        // LDXR X0, [X1]  →  c85f7c20
        assert_callother_tag(&[0x20, 0x7c, 0x5f, 0xc8], 0x340);
    }

    #[test]
    fn arm64_ldaxr_lifts_to_callother() {
        // LDAXR X0, [X1]  →  c85ffc20
        assert_callother_tag(&[0x20, 0xfc, 0x5f, 0xc8], 0x340);
    }

    #[test]
    fn arm64_stxr_lifts_to_callother() {
        // STXR W2, X0, [X1]  →  c8027c20
        assert_callother_tag(&[0x20, 0x7c, 0x02, 0xc8], 0x341);
    }

    #[test]
    fn arm64_stlxr_lifts_to_callother() {
        // STLXR W2, X0, [X1]  →  c802fc20
        assert_callother_tag(&[0x20, 0xfc, 0x02, 0xc8], 0x341);
    }

    #[test]
    fn arm64_dmb_lifts_to_callother() {
        // DMB ISH  →  d5033bbf
        assert_callother_tag(&[0xbf, 0x3b, 0x03, 0xd5], 0x342);
    }

    #[test]
    fn arm64_dsb_lifts_to_callother() {
        // DSB SY  →  d5033f9f
        assert_callother_tag(&[0x9f, 0x3f, 0x03, 0xd5], 0x343);
    }

    #[test]
    fn arm64_isb_lifts_to_callother() {
        // ISB SY  →  d5033fdf
        assert_callother_tag(&[0xdf, 0x3f, 0x03, 0xd5], 0x344);
    }

    #[test]
    fn paciasp_recognized_as_nop() {
        // PACIASP  →  d503233f
        let result = lifter()
            .lift_insn(&[0x3f, 0x23, 0x03, 0xd5], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.is_empty());
    }

    #[test]
    fn bti_c_recognized_as_nop() {
        // BTI c  →  d503245f
        let result = lifter()
            .lift_insn(&[0x5f, 0x24, 0x03, 0xd5], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.is_empty());
    }

    #[test]
    fn xpaclri_recognized_as_nop() {
        // XPACLRI  →  d50322ff
        let result = lifter()
            .lift_insn(&[0xff, 0x22, 0x03, 0xd5], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.is_empty());
    }

    #[test]
    fn retaa_lifts_as_ret_or_nop() {
        // RETAA  →  d65f0bff
        let result = lifter()
            .lift_insn(&[0xff, 0x0b, 0x5f, 0xd6], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(
            result.ir_ops.is_empty() || result.ir_ops.iter().any(|i| i.op == IrOp::Return),
            "RETAA should lift as a no-op or as a RET"
        );
    }

    #[test]
    fn autia_xn_remains_nop() {
        // t135 — AUTIA X0, X0  →  dac11000
        //
        // PAC AUTI* instructions currently lift as no-ops via try_pac_bti_nop.
        // Statically modeling the auth-and-fail behavior (whereby the CPU sets
        // a poison bit on auth failure) yields little practical signal because
        // the decoder cannot know whether auth will succeed at runtime. We keep
        // the no-op semantics and document the deferred work here.
        //
        // TODO(t135): emit a dedicated Callother(PTR_AUTH) intrinsic so a later
        // pass can recognize auth-and-branch idioms when modeling speculative
        // execution attacks (e.g. PACMAN-style gadgets).
        let result = lifter()
            .lift_insn(&[0x00, 0x10, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.is_empty(), "AUTIA Xn must remain a no-op");
    }

    #[test]
    fn autiasp_remains_nop() {
        // t135 — AUTIASP (HINT-space)  →  d50323bf
        let result = lifter()
            .lift_insn(&[0xbf, 0x23, 0x03, 0xd5], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.is_empty(), "AUTIASP must remain a no-op");
    }

    #[test]
    fn auth_does_not_break_decode() {
        // A sequence including a PACIA-family op (PACIA X0, X1 → dac10020),
        // an AUTIASP, a BTI c, a BLRAAZ X8 (d73f081f-ish? actually BLRAAZ X8 = d73f0900 wait)...
        // Just verify each lifts to something (either empty IR or valid IR).
        let cases: &[&[u8]] = &[
            &[0x20, 0x00, 0xc1, 0xda], // PACIA X0, X1
            &[0xbf, 0x23, 0x03, 0xd5], // AUTIASP
            &[0x5f, 0x24, 0x03, 0xd5], // BTI c
            &[0x1f, 0x09, 0x3f, 0xd6], // BLRAAZ X8  →  d63f091f
            &[0xff, 0x0b, 0x5f, 0xd6], // RETAA
            &[0xff, 0x0f, 0x5f, 0xd6], // RETAB
        ];
        for bytes in cases {
            let result = lifter().lift_insn(bytes, 0x1000);
            assert!(result.is_ok(), "auth insn should decode cleanly: {bytes:?}");
            let lifted = result.expect("already asserted Ok");
            assert_eq!(lifted.len, 4);
            assert!(
                !lifted.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
                "auth insn should not produce Unimplemented: {bytes:?}"
            );
        }
    }

    #[test]
    fn arm32_lifter_constructs_and_handles_empty_input() {
        let l = ArmLifter::new_arm32();
        assert_eq!(l.mode(), ArmLiftMode::Arm32);
        assert!(!l.register_file().registers.is_empty());
        // Empty buffer must be a ShortBuffer error, not a panic.
        assert!(l.lift_insn(&[], 0x1000).is_err());
        assert!(l.lift_insn(&[0x00, 0x00], 0x1000).is_err());
    }

    #[test]
    fn thumb_lifter_recognizes_it_block_then_lifts_one_conditional_insn() {
        let l = ArmLifter::new_thumb();
        assert_eq!(l.mode(), ArmLiftMode::Thumb);
        // IT EQ — encoded as 0xBF08 (little-endian: 0x08, 0xBF).
        let r = l.lift_insn(&[0x08, 0xBF], 0x1000).expect("IT should decode");
        assert_eq!(r.len, 2);
        assert!(r.ir_ops.is_empty(), "IT itself emits no IR");
        let st = l.current_it_state().expect("IT must arm the state machine");
        assert_eq!(st.firstcond, 0);
        assert_eq!(st.conds, vec![0]);

        // The next instruction (any 16-bit Thumb encoding) pops the cond
        // and falls through to the scaffolded path. Use a PUSH {r0} encoding
        // so we get observable IR rather than just Unimplemented.
        let push_r0 = 0xB401u16; // PUSH {r0}
        let bytes = push_r0.to_le_bytes();
        let r = l.lift_insn(&bytes, 0x1002).expect("PUSH decodes");
        assert_eq!(r.len, 2);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Store));
        // IT-block had exactly one slot; it must now be drained.
        assert!(l.current_it_state().is_none());
    }

    #[test]
    fn arm32_lifter_lifts_ldmia() {
        let l = ArmLifter::new_arm32();
        // LDMIA r0!, {r1, r2}  →  e8b00006 (little-endian: 06 00 b0 e8)
        let r = l
            .lift_insn(&[0x06, 0x00, 0xb0, 0xe8], 0x1000)
            .expect("LDMIA decodes");
        assert_eq!(r.len, 4);
        let loads = r.ir_ops.iter().filter(|i| i.op == IrOp::Load).count();
        assert_eq!(loads, 2, "LDMIA r0!, {{r1, r2}} must emit two Load ops");
        // Writeback => one extra IntAdd updating r0 after the transfers.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntAdd),
            "writeback should mutate Rn via IntAdd"
        );
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

    #[test]
    fn arm_capstone_decodes_mov_imm() {
        // MOV r0, #5  →  0xE3A00005
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE3A00005u32.to_le_bytes(), 0x1000)
            .expect("MOV imm decodes");
        assert_eq!(r.len, 4);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Copy));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm_capstone_decodes_add() {
        // ADD r1, r2, r3  →  0xE0821003
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE0821003u32.to_le_bytes(), 0x1000)
            .expect("ADD decodes");
        assert_eq!(r.len, 4);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn thumb_capstone_decodes_mov() {
        // Thumb-1 MOVS r0, #3  →  0x2003
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&0x2003u16.to_le_bytes(), 0x1000)
            .expect("MOVS decodes");
        assert_eq!(r.len, 2);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Copy));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn it_eq_marks_next_insn_with_eq_guard() {
        // IT EQ  →  0xBF08
        // MOVS r0, #1  →  0x2001 (Thumb-1, fits in IT block; cond is EQ=0)
        let l = ArmLifter::new_thumb();
        let _ = l.lift_insn(&0xBF08u16.to_le_bytes(), 0x1000).expect("IT");
        let r = l
            .lift_insn(&0x2001u16.to_le_bytes(), 0x1002)
            .expect("MOVS");
        let copy = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("MOVS must lift to Copy");
        assert_eq!(copy.guard, Some(0));
    }

    #[test]
    fn ittee_alternates_t_and_e() {
        // ITTEE EQ — firstcond=EQ=0; per ARM ARM the mask bits encode slots
        // 2..N as T-when-equal-to-firstcond[0] / E-when-inverted, with a
        // trailing `1` terminator. For [T,E,E] over 4 slots: mask = 0b0111.
        // Encoding: 0b1011_1111_0000_0111 = 0xBF07
        let l = ArmLifter::new_thumb();
        let _ = l.lift_insn(&0xBF07u16.to_le_bytes(), 0x1000).expect("IT");
        let mut got_guards = Vec::new();
        let mut pc = 0x1002u64;
        for _ in 0..4 {
            let r = l
                .lift_insn(&0x2001u16.to_le_bytes(), pc)
                .expect("MOVS lifts");
            let copy = r
                .ir_ops
                .iter()
                .find(|i| i.op == IrOp::Copy)
                .expect("Copy present");
            got_guards.push(copy.guard);
            pc += 2;
        }
        assert_eq!(got_guards, vec![Some(0), Some(0), Some(1), Some(1)]);
    }

    #[test]
    fn insn_after_it_block_has_no_guard() {
        // IT EQ; MOVS; ADDS  →  third insn falls outside the block
        let l = ArmLifter::new_thumb();
        let _ = l.lift_insn(&0xBF08u16.to_le_bytes(), 0x1000).expect("IT");
        let movs = l
            .lift_insn(&0x2001u16.to_le_bytes(), 0x1002)
            .expect("MOVS");
        let movs_copy = movs
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy");
        assert_eq!(movs_copy.guard, Some(0));

        // ADDS r0, #1  →  0x3001 (post-IT, must be unguarded)
        let adds = l
            .lift_insn(&0x3001u16.to_le_bytes(), 0x1004)
            .expect("ADDS");
        assert!(
            adds.ir_ops.iter().all(|i| i.guard.is_none()),
            "post-IT insn must not carry a guard: {:?}",
            adds.ir_ops
        );
    }

    #[test]
    fn arm_capstone_decodes_mul() {
        // MUL R0, R1, R2  →  0xE0000291
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE000_0291u32.to_le_bytes(), 0x1000)
            .expect("MUL decodes");
        assert_eq!(r.len, 4);
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntMult),
            "expected IntMult; got: {:?}",
            r.ir_ops.iter().map(|i| i.op).collect::<Vec<_>>()
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm_capstone_decodes_and_orr_eor() {
        let l = ArmLifter::new_arm32();
        let cases: &[(u32, IrOp)] = &[
            (0xE001_0002, IrOp::IntAnd),
            (0xE181_0002, IrOp::IntOr),
            (0xE021_0002, IrOp::IntXor),
        ];
        for (enc, expected) in cases {
            let r = l
                .lift_insn(&enc.to_le_bytes(), 0x1000)
                .expect("decodes");
            assert!(
                r.ir_ops.iter().any(|i| i.op == *expected),
                "encoding {enc:#x} should produce {expected:?}"
            );
            assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        }
    }

    #[test]
    fn arm_capstone_decodes_ldrb() {
        // LDRB R0, [R1]  →  0xE5D10000
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE5D1_0000u32.to_le_bytes(), 0x1000)
            .expect("LDRB decodes");
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Load));
        let load = r.ir_ops.iter().find(|i| i.op == IrOp::Load).unwrap();
        assert_eq!(load.output.expect("Load has output").size, 1);
    }

    #[test]
    fn arm_capstone_decodes_strh() {
        // STRH R0, [R1]  →  0xE1C100B0
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE1C1_00B0u32.to_le_bytes(), 0x1000)
            .expect("STRH decodes");
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Store));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm_capstone_decodes_b_cond() {
        // BNE #+0x100 from 0x1000  →  0x1A00003E
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0x1A00_003Eu32.to_le_bytes(), 0x1000)
            .expect("BNE decodes");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Cbranch),
            "expected Cbranch; got: {:?}",
            r.ir_ops.iter().map(|i| i.op).collect::<Vec<_>>()
        );
    }

    #[test]
    fn arm_capstone_decodes_bx_lr_as_return() {
        // BX LR  →  0xE12FFF1E
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE12F_FF1Eu32.to_le_bytes(), 0x1000)
            .expect("BX LR decodes");
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Return));
    }

    #[test]
    fn thumb_capstone_decodes_cbz() {
        // CBZ r0, #+6  →  T1: 1011 0001 imm5 Rn → 0xB108
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&0xB108u16.to_le_bytes(), 0x1000)
            .expect("CBZ decodes");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Cbranch),
            "got: {:?}",
            r.ir_ops.iter().map(|i| i.op).collect::<Vec<_>>()
        );
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntEqual));
    }

    #[test]
    fn arm_capstone_decodes_cmp() {
        // CMP R0, R1  →  0xE1500001
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE150_0001u32.to_le_bytes(), 0x1000)
            .expect("CMP decodes");
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    #[test]
    fn umull_emits_intmult_and_intmulthigh() {
        // ARM UMULL r0, r1, r2, r3 → r1:r0 = r2 * r3.
        // Encoding: cond=E, op=0000_1000, RdHi=1, RdLo=0, Rm=3, 1001, Rn=2.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE081_0392u32.to_le_bytes(), 0x1000)
            .expect("UMULL decodes");
        let mult = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntMult)
            .expect("UMULL must emit IntMult for the low half");
        let high = r
            .ir_ops
            .iter()
            .find(|i| {
                i.op == IrOp::Callother && i.inputs[0].offset == CALLOTHER_INT_MULT_HIGH
            })
            .expect("UMULL must emit a MULT_HIGH Callother for the high half");
        assert_eq!(mult.inputs[0], high.inputs[1]);
        assert_eq!(mult.inputs[1], high.inputs[2]);
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn smull_uses_signed_high() {
        // ARM SMULL r0, r1, r2, r3 → encoding differs from UMULL only in
        // bit[22] (signed): op=0000_1100.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE0C1_0392u32.to_le_bytes(), 0x1000)
            .expect("SMULL decodes");
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_SMULT_HIGH),
            "SMULL must emit the signed-MULT_HIGH Callother"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    // t161: UMLAL / SMLAL — 64-bit multiply-accumulate. Operand order is
    // RdLo, RdHi, Rn, Rm; semantics RdHi:RdLo += Rn * Rm.

    #[test]
    fn umlal_emits_mult_high_and_carry_chain() {
        // ARM UMLAL r0, r1, r2, r3.  Encoding: cond=E, bits[27:20]=0000_1010
        // (U=0, A=1, S=0), RdHi=1, RdLo=0, Rm=3, 1001, Rn=2  →  0xE0A10392.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE0A1_0392u32.to_le_bytes(), 0x1000)
            .expect("UMLAL decodes");

        // Low-half multiply present.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntMult),
            "UMLAL must emit IntMult for the product low half"
        );
        // Unsigned MULT_HIGH callother — NOT the signed variant.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_MULT_HIGH),
            "UMLAL must emit unsigned MULT_HIGH Callother"
        );
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_SMULT_HIGH),
            "UMLAL must NOT emit signed MULT_HIGH"
        );
        // 64-bit add → expect at least two IntAdd ops (low + hi-chain).
        let n_adds = r.ir_ops.iter().filter(|i| i.op == IrOp::IntAdd).count();
        assert!(
            n_adds >= 2,
            "UMLAL must emit ≥2 IntAdd ops (low + hi); got {n_adds}: {:?}",
            r.ir_ops.iter().map(|i| i.op).collect::<Vec<_>>()
        );
        // Carry-out from the low add must feed the high chain.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntCarry),
            "UMLAL must emit IntCarry to thread the low→high carry"
        );
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntZext),
            "UMLAL must IntZext the 1-bit carry to 32 bits before adding"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn smlal_uses_signed_high() {
        // ARM SMLAL r0, r1, r2, r3.  Encoding: cond=E, bits[27:20]=0000_1110
        // (U=1, A=1, S=0), RdHi=1, RdLo=0, Rm=3, 1001, Rn=2  →  0xE0E10392.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE0E1_0392u32.to_le_bytes(), 0x1000)
            .expect("SMLAL decodes");

        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_SMULT_HIGH),
            "SMLAL must emit signed MULT_HIGH Callother"
        );
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_MULT_HIGH),
            "SMLAL must NOT emit unsigned MULT_HIGH"
        );
        // Same accumulate structure as UMLAL.
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntCarry));
        let n_adds = r.ir_ops.iter().filter(|i| i.op == IrOp::IntAdd).count();
        assert!(n_adds >= 2, "SMLAL must emit ≥2 IntAdd; got {n_adds}");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn aarch64_umulh_emits_single_intmulthigh() {
        // UMULH X0, X1, X2  →  0x9BC2_7C20
        let r = lifter()
            .lift_insn(&0x9BC2_7C20u32.to_le_bytes(), 0x1000)
            .expect("UMULH decodes");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_MULT_HIGH),
            "UMULH must emit a MULT_HIGH Callother"
        );
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::IntMult),
            "AArch64 UMULH should not emit a low-half IntMult"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn aarch64_smulh_emits_signed_high() {
        // SMULH X0, X1, X2  →  0x9B42_7C20
        let r = lifter()
            .lift_insn(&0x9B42_7C20u32.to_le_bytes(), 0x1000)
            .expect("SMULH decodes");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs[0].offset == CALLOTHER_INT_SMULT_HIGH),
            "SMULH must emit a signed-MULT_HIGH Callother"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn try_aarch64_ccmp_recognizes_register_form() {
        // CCMP X0, X1, #4, EQ  →  0xFA41_0004
        let d = try_aarch64_ccmp(0xFA41_0004).expect("CCMP register form must decode");
        assert!(d.sf);
        assert!(!d.is_neg);
        assert_eq!(d.rn, 0);
        assert_eq!(d.rm_or_imm, 1);
        assert!(!d.is_imm);
        assert_eq!(d.nzcv, 4);
        assert_eq!(d.cond, 0);
    }

    #[test]
    fn try_aarch64_ccmn_recognizes_register_form() {
        // CCMN X0, X1, #4, EQ  →  0xBA41_0004 (op30=0 marks CCMN)
        let d = try_aarch64_ccmp(0xBA41_0004).expect("CCMN register form must decode");
        assert!(d.sf);
        assert!(d.is_neg, "CCMN must set is_neg");
        assert_eq!(d.rn, 0);
        assert_eq!(d.rm_or_imm, 1);
        assert!(!d.is_imm);
        assert_eq!(d.nzcv, 4);
        assert_eq!(d.cond, 0);
    }

    #[test]
    fn try_aarch64_ccmp_recognizes_immediate_form() {
        // CCMP X0, #5, #4, EQ  → register Rm slot becomes imm5, bit11=1.
        // Encoding: sf=1, op30=1, fixed=111010010, imm5=5, cond=0, bits10..11=10,
        //           bit4=0, Rn=0, nzcv=4
        // = 1111_1010_0100_0101_0000_1000_0000_0100 = 0xFA45_0804
        let d = try_aarch64_ccmp(0xFA45_0804).expect("CCMP imm form must decode");
        assert!(d.sf);
        assert!(!d.is_neg);
        assert_eq!(d.rm_or_imm, 5);
        assert!(d.is_imm, "imm-form must set is_imm");
        assert_eq!(d.cond, 0);
        assert_eq!(d.nzcv, 4);
    }

    #[test]
    fn try_aarch64_ccmp_rejects_non_ccmp() {
        // MOVZ X0, #5 → 0xD2800020
        assert!(try_aarch64_ccmp(0xD280_0020).is_none());
        // CSEL X0, X1, X2, EQ → 0x9A82_0020
        assert!(try_aarch64_ccmp(0x9A82_0020).is_none());
    }

    #[test]
    fn ccmp_lifts_to_callother() {
        // CCMP X0, X1, #4, EQ → 0xFA41_0004 (le bytes: 04 00 41 FA)
        let r = lifter()
            .lift_insn(&0xFA41_0004u32.to_le_bytes(), 0x1000)
            .expect("CCMP should decode");
        let call = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == CALLOTHER_AARCH64_CCMP)
            .expect("CCMP must lift to a Callother with the AARCH64_CCMP tag");
        // is_neg flag is the last input — must be 0 for CCMP.
        assert_eq!(call.inputs.last().expect("is_neg flag present").offset, 0);
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn ccmn_lifts_to_callother_with_is_neg() {
        // CCMN X0, X1, #4, EQ → 0xBA41_0004
        let r = lifter()
            .lift_insn(&0xBA41_0004u32.to_le_bytes(), 0x1000)
            .expect("CCMN should decode");
        let call = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == CALLOTHER_AARCH64_CCMP)
            .expect("CCMN must lift to a Callother with the AARCH64_CCMP tag");
        assert_eq!(
            call.inputs.last().expect("is_neg flag present").offset,
            1,
            "CCMN must set is_neg flag"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// t162 — CCMP must commit a real value to each of NF/ZF/CF/VF on the
    /// success branch (the architectural flag bytes are the IR's contract
    /// with downstream consumers like CSEL/CSET). We verify by looking for
    /// a Copy/BoolOr write into each of the four flag offsets.
    #[test]
    fn ccmp_writes_nzcv_flag_varnodes_on_success_branch() {
        use unlace_ir::SpaceId;
        // CCMP X0, X1, #4, EQ → 0xFA41_0004
        let r = lifter()
            .lift_insn(&0xFA41_0004u32.to_le_bytes(), 0x1000)
            .expect("CCMP should decode");

        // Every flag (NF=264, ZF=265, CF=266, VF=267) must appear as an
        // output of a register-space write somewhere in the lifted block.
        for (name, offset) in [("NF", 264u64), ("ZF", 265), ("CF", 266), ("VF", 267)] {
            let written = r.ir_ops.iter().any(|i| {
                i.output
                    .map(|o| o.space == SpaceId::Register && o.offset == offset && o.size == 1)
                    .unwrap_or(false)
            });
            assert!(written, "CCMP must write {name} (offset {offset})");
        }

        // The success branch should compute its flags from an IntSub of
        // the operands (CCMP semantics). Verify the IntSub is present.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntSub),
            "CCMP success branch must compute Rn - Rm for flag derivation",
        );

        // And the four `nzcv` literal bits must reach the IR as Const
        // varnodes (one per flag) — present in the blend chain.
        let const_inputs: Vec<u64> = r
            .ir_ops
            .iter()
            .flat_map(|i| i.inputs.iter())
            .filter(|v| v.space == SpaceId::Const && v.size == 1)
            .map(|v| v.offset)
            .collect();
        // #nzcv = 0b0100 → N=0, Z=1, C=0, V=0. The 1 must show up.
        assert!(
            const_inputs.iter().any(|c| *c == 1),
            "CCMP with #nzcv=4 must surface bit-2 (Z=1) as a 1-byte const, \
             got constants: {const_inputs:?}",
        );

        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// t162 — when the condition fails, the architectural flag varnodes
    /// must end up holding the literal #nzcv immediate bits. Using
    /// `#nzcv = 0b1111` (all set) lets us assert the fail-path delivers
    /// the all-ones constant into the flag blend at each bit.
    #[test]
    fn ccmp_propagates_nzcv_immediate_on_failure_branch() {
        use unlace_ir::SpaceId;
        // CCMP X0, X1, #0xF, EQ → encoding: same as 0xFA41_0004 but with
        // the nzcv field = 0xF instead of 0x4. Bits[3:0] = 0xF.
        // → 0xFA41_000F
        let r = lifter()
            .lift_insn(&0xFA41_000Fu32.to_le_bytes(), 0x1000)
            .expect("CCMP w/ nzcv=0xF should decode");

        // All four bits (N=1, Z=1, C=1, V=1) of the literal #nzcv=0b1111
        // must reach the IR as `Varnode::constant(1, 1)` — one per blend.
        let one_byte_const_count = r
            .ir_ops
            .iter()
            .flat_map(|i| i.inputs.iter())
            .filter(|v| v.space == SpaceId::Const && v.size == 1 && v.offset == 1)
            .count();
        assert!(
            one_byte_const_count >= 4,
            "CCMP fail-branch must surface four 1-byte `1` constants for \
             #nzcv=0xF, got {one_byte_const_count}",
        );

        // Each of NF/ZF/CF/VF must still be written.
        for (name, offset) in [("NF", 264u64), ("ZF", 265), ("CF", 266), ("VF", 267)] {
            let written = r.ir_ops.iter().any(|i| {
                i.output
                    .map(|o| o.space == SpaceId::Register && o.offset == offset)
                    .unwrap_or(false)
            });
            assert!(written, "CCMP fail-branch path must still write {name}");
        }

        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm_capstone_decodes_bl() {
        // BL #+0x100 from 0x1000  →  0xEB00003E (Capstone reports BL <target>).
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xEB00003Eu32.to_le_bytes(), 0x1000)
            .expect("BL decodes");
        assert_eq!(r.len, 4);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Call));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm32_mrs_cpsr_lifts_to_callother() {
        // MRS R0, CPSR  →  0xE10F0000
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE10F0000u32.to_le_bytes(), 0x1000)
            .expect("MRS decodes");
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("MRS emits Callother");
        assert_eq!(co.inputs[0].offset, 0x363);
        assert!(co.output.is_some(), "MRS has output register");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm32_msr_cpsr_rm_lifts_to_callother() {
        // MSR CPSR_c, R0  →  0xE129F000
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE129F000u32.to_le_bytes(), 0x1000)
            .expect("MSR decodes");
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("MSR emits Callother");
        assert_eq!(co.inputs[0].offset, 0x364);
        assert!(co.output.is_none(), "MSR writes a sysreg, not a varnode");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    // -------------------------------------------------------------------
    // t151: NZCV flag varnodes for ARM
    // -------------------------------------------------------------------

    fn writes_to(insn: &unlace_ir::IrInsn, vn: unlace_ir::Varnode) -> bool {
        insn.output == Some(vn)
    }

    #[test]
    fn cmp_emits_n_and_z_flag_writes() {
        // CMP R0, R1  →  0xE1500001 (already covered by arm_capstone_decodes_cmp;
        // here we additionally assert the t151 N/Z register writes).
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE150_0001u32.to_le_bytes(), 0x1000)
            .expect("CMP decodes");
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_N)),
            "CMP must emit a write to ARM_FLAG_N; got {:?}",
            r.ir_ops.iter().map(|i| (i.op, i.output)).collect::<Vec<_>>()
        );
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_Z)),
            "CMP must emit a write to ARM_FLAG_Z"
        );
    }

    #[test]
    fn subs_emits_n_and_z_flag_writes() {
        // SUBS R0, R1, R2  →  0xE0510002 (cond=AL, op=0010_0101_S=1, Rn=1,
        // Rd=0, operand2 = Rm=2 with no shift).
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE051_0002u32.to_le_bytes(), 0x1000)
            .expect("SUBS decodes");
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_N)),
            "SUBS must emit a write to ARM_FLAG_N"
        );
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_Z)),
            "SUBS must emit a write to ARM_FLAG_Z"
        );
    }

    // t160: ADDS/SUBS/CMP/CMN also emit C and V flag varnodes.

    #[test]
    fn cmp_emits_c_and_v_flag_writes() {
        // CMP R0, R1  →  0xE1500001. Expect C = !(R0 < R1) and
        // V = INT_SBORROW(R0, R1).
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE150_0001u32.to_le_bytes(), 0x1000)
            .expect("CMP decodes");
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_C)),
            "CMP must emit a write to ARM_FLAG_C"
        );
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSborrow && i.output == Some(ARM_FLAG_V)),
            "CMP must emit IntSborrow → ARM_FLAG_V; got {:?}",
            r.ir_ops.iter().map(|i| (i.op, i.output)).collect::<Vec<_>>()
        );
    }

    #[test]
    fn subs_emits_c_and_v_flag_writes() {
        // SUBS R0, R1, R2  →  0xE0510002.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE051_0002u32.to_le_bytes(), 0x1000)
            .expect("SUBS decodes");
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_C)),
            "SUBS must emit a write to ARM_FLAG_C"
        );
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntSborrow && i.output == Some(ARM_FLAG_V)),
            "SUBS must emit IntSborrow → ARM_FLAG_V"
        );
    }

    #[test]
    fn cmn_emits_c_and_v_flag_writes() {
        // CMN R0, R1  →  cond=AL(0xE), op=00010111, Rn=0, Rd=0(SBZ), Rm=1
        //   = 0xE1700001.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE170_0001u32.to_le_bytes(), 0x1000)
            .expect("CMN decodes");
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntCarry && i.output == Some(ARM_FLAG_C)),
            "CMN must emit IntCarry → ARM_FLAG_C"
        );
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntScarry && i.output == Some(ARM_FLAG_V)),
            "CMN must emit IntScarry → ARM_FLAG_V"
        );
    }

    #[test]
    fn adds_emits_c_and_v_flag_writes() {
        // ADDS R0, R1, R2  →  cond=AL, op=0000_1001(S=1), Rn=1, Rd=0, Rm=2
        //   = 0xE091_0002.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE091_0002u32.to_le_bytes(), 0x1000)
            .expect("ADDS decodes");
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_N)),
            "ADDS must emit ARM_FLAG_N"
        );
        assert!(
            r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_Z)),
            "ADDS must emit ARM_FLAG_Z"
        );
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntCarry && i.output == Some(ARM_FLAG_C)),
            "ADDS must emit IntCarry → ARM_FLAG_C"
        );
        assert!(
            r.ir_ops
                .iter()
                .any(|i| i.op == IrOp::IntScarry && i.output == Some(ARM_FLAG_V)),
            "ADDS must emit IntScarry → ARM_FLAG_V"
        );
    }

    #[test]
    fn add_without_s_does_not_emit_flags() {
        // ADD (no S) R0, R1, R2  →  0xE081_0002. No flag writes.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE081_0002u32.to_le_bytes(), 0x1000)
            .expect("ADD decodes");
        assert!(
            !r.ir_ops.iter().any(|i| writes_to(i, ARM_FLAG_N)
                || writes_to(i, ARM_FLAG_Z)
                || writes_to(i, ARM_FLAG_C)
                || writes_to(i, ARM_FLAG_V)),
            "non-S ADD must not touch NZCV; got {:?}",
            r.ir_ops.iter().map(|i| (i.op, i.output)).collect::<Vec<_>>()
        );
    }

    #[test]
    fn beq_consumes_z_flag() {
        // CMP r0, r1; BEQ #+0  → assert the cbranch predicate references
        // ARM_FLAG_Z (or a unique varnode produced from it), not Callother.
        let l = ArmLifter::new_arm32();
        let cmp = l
            .lift_insn(&0xE150_0001u32.to_le_bytes(), 0x1000)
            .expect("CMP decodes");
        let beq = l
            .lift_insn(&0x0AFF_FFFFu32.to_le_bytes(), 0x1004)
            .expect("BEQ decodes");
        let mut all = cmp.ir_ops;
        all.extend(beq.ir_ops);
        let cbr = all
            .iter()
            .find(|i| i.op == IrOp::Cbranch)
            .expect("BEQ emits Cbranch");
        // The predicate is input[1] (target is input[0]). For EQ, the
        // predicate IS the Z flag varnode directly.
        let pred = cbr.inputs.get(1).expect("Cbranch has predicate input");
        assert_eq!(*pred, ARM_FLAG_Z, "BEQ predicate must be ARM_FLAG_Z");
        assert!(
            !all.iter().any(|i| i.op == IrOp::Callother
                && i.inputs.first().map(|v| v.offset) == Some(0x360)),
            "BEQ must not fall back to Callother(0x360) predicate"
        );
    }

    #[test]
    fn bvs_falls_back_to_callother_for_now() {
        // BVS #+0  → cc=VS=6, still deferred. Encoding: cond=6, op=101,
        // offset=0xFFFFFE  →  0x6AFF_FFFE.
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0x6AFF_FFFEu32.to_le_bytes(), 0x1000)
            .expect("BVS decodes");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Callother
                && i.inputs.first().map(|v| v.offset) == Some(0x360)),
            "BVS still uses Callother(0x360) predicate (V deferred)"
        );
    }

    #[test]
    fn aarch64_mrs_lifts_to_callother() {
        // MRS X0, NZCV  →  0xD53B4200
        let r = lifter()
            .lift_insn(&0xD53B4200u32.to_le_bytes(), 0x1000)
            .expect("AArch64 MRS decodes");
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("MRS emits Callother");
        assert_eq!(co.inputs[0].offset, 0x363);
        assert!(co.output.is_some(), "MRS has output register");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }
}
