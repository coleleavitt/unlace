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

use unlace_ir::{ArchId, IrInsn, IrOp};

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

    pub fn read_u8(&self, addr: u64) -> Option<u8> {
        let off = addr.checked_sub(self.vaddr)? as usize;
        self.data.get(off).copied()
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
    /// Sparse table: many table slots forward to a shared default; only the
    /// distinct non-default slots become real cases. `lo` is the case-value
    /// offset (slot index `i` corresponds to `lo + i`); during refinement,
    /// any entry pointing to `default_addr` is dropped from the case list
    /// and merged into the switch's `default` arm.
    SparseAbsolute { lo: i64, default_addr: u64 },
    /// PIE / RIP-relative table emitted by clang and gcc on `-fPIC` x86_64.
    /// Each 32-bit entry holds a *signed* offset from the table base; the
    /// resolved target is `table.base.wrapping_add(sign_extend(entry))`.
    /// When the binary's loader reports a `R_X86_64_PC32` / `R_X86_64_64`
    /// relocation pointing at the slot, we use the pre-resolved address
    /// instead of recomputing.
    RipRelative,
    /// Byte-indexed secondary lookup: the table holds 1-byte indices, each
    /// of which selects an entry in a *secondary* table holding the actual
    /// targets (absolute addresses). Common on tiny ARM/MIPS dispatch and
    /// some clang `-Os` x86 outputs. `secondary_base` and
    /// `secondary_entry_size` describe the secondary table.
    ByteIndexedSecondary {
        secondary_base: u64,
        secondary_entry_size: u8,
    },
    /// ARM/Thumb table: like [`Self::DenseAbsolute`] but each resolved
    /// target may have its low bit set to indicate Thumb encoding. The
    /// reader strips bit 0 before returning the address.
    ArmThumbAbsolute,
}

/// Architecture / instruction-set mode of a recovered switch target,
/// returned alongside the address so downstream lifters know which decoder
/// to apply at the destination.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum TargetMode {
    Default,
    Thumb,
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
    read_jump_table_with_relocs(table, section, &[])
}

/// Like [`read_jump_table`] but consults a relocations list first. If a
/// relocation overlaps the slot's address (e.g. `R_X86_64_PC32` /
/// `R_X86_64_64` written into a PIE jump table), the pre-resolved target
/// is taken from the relocation rather than computed from the raw bytes.
/// Falls back to byte-wise decoding when no relocation matches.
pub fn read_jump_table_with_relocs(
    table: &JumpTable,
    section: &SectionView<'_>,
    relocs: &[(u64, u64)],
) -> Option<Vec<u64>> {
    read_jump_table_full(table, section, relocs, &[])
        .map(|entries| entries.into_iter().map(|(addr, _)| addr).collect())
}

