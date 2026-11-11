//! pipeline: lift.

use super::*;

pub fn lift_function(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
) -> Result<Function> {
    let text = text_section(image).context("binary has no text section (.text / __text)")?;

    let (func_start, func_end) = function_bounds(entry, text);

    if func_start < text.vaddr || func_start >= text.vaddr + text.size {
        bail!(
            "function '{}' at {:#x} is outside .text ({:#x}..{:#x})",
            entry.name,
            func_start,
            text.vaddr,
            text.vaddr + text.size,
        );
    }

    let offset_start = (func_start - text.vaddr) as usize;
    let offset_end = ((func_end - text.vaddr) as usize).min(text.data.len());
    let code = &text.data[offset_start..offset_end];

    profiling::event_fields(
        "pipeline.lift.start",
        [
            TraceField::text("function", entry.name.clone()),
            TraceField::addr("addr", func_start),
            TraceField::bytes("size", code.len() as u64),
        ],
    );

    // When the symbol table gave us an exact size, `code` is precisely the
    // function body and the early-stop padding heuristic must NOT fire inside
    // it (doing so truncates a function that merely contains an interior
    // zero byte, e.g. ARCompact `arc_branch` whose tail insn is `e0 7f 00 00`).
    let has_known_size = entry.size > 0;
    let lifted_insns = lift_instructions(lifter, code, func_start, has_known_size)?;
    // Exception handlers are entered by the unwinder, not by a branch: their
    // pads and try starts become block leaders so the dispatch edges below
    // can attach to them.
    let pads = landing_pads(image, entry.addr);
    let eh_leaders: Vec<u64> = pads
        .iter()
        .flat_map(|pad| [pad.try_start, pad.addr])
        .collect();
    let function = build_function_from_insns(&entry.name, func_start, &lifted_insns, &eh_leaders);
    // Jump-table targets are block leaders that no direct branch names, and
    // the dispatch block's successors. A target that follows a `ret` plus
    // alignment padding would otherwise sit inside the padding's block, and
    // `merge_linear_blocks` would fold it there. Resolve the tables once,
    // rebuild with the targets as leaders, and wire the dispatch edges.
    let tables = resolve_function_jump_tables(image, &function);
    let mut function = if tables.is_empty() {
        function
    } else {
        let mut leaders: Vec<u64> = tables.values().flatten().copied().collect();
        leaders.extend_from_slice(&eh_leaders);
        let mut function =
            build_function_from_insns(&entry.name, func_start, &lifted_insns, &leaders);
        install_dispatch_successors(&mut function, &tables);
        function
    };
    if let Some(data_regs) = unlace_ir::eh::landing_pad_data_regs(image.arch)
        && !pads.is_empty()
    {
        unlace_struct::install_eh_dispatch(&mut function, &pads, data_regs);
    }
    unlace_passes::trim_syscall_args(&mut function);
    Ok(function)
}

/// Jump tables of `function` resolved against the image, keyed by the
/// `Branchind` address. Unresolved candidates are omitted.
pub(super) fn resolve_function_jump_tables(
    image: &BinaryImage,
    function: &Function,
) -> BTreeMap<u64, Vec<u64>> {
    let has_branchind = function
        .blocks
        .values()
        .any(|block| block.insns.iter().any(|insn| insn.op == IrOp::Branchind));
    if !has_branchind {
        return BTreeMap::new();
    }
    let mut ssa = unlace_ir::ssa::build_ssa(function.clone());
    ssa.resolved_jump_tables = unlace_passes::collect_jump_table_candidates(&ssa);
    resolve_jump_table_targets(&mut ssa, image);
    ssa.resolved_jump_tables
        .into_iter()
        .filter(|(_, table)| !table.targets.is_empty())
        .map(|(branch_addr, table)| (branch_addr, table.targets))
        .collect()
}

