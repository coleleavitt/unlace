//! Emulator register file.
//!
//! Names follow lowercase architecture conventions: rax/rbx/.../rip on
//! x86_64; x0/x1/.../pc on AArch64; v0/v1/...sp on RISC-V; etc.

use std::collections::BTreeMap;

#[derive(Clone, Debug, Default)]
pub struct EmuRegs {
    values: BTreeMap<String, u64>,
}

impl EmuRegs {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn set(&mut self, name: &str, value: u64) {
        self.values.insert(name.to_string(), value);
    }

    pub fn get(&self, name: &str) -> u64 {
        self.values.get(name).copied().unwrap_or(0)
    }

    pub fn pc(&self) -> u64 {
        self.values
            .get("rip")
            .or_else(|| self.values.get("pc"))
            .or_else(|| self.values.get("eip"))
            .copied()
            .unwrap_or(0)
    }

    pub fn set_pc(&mut self, value: u64) {
        // Set whichever names already exist; if none, default to "pc".
        if self.values.contains_key("rip") {
            self.set("rip", value);
        } else if self.values.contains_key("eip") {
            self.set("eip", value);
        } else {
            self.set("pc", value);
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_emuregs_get_unknown_returns_zero() {
        let r = EmuRegs::new();
        assert_eq!(r.get("rax"), 0);
    }

    #[test]
    fn test_emuregs_set_get_round_trip() {
        let mut r = EmuRegs::new();
        r.set("rax", 0xDEADBEEF);
        assert_eq!(r.get("rax"), 0xDEADBEEF);
    }

    #[test]
    fn test_emuregs_pc_aliases() {
        let mut r = EmuRegs::new();
        r.set("rip", 0x401000);
        assert_eq!(r.pc(), 0x401000);
        r.set_pc(0x401020);
        assert_eq!(r.pc(), 0x401020);
        assert_eq!(r.get("rip"), 0x401020);
    }

    #[test]
    fn test_emuregs_set_pc_defaults_to_pc_name() {
        let mut r = EmuRegs::new();
        r.set_pc(0x100);
        assert_eq!(r.get("pc"), 0x100);
    }
}