/// Full read of a jump table, returning `(target_addr, mode)` for each
/// entry. `secondary_section` is consulted when `table.kind` is
/// [`JumpTableKind::ByteIndexedSecondary`] to dereference the secondary
/// table; pass `&[]` (or any slice not containing the secondary base) to
/// fall back to `section`.
pub fn read_jump_table_full(
    table: &JumpTable,
    section: &SectionView<'_>,
    relocs: &[(u64, u64)],
    secondary_sections: &[SectionView<'_>],
) -> Option<Vec<(u64, TargetMode)>> {
    let mut out = Vec::with_capacity(table.num_entries as usize);
    for i in 0..table.num_entries as u64 {
        let addr = table
            .base
            .checked_add(i.checked_mul(table.entry_size as u64)?)?;

        if let Some((_, resolved)) = relocs.iter().find(|(slot, _)| *slot == addr) {
            out.push((*resolved, TargetMode::Default));
            continue;
        }

        let raw = match table.entry_size {
            1 => section.read_u8(addr)? as u64,
            4 => section.read_u32(addr, table.endian)? as u64,
            8 => section.read_u64(addr, table.endian)?,
            _ => return None,
        };
        let (resolved, mode) = match table.kind {
            JumpTableKind::DenseRelative => {
                (table.base.wrapping_add(raw), TargetMode::Default)
            }
            JumpTableKind::RipRelative if table.entry_size == 4 => {
                let signed = raw as i32 as i64 as u64;
                (table.base.wrapping_add(signed), TargetMode::Default)
            }
            JumpTableKind::RipRelative => {
                (table.base.wrapping_add(raw), TargetMode::Default)
            }
            JumpTableKind::ArmThumbAbsolute => {
                let mode = if raw & 1 != 0 {
                    TargetMode::Thumb
                } else {
                    TargetMode::Default
                };
                (raw & !1u64, mode)
            }
            JumpTableKind::ByteIndexedSecondary {
                secondary_base,
                secondary_entry_size,
            } => {
                let secondary_addr = secondary_base.checked_add(
                    raw.checked_mul(secondary_entry_size as u64)?,
                )?;
                let secondary = secondary_sections
                    .iter()
                    .find(|s| s.contains_addr(secondary_addr))
                    .or_else(|| {
                        if section.contains_addr(secondary_addr) {
                            Some(section)
                        } else {
                            None
                        }
                    })?;
                let target = match secondary_entry_size {
                    4 => secondary.read_u32(secondary_addr, table.endian)? as u64,
                    8 => secondary.read_u64(secondary_addr, table.endian)?,
                    _ => return None,
                };
                (target, TargetMode::Default)
            }
            JumpTableKind::DenseAbsolute
            | JumpTableKind::DenseWithOffset { .. }
            | JumpTableKind::SparseAbsolute { .. } => (raw, TargetMode::Default),
        };
        out.push((resolved, mode));
    }
    Some(out)
}

/// Infer the number of jump-table entries from cross-references when no
/// explicit bounds-check was found in the dispatch code. Returns `None`
/// when neither bound is informative (no refs and no following symbol).
///
/// Two independent caps are computed and the smaller is returned:
/// 1. **next-symbol cap**: the table can't physically extend past the next
///    defined symbol after `table_base`. With the next symbol at `next`,
///    `(next - table_base) / entry_size` is the upper bound.
/// 2. **xref cap**: the highest slot index that any xref points at, plus
///    one. Code only stores the address of slots that exist, so the last
///    referenced slot is at least the table's last index.
pub fn infer_num_entries_from_xrefs(
    table_base: u64,
    next_symbol_addr: Option<u64>,
    xrefs_into: &[u64],
    entry_size: u32,
) -> Option<u32> {
    if entry_size == 0 {
        return None;
    }
    let next_cap = next_symbol_addr.and_then(|n| {
        n.checked_sub(table_base)
            .map(|delta| (delta / entry_size as u64) as u32)
    });

    let xref_cap = {
        let mut max_slot: Option<u32> = None;
        for &x in xrefs_into {
            let Some(delta) = x.checked_sub(table_base) else {
                continue;
            };
            if delta % entry_size as u64 != 0 {
                continue;
            }
            let idx = (delta / entry_size as u64) as u32;
            max_slot = Some(max_slot.map_or(idx, |m| m.max(idx)));
        }
        max_slot.map(|m| m.saturating_add(1))
    };

    match (next_cap, xref_cap) {
        (Some(a), Some(b)) => Some(a.min(b)),
        (Some(a), None) => Some(a),
        (None, Some(b)) => Some(b),
        (None, None) => None,
    }
}

/// Resolve nested jump tables: when an outer table's resolved target
/// matches the *switch instruction address* of an inner table in `tables`,
/// the outer slot is replaced by the inner table's targets. Caps recursion
/// at `max_depth` (default 3 — IDA's threshold) and bails on cycles.
///
/// Returns a fresh `BTreeMap` with flattened targets. Tables that don't
/// participate in nesting pass through unchanged. The new outer
/// `num_entries` reflects the post-flattening list length.
pub fn flatten_nested_tables(
    tables: &std::collections::BTreeMap<u64, (JumpTable, Vec<u64>)>,
    max_depth: u32,
) -> std::collections::BTreeMap<u64, (JumpTable, Vec<u64>)> {
    let mut out = std::collections::BTreeMap::new();
    for (&switch_addr, (table, targets)) in tables {
        let mut visited = std::collections::BTreeSet::new();
        visited.insert(switch_addr);
        let flat = flatten_targets(targets, tables, &mut visited, max_depth);
        let mut new_table = table.clone();
        new_table.num_entries = flat.len() as u32;
        out.insert(switch_addr, (new_table, flat));
    }
    out
}

fn flatten_targets(
    targets: &[u64],
    tables: &std::collections::BTreeMap<u64, (JumpTable, Vec<u64>)>,
    visited: &mut std::collections::BTreeSet<u64>,
    depth_remaining: u32,
) -> Vec<u64> {
    let mut out = Vec::new();
    for &t in targets {
        if depth_remaining > 0 && !visited.contains(&t) {
            if let Some((_, inner)) = tables.get(&t) {
                visited.insert(t);
                let expanded = flatten_targets(inner, tables, visited, depth_remaining - 1);
                visited.remove(&t);
                out.extend(expanded);
                continue;
            }
        }
        out.push(t);
    }
    out
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
            catch_arms,
        } => HirNode::TryCatch {
            try_body: try_body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| {
                    let body = body
                        .into_iter()
                        .map(|c| refine_node(c, tables, sections))
                        .collect();
                    (ty, body)
                })
                .collect(),
        },
        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: try_body
                .into_iter()
                .map(|c| refine_node(c, tables, sections))
                .collect(),
            finally_body: finally_body
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
    targets: &[u64],
) -> Vec<(SwitchCase, Vec<HirNode>, bool)> {
    match table.kind {
        JumpTableKind::SparseAbsolute { lo, default_addr } => cases
            .into_iter()
            .enumerate()
            .filter_map(|(i, (_old, body, ft))| {
                let tgt = targets.get(i).copied();
                if tgt == Some(default_addr) {
                    return None;
                }
                let value = (lo + i as i64) as u64;
                Some((SwitchCase::Value(value), body, ft))
            })
            .collect(),
        _ => cases
            .into_iter()
            .enumerate()
            .map(|(i, (_old, body, ft))| {
                let value = match table.kind {
                    JumpTableKind::DenseAbsolute
                    | JumpTableKind::DenseRelative
                    | JumpTableKind::RipRelative
                    | JumpTableKind::ArmThumbAbsolute
                    | JumpTableKind::ByteIndexedSecondary { .. } => i as u64,
                    JumpTableKind::DenseWithOffset { lo } => (lo + i as i64) as u64,
                    JumpTableKind::SparseAbsolute { .. } => unreachable!(),
                };
                (SwitchCase::Value(value), body, ft)
            })
            .collect(),
    }
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

/// Coarse classification of a recognized indirect-branch dispatch pattern.
///
/// Returned by [`classify_indirect_branch`] and consumed by downstream
/// jump-table recovery to pick an appropriate [`JumpTableKind`]. The
/// `Generic` variant captures patterns that the architecture-agnostic
/// classifier already recognizes (x86-style `BRANCHIND` of a single LOAD
/// from a table base); architecture-specific variants are produced by the
/// fall-through detectors in the [`arch`] module.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum IndirectBranchKind {
    /// Architecture-agnostic table dispatch — `LOAD` (table[idx]) feeds
    /// `BRANCHIND`. Matched by the generic classifier on every arch.
    Generic,
    /// ARM/Thumb byte- or halfword-table (TBB / TBH style): a 1- or
    /// 2-byte `LOAD` of an *offset* added to PC, then `BRANCHIND`.
    ArmThumbTable,
    /// MIPS `lui` / `lw` / `jr` table: 32-bit table base materialized via
    /// `lui` then `addiu` (or `lui` + `lw`), 4-byte indexed `LOAD`, then
    /// `BRANCHIND`.
    MipsLuiLwJr,
    /// PowerPC `lwz r,table@toc(r2); mtctr r; bctr` table: a `LOAD` whose
    /// base is the TOC pointer feeds a move-to-CTR (modeled as `COPY` in
    /// our IR), followed by `BRANCHIND`.
    PpcTocTable,
    /// RISC-V `auipc; addi; jalr` table: an `INT_ADD` of (PC, offset)
    /// feeds `BRANCHIND` — used both for direct PC-relative jumps and as
    /// the address-materialization half of a jump table.
    RiscvAuipcJalr,
}