/// Point each table dispatch block at the blocks its table targets.
pub(super) fn install_dispatch_successors(
    function: &mut Function,
    tables: &BTreeMap<u64, Vec<u64>>,
) {
    let block_at: BTreeMap<u64, BlockId> = function
        .blocks
        .iter()
        .filter_map(|(&bid, block)| block.insns.first().map(|insn| (insn.addr, bid)))
        .collect();
    for (branch_addr, targets) in tables {
        let Some(dispatch) = block_containing_branchind(function, *branch_addr) else {
            continue;
        };
        let mut successors = smallvec::SmallVec::<[BlockId; 2]>::new();
        for target in targets {
            if let Some(&bid) = block_at.get(target)
                && !successors.contains(&bid)
            {
                successors.push(bid);
            }
        }
        if let Some(block) = function.blocks.get_mut(&dispatch) {
            block.successors = successors;
        }
    }
}

pub(super) fn function_bounds(entry: &FunctionEntry, text: &unlace_loader::Section) -> (u64, u64) {
    let start = entry.addr;
    let end = if entry.size > 0 {
        start + entry.size
    } else {
        text.vaddr + text.size
    };
    (start, end)
}

pub(super) struct LiftedInsnRecord {
    pub(super) addr: u64,
    #[allow(dead_code)]
    pub(super) len: usize,
    pub(super) ir_ops: Vec<unlace_ir::IrInsn>,
    pub(super) is_terminator: bool,
}

pub(super) fn lift_instructions(
    lifter: &dyn Lifter,
    code: &[u8],
    base_addr: u64,
    has_known_size: bool,
) -> Result<Vec<LiftedInsnRecord>> {
    let mut records = Vec::new();
    let mut next_unique_base = 0u64;
    let mut offset = 0usize;
    let code_end = base_addr.saturating_add(code.len() as u64);
    let trace_lift_bounds = tracing::enabled!(target: "unlace::lift_bounds", tracing::Level::DEBUG);
    if trace_lift_bounds {
        tracing::debug!(
            target: "unlace::lift_bounds",
            "begin func={base_addr:#x} len={} end={code_end:#x} known_size={has_known_size}",
            code.len()
        );
    }

    while offset < code.len() {
        let addr = base_addr + offset as u64;
        let remaining = &code[offset..];

        match lifter.lift_insn(remaining, addr) {
            Ok(lifted) => {
                let mut ir_ops = lifted.ir_ops;
                next_unique_base += rebase_instruction_uniques(&mut ir_ops, next_unique_base);
                let is_term = ir_ops.iter().any(|op| is_terminator(op.op));
                let no_fallthrough = ir_ops.iter().any(|op| is_no_fallthrough_terminator(op.op));
                let len = lifted.len;
                records.push(LiftedInsnRecord {
                    addr,
                    len,
                    ir_ops,
                    is_terminator: is_term,
                });
                let next_offset = offset.saturating_add(len);
                debug_assert!(
                    len > 0,
                    "lifter returned zero-length insn at {addr:#x}; would loop forever"
                );
                let remaining_after = &code[next_offset..];
                let want_stop = no_fallthrough
                    && should_stop_at_no_fallthrough_boundary(
                        lifter.arch(),
                        &records.last().expect("just pushed").ir_ops,
                        base_addr,
                        code_end,
                        remaining_after,
                        has_known_size,
                    );
                if trace_lift_bounds && no_fallthrough {
                    tracing::debug!(
                        target: "unlace::lift_bounds",
                        "no-fallthrough func={base_addr:#x} insn={addr:#x} next={:#x} remaining={} known_size={has_known_size} all_padding={} stop={want_stop}",
                        base_addr.saturating_add(next_offset as u64),
                        remaining_after.len(),
                        is_padding_tail(lifter.arch(), remaining_after),
                    );
                }
                if want_stop {
                    if trace_lift_bounds {
                        tracing::debug!(
                            target: "unlace::lift_bounds",
                            "stop func={base_addr:#x} at insn={addr:#x} next={:#x} end={code_end:#x}",
                            base_addr.saturating_add(next_offset as u64)
                        );
                    }
                    break;
                }
                offset = next_offset;
            }
            Err(e) => {
                if is_padding_tail(lifter.arch(), remaining) {
                    break;
                }
                profiling::diagnostic(
                    "warn",
                    "lift failed; emitting Unimplemented and continuing",
                    [
                        TraceField::addr("addr", addr),
                        TraceField::text("err", e.to_string()),
                    ],
                );
                // Emit an Unimplemented marker so the CFG continues past this
                // instruction. Fixed-width ISAs must stay aligned after a
                // decode failure; byte stepping turns one bad AArch64 word
                // into a long stream of fake shifted opcodes.
                let advance = decode_error_advance(lifter.arch(), remaining.len());
                let marker = unlace_ir::IrInsn::without_output(
                    IrOp::Unimplemented,
                    smallvec::smallvec![],
                    addr,
                );
                records.push(LiftedInsnRecord {
                    addr,
                    len: advance,
                    ir_ops: vec![marker],
                    is_terminator: false,
                });
                offset += advance;
            }
        }
    }

    Ok(records)
}

