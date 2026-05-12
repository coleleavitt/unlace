//! ARM / AArch64 → IR lifter (via capstone).

pub mod lift;
mod ops;
pub mod register_file;

pub use lift::ArmLifter;

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, IrOp, Lifter, SpaceId, Varnode};

    use crate::ArmLifter;
    use crate::lift::{
        ARM_FLAG_C, ARM_FLAG_N, ARM_FLAG_V, ARM_FLAG_Z, ArmLiftMode, CALLOTHER_AARCH64_CCMP,
        CALLOTHER_ARM_QADD, CALLOTHER_ARM_QSUB, CALLOTHER_ARM_RBIT, CALLOTHER_ARM_REV,
        CALLOTHER_ARM_REV16, CALLOTHER_ARM_SADD16, CALLOTHER_ARM_SSAT, CALLOTHER_ARM_SSUB16,
        CALLOTHER_ARM_UQADD16, CALLOTHER_ARM_UQADD8, CALLOTHER_ARM_USAT,
        CALLOTHER_INT_MULT_HIGH, CALLOTHER_INT_SMULT_HIGH, ItState, LdmStmAddressing,
        decode_arm_ldm_stm, decode_it, decode_thumb1_ldm_stm, decode_thumb1_push_pop,
        decode_thumb2_ldm_stm, expand_reg_list, try_aarch64_ccmp, try_aarch64_csel,
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

    // t222 (closes t127): each constructor reports its own ArchId, and
    // the 32-bit / 64-bit IDs are distinct.
    #[test]
    fn arch_id_aarch64_constructor() {
        assert_eq!(ArmLifter::new_aarch64().arch(), ArchId::AArch64);
    }

    #[test]
    fn arch_id_arm32_constructor() {
        assert_eq!(ArmLifter::new_arm32().arch(), ArchId::Arm);
    }

    #[test]
    fn arch_id_thumb_constructor() {
        assert_eq!(ArmLifter::new_thumb().arch(), ArchId::Arm);
    }

    #[test]
    fn arch_id_arm_vs_aarch64_distinct() {
        assert_ne!(
            ArmLifter::new_arm32().arch(),
            ArmLifter::new_aarch64().arch(),
        );
        assert_ne!(
            ArmLifter::new_thumb().arch(),
            ArmLifter::new_aarch64().arch(),
        );
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        assert!(!rf.registers.is_empty());
        // 31 Xn + SP + PC + NZCV + PSTATE_NZCV + 32 Zn + 16 Pn = 83
        assert_eq!(rf.registers.len(), 83);
        assert_eq!(rf.registers[0].name, "X0");
        assert_eq!(rf.registers[30].name, "X30");
        assert_eq!(rf.registers[31].name, "SP");
        assert_eq!(rf.registers[32].name, "PC");
        assert_eq!(rf.registers[33].name, "NZCV");
        // t170: unified packed-PSTATE NZCV varnode at a non-overlapping offset.
        assert_eq!(rf.registers[34].name, "PSTATE_NZCV");
        // t300: SVE registers
        assert_eq!(rf.registers[35].name, "Z0");
        assert_eq!(rf.registers[66].name, "Z31");
        assert_eq!(rf.registers[67].name, "P0");
        assert_eq!(rf.registers[82].name, "P15");
    }

    #[test]
    fn arm32_register_file_includes_vfp_registers() {
        let l = ArmLifter::new_arm32();
        let rf = l.register_file();
        assert_eq!(rf.registers[16].name, "APSR");
        assert_eq!(rf.registers[17].name, "FPSCR");
        assert_eq!(rf.registers[18].name, "S0");
        assert_eq!(rf.registers[49].name, "S31");
        assert_eq!(rf.registers[50].name, "D0");
        assert_eq!(rf.registers[81].name, "D31");
        assert_eq!(rf.registers[18].varnode.offset, rf.registers[50].varnode.offset);
        assert_eq!(rf.registers[50].varnode.size, 8);
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
    fn autia_xn_lifts_to_callother() {
        // t225 (closes t135 TODO) — AUTIA X0, X0  →  dac11000
        //
        // Register-form PAC/AUTI/XPAC instructions now lift to a dedicated
        // `Callother(PTR_AUTH)` intrinsic so a later pass can recognise
        // auth-and-branch idioms (e.g. PACMAN-style speculative gadgets).
        // Statically modelling the auth-or-fail outcome is still beyond
        // scope — Callother semantics deliberately leave the success bit
        // out so dataflow continues to flow through Xd.
        use crate::lift::CALLOTHER_AARCH64_AUTIA;
        let result = lifter()
            .lift_insn(&[0x00, 0x10, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.len, 4);
        assert_eq!(result.ir_ops.len(), 1, "AUTIA must emit one Callother");
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_AUTIA);
        assert_eq!(ir.inputs[0].space, SpaceId::Const);
        // value = X0 (offset 0), modifier = X0 (offset 0)
        assert_eq!(ir.inputs[1].space, SpaceId::Register);
        assert_eq!(ir.inputs[1].offset, 0);
        assert_eq!(ir.inputs[2].space, SpaceId::Register);
        assert_eq!(ir.inputs[2].offset, 0);
        // output = X0
        let out = ir.output.as_ref().expect("AUTIA must have output");
        assert_eq!(out.space, SpaceId::Register);
        assert_eq!(out.offset, 0);
    }

    #[test]
    fn pacia_lifts_to_callother() {
        // t225 — PACIA X0, X1  →  dac10020
        use crate::lift::CALLOTHER_AARCH64_PACIA;
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.ir_ops.len(), 1);
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_PACIA);
        // value = X0
        assert_eq!(ir.inputs[1].offset, 0);
        // modifier = X1 (offset 8)
        assert_eq!(ir.inputs[2].space, SpaceId::Register);
        assert_eq!(ir.inputs[2].offset, 8);
        assert_eq!(ir.output.as_ref().unwrap().offset, 0);
    }

    #[test]
    fn pacib_lifts_to_callother() {
        // t225 — PACIB X2, X3  →  dac10462
        use crate::lift::CALLOTHER_AARCH64_PACIB;
        let result = lifter()
            .lift_insn(&[0x62, 0x04, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.ir_ops.len(), 1);
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_PACIB);
        // value = X2 (offset 16)
        assert_eq!(ir.inputs[1].offset, 16);
        // modifier = X3 (offset 24)
        assert_eq!(ir.inputs[2].offset, 24);
        // output = X2
        assert_eq!(ir.output.as_ref().unwrap().offset, 16);
    }

    #[test]
    fn autib_lifts_to_callother() {
        // t225 — AUTIB X4, X5  →  dac114a4
        use crate::lift::CALLOTHER_AARCH64_AUTIB;
        let result = lifter()
            .lift_insn(&[0xa4, 0x14, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.ir_ops.len(), 1);
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_AUTIB);
        // value = X4 (offset 32), modifier = X5 (offset 40)
        assert_eq!(ir.inputs[1].offset, 32);
        assert_eq!(ir.inputs[2].offset, 40);
        assert_eq!(ir.output.as_ref().unwrap().offset, 32);
    }

    #[test]
    fn paciza_zero_modifier_lifts_to_callother() {
        // t225 — PACIZA X7  →  dac123e7   (opcode=0x08, Rn=0b11111)
        // Encoded as `1101_1010_1100_0001_0010_0011_1110_0111` = 0xDAC123E7.
        use crate::lift::CALLOTHER_AARCH64_PACIA;
        let result = lifter()
            .lift_insn(&[0xe7, 0x23, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.ir_ops.len(), 1);
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_PACIA);
        // value = X7 (offset 56), modifier = const 0
        assert_eq!(ir.inputs[1].offset, 56);
        assert_eq!(ir.inputs[2].space, SpaceId::Const);
        assert_eq!(ir.inputs[2].offset, 0);
    }

    #[test]
    fn xpaci_lifts_to_callother_no_modifier() {
        // t225 — XPACI X9  →  opcode=0x10, Rn=0b11111, Rd=9
        // `1101_1010_1100_0001_0100_0011_1110_1001` = 0xDAC143E9.
        use crate::lift::CALLOTHER_AARCH64_XPACI;
        let result = lifter()
            .lift_insn(&[0xe9, 0x43, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.ir_ops.len(), 1);
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_XPACI);
        // XPAC* has only (tag, value) — no modifier slot.
        assert_eq!(ir.inputs.len(), 2);
        // value = X9 (offset 72)
        assert_eq!(ir.inputs[1].offset, 72);
        // output = X9
        assert_eq!(ir.output.as_ref().unwrap().offset, 72);
    }

    #[test]
    fn xpacd_lifts_to_callother_no_modifier() {
        // t225 — XPACD X10  →  opcode=0x11, Rn=0b11111, Rd=10
        // `1101_1010_1100_0001_0100_0111_1110_1010` = 0xDAC147EA.
        use crate::lift::CALLOTHER_AARCH64_XPACD;
        let result = lifter()
            .lift_insn(&[0xea, 0x47, 0xc1, 0xda], 0x1000)
            .expect("should decode");
        assert_eq!(result.ir_ops.len(), 1);
        let ir = &result.ir_ops[0];
        assert_eq!(ir.op, IrOp::Callother);
        assert_eq!(ir.inputs[0].offset, CALLOTHER_AARCH64_XPACD);
        assert_eq!(ir.inputs.len(), 2);
        // value = X10 (offset 80)
        assert_eq!(ir.inputs[1].offset, 80);
        assert_eq!(ir.output.as_ref().unwrap().offset, 80);
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

    // ---------------------------------------------------------------
    // t182 — Capstone-sourced IT-block condition codes. The manual
    // `decode_it` still arms the state machine (so the lifter knows
    // we're inside an IT block), but the per-slot cc value comes from
    // Capstone's `arm_detail.cc` rather than from a re-decode of the
    // IT mask. Each test asserts the `guard` field stamped on every
    // emitted IR slot matches the expected ARM cond enum.
    // ---------------------------------------------------------------

    /// t182 — ITE EQ: two slots, conds = [EQ=0, NE=1]. Capstone marks
    /// the first conditional insn as `ARM_CC_EQ` and the second as
    /// `ARM_CC_NE`; the lifter must surface those exact values on the
    /// `guard` field of each emitted IR insn.
    #[test]
    fn t182_ite_eq_capstone_cc_marks_each_slot() {
        // ITE EQ → mask=0b1100, encoded as 0xBF0C
        let l = ArmLifter::new_thumb();
        let _ = l.lift_insn(&0xBF0Cu16.to_le_bytes(), 0x1000).expect("IT");

        // Slot 1 (T = EQ): MOVS r0, #1 → 0x2001
        let r1 = l
            .lift_insn(&0x2001u16.to_le_bytes(), 0x1002)
            .expect("MOVS slot 1");
        let copy1 = r1
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy in slot 1");
        assert_eq!(copy1.guard, Some(0), "slot 1 must be guarded EQ");

        // Slot 2 (E = NE): MOVS r0, #2 → 0x2002
        let r2 = l
            .lift_insn(&0x2002u16.to_le_bytes(), 0x1004)
            .expect("MOVS slot 2");
        let copy2 = r2
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy in slot 2");
        assert_eq!(copy2.guard, Some(1), "slot 2 must be guarded NE");

        // Block drained — subsequent insn is unguarded.
        let r3 = l
            .lift_insn(&0x3001u16.to_le_bytes(), 0x1006)
            .expect("ADDS");
        assert!(
            r3.ir_ops.iter().all(|i| i.guard.is_none()),
            "post-block insn must be unguarded",
        );
    }

    /// t182 — ITT EQ: two slots, conds = [EQ=0, EQ=0]. Both slots
    /// share `ARM_CC_EQ`; Capstone reports `EQ` for each and the
    /// lifter must stamp the same `Some(0)` on both.
    #[test]
    fn t182_itt_eq_capstone_cc_marks_each_slot() {
        // ITT EQ → mask=0b0100, encoded as 0xBF04
        let l = ArmLifter::new_thumb();
        let _ = l.lift_insn(&0xBF04u16.to_le_bytes(), 0x1000).expect("IT");

        let r1 = l
            .lift_insn(&0x2001u16.to_le_bytes(), 0x1002)
            .expect("MOVS slot 1");
        let copy1 = r1
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy in slot 1");
        assert_eq!(copy1.guard, Some(0));

        let r2 = l
            .lift_insn(&0x2002u16.to_le_bytes(), 0x1004)
            .expect("MOVS slot 2");
        let copy2 = r2
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy in slot 2");
        assert_eq!(copy2.guard, Some(0));
    }

    /// t182 — ITEE EQ: three slots, conds = [EQ=0, NE=1, NE=1]. The
    /// trailing two slots both invert the firstcond, so Capstone
    /// surfaces `ARM_CC_EQ`, `ARM_CC_NE`, `ARM_CC_NE`. Mirrors the
    /// ITEE source-level Go-style notation.
    #[test]
    fn t182_itee_eq_capstone_cc_marks_each_slot() {
        // ITEE EQ → mask=0b1110, encoded as 0xBF0E
        let l = ArmLifter::new_thumb();
        let _ = l.lift_insn(&0xBF0Eu16.to_le_bytes(), 0x1000).expect("IT");

        let mut guards = Vec::new();
        let mut pc = 0x1002u64;
        for imm in 1u16..=3 {
            // Thumb-1 MOVS r0, #imm encoding family: 0x2000 | imm.
            let bytes = (0x2000u16 | imm).to_le_bytes();
            let r = l.lift_insn(&bytes, pc).expect("MOVS lifts");
            let copy = r
                .ir_ops
                .iter()
                .find(|i| i.op == IrOp::Copy)
                .expect("Copy emitted");
            guards.push(copy.guard);
            pc += 2;
        }
        assert_eq!(
            guards,
            vec![Some(0), Some(1), Some(1)],
            "ITEE EQ slots must be [EQ, NE, NE]",
        );

        // Block drained — fourth insn falls outside the IT prefix.
        let post = l
            .lift_insn(&0x2004u16.to_le_bytes(), pc)
            .expect("post-block MOVS");
        let post_copy = post
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy)
            .expect("Copy after block");
        assert!(post_copy.guard.is_none(), "post-block insn unguarded");
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

    // -------------------------------------------------------------------
    // t170 — unified packed PSTATE NZCV varnode (offset 272, 4 bytes).
    // -------------------------------------------------------------------

    /// `ARM_NZCV` offset constant pinned for the assertions below — kept
    /// in lockstep with `register_file::ARM_NZCV`.
    const ARM_NZCV_OFFSET: u64 = 272;

    /// CCMP followed by CSEL: the CCMP block must commit a write to the
    /// unified `ARM_NZCV` varnode (offset 272, size 4), and a subsequent
    /// CSEL must consume one of the flag varnodes that CCMP wrote (NF or
    /// ZF) — i.e. both insns share the same flag-bearing storage region.
    #[test]
    fn ccmp_then_csel_share_nzcv_varnode() {
        use unlace_ir::SpaceId;

        // CCMP X0, X1, #4, EQ → 0xFA41_0004
        let ccmp = lifter()
            .lift_insn(&0xFA41_0004u32.to_le_bytes(), 0x1000)
            .expect("CCMP should decode");

        // CCMP must write the packed ARM_NZCV (size 4, offset 272).
        let writes_arm_nzcv = ccmp.ir_ops.iter().any(|i| {
            i.output
                .map(|o| {
                    o.space == SpaceId::Register
                        && o.offset == ARM_NZCV_OFFSET
                        && o.size == 4
                })
                .unwrap_or(false)
        });
        assert!(
            writes_arm_nzcv,
            "CCMP must commit a 4-byte write to ARM_NZCV (offset {ARM_NZCV_OFFSET})",
        );

        // CSEL X0, X1, X2, EQ → 0x9A82_0020
        let csel = lifter()
            .lift_insn(&0x9A82_0020u32.to_le_bytes(), 0x1004)
            .expect("CSEL should decode");

        // CSEL's condition build reads ZF (offset 265, size 1) — the same
        // flag-bearing storage that CCMP wrote via its blend chain.
        let reads_zf = csel.ir_ops.iter().any(|i| {
            i.inputs.iter().any(|v| {
                v.space == SpaceId::Register && v.offset == 265 && v.size == 1
            })
        });
        assert!(
            reads_zf,
            "CSEL .EQ must read ZF (offset 265) written by the preceding CCMP",
        );
        assert!(!ccmp.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(!csel.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// SUBS followed by B.EQ: SUBS must write `ARM_NZCV` (offset 272,
    /// size 4) and the B.EQ branch's condition must read ZF (offset 265)
    /// — i.e. the conditional branch consumes a flag that lives inside
    /// the NZCV storage region the SUBS just published.
    #[test]
    fn subs_then_bcc_reads_nzcv() {
        use unlace_ir::SpaceId;

        // SUBS X0, X1, X2 → 0xEB02_0020.
        let subs = lifter()
            .lift_insn(&0xEB02_0020u32.to_le_bytes(), 0x1000)
            .expect("SUBS should decode");

        // SUBS must commit a 4-byte write to ARM_NZCV.
        let writes_arm_nzcv = subs.ir_ops.iter().any(|i| {
            i.output
                .map(|o| {
                    o.space == SpaceId::Register
                        && o.offset == ARM_NZCV_OFFSET
                        && o.size == 4
                })
                .unwrap_or(false)
        });
        assert!(
            writes_arm_nzcv,
            "SUBS must commit a 4-byte write to ARM_NZCV (offset {ARM_NZCV_OFFSET})",
        );
        // ...and each per-flag byte (NF/ZF/CF/VF at 264..267) too.
        for (name, offset) in [("NF", 264u64), ("ZF", 265), ("CF", 266), ("VF", 267)] {
            assert!(
                subs.ir_ops.iter().any(|i| i
                    .output
                    .map(|o| o.space == SpaceId::Register && o.offset == offset && o.size == 1)
                    .unwrap_or(false)),
                "SUBS must still write per-flag byte {name} (offset {offset})",
            );
        }

        // B.EQ #+0x10 → 0x5400_0080. The lifter consumes ZF (offset 265).
        let beq = lifter()
            .lift_insn(&0x5400_0080u32.to_le_bytes(), 0x1004)
            .expect("B.EQ should decode");
        let reads_zf = beq.ir_ops.iter().any(|i| {
            i.inputs.iter().any(|v| {
                v.space == SpaceId::Register && v.offset == 265 && v.size == 1
            })
        });
        assert!(
            reads_zf,
            "B.EQ must read ZF (offset 265) inside the NZCV region SUBS wrote",
        );
        assert!(beq.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
        assert!(!subs.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(!beq.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
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

    // -------------------------------------------------------------------
    // t166 — ARM32 Capstone opcode expansion
    // -------------------------------------------------------------------

    /// Shifted-register data-processing: `ADD R0, R1, R2, LSL #4` must
    /// surface as `IntAdd(R1, IntLeft(R2, #4))`. We verify (a) the dispatch
    /// produces an IntAdd, (b) a prior IntLeft sits between R2 and that add,
    /// and (c) no Unimplemented falls through.
    #[test]
    fn arm32_add_reg_shifted_by_imm_lifts_with_shift() {
        // ADD R0, R1, R2, LSL #4  →  0xE0810202
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE081_0202u32.to_le_bytes(), 0x1000)
            .expect("ADD reg-shift-imm decodes");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        // Pre-shift: IntLeft on R2 with constant 4.
        let pre_shift = r
            .ir_ops
            .iter()
            .find(|i| {
                i.op == IrOp::IntLeft
                    && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 4)
            })
            .expect("ADD with LSL #4 must emit a pre-shift IntLeft on the rhs");
        let add = r.ir_ops.iter().find(|i| i.op == IrOp::IntAdd).expect("IntAdd present");
        // The IntAdd should consume the unique varnode produced by the shift.
        assert!(
            add.inputs.iter().any(|v| Some(*v) == pre_shift.output),
            "IntAdd must consume the pre-shifted varnode"
        );
    }

    /// Reg-shifted-by-reg form: `EOR R0, R1, R2, LSL R3`. The shift amount
    /// is a GPR (R3), so the emitted IntLeft consumes the R3 varnode rather
    /// than a constant.
    #[test]
    fn arm32_eor_reg_shifted_by_reg_lifts_with_shift() {
        // EOR R0, R1, R2, LSL R3  →  cond=E, 0010_0010 EOR, S=0, Rn=1, Rd=0,
        // operand2 reg-shift-reg = Rs=3:0:sh=00:1:Rm=2 = 0x312
        //  →  1110_0000_0010_0001_0000_0011_0001_0010 = 0xE0210312
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE021_0312u32.to_le_bytes(), 0x1000)
            .expect("EOR reg-shift-reg decodes");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntLeft),
            "EOR R..., LSL R3 must emit an IntLeft for the shifter"
        );
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    /// BL writes the return address (insn_addr + 4) into LR (R14) before
    /// emitting the `Call`. R14 lives at register offset 14*4 = 56.
    #[test]
    fn arm32_bl_writes_return_address_to_lr() {
        // BL #+0x100 from 0x1000  →  0xEB00003E
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xEB00_003Eu32.to_le_bytes(), 0x1000)
            .expect("BL decodes");
        let lr_pos = r
            .ir_ops
            .iter()
            .position(|i| {
                i.op == IrOp::Copy
                    && i.output
                        .map(|v| v.offset == 14 * 4 && v.space != SpaceId::Const)
                        .unwrap_or(false)
            })
            .expect("BL must emit a Copy writing LR");
        let lr_write = &r.ir_ops[lr_pos];
        let val = lr_write.inputs.first().expect("Copy has source");
        assert!(val.space == SpaceId::Const, "LR write should source a constant");
        assert_eq!(val.offset, 0x1004, "LR must hold insn_addr + 4");
        // The Call must follow the LR write.
        let call_pos = r
            .ir_ops
            .iter()
            .position(|i| i.op == IrOp::Call)
            .expect("BL emits Call");
        assert!(lr_pos < call_pos, "LR write must precede the Call");
    }

    /// MOVW writes a 16-bit immediate into the low half of Rd. Unlike MOVT
    /// it does not need to preserve the high half (the architectural form
    /// zeroes it), so the MVP just routes it through the same Copy path as
    /// plain MOV. We assert the Copy reaches Rd with the right immediate.
    #[test]
    fn arm32_movw_writes_low_half_immediate() {
        // MOVW R0, #0x1234  →  0xE3010234
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE301_0234u32.to_le_bytes(), 0x1000)
            .expect("MOVW decodes");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        let copy = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Copy && i.output.map(|v| v.offset == 0).unwrap_or(false))
            .expect("MOVW must Copy into R0");
        assert_eq!(
            copy.inputs[0].offset, 0x1234,
            "MOVW immediate must be the low 16 bits"
        );
    }

    /// MOVT preserves the low 16 bits of Rd and writes `imm << 16` into
    /// the high half. Lowering: `Rd = (Rd & 0xFFFF) | (imm << 16)`. We
    /// verify the mask-and-merge sequence is present.
    #[test]
    fn arm32_movt_preserves_low_half_and_writes_high() {
        // MOVT R0, #0x1234  →  0xE3410234
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE341_0234u32.to_le_bytes(), 0x1000)
            .expect("MOVT decodes");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        // Must mask Rd with 0xFFFF (preserving the low half).
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntAnd
                && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 0xFFFF)),
            "MOVT must mask Rd by 0xFFFF to preserve the low half"
        );
        // Must shift the immediate left by 16.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntLeft
                && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 16)),
            "MOVT must shift the immediate left by 16"
        );
        // Final merge: IntOr into R0.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntOr
                && i.output.map(|v| v.offset == 0).unwrap_or(false)),
            "MOVT must finish with IntOr into R0"
        );
    }

    /// LDREX/STREX should lower to the Callother atomic intrinsics so
    /// downstream analyses can recognise lock semantics. We exercise both
    /// directions in one test (single insn per family is sufficient — the
    /// emitters are tag-only).
    #[test]
    fn arm32_ldrex_strex_lift_to_callother_atomics() {
        let l = ArmLifter::new_arm32();
        // LDREX R0, [R1]  →  0xE1910F9F
        let r = l
            .lift_insn(&0xE191_0F9Fu32.to_le_bytes(), 0x1000)
            .expect("LDREX decodes");
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("LDREX emits Callother");
        assert_eq!(co.inputs[0].offset, 0x352, "LDREX tag");
        assert!(co.output.is_some(), "LDREX writes a destination");

        // STREX R0, R2, [R1]  →  0xE1810F92
        let r = l
            .lift_insn(&0xE181_0F92u32.to_le_bytes(), 0x1000)
            .expect("STREX decodes");
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .expect("STREX emits Callother");
        assert_eq!(co.inputs[0].offset, 0x353, "STREX tag");
        assert!(co.output.is_some(), "STREX writes the success status");
    }

    /// BFI Rd, Rn, #lsb, #width — bitfield insert. Must mask Rd to drop
    /// the destination field, mask Rn to width, shift it into place, and
    /// OR the two halves together.
    #[test]
    fn arm32_bfi_inserts_bitfield() {
        // BFI R0, R1, #4, #8  →  0xE7CB0211 (msb = lsb+width-1 = 11)
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE7CB_0211u32.to_le_bytes(), 0x1000)
            .expect("BFI decodes");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        // width=8 mask = 0xFF
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntAnd
                && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 0xFF)),
            "BFI must mask the source by ((1<<width)-1)"
        );
        // field_mask = 0xFF << 4 = 0xFF0; inverse mask = !0xFF0 = 0xFFFFF00F
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntAnd
                && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 0xFFFF_F00F)),
            "BFI must mask Rd by the inverse field-mask"
        );
        // Final merge into R0.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntOr
                && i.output.map(|v| v.offset == 0).unwrap_or(false)),
            "BFI must finish with IntOr into Rd"
        );
    }

    /// UBFX Rd, Rn, #lsb, #width — unsigned bitfield extract.
    /// Lowering: `Rd = (Rn >> lsb) & ((1 << width) - 1)`.
    #[test]
    fn arm32_ubfx_extracts_unsigned_bitfield() {
        // UBFX R0, R1, #4, #8  →  0xE7E70251 (widthm1 = 7)
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&0xE7E7_0251u32.to_le_bytes(), 0x1000)
            .expect("UBFX decodes");
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        // Right-shift by lsb=4.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntRight
                && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 4)),
            "UBFX must right-shift Rn by lsb"
        );
        // Mask by 0xFF (width=8).
        let mask_op = r
            .ir_ops
            .iter()
            .find(|i| {
                i.op == IrOp::IntAnd
                    && i.inputs.iter().any(|v| v.space == SpaceId::Const && v.offset == 0xFF)
            })
            .expect("UBFX must mask by ((1<<width)-1)");
        assert_eq!(mask_op.output.map(|v| v.offset), Some(0), "result lands in R0");
        // Must NOT emit a sign-extending IntSright (that's SBFX's path).
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::IntSright),
            "UBFX is unsigned — no IntSright"
        );
    }

    /// REV/REV16/RBIT each route through a Callother intrinsic so a
    /// downstream pass can recognise the byte/bit-reverse pattern without
    /// having to undo a byte-extract chain. We sanity-check all three
    /// tags in one test.
    #[test]
    fn arm32_rev_family_lifts_to_callother_tags() {
        let l = ArmLifter::new_arm32();
        let cases: &[(u32, u64)] = &[
            (0xE6BF_0F31, CALLOTHER_ARM_REV),   // REV   R0, R1
            (0xE6BF_0FB1, CALLOTHER_ARM_REV16), // REV16 R0, R1
            (0xE6FF_0F31, CALLOTHER_ARM_RBIT),  // RBIT  R0, R1
        ];
        for (enc, expected_tag) in cases {
            let r = l
                .lift_insn(&enc.to_le_bytes(), 0x1000)
                .unwrap_or_else(|e| panic!("encoding {enc:#x} should decode: {e:?}"));
            assert!(
                !r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
                "encoding {enc:#x} should not fall through to Unimplemented"
            );
            let co = r
                .ir_ops
                .iter()
                .find(|i| i.op == IrOp::Callother)
                .unwrap_or_else(|| panic!("encoding {enc:#x} must emit Callother"));
            assert_eq!(
                co.inputs[0].offset, *expected_tag,
                "encoding {enc:#x} must use tag {expected_tag:#x}"
            );
            assert!(co.output.is_some(), "byte-reverse writes a destination");
        }
    }

    // --- t172: Thumb-2 (T32 32-bit encoding) opcode expansion ---
    //
    // Most of these share Capstone insn ids with their A32 counterparts;
    // the tests verify the *Thumb* lifter path produces equivalent IR when
    // fed the wide 32-bit Thumb-2 byte encodings (little-endian per
    // halfword). ORN is the only opcode that genuinely needed a new
    // dispatch arm — it has no A32 form.

    /// MOVW.W Rd, #imm16 — Thumb-2 wide form. Same `ARM_INS_MOVW` id as
    /// A32, so the existing copy emitter handles it; the test asserts the
    /// Thumb dispatch path actually reaches Capstone (i.e. the prefilter
    /// doesn't accidentally eat the encoding).
    #[test]
    fn thumb2_movw_wide_lifts_to_copy() {
        // MOVW R0, #0x1234  →  f241 2034  (halfword-LE bytes)
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0x41, 0xf2, 0x34, 0x20], 0x1000)
            .expect("MOVW.W decodes");
        assert_eq!(r.len, 4, "MOVW.W is a 32-bit Thumb-2 encoding");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Copy),
            "MOVW.W must lower to a Copy"
        );
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
            "MOVW.W must not fall through to Unimplemented"
        );
    }

    /// MOVT.W Rd, #imm16 — sets high half of Rd. Reuses the A32 emitter
    /// (mask low, shift imm, OR), which we assert by structure.
    #[test]
    fn thumb2_movt_wide_preserves_low_half() {
        // MOVT R0, #0xABCD  →  f6ca 30cd
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0xca, 0xf6, 0xcd, 0x30], 0x1000)
            .expect("MOVT.W decodes");
        assert_eq!(r.len, 4);
        let and_mask = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntAnd)
            .expect("MOVT.W must mask Rd by 0xFFFF");
        assert_eq!(and_mask.inputs[1].offset, 0xFFFF);
        let shift = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntLeft)
            .expect("MOVT.W must shift the immediate left");
        assert_eq!(shift.inputs[1].offset, 16, "MOVT shift count is 16");
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntOr),
            "MOVT.W must finish with IntOr"
        );
    }

    /// MLA Rd, Rn, Rm, Ra — Thumb-2 multiply-accumulate. Emits IntMult
    /// (Rn*Rm) followed by IntAdd (Ra + product).
    #[test]
    fn thumb2_mla_lifts_to_mult_then_add() {
        // MLA R0, R1, R2, R3  →  fb01 3002
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0x01, 0xfb, 0x02, 0x30], 0x1000)
            .expect("MLA.W decodes");
        assert_eq!(r.len, 4);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// MLS Rd, Rn, Rm, Ra — Thumb-2 multiply-subtract. Same shape as MLA
    /// but the accumulate becomes IntSub.
    #[test]
    fn thumb2_mls_lifts_to_mult_then_sub() {
        // MLS R0, R1, R2, R3  →  fb01 3012
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0x01, 0xfb, 0x12, 0x30], 0x1000)
            .expect("MLS.W decodes");
        assert_eq!(r.len, 4);
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::IntMult));
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntSub),
            "MLS uses IntSub for Ra - product"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// SDIV — Thumb-2 (T32) signed-divide. Lifts to IntSdiv. Different
    /// encoding from A32 but Capstone collapses both to ARM_INS_SDIV.
    #[test]
    fn thumb2_sdiv_lifts_to_int_sdiv() {
        // SDIV R0, R1, R2  →  fb91 f0f2
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0x91, 0xfb, 0xf2, 0xf0], 0x1000)
            .expect("SDIV.T32 decodes");
        assert_eq!(r.len, 4);
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntSdiv),
            "SDIV must lift to IntSdiv (signed)"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::IntDiv));
    }

    /// UDIV — Thumb-2 (T32) unsigned-divide. Lifts to IntDiv.
    #[test]
    fn thumb2_udiv_lifts_to_int_div() {
        // UDIV R0, R1, R2  →  fbb1 f0f2
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0xb1, 0xfb, 0xf2, 0xf0], 0x1000)
            .expect("UDIV.T32 decodes");
        assert_eq!(r.len, 4);
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntDiv),
            "UDIV must lift to IntDiv (unsigned)"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::IntSdiv));
    }

    /// ORN.W Rd, Rn, Rm — Thumb-2-only OR-Not. New dispatch arm; lowers
    /// to IntNegate followed by IntOr (dual of BIC).
    #[test]
    fn thumb2_orn_lifts_to_negate_then_or() {
        // ORN R0, R1, R2  →  ea61 0002
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0x61, 0xea, 0x02, 0x00], 0x1000)
            .expect("ORN.W decodes");
        assert_eq!(r.len, 4);
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntNegate),
            "ORN must complement its second operand"
        );
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::IntOr),
            "ORN must combine with IntOr (not IntAnd — that would be BIC)"
        );
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::IntAnd),
            "ORN must NOT emit IntAnd (BIC's signature)"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// RSB.W Rd, Rn, #imm — Thumb-2 wide reverse-subtract. Shares the
    /// A32 `emit_arm32_binop_rev` emitter, which swaps operand order so
    /// the IntSub computes `imm - Rn` (not `Rn - imm`).
    #[test]
    fn thumb2_rsb_wide_lifts_to_reversed_int_sub() {
        // RSB.W R0, R1, #5  →  f1c1 0005
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0xc1, 0xf1, 0x05, 0x00], 0x1000)
            .expect("RSB.W decodes");
        assert_eq!(r.len, 4);
        let sub = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntSub)
            .expect("RSB.W must emit IntSub");
        // emit_arm32_binop_rev swaps operands: input[0] is the rhs (imm),
        // input[1] is the lhs (Rn). Asserting input[0] is the constant
        // pins down the reversal.
        assert_eq!(
            sub.inputs[0].space,
            SpaceId::Const,
            "RSB.W reverses operands so the immediate is the minuend"
        );
        assert_eq!(sub.inputs[0].offset, 5);
    }

    /// BLX (immediate, T32 4-byte form) — branch with link and exchange.
    /// Capstone reports ARM_INS_BLX, same as A32; the existing call
    /// emitter writes LR and emits a Call.
    #[test]
    fn thumb2_blx_immediate_emits_call_and_writes_lr() {
        // BLX <next>  →  f7ff effe  (offset-0 self-anchored encoding)
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0xff, 0xf7, 0xfe, 0xef], 0x1000)
            .expect("BLX-imm.T32 decodes");
        assert_eq!(r.len, 4);
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Call),
            "BLX must emit a Call op"
        );
        // BL/BLX writes the return address into LR via a Copy.
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Copy),
            "BLX must write the return address into LR"
        );
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    /// TBB [Rn, Rm] — Thumb-2 table-branch byte. Verifies the dispatch
    /// reaches `emit_arm32_tbb` from the Thumb path, not just A32.
    #[test]
    fn thumb2_tbb_dispatches_via_thumb_path() {
        // TBB [R0, R1]  →  e8d0 f001
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0xd0, 0xe8, 0x01, 0xf0], 0x1000)
            .expect("TBB.T32 decodes");
        assert_eq!(r.len, 4);
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
            "TBB must not be Unimplemented in the Thumb path"
        );
        // emit_arm32_tbb produces a Branchind (computed indirect branch).
        assert!(
            r.ir_ops.iter().any(|i| i.op == IrOp::Branchind),
            "TBB lowers to a Branchind"
        );
    }

    /// TBH [Rn, Rm, LSL #1] — Thumb-2 table-branch halfword. Same emitter
    /// as TBB; this test just nails down that both insn ids reach it.
    #[test]
    fn thumb2_tbh_dispatches_via_thumb_path() {
        // TBH [R0, R1, LSL #1]  →  e8d0 f011
        let l = ArmLifter::new_thumb();
        let r = l
            .lift_insn(&[0xd0, 0xe8, 0x11, 0xf0], 0x1000)
            .expect("TBH.T32 decodes");
        assert_eq!(r.len, 4);
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Branchind));
    }

    // --- t178: Thumb-2 (T32 32-bit) LDM/STM register-list encodings ---
    //
    // Mirrors t111 (A32 LDM/STM via `decode_arm_ldm_stm`) and the
    // Thumb-1 narrow forms (`decode_thumb1_ldm_stm` /
    // `decode_thumb1_push_pop`). All four addressing modes share one
    // 32-bit encoding class, distinguished by P/U bits, and lower
    // through the common `emit_ldm_stm`. Each test covers a distinct
    // addressing-mode × load/store combination and validates both
    // the byte-level decoder and the full lifter pipeline.

    /// LDMIA.W rN!, {regs} — increment-after with writeback. Loads each
    /// register, then bumps Rn by `4 * count`.
    #[test]
    fn thumb2_ldmia_w_decodes_and_lifts() {
        // ldmia.w r0!, {r1, r2, r3}  →  e8b0 000e
        // hw1 fields: P=0, U=1, W=1, L=1, Rn=0 — `LDMIA r0!, {r1..r3}`.
        let (addr, rn, list, w, l) =
            decode_thumb2_ldm_stm(0xE8B0, 0x000E).expect("T2 LDMIA.W decodes");
        assert_eq!(addr, LdmStmAddressing::Ia);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x000E);
        assert!(w, "LDMIA.W with `!` must report writeback");
        assert!(l, "L bit must be set for LDM");

        // End-to-end through the Thumb lifter.
        let l_ift = ArmLifter::new_thumb();
        // Byte stream (LE per halfword): hw1=e8b0 → b0 e8 ; hw2=000e → 0e 00.
        let r = l_ift
            .lift_insn(&[0xB0, 0xE8, 0x0E, 0x00], 0x1000)
            .expect("LDMIA.W full pipeline");
        assert_eq!(r.len, 4, "T2 LDM is a 32-bit encoding");
        let loads = r.ir_ops.iter().filter(|i| i.op == IrOp::Load).count();
        assert_eq!(loads, 3, "LDMIA.W {{r1,r2,r3}} must emit 3 Loads");
        // Writeback => one IntAdd updating Rn (delta = +12).
        let wb = r
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntAdd)
            .find(|i| i.inputs.iter().any(|v| v.offset == 12));
        assert!(
            wb.is_some(),
            "writeback after 3-reg IA must IntAdd Rn by 12"
        );
    }

    /// LDMDB.W rN!, {regs} — decrement-before with writeback. The base
    /// is implicitly biased by `-4 * count` before each load, then Rn is
    /// decremented by the same amount.
    #[test]
    fn thumb2_ldmdb_w_decodes_and_lifts() {
        // ldmdb.w r0!, {r1, r2, r3}  →  e930 000e
        let (addr, rn, list, w, l) =
            decode_thumb2_ldm_stm(0xE930, 0x000E).expect("T2 LDMDB.W decodes");
        assert_eq!(addr, LdmStmAddressing::Db);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x000E);
        assert!(w);
        assert!(l);

        let l_ift = ArmLifter::new_thumb();
        let r = l_ift
            .lift_insn(&[0x30, 0xE9, 0x0E, 0x00], 0x1000)
            .expect("LDMDB.W full pipeline");
        assert_eq!(r.len, 4);
        let loads = r.ir_ops.iter().filter(|i| i.op == IrOp::Load).count();
        assert_eq!(loads, 3, "LDMDB.W must still emit 3 Loads");
        // Writeback for DB is `Rn -= 4 * count` — i.e. an IntAdd with a
        // negative-valued constant. For 3 regs that's -12, which in
        // two's complement (u64) is 0xFFFFFFFFFFFFFFF4.
        let wb = r
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntAdd)
            .find(|i| i.inputs.iter().any(|v| v.offset == (-12i64) as u64));
        assert!(
            wb.is_some(),
            "writeback after 3-reg DB must IntAdd Rn by -12"
        );
    }

    /// STMIA.W rN!, {regs} — increment-after with writeback. Stores each
    /// register, then bumps Rn forward.
    #[test]
    fn thumb2_stmia_w_decodes_and_lifts() {
        // stmia.w r0!, {r4, r5, r6, r7}  →  e8a0 00f0
        let (addr, rn, list, w, l) =
            decode_thumb2_ldm_stm(0xE8A0, 0x00F0).expect("T2 STMIA.W decodes");
        assert_eq!(addr, LdmStmAddressing::Ia);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x00F0);
        assert!(w);
        assert!(!l, "STM must report L=0");

        let l_ift = ArmLifter::new_thumb();
        let r = l_ift
            .lift_insn(&[0xA0, 0xE8, 0xF0, 0x00], 0x1000)
            .expect("STMIA.W full pipeline");
        assert_eq!(r.len, 4);
        let stores = r.ir_ops.iter().filter(|i| i.op == IrOp::Store).count();
        assert_eq!(stores, 4, "STMIA.W {{r4..r7}} must emit 4 Stores");
        assert_eq!(
            r.ir_ops.iter().filter(|i| i.op == IrOp::Load).count(),
            0,
            "STM must not emit any Loads"
        );
    }

    /// STMDB.W rN!, {regs} — decrement-before with writeback. The PUSH.W
    /// idiom (Rn=SP) is exactly this encoding; we exercise it with a
    /// non-SP base to keep the test orthogonal to push/pop coverage.
    #[test]
    fn thumb2_stmdb_w_decodes_and_lifts() {
        // stmdb.w r0!, {r4, r5, r6, r7}  →  e920 00f0
        let (addr, rn, list, w, l) =
            decode_thumb2_ldm_stm(0xE920, 0x00F0).expect("T2 STMDB.W decodes");
        assert_eq!(addr, LdmStmAddressing::Db);
        assert_eq!(rn, 0);
        assert_eq!(list, 0x00F0);
        assert!(w);
        assert!(!l);

        let l_ift = ArmLifter::new_thumb();
        let r = l_ift
            .lift_insn(&[0x20, 0xE9, 0xF0, 0x00], 0x1000)
            .expect("STMDB.W full pipeline");
        assert_eq!(r.len, 4);
        let stores = r.ir_ops.iter().filter(|i| i.op == IrOp::Store).count();
        assert_eq!(stores, 4);
        let wb = r
            .ir_ops
            .iter()
            .filter(|i| i.op == IrOp::IntAdd)
            .find(|i| i.inputs.iter().any(|v| v.offset == (-16i64) as u64));
        assert!(
            wb.is_some(),
            "writeback after 4-reg DB must IntAdd Rn by -16"
        );
    }

    /// Sanity-check the reserved P==U combination is rejected (it would
    /// alias RFE/SRS encodings, not LDM/STM).
    #[test]
    fn thumb2_ldm_stm_rejects_reserved_pu_combination() {
        // P=0, U=0 (hw1 bits[8:7] = 00) — reserved class.
        assert!(decode_thumb2_ldm_stm(0xE810, 0x000E).is_none());
        // P=1, U=1 (hw1 bits[8:7] = 11) — also reserved here.
        assert!(decode_thumb2_ldm_stm(0xE990, 0x000E).is_none());
    }

    // ── t186 — AArch64 NEON LDn/STn register-list lifters ─────────────
    //
    // Each test feeds a real assembled instruction (verified with
    // `llvm-mc --arch=aarch64`) and asserts:
    //   1. exactly one Callother appears,
    //   2. its tag matches the expected `CALLOTHER_AARCH64_*` constant,
    //   3. the lane-size byte matches the arrangement specifier
    //      (.16b → 1, .8h → 2, .4s → 4, .2d → 8), and
    //   4. the number of vreg-index inputs matches the register-list
    //      length (LD1=1, LD2=2, LD3=3, LD4=4).

    use crate::lift::{
        CALLOTHER_AARCH64_LD1, CALLOTHER_AARCH64_LD2, CALLOTHER_AARCH64_LD3, CALLOTHER_AARCH64_LD4,
        CALLOTHER_AARCH64_ST1, CALLOTHER_AARCH64_ST2, CALLOTHER_AARCH64_ST3, CALLOTHER_AARCH64_ST4,
        CALLOTHER_NEON_ADD, CALLOTHER_NEON_FADD, CALLOTHER_NEON_FMUL, CALLOTHER_NEON_FSUB,
        CALLOTHER_NEON_MUL, CALLOTHER_NEON_SUB,
    };

    /// Walk the lifter output, expecting exactly one Callother with the
    /// given tag. Returns its inputs so callers can assert payload
    /// details (lane size, register-list length).
    fn assert_neon_callother(
        bytes: &[u8],
        expected_tag: u64,
        expected_lane: u8,
        expected_regs: usize,
    ) {
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("NEON instruction should decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == expected_tag)
            .unwrap_or_else(|| {
                panic!(
                    "expected Callother(tag={expected_tag:#x}) — got {:?}",
                    result.ir_ops
                )
            });
        assert!(
            co.output.is_none(),
            "NEON LDn/STn Callother carries dest registers in inputs, no IR output"
        );
        assert_eq!(
            co.inputs[1].offset, expected_lane as u64,
            "lane size byte should be {expected_lane}"
        );
        // Inputs are `(tag, lane, addr, vreg0, vreg1, ...)`.
        let reg_count = co.inputs.len().saturating_sub(3);
        assert_eq!(
            reg_count, expected_regs,
            "expected {expected_regs} register-list entries"
        );
    }

    #[test]
    fn test_aarch64_ld1_v0_16b_t186() {
        // ld1 {v0.16b}, [x0]  →  4c407000  →  00 70 40 4c
        assert_neon_callother(&[0x00, 0x70, 0x40, 0x4c], CALLOTHER_AARCH64_LD1, 1, 1);
    }

    #[test]
    fn test_aarch64_ld1_v0_8h_t186() {
        // ld1 {v0.8h}, [x1]   →  4c407420  →  20 74 40 4c
        assert_neon_callother(&[0x20, 0x74, 0x40, 0x4c], CALLOTHER_AARCH64_LD1, 2, 1);
    }

    #[test]
    fn test_aarch64_ld2_v0_v1_16b_t186() {
        // ld2 {v0.16b, v1.16b}, [x0]  →  4c408000  →  00 80 40 4c
        assert_neon_callother(&[0x00, 0x80, 0x40, 0x4c], CALLOTHER_AARCH64_LD2, 1, 2);
    }

    #[test]
    fn test_aarch64_ld3_v0_v2_4s_t186() {
        // ld3 {v0.4s, v1.4s, v2.4s}, [x0]  →  4c404800  →  00 48 40 4c
        assert_neon_callother(&[0x00, 0x48, 0x40, 0x4c], CALLOTHER_AARCH64_LD3, 4, 3);
    }

    #[test]
    fn test_aarch64_ld4_v0_v3_2d_t186() {
        // ld4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x5]  →  4c400ca0  →  a0 0c 40 4c
        assert_neon_callother(&[0xa0, 0x0c, 0x40, 0x4c], CALLOTHER_AARCH64_LD4, 8, 4);
    }

    #[test]
    fn test_aarch64_st1_v0_16b_t186() {
        // st1 {v0.16b}, [x0]  →  4c007000  →  00 70 00 4c
        assert_neon_callother(&[0x00, 0x70, 0x00, 0x4c], CALLOTHER_AARCH64_ST1, 1, 1);
    }

    #[test]
    fn test_aarch64_st2_v0_v1_16b_t186() {
        // st2 {v0.16b, v1.16b}, [x0]  →  4c008000  →  00 80 00 4c
        assert_neon_callother(&[0x00, 0x80, 0x00, 0x4c], CALLOTHER_AARCH64_ST2, 1, 2);
    }

    #[test]
    fn test_aarch64_st3_v0_v2_4s_t186() {
        // st3 {v0.4s, v1.4s, v2.4s}, [x0]  →  4c004800  →  00 48 00 4c
        assert_neon_callother(&[0x00, 0x48, 0x00, 0x4c], CALLOTHER_AARCH64_ST3, 4, 3);
    }

    #[test]
    fn test_aarch64_st4_v0_v3_2d_t186() {
        // st4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x5]  →  4c000ca0  →  a0 0c 00 4c
        assert_neon_callother(&[0xa0, 0x0c, 0x00, 0x4c], CALLOTHER_AARCH64_ST4, 8, 4);
    }

    // ── t197: AArch64 NEON SIMD arithmetic (ADD/SUB/MUL + FADD/FSUB/FMUL) ──
    //
    // Vector-form ADD/SUB/MUL route through `emit_aarch64_neon_arith`
    // (one Callother carrying tag + lane-size + the three register indices).
    // Scalar GP-register forms keep the existing arithmetic lifter — verified
    // by the negative test below. Encodings via `llvm-mc -triple=aarch64`.

    /// Find the unique Callother with `expected_tag` and assert the lane
    /// size in input[1] matches. Returns the Callother for further
    /// assertions if needed.
    fn assert_neon_arith(bytes: &[u8], expected_tag: u64, expected_lane: u8) {
        let result = lifter()
            .lift_insn(bytes, 0x1000)
            .expect("NEON arithmetic should decode");
        let co = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother && i.inputs[0].offset == expected_tag)
            .unwrap_or_else(|| {
                panic!(
                    "expected Callother(tag={expected_tag:#x}) — got {:?}",
                    result.ir_ops
                )
            });
        assert_eq!(co.inputs[1].offset, expected_lane as u64);
        // Inputs are (tag, lane, vd, vn, vm).
        assert_eq!(co.inputs.len(), 5, "neon arith expects 3 register indices");
    }

    #[test]
    fn test_aarch64_neon_add_v0_4s_t197() {
        // add v0.4s, v1.4s, v2.4s  →  encoding [0x20,0x84,0xa2,0x4e]
        assert_neon_arith(&[0x20, 0x84, 0xa2, 0x4e], CALLOTHER_NEON_ADD, 4);
    }

    #[test]
    fn test_aarch64_neon_sub_v0_4s_t197() {
        // sub v0.4s, v1.4s, v2.4s  →  [0x20,0x84,0xa2,0x6e]
        assert_neon_arith(&[0x20, 0x84, 0xa2, 0x6e], CALLOTHER_NEON_SUB, 4);
    }

    #[test]
    fn test_aarch64_neon_mul_v0_8h_t197() {
        // mul v0.8h, v1.8h, v2.8h  →  [0x20,0x9c,0x62,0x4e]
        assert_neon_arith(&[0x20, 0x9c, 0x62, 0x4e], CALLOTHER_NEON_MUL, 2);
    }

    #[test]
    fn test_aarch64_neon_fadd_v0_4s_t197() {
        // fadd v0.4s, v1.4s, v2.4s  →  [0x20,0xd4,0x22,0x4e]
        assert_neon_arith(&[0x20, 0xd4, 0x22, 0x4e], CALLOTHER_NEON_FADD, 4);
    }

    #[test]
    fn test_aarch64_neon_fsub_v0_2d_t197() {
        // fsub v0.2d, v1.2d, v2.2d  →  [0x20,0xd4,0xe2,0x4e]
        assert_neon_arith(&[0x20, 0xd4, 0xe2, 0x4e], CALLOTHER_NEON_FSUB, 8);
    }

    #[test]
    fn test_aarch64_neon_fmul_v0_4s_t197() {
        // fmul v0.4s, v1.4s, v2.4s  →  [0x20,0xdc,0x22,0x6e]
        assert_neon_arith(&[0x20, 0xdc, 0x22, 0x6e], CALLOTHER_NEON_FMUL, 4);
    }

    #[test]
    fn test_aarch64_scalar_add_does_not_route_through_neon_t197() {
        // add x0, x1, x2  →  encoding [0x20,0x00,0x02,0x8b]. Must NOT emit
        // a CALLOTHER_NEON_ADD — the scalar lifter handles it as IntAdd.
        let result = lifter()
            .lift_insn(&[0x20, 0x00, 0x02, 0x8b], 0x1000)
            .expect("scalar ADD decodes");
        let has_neon = result
            .ir_ops
            .iter()
            .any(|i| i.op == IrOp::Callother && i.inputs[0].offset == CALLOTHER_NEON_ADD);
        assert!(
            !has_neon,
            "scalar ADD must not emit a NEON Callother; got {:?}",
            result.ir_ops
        );
    }

    // ── t194: ARM saturating + parallel-add encodings ──────────────
    //
    // Each opcode lifts to a single Callother whose first input is the
    // CALLOTHER_ARM_* tag and whose remaining inputs are the source
    // operands (two regs for the 3-register families, `#imm + Rn` for
    // USAT/SSAT). The encodings were generated with
    // `llvm-mc -triple=armv7` to keep the assembler choices canonical;
    // the byte-order shown below is little-endian word-at-a-time.

    /// Helper: lift a 4-byte A32 word and find the single Callother
    /// emitted for the saturating/parallel-add families. Returns the
    /// (`tag`, `inputs.len()`, `has_output`) triple so each test can
    /// pin down the exact intrinsic without re-deriving the encoding.
    fn arm32_one_callother(encoding: u32) -> (u64, usize, bool) {
        let l = ArmLifter::new_arm32();
        let r = l
            .lift_insn(&encoding.to_le_bytes(), 0x1000)
            .unwrap_or_else(|e| panic!("encoding {encoding:#x} should decode: {e:?}"));
        assert!(
            !r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
            "encoding {encoding:#x} must not fall through to Unimplemented"
        );
        let co = r
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Callother)
            .unwrap_or_else(|| panic!("encoding {encoding:#x} must emit Callother"));
        (co.inputs[0].offset, co.inputs.len(), co.output.is_some())
    }

    #[test]
    fn arm32_uqadd8_lifts_to_uqadd8_callother() {
        // uqadd8 r0, r1, r2  →  e6610f92
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe661_0f92);
        assert_eq!(tag, CALLOTHER_ARM_UQADD8);
        assert_eq!(n_inputs, 3, "tag + Rn + Rm");
        assert!(has_dst, "UQADD8 writes Rd");
    }

    #[test]
    fn arm32_uqadd16_lifts_to_uqadd16_callother() {
        // uqadd16 r0, r1, r2  →  e6610f12
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe661_0f12);
        assert_eq!(tag, CALLOTHER_ARM_UQADD16);
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
    }

    #[test]
    fn arm32_sadd16_lifts_to_sadd16_callother() {
        // sadd16 r0, r1, r2  →  e6110f12
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe611_0f12);
        assert_eq!(tag, CALLOTHER_ARM_SADD16);
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
    }

    #[test]
    fn arm32_ssub16_lifts_to_ssub16_callother() {
        // ssub16 r0, r1, r2  →  e6110f72
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe611_0f72);
        assert_eq!(tag, CALLOTHER_ARM_SSUB16);
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
    }

    #[test]
    fn arm32_qadd_lifts_to_qadd_callother() {
        // qadd r0, r1, r2  →  e1020051
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe102_0051);
        assert_eq!(tag, CALLOTHER_ARM_QADD);
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
    }

    #[test]
    fn arm32_qsub_lifts_to_qsub_callother() {
        // qsub r0, r1, r2  →  e1220051
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe122_0051);
        assert_eq!(tag, CALLOTHER_ARM_QSUB);
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
    }

    #[test]
    fn arm32_usat_lifts_to_usat_callother_with_imm() {
        // usat r0, #7, r1  →  e6e70011
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe6e7_0011);
        assert_eq!(tag, CALLOTHER_ARM_USAT);
        // Tag + #imm + Rn = 3 inputs.
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
        // The immediate must reach the Callother as a constant Varnode
        // — that's how downstream passes recover the saturation width
        // without re-decoding.
        let l = ArmLifter::new_arm32();
        let r = l.lift_insn(&0xe6e7_0011u32.to_le_bytes(), 0x1000).unwrap();
        let co = r.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        // inputs[1] is the saturation width; for `usat r0, #7, …` that's 7.
        assert_eq!(co.inputs[1].space, SpaceId::Const);
        assert_eq!(co.inputs[1].offset, 7);
    }

    #[test]
    fn arm32_ssat_lifts_to_ssat_callother_with_imm() {
        // ssat r0, #8, r1  →  e6a70011
        let (tag, n_inputs, has_dst) = arm32_one_callother(0xe6a7_0011);
        assert_eq!(tag, CALLOTHER_ARM_SSAT);
        assert_eq!(n_inputs, 3);
        assert!(has_dst);
        let l = ArmLifter::new_arm32();
        let r = l.lift_insn(&0xe6a7_0011u32.to_le_bytes(), 0x1000).unwrap();
        let co = r.ir_ops.iter().find(|i| i.op == IrOp::Callother).unwrap();
        assert_eq!(co.inputs[1].space, SpaceId::Const);
        // SSAT immediate is 1-based saturation width (here #8 → "to 8 bits").
        assert_eq!(co.inputs[1].offset, 8);
    }

    #[test]
    fn arm32_vfp_vmov_s_lifts_to_copy() {
        let l = ArmLifter::new_arm32();
        let r = l.lift_insn(&0xeeb0_0a40u32.to_le_bytes(), 0x1000).unwrap(); // vmov.f32 s0, s0
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::Copy));
        assert!(!r.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
    }

    #[test]
    fn arm32_vfp_vadd_f32_lifts_to_float_add() {
        let l = ArmLifter::new_arm32();
        let r = l.lift_insn(&0xee30_0a20u32.to_le_bytes(), 0x1000).unwrap(); // vadd.f32 s0, s0, s1
        let add = r.ir_ops.iter().find(|i| i.op == IrOp::FloatAdd).expect("FLOAT_ADD");
        assert_eq!(add.output.expect("dst").size, 4);
    }

    #[test]
    fn arm32_vfp_vdiv_f64_lifts_to_float_div() {
        let l = ArmLifter::new_arm32();
        let r = l.lift_insn(&0xee80_0b00u32.to_le_bytes(), 0x1000).unwrap(); // vdiv.f64 d0, d0, d0
        let div = r.ir_ops.iter().find(|i| i.op == IrOp::FloatDiv).expect("FLOAT_DIV");
        assert_eq!(div.output.expect("dst").size, 8);
    }

    #[test]
    fn arm32_vfp_vldr_vstr_use_float_register_sizes() {
        let l = ArmLifter::new_arm32();
        let load = l.lift_insn(&0xed91_0a00u32.to_le_bytes(), 0x1000).unwrap(); // vldr s0, [r1]
        let loaded = load.ir_ops.iter().find(|i| i.op == IrOp::Load).expect("LOAD");
        assert_eq!(loaded.output.expect("dst").size, 4);

        let store = l.lift_insn(&0xed81_0a00u32.to_le_bytes(), 0x1000).unwrap(); // vstr s0, [r1]
        let st = store.ir_ops.iter().find(|i| i.op == IrOp::Store).expect("STORE");
        assert_eq!(st.inputs[1].size, 4);
    }

    #[test]
    fn arm32_vfp_vsqrt_vabs_vneg_lift_to_float_unops() {
        let l = ArmLifter::new_arm32();
        let sqrt = l.lift_insn(&0xeeb1_0bc0u32.to_le_bytes(), 0x1000).unwrap(); // vsqrt.f64 d0, d0
        assert!(sqrt.ir_ops.iter().any(|i| i.op == IrOp::FloatSqrt));

        let abs = l.lift_insn(&0xeeb0_0bc0u32.to_le_bytes(), 0x1000).unwrap(); // vabs.f64 d0, d0
        assert!(abs.ir_ops.iter().any(|i| i.op == IrOp::FloatAbs));

        let neg = l.lift_insn(&0xeeb1_0a40u32.to_le_bytes(), 0x1000).unwrap(); // vneg.f32 s0, s0
        assert!(neg.ir_ops.iter().any(|i| i.op == IrOp::FloatNeg));
    }

    #[test]
    fn arm32_vfp_vcvt_selects_float_conversion_ops() {
        let l = ArmLifter::new_arm32();
        let i2f = l.lift_insn(&0xeef8_0ae7u32.to_le_bytes(), 0x1000).unwrap(); // vcvt.f32.s32 s1, s15
        assert!(i2f.ir_ops.iter().any(|i| i.op == IrOp::FloatInt2float));

        let f2i = l.lift_insn(&0xeebd_0ac0u32.to_le_bytes(), 0x1000).unwrap(); // vcvt.s32.f32 s0, s0
        assert!(f2i.ir_ops.iter().any(|i| i.op == IrOp::FloatFloat2int));

        let f2f = l.lift_insn(&0xeeb7_0ac0u32.to_le_bytes(), 0x1000).unwrap(); // vcvt.f64.f32 d0, s0
        assert!(f2f.ir_ops.iter().any(|i| i.op == IrOp::FloatFloat2float));
    }

    #[test]
    fn arm32_vfp_vcmp_updates_fp_compare_flags() {
        let l = ArmLifter::new_arm32();
        let r = l.lift_insn(&0xeeb4_0a40u32.to_le_bytes(), 0x1000).unwrap(); // vcmp.f32 s0, s0
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::FloatNan));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::FloatLess));
        assert!(r.ir_ops.iter().any(|i| i.op == IrOp::FloatEqual));
        assert!(r.ir_ops.iter().any(|i| i.output == Some(ARM_FLAG_N)));
        assert!(r.ir_ops.iter().any(|i| i.output == Some(ARM_FLAG_Z)));
        assert!(r.ir_ops.iter().any(|i| i.output == Some(ARM_FLAG_C)));
        assert!(r.ir_ops.iter().any(|i| i.output == Some(ARM_FLAG_V)));
    }

    #[test]
    fn arm32_vmrs_vmsr_move_fpscr() {
        let l = ArmLifter::new_arm32();
        let vmrs = l.lift_insn(&0xeef1_0a10u32.to_le_bytes(), 0x1000).unwrap(); // vmrs r0, fpscr
        assert!(vmrs.ir_ops.iter().any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(0, 4))));

        let vmsr = l.lift_insn(&0xeee1_0a10u32.to_le_bytes(), 0x1000).unwrap(); // vmsr fpscr, r0
        assert!(vmsr.ir_ops.iter().any(|i| i.op == IrOp::Copy && i.output == Some(Varnode::reg(68, 4))));
    }

    // ── t300: SVE scaffolding tests ───────────────────────────────────

    #[test]
    fn test_sve_add_z0_z1_z2_lifts_t300() {
        // Exercise emit_sve_callother for SVE ADD: tag=0x420, pg=0, zd=z0, zn=z1, zm=z2.
        use crate::lift::{emit_sve_callother, LiftCtx, CALLOTHER_SVE_ADD};
        use crate::register_file::{sve_z_offset, SVE_Z_SIZE};

        let mut ctx = LiftCtx::new(0x2000);
        let zd = Varnode::reg(sve_z_offset(0), SVE_Z_SIZE);
        let zn = Varnode::reg(sve_z_offset(1), SVE_Z_SIZE);
        let zm = Varnode::reg(sve_z_offset(2), SVE_Z_SIZE);
        emit_sve_callother(&mut ctx, CALLOTHER_SVE_ADD, 0, &[zd, zn, zm]);

        assert_eq!(ctx.ops.len(), 1);
        let co = &ctx.ops[0];
        assert_eq!(co.op, IrOp::Callother);
        assert_eq!(co.inputs[0].offset, CALLOTHER_SVE_ADD);
        // pg index = 0
        assert_eq!(co.inputs[1].offset, 0);
        // zd varnode
        assert_eq!(co.inputs[2].offset, sve_z_offset(0));
        assert_eq!(co.inputs[2].size, SVE_Z_SIZE);
    }

    #[test]
    fn test_sve_ld1_lifts_t300() {
        // Exercise emit_sve_callother for SVE LD1.
        use crate::lift::{emit_sve_callother, LiftCtx, CALLOTHER_SVE_LD1};
        use crate::register_file::{sve_z_offset, SVE_Z_SIZE};

        let mut ctx = LiftCtx::new(0x3000);
        let zt = Varnode::reg(sve_z_offset(5), SVE_Z_SIZE);
        let base = Varnode::reg(0, 8); // X0
        emit_sve_callother(&mut ctx, CALLOTHER_SVE_LD1, 3, &[zt, base]);

        assert_eq!(ctx.ops.len(), 1);
        let co = &ctx.ops[0];
        assert_eq!(co.op, IrOp::Callother);
        assert_eq!(co.inputs[0].offset, CALLOTHER_SVE_LD1);
        // pg index = 3 (P3)
        assert_eq!(co.inputs[1].offset, 3);
    }

    #[test]
    fn test_sve_predicate_reg_accessed_t300() {
        // Verify that P registers appear in the register file with correct
        // offset and size.
        use crate::register_file::{aarch64_register_file, sve_p_offset, SVE_P_SIZE};

        let rf = aarch64_register_file();
        let p3 = rf.registers.iter().find(|r| r.name == "P3").unwrap();
        assert_eq!(p3.varnode.offset, sve_p_offset(3));
        assert_eq!(p3.varnode.size, SVE_P_SIZE);
        assert_eq!(p3.varnode.space, SpaceId::Register);
    }
}
