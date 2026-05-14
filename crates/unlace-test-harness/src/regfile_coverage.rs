//! t360 — Register-file coverage tests.

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, Lifter};
    use unlace_lift::get_lifter;

    fn check_register_file(arch: ArchId) {
        let lifter = get_lifter(arch);
        let rf = lifter.register_file();
        // Must have at least one register
        assert!(!rf.registers.is_empty(), "{arch}: empty register file");
        // Names should not be empty
        for reg in &rf.registers {
            assert!(!reg.name.is_empty(), "{arch}: register with empty name");
        }
        // Size should be reasonable (1-128 bytes)
        for reg in &rf.registers {
            assert!(reg.varnode.size > 0 && reg.varnode.size <= 128,
                "{arch}: register {} has unreasonable size {}", reg.name, reg.varnode.size);
        }
    }

    #[test] fn test_x86() { check_register_file(ArchId::X86_64); }
    #[test] fn test_arm() { check_register_file(ArchId::AArch64); }
    #[test] fn test_riscv() { check_register_file(ArchId::RiscV64); }
    #[test] fn test_mips() { check_register_file(ArchId::Mips64); }
    #[test] fn test_ppc() { check_register_file(ArchId::Ppc); }
    #[test] fn test_ppc64() { check_register_file(ArchId::Ppc64); }
    #[test] fn test_avr() { check_register_file(ArchId::Avr); }
    #[test] fn test_ebpf() { check_register_file(ArchId::Ebpf); }
    #[test] fn test_v850() { check_register_file(ArchId::V850); }
}