/// Top-level early-stop decision after a no-fallthrough terminator, layering
/// the known-symbol-size policy over the padding heuristic.
///
/// Decision table (only reached when the current insn has no fallthrough):
///
/// | known_size | remainder is all padding | result |
/// |------------|--------------------------|--------|
/// | false      | (delegates to heuristic) | `should_stop_after_no_fallthrough` |
/// | true       | yes                      | **stop** — overshooting-symbol guard: the claimed extent ran into a literal pool / next function's alignment, so honour the padding tail |
/// | true       | no                       | **continue** — the remaining bytes are interior code of THIS function (e.g. ARCompact `arc_branch` tail `e0 7f 00 00`); a mere leading zero is not padding |
///
/// The `known_size && all-padding` carve-out keeps the old defensive behaviour
/// for binaries whose `st_size` overshoots the real code, while the
/// `known_size && !all-padding` branch fixes the arc_branch truncation.
pub(super) fn should_stop_at_no_fallthrough_boundary(
    arch: ArchId,
    ir_ops: &[unlace_ir::IrInsn],
    func_start: u64,
    func_end: u64,
    remaining: &[u8],
    has_known_size: bool,
) -> bool {
    if !has_known_size {
        return should_stop_after_no_fallthrough(arch, ir_ops, func_start, func_end, remaining);
    }
    // Known size: only stop if EVERYTHING left is padding (symbol overshoot).
    // An interior padding *prefix* is live code and must not truncate.
    remaining.is_empty() || is_padding_tail(arch, remaining)
}

/// Decide whether to stop lifting after a no-fallthrough terminator (`jmp`,
/// `ret`, `branchind`) when the bytes that follow *look like* inter-function
/// alignment padding.
///
/// CONTRACT: callers must only invoke this for size-*unknown* functions (or
/// once a known-size slice is exhausted). For a function with an exact symbol
/// size the remaining bytes are still part of the function body, so a leading
/// zero is interior data, not padding — see the `inside_known_function` guard
/// in [`lift_instructions`]. `func_end` is the (exclusive) end of the lifted
/// code slice and must not be below `func_start`.
pub(super) fn should_stop_after_no_fallthrough(
    arch: ArchId,
    ir_ops: &[unlace_ir::IrInsn],
    func_start: u64,
    func_end: u64,
    remaining: &[u8],
) -> bool {
    debug_assert!(
        func_end >= func_start,
        "func_end {func_end:#x} below func_start {func_start:#x}"
    );
    if !is_padding_prefix(arch, remaining) {
        return false;
    }
    if ir_ops.iter().any(|op| op.op == IrOp::Return) {
        return true;
    }
    if ir_ops.iter().any(|op| {
        op.op == IrOp::Branch
            && op.inputs.first().is_some_and(|target| {
                target.space == SpaceId::Const
                    && target.offset >= func_start
                    && target.offset < func_end
            })
    }) {
        return false;
    }
    true
}

pub(super) fn rebase_instruction_uniques(ir_ops: &mut [unlace_ir::IrInsn], base: u64) -> u64 {
    let span = ir_ops
        .iter()
        .flat_map(unique_offsets_in_insn)
        .max()
        .map(|max| max.saturating_add(1))
        .unwrap_or(0);
    if base == 0 || span == 0 {
        return span;
    }

    for insn in ir_ops {
        if let Some(output) = insn.output.as_mut() {
            rebase_unique_varnode(output, base);
        }
        for input in &mut insn.inputs {
            rebase_unique_varnode(input, base);
        }
    }
    span
}

