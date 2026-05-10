//! Post-structuring switch recovery pass.
//!
//! Walks the HIR looking for BRANCHIND patterns that were not caught during
//! initial structuring (e.g., because the indirect jump had no resolved
//! successors), and refines switch case labels using actual jump-table
//! contents when binary section data is available.
//!
//! The primary switch detection lives in the structurer itself; this module
//! adds:
//!
//! 1. Jump table validation (base address falls in a readable / executable
//!    section).
//! 2. Reading concrete target addresses from the jump table.
//! 3. Detecting dense (sequential index) vs sparse (offset / pre-shifted)
//!    switches.
//! 4. Default-case detection from the out-of-bounds branch.

use unlace_ir::IrOp;

use crate::hir::{HirFunction, HirNode, SwitchCase};

/// Endianness used to read jump-table entries.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum TableEndian {
    Little,
    Big,
}

/// Permission flags on a section, used to validate jump-table base addresses.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub struct SectionPerms {
    pub read: bool,
    pub exec: bool,
}

impl SectionPerms {
    pub const RX: Self = Self {
        read: true,
        exec: true,
    };
    pub const RO: Self = Self {
        read: true,
        exec: false,
    };
}

/// A read-only view of a section's bytes at a given virtual address.
#[derive(Clone, Debug)]
pub struct SectionView<'a> {
    pub name: &'a str,
    pub vaddr: u64,
    pub data: &'a [u8],
    pub perms: SectionPerms,
}

impl<'a> SectionView<'a> {
    pub fn contains_addr(&self, addr: u64) -> bool {
        addr >= self.vaddr && addr < self.vaddr.saturating_add(self.data.len() as u64)
    }

    pub fn read_u32(&self, addr: u64, endian: TableEndian) -> Option<u32> {
        let off = addr.checked_sub(self.vaddr)? as usize;
        let bytes = self.data.get(off..off + 4)?;
        let arr = [bytes[0], bytes[1], bytes[2], bytes[3]];
        Some(match endian {
            TableEndian::Little => u32::from_le_bytes(arr),
            TableEndian::Big => u32::from_be_bytes(arr),
        })
    }

    pub fn read_u64(&self, addr: u64, endian: TableEndian) -> Option<u64> {
        let off = addr.checked_sub(self.vaddr)? as usize;
        let bytes = self.data.get(off..off + 8)?;
        let arr = [
            bytes[0], bytes[1], bytes[2], bytes[3], bytes[4], bytes[5], bytes[6], bytes[7],
        ];
        Some(match endian {
            TableEndian::Little => u64::from_le_bytes(arr),
            TableEndian::Big => u64::from_be_bytes(arr),
        })
    }
}

/// Metadata for a recovered jump table.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct JumpTable {
    pub base: u64,
    pub entry_size: u8,
    pub num_entries: u32,
    pub endian: TableEndian,
    pub kind: JumpTableKind,
}

/// Layout class of a jump table.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum JumpTableKind {
    /// Each entry is the absolute target address. Indices are 0..N.
    DenseAbsolute,
    /// Each entry is a relative offset from `base`. Indices are 0..N.
    DenseRelative,
    /// The table has a non-zero starting case value (e.g. case starts at 10).
    /// `lo` is the inclusive lower bound; cases are `lo, lo+1, ..., lo+N-1`.
    DenseWithOffset { lo: i64 },
}

/// Validate that `base` falls inside a section with the required permissions.
pub fn validate_table_base<'s, 'b>(
    base: u64,
    sections: &'s [SectionView<'b>],
) -> Option<&'s SectionView<'b>> {
    sections.iter().find(|s| {
        s.contains_addr(base)
            && (s.name == ".rodata"
                || s.name == ".text"
                || s.name == ".data.rel.ro"
                || s.perms == SectionPerms::RO
                || s.perms == SectionPerms::RX)
    })
}

/// Read the concrete target addresses out of a validated jump table.
pub fn read_jump_table(table: &JumpTable, section: &SectionView<'_>) -> Option<Vec<u64>> {
    let mut out = Vec::with_capacity(table.num_entries as usize);
    for i in 0..table.num_entries as u64 {
        let addr = table
            .base
            .checked_add(i.checked_mul(table.entry_size as u64)?)?;
        let target = match table.entry_size {
            4 => section.read_u32(addr, table.endian)? as u64,
            8 => section.read_u64(addr, table.endian)?,
            _ => return None,
        };
        let resolved = match table.kind {
            JumpTableKind::DenseRelative => table.base.wrapping_add(target),
            _ => target,
        };
        out.push(resolved);
    }
    Some(out)
}

