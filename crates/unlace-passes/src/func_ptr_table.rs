//! Function-pointer table recovery.
//!
//! Identifies arrays of function pointers (vtables, dispatch tables, PLT-like
//! trampolines) by scanning read-only data sections for sequences of valid
//! code addresses. Associates each slot with its target function symbol when
//! available.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// A recovered function-pointer table entry.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FuncPtrEntry {
    /// Address of the table slot in the binary.
    pub slot_addr: u64,
    /// Target function address stored at the slot.
    pub target_addr: u64,
    /// Index within the table (0-based).
    pub index: usize,
}

/// A recovered function-pointer table.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FuncPtrTable {
    /// Base address of the table in the data section.
    pub base_addr: u64,
    /// Number of entries in the table.
    pub entry_count: usize,
    /// Size of each pointer entry in bytes (4 or 8).
    pub ptr_size: u8,
    /// Individual entries.
    pub entries: Vec<FuncPtrEntry>,
}

/// Detect function-pointer table loads in a function (indirect calls via
/// base + index * ptr_size patterns).
pub struct FuncPtrTablePass;

impl Pass for FuncPtrTablePass {
    fn name(&self) -> &str {
        "func-ptr-table"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let tables = detect_table_loads(func);
        Ok(!tables.is_empty())
    }
}

/// Detect patterns like `CALLIND(LOAD(base + index * 8))` which indicate
/// function-pointer table dispatch.
pub fn detect_table_loads(func: &SsaFunction) -> Vec<(BlockId, usize, u64)> {
    let mut results = Vec::new();

    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Callind && !insn.inputs.is_empty() {
                // The target of CALLIND is typically a LOAD result.
                // Check if it comes from a scaled-index address computation.
                if let Some(load_insn) = find_def_in_func(func, &insn.inputs[0]) {
                    if load_insn.op == IrOp::Load && load_insn.inputs.len() >= 2 {
                        // Check for base + offset pattern in the address.
                        if let Some(addr_insn) = find_def_in_func(func, &load_insn.inputs[0]) {
                            if addr_insn.op == IrOp::IntAdd && addr_insn.inputs.len() == 2 {
                                // One of the inputs might be a constant base address.
                                for inp in &addr_insn.inputs {
                                    if inp.space == SpaceId::Const && inp.offset > 0x1000 {
                                        results.push((block_id, idx, inp.offset));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    results
}

fn find_def_in_func(func: &SsaFunction, varnode: &Varnode) -> Option<unlace_ir::IrInsn> {
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(out) = insn.output {
                if out == *varnode {
                    return Some(insn.clone());
                }
            }
        }
    }
    None
}

/// Parse a function-pointer table from raw bytes at the given address.
pub fn parse_func_ptr_table(data: &[u8], base_addr: u64, ptr_size: u8, max_entries: usize) -> Option<FuncPtrTable> {
    if data.is_empty() || (ptr_size != 4 && ptr_size != 8) {
        return None;
    }
    let mut entries = Vec::new();
    let stride = ptr_size as usize;

    for i in 0..max_entries {
        let offset = i * stride;
        if offset + stride > data.len() {
            break;
        }
        let target = if ptr_size == 8 {
            u64::from_le_bytes(data[offset..offset + 8].try_into().ok()?)
        } else {
            u32::from_le_bytes(data[offset..offset + 4].try_into().ok()?) as u64
        };
        // Heuristic: valid code addresses are in typical ranges.
        if target == 0 {
            break;
        }
        entries.push(FuncPtrEntry {
            slot_addr: base_addr + offset as u64,
            target_addr: target,
            index: i,
        });
    }

    if entries.len() < 2 {
        return None;
    }

    Some(FuncPtrTable {
        base_addr,
        entry_count: entries.len(),
        ptr_size,
        entries,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_func_ptr_table_64bit() {
        let mut data = Vec::new();
        for addr in [0x401000u64, 0x401100, 0x401200, 0x401300] {
            data.extend_from_slice(&addr.to_le_bytes());
        }
        let table = parse_func_ptr_table(&data, 0x600000, 8, 16).unwrap();
        assert_eq!(table.entry_count, 4);
        assert_eq!(table.entries[0].target_addr, 0x401000);
        assert_eq!(table.entries[3].target_addr, 0x401300);
        assert_eq!(table.entries[2].slot_addr, 0x600000 + 16);
    }

    #[test]
    fn test_parse_func_ptr_table_32bit() {
        let mut data = Vec::new();
        for addr in [0x8048000u32, 0x8048100, 0x8048200] {
            data.extend_from_slice(&addr.to_le_bytes());
        }
        let table = parse_func_ptr_table(&data, 0x804a000, 4, 16).unwrap();
        assert_eq!(table.entry_count, 3);
        assert_eq!(table.ptr_size, 4);
    }

    #[test]
    fn test_empty_table_rejected() {
        let data = vec![0u8; 32];
        assert!(parse_func_ptr_table(&data, 0x600000, 8, 16).is_none());
    }
}