pub(super) fn unique_offsets_in_insn(insn: &unlace_ir::IrInsn) -> impl Iterator<Item = u64> + '_ {
    insn.output
        .iter()
        .chain(insn.inputs.iter())
        .filter_map(|vn| (vn.space == SpaceId::Unique).then_some(vn.offset))
}

pub(super) fn rebase_unique_varnode(vn: &mut unlace_ir::Varnode, base: u64) {
    if vn.space == SpaceId::Unique {
        vn.offset = vn.offset.saturating_add(base);
    }
}

pub(super) fn decode_error_advance(arch: ArchId, remaining: usize) -> usize {
    let width = match arch {
        ArchId::AArch64 | ArchId::Mips | ArchId::Mips64 | ArchId::Ppc | ArchId::Ppc64 => 4,
        ArchId::Arc | ArchId::RiscV64 | ArchId::V850 => 2,
        _ => 1,
    };
    width.min(remaining).max(1)
}

pub(super) fn is_terminator(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Branch | IrOp::Cbranch | IrOp::Branchind | IrOp::Return
    )
}

pub(super) fn is_no_fallthrough_terminator(op: IrOp) -> bool {
    matches!(op, IrOp::Branch | IrOp::Branchind | IrOp::Return)
}

pub(super) fn is_padding_tail(arch: ArchId, bytes: &[u8]) -> bool {
    !bytes.is_empty() && bytes.iter().all(|byte| is_padding_byte(arch, *byte))
}

pub(super) fn is_padding_prefix(arch: ArchId, bytes: &[u8]) -> bool {
    bytes
        .first()
        .is_some_and(|byte| is_padding_byte(arch, *byte))
}

pub(super) fn is_padding_byte(arch: ArchId, byte: u8) -> bool {
    match arch {
        ArchId::X86 | ArchId::X86_64 => matches!(byte, 0x00 | 0x90 | 0xcc),
        ArchId::AArch64
        | ArchId::Mips
        | ArchId::Mips64
        | ArchId::Ppc
        | ArchId::Ppc64
        | ArchId::Arc
        | ArchId::V850
        | ArchId::RiscV64 => byte == 0x00,
        _ => false,
    }
}

