//! PowerPC PPC64 → IR lifter (via capstone).

pub mod lift;
mod ops;
pub mod register_file;

pub use lift::{PpcEndian, PpcLifter, PpcMode};

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, IrOp, Lifter};

    use crate::PpcLifter;

    fn lifter() -> PpcLifter {
        PpcLifter::ppc32_be()
    }

    fn lifter64() -> PpcLifter {
        PpcLifter::ppc64_be()
    }

    #[test]
    fn test_arch() {
        assert_eq!(lifter().arch(), ArchId::Ppc);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        // r0–r31 + CR + LR + CTR + XER + PC = 37, plus v0–v31 = 69
        assert_eq!(rf.registers.len(), 69);
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[31].name, "r31");
        assert_eq!(rf.registers[32].name, "CR");
        assert_eq!(rf.registers[33].name, "LR");
        assert_eq!(rf.registers[34].name, "CTR");
        assert_eq!(rf.registers[35].name, "XER");
        assert_eq!(rf.registers[36].name, "PC");
        // AltiVec/VMX vector registers v0-v31, each 128-bit.
        assert_eq!(rf.registers[37].name, "v0");
        assert_eq!(rf.registers[37].varnode.size, 16);
        assert_eq!(rf.registers[68].name, "v31");
    }

    // PPC is big-endian; all test bytes are BE-encoded PPC instructions.

    #[test]
    fn test_nop() {
        // 60 00 00 00 = ori r0, r0, 0 (canonical NOP)
        let result = lifter()
            .lift_insn(&[0x60, 0x00, 0x00, 0x00], 0x1000_0000)
            .expect("should decode NOP");
        assert_eq!(result.len, 4);
        assert!(!result.ir_ops.is_empty());
    }

    #[test]
    fn test_li() {
        // 38 60 00 2a = li r3, 42  (addi r3, 0, 42)
        let result = lifter()
            .lift_insn(&[0x38, 0x60, 0x00, 0x2a], 0x1000_0000)
            .expect("should decode LI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_lis() {
        // 3c 60 00 01 = lis r3, 1  → r3 = 0x10000
        let result = lifter()
            .lift_insn(&[0x3c, 0x60, 0x00, 0x01], 0x1000_0000)
            .expect("should decode LIS");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_add() {
        // 7c 63 22 14 = add r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x22, 0x14], 0x1000_0000)
            .expect("should decode ADD");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn test_addi() {
        // 38 63 00 01 = addi r3, r3, 1
        let result = lifter()
            .lift_insn(&[0x38, 0x63, 0x00, 0x01], 0x1000_0000)
            .expect("should decode ADDI");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAdd));
    }

    #[test]
    fn test_subf() {
        // 7c 64 18 50 = subf r3, r4, r3  → r3 = r3 - r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x64, 0x18, 0x50], 0x1000_0000)
            .expect("should decode SUBF");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSub));
    }

    #[test]
    fn test_and() {
        // 7c 63 20 38 = and r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x20, 0x38], 0x1000_0000)
            .expect("should decode AND");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntAnd));
    }

    #[test]
    fn test_or() {
        // 7c 63 23 78 = or r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x23, 0x78], 0x1000_0000)
            .expect("should decode OR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntOr));
    }

    #[test]
    fn test_xor() {
        // 7c 63 22 78 = xor r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x22, 0x78], 0x1000_0000)
            .expect("should decode XOR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntXor));
    }

    #[test]
    fn test_slw() {
        // 7c 63 20 30 = slw r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x20, 0x30], 0x1000_0000)
            .expect("should decode SLW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLeft));
    }

    #[test]
    fn test_srw() {
        // 7c 63 24 30 = srw r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x24, 0x30], 0x1000_0000)
            .expect("should decode SRW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntRight));
    }

    #[test]
    fn test_sraw() {
        // 7c 63 26 30 = sraw r3, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x63, 0x26, 0x30], 0x1000_0000)
            .expect("should decode SRAW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSright));
    }

    #[test]
    fn test_lwz() {
        // 80 61 00 08 = lwz r3, 8(r1); in PPC32, word loads already match GPR width.
        let result = lifter()
            .lift_insn(&[0x80, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode LWZ");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_ppc64_lwz_zero_extends_word() {
        let result = lifter64()
            .lift_insn(&[0x80, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode PPC64 LWZ");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    #[test]
    fn test_ld() {
        // e8 61 00 08 = ld r3, 8(r1)
        let result = lifter64()
            .lift_insn(&[0xe8, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode LD");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
    }

    #[test]
    fn test_stw() {
        // 90 61 00 08 = stw r3, 8(r1)
        let result = lifter()
            .lift_insn(&[0x90, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode STW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_std() {
        // f8 61 00 08 = std r3, 8(r1)
        let result = lifter64()
            .lift_insn(&[0xf8, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode STD");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Store));
    }

    #[test]
    fn test_mr() {
        // 7c 83 23 78 = mr r3, r4  (or r3, r4, r4)
        let result = lifter()
            .lift_insn(&[0x7c, 0x83, 0x23, 0x78], 0x1000_0000)
            .expect("should decode MR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_b() {
        // 48 00 00 10 = b +0x10  (target = 0x10000010)
        let result = lifter()
            .lift_insn(&[0x48, 0x00, 0x00, 0x10], 0x1000_0000)
            .expect("should decode B");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branch));
    }

    #[test]
    fn test_bl() {
        // 48 00 00 11 = bl +0x10  (target = 0x10000010, LR = 0x10000004)
        let result = lifter()
            .lift_insn(&[0x48, 0x00, 0x00, 0x11], 0x1000_0000)
            .expect("should decode BL");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Call));
    }

    #[test]
    fn test_blr() {
        // 4e 80 00 20 = blr
        let result = lifter()
            .lift_insn(&[0x4e, 0x80, 0x00, 0x20], 0x1000_0000)
            .expect("should decode BLR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Return));
    }

    #[test]
    fn test_bctr() {
        // 4e 80 04 20 = bctr
        let result = lifter()
            .lift_insn(&[0x4e, 0x80, 0x04, 0x20], 0x1000_0000)
            .expect("should decode BCTR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Branchind));
    }

    #[test]
    fn test_sc_syscall() {
        // 44 00 00 02 = sc (system call, primary opcode 17).
        // Regression for ROADMAP Phase C.5: must NOT emit Unimplemented.
        let result = lifter()
            .lift_insn(&[0x44, 0x00, 0x00, 0x02], 0x1000_0118)
            .expect("should decode SC");
        assert_eq!(result.len, 4);
        assert!(
            !result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented),
            "sc must not lift to Unimplemented, got {:?}",
            result.ir_ops
        );
        let [sc] = result.ir_ops.as_slice() else {
            panic!("sc should lift to one instruction, got {:?}", result.ir_ops);
        };
        assert_eq!(
            unlace_ir::syscall::SyscallConvention::of(sc),
            Some(unlace_ir::syscall::SyscallConvention::Linux)
        );
        // Number in r0, arguments r3-r8, result in r3.
        let regs: Vec<u64> = sc.inputs[unlace_ir::syscall::NUMBER_INPUT..]
            .iter()
            .map(|vn| vn.offset / u64::from(vn.size))
            .collect();
        assert_eq!(regs, [0, 3, 4, 5, 6, 7, 8]);
        assert_eq!(sc.output.map(|vn| vn.offset / u64::from(vn.size)), Some(3));
    }

    #[test]
    fn test_cmpw() {
        // 7c 03 20 00 = cmpw cr0, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x03, 0x20, 0x00], 0x1000_0000)
            .expect("should decode CMPW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSless));
        let eq = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntEqual)
            .expect("cmpw should compute CR0.EQ");
        assert_eq!(eq.inputs.len(), 2);
        assert!(eq.inputs.iter().all(|input| input.size == 4));
        assert!(result.ir_ops.iter().any(|i| {
            i.op == IrOp::Copy
                && i.output.is_some_and(|out| {
                    out.space == unlace_ir::SpaceId::Register && out.offset == 256 && out.size == 1
                })
        }));
    }

    #[test]
    fn test_cmpw_explicit_non_cr0_is_not_misrepresented_as_cr0_eq() {
        // 7d 03 20 00 = cmpw cr1, r3, r4. Only CR0.EQ is modeled today.
        let result = lifter()
            .lift_insn(&[0x7d, 0x03, 0x20, 0x00], 0x1000_0000)
            .expect("should decode CMPW cr1");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(!result.ir_ops.iter().any(|i| {
            i.output.is_some_and(|out| {
                out.space == unlace_ir::SpaceId::Register && out.offset == 256 && out.size == 1
            })
        }));
    }

    #[test]
    fn test_beq_uses_cr_eq_predicate() {
        // 41 82 00 08 = beq +8 (BO=12, BI=2)
        let result = lifter()
            .lift_insn(&[0x41, 0x82, 0x00, 0x08], 0x1000_0000)
            .expect("should decode BEQ");
        let branch = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Cbranch)
            .expect("beq should lift to CBRANCH");
        assert_eq!(branch.inputs.len(), 2);
        assert_eq!(branch.inputs[1].space, unlace_ir::SpaceId::Register);
        assert_eq!(branch.inputs[1].offset, 256);
        assert_eq!(branch.inputs[1].size, 1);
    }

    #[test]
    fn test_bne_inverts_cr_eq_predicate() {
        // 40 82 00 08 = bne +8 (BO=4, BI=2)
        let result = lifter()
            .lift_insn(&[0x40, 0x82, 0x00, 0x08], 0x1000_0000)
            .expect("should decode BNE");
        let negate = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::BoolNegate)
            .expect("bne should invert CR.EQ");
        assert_eq!(negate.inputs.len(), 1);
        assert_eq!(negate.inputs[0].space, unlace_ir::SpaceId::Register);
        assert_eq!(negate.inputs[0].offset, 256);
        assert_eq!(negate.inputs[0].size, 1);

        let branch = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::Cbranch)
            .expect("bne should lift to CBRANCH");
        assert_eq!(branch.inputs[1].space, unlace_ir::SpaceId::Unique);
        assert_eq!(branch.inputs[1].size, 1);
    }

    #[test]
    fn test_blt_is_not_misrepresented_as_eq_predicate() {
        // 41 80 00 08 = blt +8 (BO=12, BI=0). The PPC lifter currently only
        // models CR0.EQ, so non-EQ condition branches must stay unimplemented
        // rather than silently becoming equality tests.
        let result = lifter()
            .lift_insn(&[0x41, 0x80, 0x00, 0x08], 0x1000_0000)
            .expect("should decode BLT");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    #[test]
    fn test_explicit_cr1_beq_is_not_misrepresented_as_cr0_eq() {
        // 41 86 00 08 = bc 12,6,+8 (CR1.EQ). The CR0.EQ pseudo-register must
        // not be used for explicit non-CR0 fields.
        let result = lifter()
            .lift_insn(&[0x41, 0x86, 0x00, 0x08], 0x1000_0000)
            .expect("should decode explicit CR1 branch");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Unimplemented));
        assert!(!result.ir_ops.iter().any(|i| i.op == IrOp::Cbranch));
    }

    #[test]
    fn test_cmplw() {
        // 7c 03 20 40 = cmplw cr0, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x03, 0x20, 0x40], 0x1000_0000)
            .expect("should decode CMPLW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
        let eq = result
            .ir_ops
            .iter()
            .find(|i| i.op == IrOp::IntEqual)
            .expect("cmplw should compute CR0.EQ");
        assert_eq!(eq.inputs.len(), 2);
        assert!(eq.inputs.iter().all(|input| input.size == 4));
    }

    #[test]
    fn test_mfspr_lr() {
        // 7c 68 02 a6 = mflr r3  (MFSPR r3, LR)
        let result = lifter()
            .lift_insn(&[0x7c, 0x68, 0x02, 0xa6], 0x1000_0000)
            .expect("should decode MFLR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_mtspr_lr() {
        // 7c 68 03 a6 = mtlr r3  (MTSPR LR, r3)
        let result = lifter()
            .lift_insn(&[0x7c, 0x68, 0x03, 0xa6], 0x1000_0000)
            .expect("should decode MTLR");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_ppc32_little_endian_decode() {
        // Little-endian encoding of 38 60 00 2a = li r3, 42.
        let result = PpcLifter::ppc32_le()
            .lift_insn(&[0x2a, 0x00, 0x60, 0x38], 0x1000_0000)
            .expect("should decode little-endian PPC32 LI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_ppc64_arch_and_register_width() {
        let l = PpcLifter::ppc64_be();
        assert_eq!(l.arch(), ArchId::Ppc64);
        assert_eq!(l.register_file().registers[0].varnode.size, 8);
    }

    #[test]
    fn test_ppc64_lwa_sign_extends_word() {
        // e8 61 00 0a = lwa r3, 8(r1) (DS-form low two bits ignored by ISA).
        let result = lifter64()
            .lift_insn(&[0xe8, 0x61, 0x00, 0x0a], 0x1000_0000)
            .expect("should decode LWA");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSext));
    }

    #[test]
    fn test_empty_buffer() {
        let result = lifter().lift_insn(&[], 0x1000);
        assert!(result.is_err());
    }

    #[test]
    fn test_short_buffer() {
        let result = lifter().lift_insn(&[0x60, 0x00], 0x1000);
        assert!(result.is_err());
    }

    #[test]
    fn test_unknown_insn_no_panic() {
        // FC 00 00 00 = floating point (fadd or similar)
        let result = lifter().lift_insn(&[0xfc, 0x00, 0x00, 0x00], 0x1000_0000);
        assert!(result.is_ok());
        let lifted = result.expect("should not panic");
        assert!(!lifted.ir_ops.is_empty());
    }
}