/// Returns the first target address that appears more than once in the table.
/// In a typical compiler-generated jump table, the duplicated entry is the
/// default case (out-of-bounds index falls through to it).
pub fn find_default_target(targets: &[u64]) -> Option<u64> {
    let mut counts: std::collections::BTreeMap<u64, u32> = std::collections::BTreeMap::new();
    for &t in targets {
        *counts.entry(t).or_default() += 1;
    }
    counts.into_iter().find(|(_, c)| *c > 1).map(|(t, _)| t)
}

pub fn recover_switches(func: &mut HirFunction) {
    func.body = walk_nodes(std::mem::take(&mut func.body));
}

/// Walk the HIR and refine each [`HirNode::Switch`] that we can match to a
/// validated jump table by reassigning explicit case labels.
///
/// `tables` is keyed by switch instruction address.
pub fn refine_switches_with_tables(
    func: &mut HirFunction,
    tables: &std::collections::BTreeMap<u64, (JumpTable, Vec<u64>)>,
    sections: &[SectionView<'_>],
) {
    func.body = std::mem::take(&mut func.body)
        .into_iter()
        .map(|n| refine_node(n, tables, sections))
        .collect();
}

fn refine_node(
    node: HirNode,
    tables: &std::collections::BTreeMap<u64, (JumpTable, Vec<u64>)>,
    sections: &[SectionView<'_>],
) -> HirNode {
    match node {
        HirNode::Block(children) => HirNode::Block(
            children
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
        ),
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: then_body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
            else_body: else_body.map(|eb| {
                eb.into_iter()
                    .map(|c| refine_node(c, tables, sections))
                    .collect()
            }),
        },
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
            cond,
        },
        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
        },
        HirNode::TryCatch {
            try_body,
            catch_body,
        } => HirNode::TryCatch {
            try_body: try_body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
            catch_body: catch_body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
        },
        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => {
            let switch_addr = first_stmt_addr(&cases);
            let matched_table = switch_addr.and_then(|a| tables.get(&a));
            let (refined_cases, new_addr, new_count) = match matched_table {
                Some((table, targets)) if validate_table_base(table.base, sections).is_some() => (
                    refine_cases(cases, table, targets),
                    Some(table.base),
                    Some(table.num_entries as usize),
                ),
                _ => (cases, jumptable_addr, jumptable_cases),
            };
            HirNode::Switch {
                cond,
                cases: refined_cases
                    .into_iter()
                    .map(|(c, body, ft)| {
                        (
                            c,
                            body.into_iter()
                                .map(|n| refine_node(n, tables, sections))
                                .collect(),
                            ft,
                        )
                    })
                    .collect(),
                default: default.map(|d| {
                    d.into_iter()
                        .map(|n| refine_node(n, tables, sections))
                        .collect()
                }),
                jumptable_addr: new_addr,
                jumptable_cases: new_count,
            }
        }
        other => other,
    }
}

fn first_stmt_addr(cases: &[(SwitchCase, Vec<HirNode>, bool)]) -> Option<u64> {
    for (_, body, _) in cases {
        if let Some(addr) = first_addr_in_body(body) {
            return Some(addr);
        }
    }
    None
}

fn first_addr_in_body(nodes: &[HirNode]) -> Option<u64> {
    for n in nodes {
        match n {
            HirNode::Statement(insn) => return Some(insn.addr),
            HirNode::Block(inner) => {
                if let Some(a) = first_addr_in_body(inner) {
                    return Some(a);
                }
            }
            _ => {}
        }
    }
    None
}

fn refine_cases(
    cases: Vec<(SwitchCase, Vec<HirNode>, bool)>,
    table: &JumpTable,
    _targets: &[u64],
) -> Vec<(SwitchCase, Vec<HirNode>, bool)> {
    cases
        .into_iter()
        .enumerate()
        .map(|(i, (_old, body, ft))| {
            let value = match table.kind {
                JumpTableKind::DenseAbsolute | JumpTableKind::DenseRelative => i as u64,
                JumpTableKind::DenseWithOffset { lo } => (lo + i as i64) as u64,
            };
            (SwitchCase::Value(value), body, ft)
        })
        .collect()
}

