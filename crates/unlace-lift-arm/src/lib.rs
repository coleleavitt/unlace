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
        ArmLiftMode, ItState, LdmStmAddressing, decode_arm_ldm_stm, decode_it,
        decode_thumb1_ldm_stm, decode_thumb1_push_pop, expand_reg_list,
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
}
