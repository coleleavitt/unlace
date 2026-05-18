//! Live concrete value integration (t432).
//!
//! When attached to a live process or examining a crash dump, prefer
//! concrete register/memory values over symbolic inference. This module
//! overlays runtime state onto the decompiled representation.

use std::collections::BTreeMap;

/// Concrete state snapshot from a debugger or crash dump.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ConcreteState {
    /// Register name → value.
    pub registers: BTreeMap<String, u64>,
    /// Memory address → bytes read.
    pub memory: BTreeMap<u64, Vec<u8>>,
    /// Current instruction pointer.
    pub pc: u64,
}

/// An annotation placed on decompiled output showing concrete values.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ConcreteAnnotation {
    /// Variable or expression being annotated.
    pub variable: String,
    /// Concrete value observed at runtime.
    pub value: u64,
    /// Human-readable representation (e.g. "0x42" or "'B'").
    pub display: String,
}

/// Overlay concrete state onto variables, producing annotations.
///
/// `var_to_reg` maps decompiled variable names to their register locations.
pub fn overlay_concrete_values(
    state: &ConcreteState,
    var_to_reg: &BTreeMap<String, String>,
) -> Vec<ConcreteAnnotation> {
    let mut annotations = Vec::new();
    for (var_name, reg_name) in var_to_reg {
        if let Some(&value) = state.registers.get(reg_name) {
            annotations.push(ConcreteAnnotation {
                variable: var_name.clone(),
                value,
                display: format_value(value),
            });
        }
    }
    annotations.sort_by(|a, b| a.variable.cmp(&b.variable));
    annotations
}

/// Read a concrete memory value from the state.
pub fn read_concrete_memory(state: &ConcreteState, addr: u64, size: usize) -> Option<u64> {
    let bytes = state.memory.get(&addr)?;
    if bytes.len() < size {
        return None;
    }
    let mut val = 0u64;
    for (i, &b) in bytes.iter().take(size).enumerate() {
        val |= (b as u64) << (i * 8);
    }
    Some(val)
}

fn format_value(v: u64) -> String {
    if v <= 0x7f && (v as u8).is_ascii_graphic() {
        format!("0x{:x} ('{}')", v, v as u8 as char)
    } else {
        format!("0x{:x}", v)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn overlay_registers() {
        let mut regs = BTreeMap::new();
        regs.insert("rax".into(), 42u64);
        regs.insert("rbx".into(), 0x100);
        let state = ConcreteState {
            registers: regs,
            memory: BTreeMap::new(),
            pc: 0x401000,
        };

        let mut var_map = BTreeMap::new();
        var_map.insert("result".into(), "rax".into());
        var_map.insert("count".into(), "rbx".into());

        let anns = overlay_concrete_values(&state, &var_map);
        assert_eq!(anns.len(), 2);
        assert_eq!(anns[0].variable, "count");
        assert_eq!(anns[0].value, 0x100);
        assert_eq!(anns[1].variable, "result");
        assert_eq!(anns[1].value, 42);
    }

    #[test]
    fn missing_register_skipped() {
        let state = ConcreteState {
            registers: BTreeMap::new(),
            memory: BTreeMap::new(),
            pc: 0,
        };
        let mut var_map = BTreeMap::new();
        var_map.insert("x".into(), "rax".into());
        assert!(overlay_concrete_values(&state, &var_map).is_empty());
    }

    #[test]
    fn read_memory() {
        let mut mem = BTreeMap::new();
        mem.insert(0x7000, vec![0x78, 0x56, 0x34, 0x12, 0x00, 0x00, 0x00, 0x00]);
        let state = ConcreteState {
            registers: BTreeMap::new(),
            memory: mem,
            pc: 0,
        };
        assert_eq!(read_concrete_memory(&state, 0x7000, 4), Some(0x12345678));
    }

    #[test]
    fn format_ascii_value() {
        assert!(format_value(0x41).contains("'A'"));
        assert!(!format_value(0x1000).contains("'"));
    }
}