pub(super) fn build_function_from_insns(
    name: &str,
    entry_addr: u64,
    insns: &[LiftedInsnRecord],
    extra_leaders: &[u64],
) -> Function {
    if insns.is_empty() {
        return Function::new(name, BlockId(0), entry_addr);
    }

    let trace_cfg = cfg_build_trace_enabled();
    if trace_cfg {
        tracing::debug!(
            target: "unlace::cfg_build",
            "begin func={name} entry={entry_addr:#x} insns={}",
            insns.len()
        );
    }

    let insn_addr_set: BTreeSet<u64> = insns.iter().map(|rec| rec.addr).collect();
    let mut block_starts: BTreeMap<u64, u32> = BTreeMap::new();
    block_starts.insert(entry_addr, 0);
    for &leader in extra_leaders {
        if insn_addr_set.contains(&leader) {
            block_starts.entry(leader).or_insert(0);
        }
    }

    for (i, rec) in insns.iter().enumerate() {
        if rec.is_terminator {
            if let Some(next) = insns.get(i + 1) {
                block_starts.entry(next.addr).or_insert(0);
            }

            for ir_op in &rec.ir_ops {
                if matches!(ir_op.op, IrOp::Branch | IrOp::Cbranch)
                    && let Some(target) = ir_op.inputs.first()
                    && target.space == unlace_ir::SpaceId::Const
                {
                    let in_set = insn_addr_set.contains(&target.offset);
                    if trace_cfg {
                        tracing::debug!(
                            target: "unlace::cfg_build",
                            "leader-scan insn={:#x} op={:?} target={:#x} in_insn_set={in_set}{}",
                            rec.addr,
                            ir_op.op,
                            target.offset,
                            if in_set {
                                ""
                            } else {
                                "  <<< UNRESOLVED branch target"
                            }
                        );
                    }
                    if in_set {
                        block_starts.entry(target.offset).or_insert(0);
                    }
                }
            }
        }
    }

    let sorted_addrs: Vec<u64> = block_starts.keys().copied().collect();
    for (idx, addr) in sorted_addrs.iter().enumerate() {
        block_starts.insert(*addr, idx as u32);
    }

    let insn_addrs: Vec<u64> = insns.iter().map(|r| r.addr).collect();

    let mut function = Function::new(name, BlockId(0), entry_addr);

    for (block_idx, &block_addr) in sorted_addrs.iter().enumerate() {
        let bid = BlockId(block_idx as u32);
        let mut bb = BasicBlock::new(bid);

        let start_pos = match insn_addrs.binary_search(&block_addr) {
            Ok(pos) => pos,
            Err(pos) => pos,
        };

        for rec in &insns[start_pos..] {
            if rec.addr != block_addr
                && block_starts.contains_key(&rec.addr)
                && block_starts[&rec.addr] != block_idx as u32
            {
                let next_bid = BlockId(block_starts[&rec.addr]);
                if !bb.successors.contains(&next_bid) {
                    bb.successors.push(next_bid);
                }
                break;
            }

            bb.insns.extend_from_slice(&rec.ir_ops);

            if rec.is_terminator {
                for ir_op in &rec.ir_ops {
                    match ir_op.op {
                        IrOp::Branch => {
                            if let Some(target) = ir_op.inputs.first()
                                && target.space == unlace_ir::SpaceId::Const
                                && let Some(&tid) = block_starts.get(&target.offset)
                            {
                                let target_bid = BlockId(tid);
                                if !bb.successors.contains(&target_bid) {
                                    bb.successors.push(target_bid);
                                }
                            }
                        }
                        IrOp::Cbranch => {
                            if let Some(target) = ir_op.inputs.first()
                                && target.space == unlace_ir::SpaceId::Const
                            {
                                if let Some(&tid) = block_starts.get(&target.offset) {
                                    let target_bid = BlockId(tid);
                                    if !bb.successors.contains(&target_bid) {
                                        bb.successors.push(target_bid);
                                    }
                                } else if trace_cfg {
                                    tracing::debug!(
                                        target: "unlace::cfg_build",
                                        "BB_{block_idx} cbranch insn={:#x} TAKEN target={:#x} has NO block leader  <<< edge dropped",
                                        rec.addr, target.offset
                                    );
                                }
                            }
                            if let Some(next) = insns.get(
                                start_pos
                                    + 1
                                    + insns[start_pos..]
                                        .iter()
                                        .position(|r| std::ptr::eq(r, rec))
                                        .unwrap_or(0),
                            ) {
                                if let Some(&fid) = block_starts.get(&next.addr) {
                                    let fall_bid = BlockId(fid);
                                    if !bb.successors.contains(&fall_bid) {
                                        bb.successors.push(fall_bid);
                                    }
                                } else if trace_cfg {
                                    tracing::debug!(
                                        target: "unlace::cfg_build",
                                        "BB_{block_idx} cbranch insn={:#x} FALLTHROUGH next={:#x} has NO block leader  <<< edge dropped",
                                        rec.addr, next.addr
                                    );
                                }
                            }
                        }
                        _ => {}
                    }
                }

                break;
            }
        }

        if trace_cfg {
            let last_op = bb.insns.last().map(|i| i.op);
            tracing::debug!(
                target: "unlace::cfg_build",
                "built BB_{block_idx} addr={block_addr:#x} insns={} last_op={last_op:?} successors={:?}",
                bb.insns.len(),
                bb.successors
            );
        }

        function.insert_block(bb);
    }

    if trace_cfg {
        tracing::debug!(
            target: "unlace::cfg_build",
            "done func={name} blocks={} leaders={}",
            function.blocks.len(),
            block_starts.len()
        );
    }

    function
}

pub(super) fn cfg_build_trace_enabled() -> bool {
    tracing::enabled!(target: "unlace::cfg_build", tracing::Level::DEBUG)
}