/// Classify an indirect-branch site (a slice of IR instructions ending in
/// `BRANCHIND`) into one of the known dispatch patterns.
///
/// This is the single entry point for per-arch fall-through detection.
/// The generic classifier is consulted first; if it returns `None`, the
/// per-architecture detectors in [`arch`] are tried in turn, gated by the
/// supplied `arch` parameter. Returns `None` if no recognized pattern
/// matches — callers should leave the `BRANCHIND` un-structured (the
/// existing structurer path already handles that).
///
/// This is purely additive: existing callers of the structurer never
/// invoke this function, so x86 / generic switch recovery is unaffected.
/// New callers (per-arch passes) opt in by calling `classify_indirect_branch`
/// directly.
pub fn classify_indirect_branch(arch: ArchId, insns: &[IrInsn]) -> Option<IndirectBranchKind> {
    // On non-x86 targets, try the architecture-specific detector first —
    // it understands richer patterns (e.g. MIPS lui+lw+jr) that the
    // generic LOAD→BRANCHIND match would otherwise swallow as `Generic`.
    let arch_match = match arch {
        ArchId::Arm | ArchId::AArch64 => arch::try_arm_thumb_table(insns),
        ArchId::Mips | ArchId::Mips64 => arch::try_mips_lui_lw_jr(insns),
        ArchId::Ppc | ArchId::Ppc64 => arch::try_ppc_toc_table(insns),
        ArchId::RiscV64 => arch::try_riscv_auipc_jalr(insns),
        _ => None,
    };
    if arch_match.is_some() {
        return arch_match;
    }
    // Fall through to the architecture-agnostic LOAD→BRANCHIND match
    // (the x86-style table dispatch).
    arch::try_generic_table(insns)
}

/// Per-architecture jump-table pattern detectors.
///
/// These are MVP scaffolds — each detector recognizes one canonical
/// instruction sequence for its target and returns `None` for everything
/// else. They feed into [`classify_indirect_branch`] as fall-through
/// alternates when the architecture-agnostic classifier doesn't match.
pub(crate) mod arch {
    use super::{IndirectBranchKind, IrInsn, IrOp};

    /// Does this instruction stream end in a `BRANCHIND`? Helper shared by
    /// every per-arch detector.
    fn ends_in_branchind(insns: &[IrInsn]) -> bool {
        insns
            .last()
            .map(|i| i.op == IrOp::Branchind)
            .unwrap_or(false)
    }

    /// Find the index of the last `BRANCHIND` in `insns`, if any.
    fn branchind_idx(insns: &[IrInsn]) -> Option<usize> {
        insns.iter().rposition(|i| i.op == IrOp::Branchind)
    }

    /// Architecture-agnostic recognizer: a `LOAD` immediately followed by
    /// a `BRANCHIND`. Mirrors the most common x86 / generic table
    /// dispatch and serves as the "do we even need an arch detector?"
    /// gate inside [`super::classify_indirect_branch`].
    pub(crate) fn try_generic_table(insns: &[IrInsn]) -> Option<IndirectBranchKind> {
        let bi = branchind_idx(insns)?;
        // Walk backwards skipping non-control ops; the immediately
        // preceding non-trivial op should be a LOAD.
        let prev = insns[..bi].iter().rev().find(|i| {
            !matches!(i.op, IrOp::Branch | IrOp::Cbranch | IrOp::Branchind)
        })?;
        if prev.op == IrOp::Load {
            Some(IndirectBranchKind::Generic)
        } else {
            None
        }
    }