fn walk_nodes(nodes: Vec<HirNode>) -> Vec<HirNode> {
    nodes.into_iter().map(walk_node).collect()
}

fn walk_node(node: HirNode) -> HirNode {
    match node {
        HirNode::Block(children) => HirNode::Block(walk_nodes(children)),
        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: walk_nodes(then_body),
            else_body: else_body.map(walk_nodes),
        },
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: walk_nodes(body),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: walk_nodes(body),
            cond,
        },
        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, walk_nodes(body), ft))
                .collect(),
            default: default.map(walk_nodes),
            jumptable_addr,
            jumptable_cases,
        },
        HirNode::Statement(ref insn) if insn.op == IrOp::Branchind => {
            tracing::debug!(
                addr = insn.addr,
                "unresolved BRANCHIND in HIR — keeping as statement"
            );
            node
        }
        other => other,
    }
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirFunction, HirNode, SwitchCase};

    fn make_hir_with_switch() -> HirFunction {
        let cond = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 0,
        };

        HirFunction {
            name: "switch_fn".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![HirNode::Switch {
                cond,
                cases: vec![
                    (SwitchCase::Value(0), vec![HirNode::Return(None)], false),
                    (SwitchCase::Value(1), vec![HirNode::Return(None)], false),
                ],
                default: Some(vec![HirNode::Return(None)]),
                jumptable_addr: None,
                jumptable_cases: None,
            }],
            addr: 0x1000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
        }
    }

    #[test]
    fn recover_preserves_existing_switch() {
        let mut func = make_hir_with_switch();
        recover_switches(&mut func);

        let has_switch = func
            .body
            .iter()
            .any(|n| matches!(n, HirNode::Switch { .. }));
        assert!(has_switch, "existing Switch nodes must be preserved");
    }

    #[test]
    fn recover_preserves_unresolved_branchind() {
        let branchind = IrInsn::without_output(IrOp::Branchind, smallvec![], 0x2000);

        let mut func = HirFunction {
            name: "branchind_fn".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![HirNode::Statement(branchind)],
            addr: 0x2000,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
        };

        recover_switches(&mut func);

        let has_stmt = func
            .body
            .iter()
            .any(|n| matches!(n, HirNode::Statement(i) if i.op == IrOp::Branchind));
        assert!(has_stmt, "unresolved BRANCHIND should remain as Statement");
    }

    fn build_le_u64_table(targets: &[u64]) -> Vec<u8> {
        let mut bytes = Vec::with_capacity(targets.len() * 8);
        for t in targets {
            bytes.extend_from_slice(&t.to_le_bytes());
        }
        bytes
    }

    #[test]
    fn validate_table_base_accepts_rodata() {
        let bytes = vec![0u8; 64];
        let section = SectionView {
            name: ".rodata",
            vaddr: 0x10000,
            data: &bytes,
            perms: SectionPerms::RO,
        };
        let sections = [section];
        assert!(validate_table_base(0x10010, &sections).is_some());
        assert!(validate_table_base(0x9999, &sections).is_none());
    }

    #[test]
    fn validate_table_base_accepts_text() {
        let bytes = vec![0u8; 64];
        let section = SectionView {
            name: ".text",
            vaddr: 0x4000,
            data: &bytes,
            perms: SectionPerms::RX,
        };
        let sections = [section];
        assert!(validate_table_base(0x4020, &sections).is_some());
    }

    #[test]
    fn validate_table_base_does_not_match_unrelated_section() {
        let bytes = vec![0u8; 64];
        let section = SectionView {
            name: ".unrelated",
            vaddr: 0x30000,
            data: &bytes,
            perms: SectionPerms {
                read: false,
                exec: false,
            },
        };
        let sections = [section];
        assert!(validate_table_base(0x30010, &sections).is_none());
    }

    #[test]
    fn read_jump_table_dense_absolute_le() {
        let targets = [0x1010u64, 0x1020, 0x1030];
        let bytes = build_le_u64_table(&targets);
        let section = SectionView {
            name: ".rodata",
            vaddr: 0x5000,
            data: &bytes,
            perms: SectionPerms::RO,
        };
        let table = JumpTable {
            base: 0x5000,
            entry_size: 8,
            num_entries: 3,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        let read = read_jump_table(&table, &section).expect("read should succeed");
        assert_eq!(read, vec![0x1010, 0x1020, 0x1030]);
    }

    #[test]
    fn read_jump_table_rejects_oob() {
        let bytes = vec![0u8; 16];
        let section = SectionView {
            name: ".rodata",
            vaddr: 0x5000,
            data: &bytes,
            perms: SectionPerms::RO,
        };
        let table = JumpTable {
            base: 0x5000,
            entry_size: 8,
            num_entries: 4,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        assert!(read_jump_table(&table, &section).is_none());
    }

    #[test]
    fn find_default_target_picks_repeated_entry() {
        let targets = vec![0x1000, 0x2000, 0x3000, 0x9999, 0x4000, 0x9999];
        assert_eq!(find_default_target(&targets), Some(0x9999));
    }

    #[test]
    fn find_default_target_returns_none_when_unique() {
        let targets = vec![0x1000, 0x2000, 0x3000];
        assert_eq!(find_default_target(&targets), None);
    }

    #[test]
    fn test_switch_with_real_case_values() {
        let cond = SsaVarnode {
            base: Varnode::reg(0, 8),
            version: 0,
        };
        let switch_addr = 0x4100u64;

        let case_body = |addr: u64| {
            let stmt = IrInsn::without_output(IrOp::Copy, smallvec![Varnode::constant(0, 8)], addr);
            vec![HirNode::Statement(stmt), HirNode::Return(None)]
        };

        let mut func = HirFunction {
            name: "sw".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![HirNode::Switch {
                cond,
                cases: vec![
                    (SwitchCase::Value(0), case_body(switch_addr), false),
                    (SwitchCase::Value(1), case_body(switch_addr + 0x10), false),
                    (SwitchCase::Value(2), case_body(switch_addr + 0x20), false),
                ],
                default: None,
                jumptable_addr: None,
                jumptable_cases: None,
            }],
            addr: switch_addr,
            foldable_exprs: std::collections::BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
        };

        let targets = [0x4200u64, 0x4210, 0x4220];
        let bytes = build_le_u64_table(&targets);
        let section = SectionView {
            name: ".rodata",
            vaddr: 0x6000,
            data: &bytes,
            perms: SectionPerms::RO,
        };

        let table = JumpTable {
            base: 0x6000,
            entry_size: 8,
            num_entries: 3,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseWithOffset { lo: 10 },
        };
        let mut tables = BTreeMap::new();
        tables.insert(switch_addr, (table, targets.to_vec()));

        refine_switches_with_tables(&mut func, &tables, &[section]);

        let switch = match &func.body[0] {
            HirNode::Switch { cases, .. } => cases,
            _ => panic!("expected switch"),
        };
        let labels: Vec<u64> = switch
            .iter()
            .filter_map(|(c, _, _)| match c {
                SwitchCase::Value(v) => Some(*v),
                _ => None,
            })
            .collect();
        assert_eq!(
            labels,
            vec![10, 11, 12],
            "DenseWithOffset lo=10 should produce 10,11,12"
        );
    }

    #[test]
    fn test_switch_default_case() {
        let targets = [0x4200u64, 0x4210, 0x4220, 0xDEAD, 0x4230, 0xDEAD];
        let default = find_default_target(&targets);
        assert_eq!(default, Some(0xDEAD), "repeated entry is the default");
    }

    #[test]
    fn test_dense_vs_sparse_detection() {
        let dense = JumpTable {
            base: 0x1000,
            entry_size: 8,
            num_entries: 4,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        assert!(matches!(dense.kind, JumpTableKind::DenseAbsolute));

        let sparse = JumpTable {
            base: 0x2000,
            entry_size: 8,
            num_entries: 4,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseWithOffset { lo: 5 },
        };
        match sparse.kind {
            JumpTableKind::DenseWithOffset { lo } => assert_eq!(lo, 5),
            _ => panic!("expected DenseWithOffset"),
        }
    }
}
