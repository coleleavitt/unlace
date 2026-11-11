//! pipeline: jump tables.

use super::*;

/// Convert the loader's `Section` list into the `unlace-struct`-flavoured
/// `SectionView` slice that `refine_switches_with_tables` /
/// `read_jump_table` expect. Skips zero-length sections.
pub fn build_jump_table_section_views(
    image: &unlace_loader::BinaryImage,
) -> Vec<unlace_struct::SectionView<'_>> {
    use unlace_loader::SectionFlags;
    let mut out = Vec::with_capacity(image.sections.len());
    for sec in &image.sections {
        if sec.data.is_empty() {
            continue;
        }
        let perms = if sec.flags.contains(SectionFlags::EXEC) {
            unlace_struct::SectionPerms::RX
        } else {
            unlace_struct::SectionPerms::RO
        };
        out.push(unlace_struct::SectionView {
            name: sec.name.as_str(),
            vaddr: sec.vaddr,
            data: &sec.data,
            perms,
        });
    }
    out
}

/// Drop the blocks no edge reaches. Runs after the last jump-table
/// resolution, when every block a dispatch targets already has its edge, so
/// only lifter padding and other genuinely dead blocks remain unreachable.
pub(crate) fn remove_unreachable_blocks_for_pipeline(
    ssa: &mut unlace_ir::ssa::SsaFunction,
    opts: &PassOptions,
) {
    if let Err(e) = run_instrumented(&UnreachableBlockElimPass, ssa, opts) {
        profiling::diagnostic(
            "warn",
            "unreachable-block elimination failed",
            [
                TraceField::text("function", ssa.function.name.clone()),
                TraceField::text("err", e.to_string()),
            ],
        );
    }
}

pub(super) fn resolve_jump_tables_for_pipeline(
    ssa: &mut unlace_ir::ssa::SsaFunction,
    image: &unlace_loader::BinaryImage,
    opts: &PassOptions,
) {
    let trace = tracing::enabled!(target: "unlace::jump_table", tracing::Level::DEBUG);
    if let Err(e) = run_instrumented(&IndirectJumpResolvePass, ssa, opts) {
        profiling::diagnostic(
            "warn",
            "jump-table candidate recovery failed",
            [
                TraceField::text("function", ssa.function.name.clone()),
                TraceField::text("err", e.to_string()),
            ],
        );
    }
    if trace {
        tracing::debug!(
            target: "unlace::jump_table",
            "after-candidate func={} tables={:?}",
            ssa.function.name, ssa.resolved_jump_tables
        );
    }
    resolve_jump_table_targets(ssa, image);
    if trace {
        tracing::debug!(
            target: "unlace::jump_table",
            "after-resolve func={} tables={:?}",
            ssa.function.name, ssa.resolved_jump_tables
        );
    }
    unlace_ir::ssa::rebuild_cfg(ssa);
    if trace {
        let branch_edges: Vec<_> = ssa
            .function
            .blocks
            .iter()
            .filter_map(|(&bid, block)| {
                block
                    .insns
                    .last()
                    .is_some_and(|insn| insn.op == IrOp::Branchind)
                    .then_some((bid, block.successors.clone()))
            })
            .collect();
        tracing::debug!(target: "unlace::jump_table", "branchind-successors={branch_edges:?}");
    }
}

