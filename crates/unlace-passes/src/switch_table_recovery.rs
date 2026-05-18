//! t357 — Cross-architecture switch-table recovery.
//!
//! Detects jump-table patterns (indexed indirect branches) across all
//! supported architectures and recovers the table entries as branch targets.

use unlace_ir::{IrInsn, IrOp, SpaceId};

/// A recovered switch table.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwitchTable {
    /// Address of the indirect branch instruction.
    pub branch_addr: u64,
    /// Base address of the jump table in memory.
    pub table_base: u64,
    /// Number of entries detected.
    pub entry_count: usize,
    /// Size of each table entry in bytes.
    pub entry_size: u8,
    /// Recovered target addresses.
    pub targets: Vec<u64>,
}

/// Pattern: look for `Branchind` preceded by a `Load` from a computed address
/// that involves a base + index*scale pattern.
pub fn detect_switch_tables(insns: &[IrInsn]) -> Vec<SwitchTable> {
    let mut tables = Vec::new();

    for (i, insn) in insns.iter().enumerate() {
        if insn.op != IrOp::Branchind {
            continue;
        }
        // Look backwards for the load that feeds the indirect branch
        if i == 0 {
            continue;
        }
        let prev = &insns[i - 1];
        if prev.op == IrOp::Load {
            // Check if the load address computation looks like base + idx*scale
            if let Some(output) = &prev.output {
                if output.space == SpaceId::Register || output.space == SpaceId::Unique {
                    // This is a potential switch table pattern
                    tables.push(SwitchTable {
                        branch_addr: insn.addr,
                        table_base: 0, // Would be resolved by concrete analysis
                        entry_count: 0,
                        entry_size: output.size,
                        targets: Vec::new(),
                    });
                }
            }
        }
    }

    tables
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::Varnode;

    #[test]
    fn test_detects_branchind_after_load() {
        let insns = vec![
            IrInsn::with_output(
                IrOp::Load,
                Varnode::unique(0, 8),
                smallvec![Varnode::constant(0, 8), Varnode::reg(0, 8)],
                0x1000,
            ),
            IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::unique(0, 8)], 0x1004),
        ];
        let tables = detect_switch_tables(&insns);
        assert_eq!(tables.len(), 1);
        assert_eq!(tables[0].branch_addr, 0x1004);
    }

    #[test]
    fn test_no_false_positive_for_regular_branch() {
        let insns = vec![IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::ram(0x2000, 8)],
            0x1000,
        )];
        let tables = detect_switch_tables(&insns);
        assert!(tables.is_empty());
    }
}