    /// ARM/Thumb TBB / TBH detector.
    ///
    /// Canonical pattern (Thumb-2):
    ///   `LOAD` (1- or 2-byte read of an offset from `.rodata`) →
    ///   `INT_ADD` (PC + offset) → `BRANCHIND`.
    ///
    /// MVP: matches the structural sequence (LOAD with `size <= 2`,
    /// followed somewhere by an `INT_ADD`, terminated by `BRANCHIND`).
    pub(crate) fn try_arm_thumb_table(insns: &[IrInsn]) -> Option<IndirectBranchKind> {
        if !ends_in_branchind(insns) {
            return None;
        }
        let has_byte_load = insns.iter().any(|i| {
            i.op == IrOp::Load
                && i.output.map(|o| o.size <= 2).unwrap_or(false)
        });
        let has_pc_add = insns.iter().any(|i| i.op == IrOp::IntAdd);
        if has_byte_load && has_pc_add {
            Some(IndirectBranchKind::ArmThumbTable)
        } else {
            None
        }
    }

    /// MIPS `lui` / `lw` / `jr` detector.
    ///
    /// Canonical pattern:
    ///   `COPY` (lui — high-half immediate into reg) →
    ///   `INT_ADD` (addiu reg, lo) or `LOAD` (lw at base) →
    ///   `LOAD` (lw at base + idx*4) → `BRANCHIND` (jr).
    ///
    /// MVP: matches the structural sequence (at least one `COPY` of a
    /// constant, at least one 4-byte `LOAD`, terminated by `BRANCHIND`).
    pub(crate) fn try_mips_lui_lw_jr(insns: &[IrInsn]) -> Option<IndirectBranchKind> {
        if !ends_in_branchind(insns) {
            return None;
        }
        let has_lui_like = insns.iter().any(|i| {
            i.op == IrOp::Copy
                && i.inputs
                    .first()
                    .map(|v| v.space == unlace_ir::SpaceId::Const)
                    .unwrap_or(false)
        });
        let has_word_load = insns.iter().any(|i| {
            i.op == IrOp::Load
                && i.output.map(|o| o.size == 4).unwrap_or(false)
        });
        if has_lui_like && has_word_load {
            Some(IndirectBranchKind::MipsLuiLwJr)
        } else {
            None
        }
    }

    /// PowerPC TOC-relative table detector.
    ///
    /// Canonical pattern:
    ///   `LOAD` (lwz / ld at table@toc(r2)) →
    ///   `COPY` (mtctr — register to count register) →
    ///   `BRANCHIND` (bctr).
    ///
    /// MVP: matches `LOAD` followed by `COPY` (mtctr surrogate) followed
    /// by `BRANCHIND`.
    pub(crate) fn try_ppc_toc_table(insns: &[IrInsn]) -> Option<IndirectBranchKind> {
        let bi = branchind_idx(insns)?;
        // Find the most recent COPY before the BRANCHIND (mtctr surrogate).
        let copy_pos = insns[..bi].iter().rposition(|i| i.op == IrOp::Copy)?;
        // And a LOAD before that COPY (the TOC fetch).
        let has_prior_load = insns[..copy_pos].iter().any(|i| i.op == IrOp::Load);
        if has_prior_load {
            Some(IndirectBranchKind::PpcTocTable)
        } else {
            None
        }
    }