/// Section-aware second phase of jump-table recovery: walks each candidate
/// recorded by [`unlace_passes::IndirectJumpResolvePass`], decodes the
/// concrete target addresses by reading the binary's read-only sections,
/// and stores the result back on `ssa.resolved_jump_tables`.
///
/// The pass alone cannot do this because it sees only the SSA function;
/// the bytes behind the table base live in the loader's section table.
/// Candidates whose base falls outside any section are left as
/// `num_entries == 0` (which `refine_switches_with_tables` then ignores
/// via its `validate_table_base` gate).
///
/// ## Follow-up: why `branches.elf` still reports `switch_statements=0`
///
/// `branches.c` contains a real `switch (x % 4) { case 0: …; case 1: …; }`
/// source construct, but GCC -O2 lowers it to a `lea` + `cmove`
/// branchless cmov-cascade rather than a table dispatch — there is *no*
/// jump table in `.rodata` for the candidate detector to find, and so no
/// `Branchind` for the new pass to anchor onto. Recovering this case
/// requires a *separate* idiom recognizer that walks the `cmov` chain in
/// IR and rebuilds the original switch; that work is intentionally
/// out-of-scope for the Batch 9 wiring slice and is queued as Batch 9
/// follow-up "cmov-cascade switch recovery". Until it lands, this
/// pipeline correctly emits zero recovered switches for `branches.elf`.
pub fn resolve_jump_table_targets(
    ssa: &mut unlace_ir::ssa::SsaFunction,
    image: &unlace_loader::BinaryImage,
) {
    use unlace_ir::ssa::JumpTableInfo;
    use unlace_struct::{JumpTable, JumpTableKind, SectionView, TableEndian, read_jump_table};

    if ssa.resolved_jump_tables.is_empty() {
        return;
    }
    let sections = build_jump_table_section_views(image);
    if sections.is_empty() {
        return;
    }

    let endian = match image.endian {
        unlace_loader::Endian::Little => TableEndian::Little,
        unlace_loader::Endian::Big => TableEndian::Big,
    };

    // Without a bound from the dispatch site, probe at most this many slots
    // and keep the prefix that points into this function's code.
    const MAX_PROBE_ENTRIES: u32 = 64;

    let code_range = function_code_range(&ssa.function);
    let mut updated = std::collections::BTreeMap::new();
    let mut successor_updates: Vec<(u64, Vec<u64>)> = Vec::new();
    for (&branch_addr, cand) in &ssa.resolved_jump_tables {
        if !cand.targets.is_empty() {
            // Resolved and wired by an earlier run. Passes may since have
            // removed the leading instructions of target blocks, so the
            // address lookup would no longer find them.
            updated.insert(branch_addr, cand.clone());
            continue;
        }
        let entry_size = cand.entry_size;
        if !matches!(entry_size, 4 | 8) {
            // Compressed-offset / byte-secondary tables aren't handled by
            // this initial pass; pass through unresolved.
            updated.insert(branch_addr, cand.clone());
            continue;
        }
        let Some(section): Option<&SectionView<'_>> = sections.iter().find(|s| {
            s.contains_addr(cand.base)
                && (s.name == ".rodata"
                    || s.name == ".data.rel.ro"
                    || s.perms == unlace_struct::SectionPerms::RO)
        }) else {
            updated.insert(branch_addr, cand.clone());
            continue;
        };
        // Determine the maximum entry count that fits inside the section.
        let bytes_left = section
            .data
            .len()
            .saturating_sub((cand.base.saturating_sub(section.vaddr)) as usize);
        let fit_entries = (bytes_left / entry_size as usize) as u32;
        let probe_entries = match cand.bound {
            Some(bound) if bound <= fit_entries => bound,
            Some(_) => 0,
            None => fit_entries.min(MAX_PROBE_ENTRIES),
        };
        if probe_entries == 0 {
            updated.insert(branch_addr, cand.clone());
            continue;
        }
        // Try multiple table kinds — GCC PIC uses RipRelative (4-byte
        // signed offsets from the table base) while non-PIC uses DenseAbsolute.
        let kinds_to_try: &[JumpTableKind] = if entry_size == 4 {
            &[JumpTableKind::RipRelative, JumpTableKind::DenseAbsolute]
        } else {
            &[JumpTableKind::DenseAbsolute, JumpTableKind::RipRelative]
        };
        let mut resolved = false;
        for &kind in kinds_to_try {
            let table = JumpTable {
                base: cand.base,
                entry_size,
                num_entries: probe_entries,
                endian,
                kind,
            };
            let Some(targets) = read_jump_table(&table, section) else {
                continue;
            };
            let targets = if cand.bound.is_some() {
                // A proven bound covers every slot: one slot that is not
                // code means this entry layout is the wrong one.
                if !targets
                    .iter()
                    .all(|&target| is_executable_target(target, &sections))
                {
                    continue;
                }
                targets
            } else {
                // Past the real end the probe reads the next table or
                // unrelated data; stop at the first slot that leaves this
                // function's code.
                targets
                    .into_iter()
                    .take_while(|&target| {
                        code_range.contains(&target) && is_executable_target(target, &sections)
                    })
                    .collect()
            };
            if targets.len() >= 2 {
                updated.insert(
                    branch_addr,
                    JumpTableInfo {
                        base: cand.base,
                        entry_size,
                        num_entries: targets.len() as u32,
                        bound: cand.bound,
                        endian_little: matches!(endian, TableEndian::Little),
                        targets: targets.clone(),
                        target_blocks: Vec::new(),
                    },
                );
                successor_updates.push((branch_addr, targets));
                resolved = true;
                break;
            }
        }
        if !resolved {
            updated.insert(branch_addr, cand.clone());
        }
    }

    ssa.resolved_jump_tables = updated;
    for (branch_addr, targets) in successor_updates {
        if let Some(blocks) = install_jump_table_successors(ssa, branch_addr, &targets)
            && let Some(table) = ssa.resolved_jump_tables.get_mut(&branch_addr)
        {
            table.target_blocks = blocks;
        }
    }
}

/// Addresses from the first to the last instruction of `function`.
pub(super) fn function_code_range(function: &Function) -> std::ops::RangeInclusive<u64> {
    let addrs = || {
        function
            .blocks
            .values()
            .flat_map(|block| block.insns.iter().map(|insn| insn.addr))
    };
    let lo = addrs().min().unwrap_or(function.addr);
    let hi = addrs().max().unwrap_or(function.addr);
    lo..=hi
}

