//! t360 — Register-file coverage tests.

#[cfg(test)]
mod tests {
    use unlace_ir::ArchId;
    use unlace_lift::get_lifter;

    fn check_register_file(arch: ArchId) {
        let lifter = get_lifter(arch).expect("lifter enabled for this test");
        let rf = lifter.register_file();
        // Must have at least one register
        assert!(!rf.registers.is_empty(), "{arch}: empty register file");
        // Names should not be empty
        for reg in &rf.registers {
            assert!(!reg.name.is_empty(), "{arch}: register with empty name");
        }
        // Size should be reasonable: nonzero. (Upper bound is implicit —
        // `Varnode::size` is `u8`, so any value is already <= 255.)
        for reg in &rf.registers {
            assert!(
                reg.varnode.size > 0,
                "{arch}: register {} has zero size",
                reg.name
            );
        }
    }

    #[test]
    fn test_x86() {
        check_register_file(ArchId::X86_64);
    }
    #[test]
    fn test_arm() {
        check_register_file(ArchId::AArch64);
    }
    #[cfg(feature = "arch-riscv")]
    #[test]
    fn test_riscv() {
        check_register_file(ArchId::RiscV64);
    }
    #[cfg(feature = "arch-mips")]
    #[test]
    fn test_mips() {
        check_register_file(ArchId::Mips64);
    }
    #[cfg(feature = "arch-ppc")]
    #[test]
    fn test_ppc() {
        check_register_file(ArchId::Ppc);
    }
    #[cfg(feature = "arch-ppc")]
    #[test]
    fn test_ppc64() {
        check_register_file(ArchId::Ppc64);
    }
    #[cfg(feature = "arch-avr")]
    #[test]
    fn test_avr() {
        check_register_file(ArchId::Avr);
    }
    #[cfg(feature = "arch-ebpf")]
    #[test]
    fn test_ebpf() {
        check_register_file(ArchId::Ebpf);
    }
    #[cfg(feature = "arch-v850")]
    #[test]
    fn test_v850() {
        check_register_file(ArchId::V850);
    }
}