    /// RISC-V `auipc` / `addi` / `jalr` detector.
    ///
    /// Canonical pattern:
    ///   `INT_ADD` (auipc — PC + upper-immediate) →
    ///   optional `INT_ADD` (addi — + lower-immediate) →
    ///   `BRANCHIND` (jalr through computed address).
    ///
    /// MVP: at least one `INT_ADD` immediately before the `BRANCHIND`.
    pub(crate) fn try_riscv_auipc_jalr(insns: &[IrInsn]) -> Option<IndirectBranchKind> {
        let bi = branchind_idx(insns)?;
        let has_add = insns[..bi].iter().any(|i| i.op == IrOp::IntAdd);
        if has_add {
            Some(IndirectBranchKind::RiscvAuipcJalr)
        } else {
            None
        }
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
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
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
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
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
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
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

    /// t72: A 5-entry sparse table with case values 1, 5, 10, 50, 100 is
    /// represented as a 100-slot table where most entries forward to the
    /// shared default. After refinement, only the 5 non-default cases
    /// remain, with case-values matching the slot indices `lo + i`.
    #[test]
    fn refine_cases_sparse_filters_default_entries() {
        let default_addr = 0xDEADu64;
        let target_a = 0xA000u64;
        let target_b = 0xB000u64;
        let target_c = 0xC000u64;
        let target_d = 0xD000u64;
        let target_e = 0xE000u64;

        let mut targets = vec![default_addr; 100];
        targets[1] = target_a;
        targets[5] = target_b;
        targets[10] = target_c;
        targets[50] = target_d;
        targets[99] = target_e;

        let table = JumpTable {
            base: 0x10000,
            entry_size: 8,
            num_entries: 100,
            endian: TableEndian::Little,
            kind: JumpTableKind::SparseAbsolute {
                lo: 0,
                default_addr,
            },
        };

        let cases: Vec<(SwitchCase, Vec<HirNode>, bool)> = (0..100)
            .map(|i| {
                let stmt = IrInsn::without_output(
                    IrOp::Copy,
                    smallvec![Varnode::constant(i as u64, 8)],
                    0x1000 + i as u64,
                );
                (SwitchCase::Value(i as u64), vec![HirNode::Statement(stmt)], false)
            })
            .collect();

        let refined = refine_cases(cases, &table, &targets);
        let values: Vec<u64> = refined
            .iter()
            .filter_map(|(c, _, _)| match c {
                SwitchCase::Value(v) => Some(*v),
                _ => None,
            })
            .collect();
        assert_eq!(
            values,
            vec![1, 5, 10, 50, 99],
            "sparse refinement should leave only non-default slots"
        );
    }

    /// t85: RIP-relative table — each 32-bit entry encodes a *signed* offset
    /// from the table base. Resolves negative deltas correctly via sign
    /// extension.
    #[test]
    fn read_jump_table_rip_relative_signed_offset() {
        let base: u64 = 0x100000;
        let target_lo: u64 = 0x0F8000;
        let target_hi: u64 = 0x108000;
        let off_lo = (target_lo as i64 - base as i64) as i32 as u32;
        let off_hi = (target_hi as i64 - base as i64) as i32 as u32;
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&off_lo.to_le_bytes());
        bytes.extend_from_slice(&off_hi.to_le_bytes());

        let section = SectionView {
            name: ".rodata",
            vaddr: base,
            data: &bytes,
            perms: SectionPerms::RO,
        };
        let table = JumpTable {
            base,
            entry_size: 4,
            num_entries: 2,
            endian: TableEndian::Little,
            kind: JumpTableKind::RipRelative,
        };
        let read = read_jump_table(&table, &section).expect("read should succeed");
        assert_eq!(
            read,
            vec![target_lo, target_hi],
            "RipRelative should sign-extend the 32-bit offset"
        );
    }