pub(super) fn is_executable_target(
    target: u64,
    sections: &[unlace_struct::SectionView<'_>],
) -> bool {
    sections.iter().any(|section| {
        section.contains_addr(target) && section.perms == unlace_struct::SectionPerms::RX
    })
}

/// Point the dispatch block at the blocks its table targets. Returns the
/// block of every table slot when each slot has one.
pub(super) fn install_jump_table_successors(
    ssa: &mut unlace_ir::ssa::SsaFunction,
    branch_addr: u64,
    targets: &[u64],
) -> Option<Vec<BlockId>> {
    let branch_block = block_containing_branchind(&ssa.function, branch_addr)?;
    let current = ssa
        .function
        .blocks
        .get(&branch_block)
        .map(|block| block.successors.clone())
        .unwrap_or_default();

    let mut slot_blocks = Vec::with_capacity(targets.len());
    let mut successors = smallvec::SmallVec::<[BlockId; 2]>::new();
    for &target in targets {
        // Tail duplication can leave several blocks starting at one
        // address; keep the copy the dispatch already reaches.
        let target_block = current
            .iter()
            .copied()
            .find(|&bid| block_starts_at(&ssa.function, bid, target))
            .or_else(|| block_starting_at(&ssa.function, target));
        let Some(target_block) = target_block else {
            continue;
        };
        slot_blocks.push(target_block);
        if !successors.contains(&target_block) {
            successors.push(target_block);
        }
    }
    if successors.len() < 2 {
        return None;
    }
    if let Some(block) = ssa.function.blocks.get_mut(&branch_block) {
        block.successors = successors;
    }
    seed_jump_table_target_return_ssa(ssa, targets);
    (slot_blocks.len() == targets.len()).then_some(slot_blocks)
}

pub(super) fn block_starts_at(func: &Function, bid: BlockId, addr: u64) -> bool {
    func.blocks
        .get(&bid)
        .and_then(|block| block.insns.first())
        .is_some_and(|insn| insn.addr == addr)
}

pub(super) fn block_containing_branchind(func: &Function, branch_addr: u64) -> Option<BlockId> {
    func.blocks.iter().find_map(|(&bid, block)| {
        block
            .insns
            .iter()
            .any(|insn| insn.addr == branch_addr && insn.op == IrOp::Branchind)
            .then_some(bid)
    })
}

pub(super) fn seed_jump_table_target_return_ssa(
    ssa: &mut unlace_ir::ssa::SsaFunction,
    targets: &[u64],
) {
    for &target in targets {
        let Some(bid) = block_starting_at(&ssa.function, target) else {
            continue;
        };
        let Some(block) = ssa.function.blocks.get(&bid) else {
            continue;
        };
        let Some((ret_idx, ret_insn)) = block
            .insns
            .iter()
            .enumerate()
            .rev()
            .find(|(_, insn)| insn.op == IrOp::Return)
        else {
            continue;
        };
        let Some(return_vn) = ret_insn.inputs.first().copied() else {
            continue;
        };
        let Some((def_idx, def_output)) = block
            .insns
            .iter()
            .enumerate()
            .take(ret_idx)
            .rev()
            .find_map(|(idx, insn)| {
                insn.output
                    .filter(|output| *output == return_vn)
                    .map(|output| (idx, output))
            })
        else {
            continue;
        };
        let sv = ssa
            .var_map
            .get(&(bid, def_idx, unlace_ir::ssa::VarnodeSlot::Output))
            .copied()
            .unwrap_or(SsaVarnode {
                base: def_output,
                version: 0,
            });
        ssa.var_map
            .insert((bid, def_idx, unlace_ir::ssa::VarnodeSlot::Output), sv);
        ssa.var_map
            .insert((bid, ret_idx, unlace_ir::ssa::VarnodeSlot::Input(0)), sv);
    }
}

pub(super) fn block_starting_at(func: &Function, target_addr: u64) -> Option<BlockId> {
    func.blocks.iter().find_map(|(&bid, block)| {
        block
            .insns
            .first()
            .is_some_and(|insn| insn.addr == target_addr)
            .then_some(bid)
    })
}

/// Bridge the `unlace-ir` [`JumpTableInfo`](unlace_ir::ssa::JumpTableInfo)
/// map (keyed by branch address) into the
/// `unlace-struct::switch_recovery::JumpTable` shape that
/// `refine_switches_with_tables` consumes. Only *resolved* candidates
/// (`num_entries > 0`, non-empty `targets`) are bridged; bare candidates
/// are dropped since the refiner has nothing actionable to do with them.
pub fn jump_table_info_map_to_struct(
    info: &BTreeMap<u64, unlace_ir::ssa::JumpTableInfo>,
) -> BTreeMap<u64, (unlace_struct::JumpTable, Vec<u64>)> {
    use unlace_struct::{JumpTable, JumpTableKind, TableEndian};
    let mut out = BTreeMap::new();
    for (&branch_addr, cand) in info {
        if cand.num_entries == 0 || cand.targets.is_empty() {
            continue;
        }
        let table = JumpTable {
            base: cand.base,
            entry_size: cand.entry_size,
            num_entries: cand.num_entries,
            endian: if cand.endian_little {
                TableEndian::Little
            } else {
                TableEndian::Big
            },
            kind: JumpTableKind::DenseAbsolute,
        };
        out.insert(branch_addr, (table, cand.targets.clone()));
    }
    out
}
