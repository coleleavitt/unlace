//! Register set — uniform across backends.
//!
//! Each backend reports registers as a map of name → u64. Names follow
//! lowercase (rax, rbx, ..., rip, rflags / x0, x1, ..., pc, cpsr).

use std::collections::BTreeMap;

#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct RegisterSet {
    pub values: BTreeMap<String, u64>,
}

impl RegisterSet {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn set(&mut self, name: &str, value: u64) {
        self.values.insert(name.to_string(), value);
    }

    pub fn get(&self, name: &str) -> Option<u64> {
        self.values.get(name).copied()
    }

    /// PC / IP / RIP — try standard names in order.
    pub fn pc(&self) -> Option<u64> {
        self.get("rip")
            .or_else(|| self.get("eip"))
            .or_else(|| self.get("pc"))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_register_set_pc_aliases() {
        let mut r = RegisterSet::new();
        r.set("rip", 0x401000);
        assert_eq!(r.pc(), Some(0x401000));

        let mut r2 = RegisterSet::new();
        r2.set("pc", 0x500);
        assert_eq!(r2.pc(), Some(0x500));

        let r3 = RegisterSet::new();
        assert!(r3.pc().is_none());
    }

    #[test]
    fn test_register_set_get_unknown_is_none() {
        let r = RegisterSet::new();
        assert!(r.get("xyz").is_none());
    }
}
