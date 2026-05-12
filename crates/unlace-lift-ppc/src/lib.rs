//! PowerPC 32/64, LE/BE → IR lifter (via capstone).

pub mod lift;
mod ops;
pub mod register_file;

pub use lift::PpcLifter;

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, IrOp, Lifter};

    use crate::PpcLifter;
    use crate::lift::PpcLiftMode;

    fn lifter() -> PpcLifter {
        PpcLifter::new_ppc32_be()
    }

    fn lifter_le() -> PpcLifter {
        PpcLifter::new_ppc32_le()
    }

    fn lifter64() -> PpcLifter {
        PpcLifter::new_ppc64_be()
    }

    fn lifter64_le() -> PpcLifter {
        PpcLifter::new_ppc64_le()
    }

    #[test]
    fn test_arch() {
        assert_eq!(lifter().arch(), ArchId::Ppc);
        assert_eq!(lifter().mode(), PpcLiftMode::Ppc32);
        assert_eq!(lifter64().arch(), ArchId::Ppc64);
        assert_eq!(lifter64().mode(), PpcLiftMode::Ppc64);
    }

    #[test]
    fn test_register_file() {
        let l = lifter();
        let rf = l.register_file();
        // r0–r31 + CR + LR + CTR + XER + PC = 37
        assert_eq!(rf.registers.len(), 37);
        assert_eq!(rf.registers[0].varnode.size, 4);
        assert_eq!(rf.registers[0].name, "r0");
        assert_eq!(rf.registers[31].name, "r31");
        assert_eq!(rf.registers[32].name, "CR");
        assert_eq!(rf.registers[33].name, "LR");
        assert_eq!(rf.registers[34].name, "CTR");
        assert_eq!(rf.registers[35].name, "XER");
        assert_eq!(rf.registers[36].name, "PC");

        let l64 = lifter64();
        let rf64 = l64.register_file();
        assert_eq!(rf64.registers.len(), 37);
        assert_eq!(rf64.registers[0].varnode.size, 8);
        assert_eq!(rf64.registers[31].varnode.size, 8);
    }

    // Most tests use BE-encoded PPC instructions. LE variants reverse the byte order.

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
        // 80 61 00 08 = lwz r3, 8(r1)
        let result = lifter()
            .lift_insn(&[0x80, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode LWZ");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntZext));
    }

    #[test]
    fn test_ld() {
        // e8 61 00 08 = ld r3, 8(r1)
        let result = lifter()
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
        let result = lifter()
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
    fn test_cmpw() {
        // 7c 03 20 00 = cmpw cr0, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x03, 0x20, 0x00], 0x1000_0000)
            .expect("should decode CMPW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntSless));
    }

    #[test]
    fn test_cmplw() {
        // 7c 03 20 40 = cmplw cr0, r3, r4
        let result = lifter()
            .lift_insn(&[0x7c, 0x03, 0x20, 0x40], 0x1000_0000)
            .expect("should decode CMPLW");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::IntLess));
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
    fn constructors_distinguish_variants() {
        assert_eq!(PpcLifter::new().arch(), ArchId::Ppc);
        assert_eq!(PpcLifter::new_ppc32_be().arch(), ArchId::Ppc);
        assert_eq!(PpcLifter::new_ppc32_le().arch(), ArchId::Ppc);
        assert_eq!(PpcLifter::new_ppc64_be().arch(), ArchId::Ppc64);
        assert_eq!(PpcLifter::new_ppc64_le().arch(), ArchId::Ppc64);
    }

    #[test]
    fn test_li_little_endian_ppc32() {
        let result = lifter_le()
            .lift_insn(&[0x2a, 0x00, 0x60, 0x38], 0x1000_0000)
            .expect("should decode LE LI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_li_ppc64() {
        let result = lifter64()
            .lift_insn(&[0x38, 0x60, 0x00, 0x2a], 0x1000_0000)
            .expect("should decode PPC64 LI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_li_little_endian_ppc64() {
        let result = lifter64_le()
            .lift_insn(&[0x2a, 0x00, 0x60, 0x38], 0x1000_0000)
            .expect("should decode LE PPC64 LI");
        assert_eq!(result.len, 4);
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Copy));
    }

    #[test]
    fn test_ld_ppc32_still_decodes() {
        let result = lifter()
            .lift_insn(&[0xe8, 0x61, 0x00, 0x08], 0x1000_0000)
            .expect("should decode LD in PPC32 mode");
        assert!(result.ir_ops.iter().any(|i| i.op == IrOp::Load));
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