    /// t85: when a relocation list reports the slot's resolved address, the
    /// reader must prefer it over decoding the raw bytes (which may be
    /// zero in unrelocated PIE binaries).
    #[test]
    fn read_jump_table_uses_relocations_first() {
        let base: u64 = 0x200000;
        let bytes = vec![0u8; 16];
        let section = SectionView {
            name: ".rodata",
            vaddr: base,
            data: &bytes,
            perms: SectionPerms::RO,
        };
        let table = JumpTable {
            base,
            entry_size: 8,
            num_entries: 2,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        let relocs = vec![(base, 0xCAFEu64), (base + 8, 0xBEEFu64)];
        let read = read_jump_table_with_relocs(&table, &section, &relocs)
            .expect("read should succeed");
        assert_eq!(
            read,
            vec![0xCAFE, 0xBEEF],
            "relocation entries override raw byte decoding"
        );
    }

    /// t86: byte-sized table where each 1-byte slot indexes into a
    /// secondary table holding 4-byte absolute targets.
    #[test]
    fn read_jump_table_byte_indexed_secondary() {
        let primary_base: u64 = 0x10000;
        let secondary_base: u64 = 0x20000;
        let primary_bytes: Vec<u8> = vec![2, 0, 1, 2];
        let mut secondary_bytes = Vec::new();
        for t in [0xAAAAu32, 0xBBBB, 0xCCCC] {
            secondary_bytes.extend_from_slice(&t.to_le_bytes());
        }

        let primary = SectionView {
            name: ".rodata",
            vaddr: primary_base,
            data: &primary_bytes,
            perms: SectionPerms::RO,
        };
        let secondary = SectionView {
            name: ".rodata",
            vaddr: secondary_base,
            data: &secondary_bytes,
            perms: SectionPerms::RO,
        };
        let table = JumpTable {
            base: primary_base,
            entry_size: 1,
            num_entries: 4,
            endian: TableEndian::Little,
            kind: JumpTableKind::ByteIndexedSecondary {
                secondary_base,
                secondary_entry_size: 4,
            },
        };
        let read = read_jump_table_full(&table, &primary, &[], &[secondary])
            .expect("byte-indexed read should succeed");
        let addrs: Vec<u64> = read.into_iter().map(|(a, _)| a).collect();
        assert_eq!(
            addrs,
            vec![0xCCCC, 0xAAAA, 0xBBBB, 0xCCCC],
            "byte index → secondary table → absolute target"
        );
    }

    /// t86: ARM/Thumb table — entries with bit 0 set encode Thumb mode;
    /// the reader strips the bit and reports `TargetMode::Thumb`.
    #[test]
    fn read_jump_table_arm_thumb_strips_low_bit() {
        let base: u64 = 0x80000;
        let targets: Vec<u32> = vec![0x80100, 0x80201, 0x80300, 0x80401];
        let mut bytes = Vec::new();
        for t in &targets {
            bytes.extend_from_slice(&t.to_le_bytes());
        }
        let section = SectionView {
            name: ".text",
            vaddr: base,
            data: &bytes,
            perms: SectionPerms::RX,
        };
        let table = JumpTable {
            base,
            entry_size: 4,
            num_entries: 4,
            endian: TableEndian::Little,
            kind: JumpTableKind::ArmThumbAbsolute,
        };
        let read = read_jump_table_full(&table, &section, &[], &[])
            .expect("arm/thumb read should succeed");
        assert_eq!(
            read,
            vec![
                (0x80100, TargetMode::Default),
                (0x80200, TargetMode::Thumb),
                (0x80300, TargetMode::Default),
                (0x80400, TargetMode::Thumb),
            ],
            "low bit set → Thumb mode, target masks bit 0"
        );
    }

    /// t84: a 2-level dispatch — outer table at 0x1000 points at three
    /// targets, the middle one being 0x2000 which is itself the switch
    /// address of an inner table holding [0xA, 0xB]. After flattening, the
    /// outer table targets become [0x9, 0xA, 0xB, 0xC] (inner expanded
    /// in-place).
    #[test]
    fn flatten_nested_tables_inlines_inner_targets() {
        let outer = JumpTable {
            base: 0x10000,
            entry_size: 8,
            num_entries: 3,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        let inner = JumpTable {
            base: 0x20000,
            entry_size: 8,
            num_entries: 2,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        let outer_targets = vec![0x9, 0x2000, 0xC];
        let inner_targets = vec![0xA, 0xB];

        let mut tables = std::collections::BTreeMap::new();
        tables.insert(0x1000u64, (outer, outer_targets.clone()));
        tables.insert(0x2000u64, (inner, inner_targets.clone()));

        let flat = flatten_nested_tables(&tables, 3);
        let (out_table, out_targets) = &flat[&0x1000];
        assert_eq!(
            *out_targets,
            vec![0x9, 0xA, 0xB, 0xC],
            "inner targets should replace the inner switch_addr in the outer list"
        );
        assert_eq!(
            out_table.num_entries, 4,
            "num_entries reflects post-flatten length"
        );
    }

    /// t84: cycle protection — if outer table A points at inner B which
    /// points back at A, flattening must terminate without infinite
    /// recursion (the cycle slot is left in place).
    #[test]
    fn flatten_nested_tables_breaks_cycles() {
        let a = JumpTable {
            base: 0x10000,
            entry_size: 8,
            num_entries: 1,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        let b = JumpTable {
            base: 0x20000,
            entry_size: 8,
            num_entries: 1,
            endian: TableEndian::Little,
            kind: JumpTableKind::DenseAbsolute,
        };
        let mut tables = std::collections::BTreeMap::new();
        tables.insert(0x1000u64, (a, vec![0x2000]));
        tables.insert(0x2000u64, (b, vec![0x1000]));

        let _ = flatten_nested_tables(&tables, 3);
    }

    /// t87: with no explicit bounds check, the table size is bounded by
    /// (a) the offset to the next symbol and (b) the highest slot any
    /// xref points at. The smaller of the two wins.
    #[test]
    fn infer_num_entries_caps_to_min_of_xref_and_next_symbol() {
        let base = 0x10000;
        let entry_size = 8;

        let next_only = infer_num_entries_from_xrefs(base, Some(base + 64), &[], entry_size);
        assert_eq!(next_only, Some(8), "next symbol at +64 → 8 slots of size 8");

        let xref_only = infer_num_entries_from_xrefs(
            base,
            None,
            &[base, base + 8, base + 24],
            entry_size,
        );
        assert_eq!(
            xref_only,
            Some(4),
            "highest referenced slot is index 3 → 4 entries"
        );

        let both = infer_num_entries_from_xrefs(
            base,
            Some(base + 64),
            &[base, base + 8, base + 24],
            entry_size,
        );
        assert_eq!(both, Some(4), "min(8 from next, 4 from xref) = 4");

        let neither = infer_num_entries_from_xrefs(base, None, &[], entry_size);
        assert_eq!(neither, None, "no signal → None");
    }

    /// t72: SparseAbsolute with non-zero `lo` shifts the case values by the
    /// configured base, mirroring DenseWithOffset semantics.
    #[test]
    fn refine_cases_sparse_with_lo_offset() {
        let default_addr = 0x4444u64;

        let mut targets = vec![default_addr; 5];
        targets[0] = 0xA000;
        targets[2] = 0xB000;
        targets[4] = 0xC000;

        let table = JumpTable {
            base: 0x20000,
            entry_size: 8,
            num_entries: 5,
            endian: TableEndian::Little,
            kind: JumpTableKind::SparseAbsolute {
                lo: 10,
                default_addr,
            },
        };

        let cases: Vec<(SwitchCase, Vec<HirNode>, bool)> = (0..5)
            .map(|i| {
                let stmt = IrInsn::without_output(
                    IrOp::Copy,
                    smallvec![Varnode::constant(i as u64, 8)],
                    0x1000 + i as u64,
                );
                (SwitchCase::Value(i as u64), vec![HirNode::Statement(stmt)], false)
            })
            .collect();

        let refined = refine_cases(cases, &table, &targets);
        let values: Vec<u64> = refined
            .iter()
            .filter_map(|(c, _, _)| match c {
                SwitchCase::Value(v) => Some(*v),
                _ => None,
            })
            .collect();
        assert_eq!(values, vec![10, 12, 14], "lo=10 shifts case values by 10");
    }

    // ----- t116: per-arch jump-table classifier MVP scaffolding -----

    use unlace_ir::ArchId;

    /// ARM/Thumb TBB-style dispatch — a 1-byte LOAD (the table-of-offsets
    /// read) plus an INT_ADD to PC, terminated by BRANCHIND. The detector
    /// should classify this as [`IndirectBranchKind::ArmThumbTable`].
    #[test]
    fn arm_tbb_detector_recognizes_minimal_pattern() {
        let load_byte = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0x100, 1), // 1-byte loaded offset
            smallvec![Varnode::constant(0xAA, 8), Varnode::reg(0, 4)],
            0x1000,
        );
        let add_pc = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0x108, 8),
            smallvec![Varnode::reg(0, 8), Varnode::unique(0x100, 1)],
            0x1004,
        );
        let bi = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::unique(0x108, 8)], 0x1008);

        let kind = classify_indirect_branch(ArchId::Arm, &[load_byte, add_pc, bi]);
        assert_eq!(
            kind,
            Some(IndirectBranchKind::ArmThumbTable),
            "ARM TBB pattern (byte LOAD + INT_ADD + BRANCHIND) must classify"
        );
    }

    /// MIPS lui/lw/jr dispatch — a COPY of a constant (lui surrogate) plus
    /// a 4-byte LOAD (lw), terminated by BRANCHIND (jr).
    #[test]
    fn mips_lui_lw_jr_recognizes_pattern() {
        // Build LUI-equivalent: COPY of a constant into a register.
        let lui = IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0, 4),
            smallvec![Varnode::constant(0x40000000, 4)],
            0x2000,
        );
        // Build LW: 4-byte LOAD from (table_base + idx*4).
        let lw = IrInsn::with_output(
            IrOp::Load,
            Varnode::reg(4, 4),
            smallvec![Varnode::constant(0x42, 8), Varnode::reg(8, 4)],
            0x2004,
        );
        let jr = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(4, 4)], 0x2008);

        let kind = classify_indirect_branch(ArchId::Mips64, &[lui, lw, jr]);
        assert_eq!(
            kind,
            Some(IndirectBranchKind::MipsLuiLwJr),
            "MIPS lui+lw+jr pattern must classify"
        );
    }

    /// PPC TOC table — LOAD (lwz at @toc) followed by COPY (mtctr
    /// surrogate) followed by BRANCHIND (bctr).
    #[test]
    fn ppc_toc_recognizes_pattern() {
        let toc_load = IrInsn::with_output(
            IrOp::Load,
            Varnode::reg(3, 8),
            smallvec![Varnode::constant(0x42, 8), Varnode::reg(2, 8)], // r2 = TOC
            0x3000,
        );
        let mtctr = IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0x100, 8), // CTR-like sink
            smallvec![Varnode::reg(3, 8)],
            0x3004,
        );
        let bctr = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(0x100, 8)], 0x3008);

        let kind = classify_indirect_branch(ArchId::Ppc64, &[toc_load, mtctr, bctr]);
        assert_eq!(
            kind,
            Some(IndirectBranchKind::PpcTocTable),
            "PPC lwz@toc + mtctr + bctr pattern must classify"
        );
    }

    /// RISC-V auipc/addi/jalr — an INT_ADD that builds (PC + offset)
    /// followed by BRANCHIND (jalr).
    #[test]
    fn riscv_auipc_jalr_recognizes_pattern() {
        let auipc = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0x28, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(0x1000, 8)],
            0x4000,
        );
        let jalr = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(0x28, 8)], 0x4004);

        let kind = classify_indirect_branch(ArchId::RiscV64, &[auipc, jalr]);
        assert_eq!(
            kind,
            Some(IndirectBranchKind::RiscvAuipcJalr),
            "RISC-V auipc+jalr pattern must classify"
        );
    }

    /// Sanity: the generic LOAD→BRANCHIND match path returns Generic
    /// before any per-arch path is tried.
    #[test]
    fn generic_load_branchind_classifies_first() {
        let load = IrInsn::with_output(
            IrOp::Load,
            Varnode::reg(0, 8),
            smallvec![Varnode::constant(0xAA, 8), Varnode::reg(8, 8)],
            0x5000,
        );
        let bi = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(0, 8)], 0x5004);
        let kind = classify_indirect_branch(ArchId::X86_64, &[load, bi]);
        assert_eq!(kind, Some(IndirectBranchKind::Generic));
    }

    /// Empty / unrecognized streams must classify as `None` so the
    /// existing structurer fall-through path keeps owning them.
    #[test]
    fn unrecognized_returns_none() {
        let nop = IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0, 8),
            smallvec![Varnode::constant(0, 8)],
            0x6000,
        );
        let kind = classify_indirect_branch(ArchId::X86_64, &[nop]);
        assert!(kind.is_none(), "no BRANCHIND → no classification");
    }

    // ----- t138: per-arch jump-table dispatch round-trip tests -----
    //
    // Each test below exercises the per-arch classifier with a representative
    // raw IR sequence and asserts (a) the matching arch fires, and (b) an
    // unrelated arch does NOT classify the same pattern as something else.

    /// ARM/Thumb TBH (16-bit halfword table) — same shape as TBB but with a
    /// 2-byte LOAD; the classifier accepts both 1- and 2-byte loads.
    #[test]
    fn arm_thumb_classifies_tbh() {
        let load_half = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0x100, 2),
            smallvec![Varnode::constant(0xAA, 8), Varnode::reg(0, 4)],
            0x1000,
        );
        let add_pc = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::unique(0x108, 8),
            smallvec![Varnode::reg(0, 8), Varnode::unique(0x100, 2)],
            0x1004,
        );
        let bi = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::unique(0x108, 8)], 0x1008);
        let kind = classify_indirect_branch(ArchId::Arm, &[load_half, add_pc, bi]);
        assert_eq!(kind, Some(IndirectBranchKind::ArmThumbTable));
    }

    /// MIPS classifier should reject an x86-style LOAD→BRANCHIND when arch is
    /// declared MIPS64 — but it WILL fall through to the generic detector,
    /// which accepts it. This is the documented behavior: `Generic` is a
    /// valid outcome on every arch.
    #[test]
    fn mips_falls_through_to_generic_for_x86_pattern() {
        let load = IrInsn::with_output(
            IrOp::Load,
            Varnode::reg(0, 8),
            smallvec![Varnode::constant(0xAA, 8), Varnode::reg(8, 8)],
            0x2000,
        );
        let bi = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(0, 8)], 0x2004);
        let kind = classify_indirect_branch(ArchId::Mips64, &[load, bi]);
        assert_eq!(kind, Some(IndirectBranchKind::Generic));
    }

    /// PPC classifier should not match a RISC-V auipc+jalr pattern: the PPC
    /// arm requires Load+Copy+Branchind. RISC-V uses IntAdd+Branchind.
    #[test]
    fn ppc_does_not_classify_riscv_pattern() {
        let auipc = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0x28, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(0x1000, 8)],
            0x3000,
        );
        let jalr = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(0x28, 8)], 0x3004);
        // Declared PPC, but pattern shape is RISC-V: PPC detector returns None
        // and the generic LOAD→BRANCHIND path also returns None (no LOAD).
        let kind = classify_indirect_branch(ArchId::Ppc64, &[auipc, jalr]);
        assert!(kind.is_none(), "PPC detector should not claim RISC-V shape; got {:?}", kind);
    }

    /// RISC-V classifier should not match a MIPS lui+lw+jr triple as
    /// `RiscvAuipcJalr`. The arch-specific RISC-V arm requires IntAdd+
    /// Branchind, which this pattern doesn't have; the generic LOAD+
    /// BRANCHIND fall-through fires instead, returning `Generic`.
    #[test]
    fn riscv_arch_arm_does_not_claim_mips_pattern() {
        let lui = IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0, 4),
            smallvec![Varnode::constant(0x40000000, 4)],
            0x4000,
        );
        let lw = IrInsn::with_output(
            IrOp::Load,
            Varnode::reg(4, 4),
            smallvec![Varnode::constant(0x42, 8), Varnode::reg(8, 4)],
            0x4004,
        );
        let jr = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(4, 4)], 0x4008);
        // Arch-specific RISC-V detector returns None on this pattern (no IntAdd).
        assert!(arch::try_riscv_auipc_jalr(&[lui.clone(), lw.clone(), jr.clone()]).is_none());
        // Top-level dispatch falls through to `Generic` (LOAD → BRANCHIND).
        let kind = classify_indirect_branch(ArchId::RiscV64, &[lui, lw, jr]);
        assert_eq!(kind, Some(IndirectBranchKind::Generic));
    }

    /// AArch64 ADRP+ADD+BR — under the current detector set AArch64 is
    /// gated to `try_arm_thumb_table`, which expects the TBB/TBH shape
    /// (1- or 2-byte LOAD + IntAdd + BRANCHIND). A pure ADRP+ADD+BR
    /// (modeled as IntAdd + IntAdd + Branchind, no LOAD) won't match
    /// arch-specifically and won't match generic either. This test
    /// pins the documented behavior.
    #[test]
    fn aarch64_adrp_add_br_currently_unclassified() {
        let adrp = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0x10, 8),
            smallvec![Varnode::reg(0, 8), Varnode::constant(0x1000, 8)],
            0x5000,
        );
        let add = IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(0x18, 8),
            smallvec![Varnode::reg(0x10, 8), Varnode::constant(0x42, 8)],
            0x5004,
        );
        let br = IrInsn::without_output(IrOp::Branchind, smallvec![Varnode::reg(0x18, 8)], 0x5008);
        let kind = classify_indirect_branch(ArchId::AArch64, &[adrp, add, br]);
        assert!(
            kind.is_none(),
            "AArch64 ADRP+ADD+BR is documented as not yet classified; got {:?}",
            kind
        );
    }
}
