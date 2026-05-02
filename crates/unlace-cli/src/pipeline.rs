use std::collections::BTreeMap;
use std::collections::BTreeSet;
use std::time::{Duration, Instant};

use anyhow::{Context, Result, bail};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{ArchId, BasicBlock, BlockId, Function, IrOp, Lifter};
use unlace_loader::{BinaryImage, DwarfInfo, Section, SymbolKind};
use unlace_passes::{
    CallingConventionDetectPass, ConditionSimplifyPass, ConstantFoldPass, CopyPropagationPass,
    CppVtablePass, CsePass, DeadCodeElimPass, DeadFlagElimPass, DeadStoreElimPass,
    DivisionIdiomPass, ExpressionTreePass, GlobalCopyPropPass, GvnPass, IdiomRecognitionPass,
    ModuloIdiomPass, ParamInferPass, Pass, PrologueElimPass, ReturnTypeInferPass, SccpPass,
    StructFieldDetectPass, VariableMergePass, run_to_fixedpoint,
};

use crate::args::EmitFormat;

const IR_NODE_WARN_THRESHOLD: usize = 100_000;

/// Find the executable text section regardless of binary format.
/// ELF uses `.text`, Mach-O uses `__text`.
fn text_section(image: &BinaryImage) -> Option<&Section> {
    image
        .section_by_name(".text")
        .or_else(|| image.section_by_name("__text"))
}

#[derive(Clone, Debug)]
pub struct FunctionEntry {
    pub name: String,
    pub addr: u64,
    pub size: u64,
}

pub fn discover_functions(image: &BinaryImage, filter: Option<&str>) -> Result<Vec<FunctionEntry>> {
    let permissive_symbol_sizes = matches!(
        image.arch,
        ArchId::Ppc | ArchId::Ppc64 | ArchId::V850 | ArchId::Arc
    );
    let text_range = image.section_by_name(".text").map(|text| {
        let start = text.vaddr;
        let end = start.saturating_add(text.data.len() as u64);
        start..end
    });
    let mut funcs: Vec<FunctionEntry> = image
        .symbols
        .values()
        .filter(|sym| {
            let text_symbol = permissive_symbol_sizes
                && !sym.name.is_empty()
                && !sym.name.starts_with('.')
                && text_range
                    .as_ref()
                    .is_some_and(|range| range.contains(&sym.addr));
            (sym.kind == SymbolKind::Function || text_symbol)
                && (sym.size > 0 || permissive_symbol_sizes)
        })
        .map(|sym| FunctionEntry {
            name: sym.name.clone(),
            addr: sym.addr,
            size: sym.size,
        })
        .collect();
    let had_symbol_funcs = !funcs.is_empty();

    if permissive_symbol_sizes {
        infer_arch_fixture_sizes(image, &mut funcs);
    }

    if funcs.is_empty() {
        tracing::info!("no function symbols found; attempting prologue scan");
        funcs = scan_for_prologues(image);
    }

    if funcs.is_empty() {
        tracing::info!("prologue scan found nothing; falling back to entry point");
        funcs.push(FunctionEntry {
            name: "entry".into(),
            addr: image.entry,
            size: 0,
        });
    }

    if had_symbol_funcs && matches!(image.arch, ArchId::X86 | ArchId::X86_64) {
        let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();
        for candidate in scan_for_prologues(image) {
            if known.insert(candidate.addr) {
                funcs.push(candidate);
            }
        }
    }

    if permissive_symbol_sizes {
        add_symbol_gap_functions(image, &mut funcs);
        add_post_entry_functions(image, &mut funcs);
    }

    if !(had_symbol_funcs && permissive_symbol_sizes) {
        funcs = recursive_descent_discovery(image, funcs);
    }
    if permissive_symbol_sizes {
        infer_arch_fixture_sizes(image, &mut funcs);
    }

    if let Some(filter) = filter {
        let target = parse_function_filter(filter);
        funcs.retain(|f| match &target {
            FunctionTarget::Name(name) => f.name == *name,
            FunctionTarget::Addr(addr) => f.addr == *addr,
        });
        if funcs.is_empty() {
            bail!("no function matching '{filter}' found in binary");
        }
    }

    Ok(funcs)
}

fn add_symbol_gap_functions(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    let Some(text) = image.section_by_name(".text") else {
        return;
    };
    let text_start = text.vaddr;
    let text_end = text_start.saturating_add(text.data.len() as u64);
    let mut bounds: Vec<(u64, u64)> = funcs
        .iter()
        .filter(|func| func.addr >= text_start && func.addr < text_end)
        .map(|func| {
            (
                func.addr,
                func.addr.saturating_add(func.size as u64).min(text_end),
            )
        })
        .collect();
    bounds.sort_unstable();

    let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();
    for window in bounds.windows(2) {
        let gap_start = window[0].1;
        let gap_end = window[1].0;
        if gap_end.saturating_sub(gap_start) >= 2 && known.insert(gap_start) {
            funcs.push(FunctionEntry {
                name: format!("sub_{gap_start:x}"),
                addr: gap_start,
                size: gap_end - gap_start,
            });
        }
    }
}

fn add_post_entry_functions(image: &BinaryImage, funcs: &mut Vec<FunctionEntry>) {
    if !matches!(image.arch, ArchId::Ppc | ArchId::Ppc64 | ArchId::V850) {
        return;
    }
    let Some(text) = image.section_by_name(".text") else {
        return;
    };
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    let mut bounds: Vec<(u64, u64)> = funcs
        .iter()
        .filter(|func| func.addr >= text.vaddr && func.addr < text_end)
        .map(|func| (func.addr, func.addr.saturating_add(func.size).min(text_end)))
        .collect();
    bounds.sort_unstable();

    let mut known: BTreeSet<u64> = funcs.iter().map(|func| func.addr).collect();
    for (addr, end) in bounds {
        let split = addr.saturating_add(4);
        if end.saturating_sub(split) >= 4 && known.insert(split) {
            funcs.push(FunctionEntry {
                name: format!("sub_{split:x}"),
                addr: split,
                size: end - split,
            });
        }
    }
}

fn infer_arch_fixture_sizes(image: &BinaryImage, funcs: &mut [FunctionEntry]) {
    let Some(text) = text_section(image) else {
        return;
    };

    funcs.sort_by_key(|func| func.addr);
    let text_end = text.vaddr.saturating_add(text.data.len() as u64);
    let addrs: Vec<u64> = funcs.iter().map(|func| func.addr).collect();

    for (idx, func) in funcs.iter_mut().enumerate() {
        if func.addr < text.vaddr || func.addr >= text_end {
            continue;
        }
        let next = addrs
            .iter()
            .copied()
            .skip(idx + 1)
            .find(|addr| *addr > func.addr && *addr <= text_end)
            .unwrap_or(text_end);
        let inferred = next.saturating_sub(func.addr);
        if inferred > func.size {
            func.size = inferred;
        }
    }
}

const ENDBR64: [u8; 4] = [0xf3, 0x0f, 0x1e, 0xfa];
const PUSH_RBP_MOV_RBP_RSP: [u8; 4] = [0x55, 0x48, 0x89, 0xe5];
// `sub rsp, imm8` encoding: REX.W + SUB r/m64, imm8
const SUB_RSP_IMM8: [u8; 3] = [0x48, 0x83, 0xec];
const PUSH_R15: [u8; 2] = [0x41, 0x57];
const PUSH_R14: [u8; 2] = [0x41, 0x56];
const PUSH_R13: [u8; 2] = [0x41, 0x55];
const PUSH_R12: [u8; 2] = [0x41, 0x54];
const PUSH_RBX: u8 = 0x53;

/// Returns `true` if the byte at `data[idx]` looks like a function-boundary
/// marker — a `ret`, `int3`, or x86 NOP padding byte. Used to confirm that a
/// `push r12/r13/r14/r15/rbx` at the next aligned address is a real function
/// start and not a callee-saved register save inside another function.
fn is_function_boundary_byte(b: u8) -> bool {
    matches!(
        b,
        // C3 = ret near, CB = ret far, C2/CA = ret imm16
        0xC3 | 0xCB | 0xC2 | 0xCA
        // CC = int3 (debugger trap, common alignment padding from compilers)
        | 0xCC
        // 90 = nop, the canonical x86 NOP byte
        | 0x90
        // 66 = operand-size prefix; commonly the leading byte of a multi-byte NOP
        // (e.g. `66 90`, `66 66 ... 90`); also the start of `nopw`-style padding.
        | 0x66
        // 0F = the leading byte of `0F 1F /0` multi-byte NOPs
        | 0x0F
    )
}

/// Returns `true` if a `push` at `data[idx]` is preceded by an instruction that
/// looks like a function boundary (or is at the very start of the section).
fn preceded_by_boundary(data: &[u8], idx: usize) -> bool {
    if idx == 0 {
        // Start-of-section is implicitly a boundary.
        return true;
    }
    is_function_boundary_byte(data[idx - 1])
}

/// Returns `true` if `idx` immediately follows a `push` instruction encoded
/// in the previous one or two bytes. A `push r12..r15` (`41 5C..5F`) right
/// after a `push rbp/rbx/...` is callee-saved register save, NOT a prologue.
fn preceded_by_push(data: &[u8], idx: usize) -> bool {
    // Single-byte push immediately before us.
    if idx >= 1 && (0x50..=0x57).contains(&data[idx - 1]) {
        return true;
    }
    // Two-byte REX-prefixed push (`41 5C..5F`) ending one byte before us.
    if idx >= 2 && data[idx - 2] == 0x41 && (0x50..=0x57).contains(&data[idx - 1]) {
        return true;
    }
    false
}

fn scan_for_prologues(image: &BinaryImage) -> Vec<FunctionEntry> {
    let text = match text_section(image) {
        Some(s) => s,
        None => return Vec::new(),
    };

    let data = &text.data;
    let base = text.vaddr;
    let mut addrs = BTreeSet::new();
    let mut idx = 0;

    while idx < data.len() {
        if idx + 4 <= data.len() && data[idx..idx + 4] == ENDBR64 {
            addrs.insert(base + idx as u64);
            idx += 4;
            continue;
        }
        if idx + 4 <= data.len() && data[idx..idx + 4] == PUSH_RBP_MOV_RBP_RSP {
            // `push rbp; mov rbp, rsp` — definitive prologue, accept unconditionally.
            addrs.insert(base + idx as u64);
            idx += 4;
            continue;
        }
        if idx + 3 <= data.len() && data[idx..idx + 3] == SUB_RSP_IMM8 {
            // Bare `sub rsp, imm8` — only accept at 16-byte-aligned address
            // preceded by a function-boundary marker. Mid-function stack
            // adjustments use the same encoding and would otherwise produce
            // spurious function entries.
            let addr = base + idx as u64;
            if addr % 16 == 0 && preceded_by_boundary(data, idx) {
                addrs.insert(addr);
            }
            idx += 3;
            continue;
        }
        if idx + 2 <= data.len() {
            let pair = [data[idx], data[idx + 1]];
            if pair == PUSH_R15 || pair == PUSH_R14 || pair == PUSH_R13 || pair == PUSH_R12 {
                // `push r12..r15` is most often a callee-saved register save
                // *inside* a function. Accept as a function start ONLY when:
                //   1. the address is 16-byte aligned (typical function alignment), AND
                //   2. the previous byte is a function-boundary marker
                //      (ret/int3/nop) or we're at the start of the section, AND
                //   3. it is not immediately preceded by another `push`
                //      (which would indicate a chain of callee-saved pushes).
                let addr = base + idx as u64;
                let aligned = addr % 16 == 0;
                let boundary = preceded_by_boundary(data, idx);
                let chained = preceded_by_push(data, idx);
                if aligned && boundary && !chained {
                    addrs.insert(addr);
                }
                idx += 2;
                continue;
            }
        }
        if data[idx] == PUSH_RBX
            && (base + idx as u64) % 16 == 0
            && preceded_by_boundary(data, idx)
            && !preceded_by_push(data, idx)
        {
            addrs.insert(base + idx as u64);
            idx += 1;
            continue;
        }
        idx += 1;
    }

    let sorted: Vec<u64> = addrs.iter().copied().collect();
    let text_end = base + text.size;

    sorted
        .iter()
        .enumerate()
        .map(|(i, &addr)| {
            let next = sorted.get(i + 1).copied().unwrap_or(text_end);
            let size = next - addr;
            FunctionEntry {
                name: format!("sub_{addr:x}"),
                addr,
                size,
            }
        })
        .collect()
}

fn recursive_descent_discovery(
    image: &BinaryImage,
    mut funcs: Vec<FunctionEntry>,
) -> Vec<FunctionEntry> {
    let text = match text_section(image) {
        Some(s) => s,
        None => return funcs,
    };

    let data = &text.data;
    let base = text.vaddr;
    let text_end = base + text.size;

    let mut known: BTreeSet<u64> = funcs.iter().map(|f| f.addr).collect();

    loop {
        let mut new_targets = Vec::new();

        for func in &funcs {
            let func_start = func.addr;
            let func_end = if func.size > 0 {
                func_start + func.size
            } else {
                text_end
            };

            let start_off = func_start.saturating_sub(base) as usize;
            let end_off = (func_end.saturating_sub(base) as usize).min(data.len());
            if start_off >= data.len() || start_off >= end_off {
                continue;
            }

            let region = &data[start_off..end_off];
            let mut i = 0;
            while i + 5 <= region.len() {
                if region[i] == 0xE8 {
                    let rel = i32::from_le_bytes([
                        region[i + 1],
                        region[i + 2],
                        region[i + 3],
                        region[i + 4],
                    ]);
                    let call_site = base + (start_off + i) as u64;
                    let target = call_site.wrapping_add(5).wrapping_add(rel as i64 as u64);

                    if target >= base && target < text_end && !known.contains(&target) {
                        new_targets.push(target);
                    }
                    i += 5;
                } else {
                    i += 1;
                }
            }
        }

        if new_targets.is_empty() {
            break;
        }

        new_targets.sort_unstable();
        new_targets.dedup();

        for addr in new_targets {
            if known.insert(addr) {
                funcs.push(FunctionEntry {
                    name: format!("sub_{addr:x}"),
                    addr,
                    size: 0,
                });
            }
        }

        recompute_sizes(&mut funcs, text_end);
    }

    recompute_sizes(&mut funcs, text_end);
    funcs
}

fn recompute_sizes(funcs: &mut [FunctionEntry], text_end: u64) {
    let mut addrs: Vec<u64> = funcs.iter().map(|f| f.addr).collect();
    addrs.sort_unstable();
    addrs.dedup();

    let addr_set: BTreeMap<u64, usize> = addrs.iter().enumerate().map(|(i, &a)| (a, i)).collect();

    for func in funcs.iter_mut() {
        if func.size > 0 {
            continue;
        }
        if let Some(&idx) = addr_set.get(&func.addr) {
            func.size = addrs
                .get(idx + 1)
                .copied()
                .unwrap_or(text_end)
                .saturating_sub(func.addr);
        }
    }
}

enum FunctionTarget {
    Name(String),
    Addr(u64),
}

fn parse_function_filter(s: &str) -> FunctionTarget {
    if let Some(hex) = s.strip_prefix("0x").or_else(|| s.strip_prefix("0X")) {
        if let Ok(addr) = u64::from_str_radix(hex, 16) {
            return FunctionTarget::Addr(addr);
        }
    }
    FunctionTarget::Name(s.to_string())
}

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

    tracing::debug!(
        func = %entry.name,
        addr = %format_args!("{:#x}", func_start),
        size = code.len(),
        "lifting function"
    );

    let lifted_insns = lift_instructions(lifter, code, func_start)?;
    let function = build_function_from_insns(&entry.name, func_start, &lifted_insns);
    Ok(function)
}

fn function_bounds(entry: &FunctionEntry, text: &unlace_loader::Section) -> (u64, u64) {
    let start = entry.addr;
    let end = if entry.size > 0 {
        start + entry.size
    } else {
        text.vaddr + text.size
    };
    (start, end)
}

struct LiftedInsnRecord {
    addr: u64,
    #[allow(dead_code)]
    len: usize,
    ir_ops: Vec<unlace_ir::IrInsn>,
    is_terminator: bool,
}

fn lift_instructions(
    lifter: &dyn Lifter,
    code: &[u8],
    base_addr: u64,
) -> Result<Vec<LiftedInsnRecord>> {
    let mut records = Vec::new();
    let mut offset = 0usize;

    while offset < code.len() {
        let addr = base_addr + offset as u64;
        let remaining = &code[offset..];

        match lifter.lift_insn(remaining, addr) {
            Ok(lifted) => {
                let is_term = lifted.ir_ops.iter().any(|op| is_terminator(op.op));
                records.push(LiftedInsnRecord {
                    addr,
                    len: lifted.len,
                    ir_ops: lifted.ir_ops,
                    is_terminator: is_term,
                });
                offset += lifted.len;
            }
            Err(e) => {
                tracing::warn!(addr = %format_args!("{:#x}", addr), err = %e, "lift failed; stopping");
                break;
            }
        }
    }

    Ok(records)
}

fn is_terminator(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Branch | IrOp::Cbranch | IrOp::Branchind | IrOp::Return
    )
}

fn build_function_from_insns(name: &str, entry_addr: u64, insns: &[LiftedInsnRecord]) -> Function {
    if insns.is_empty() {
        return Function::new(name, BlockId(0), entry_addr);
    }

    let insn_addr_set: BTreeSet<u64> = insns.iter().map(|rec| rec.addr).collect();
    let mut block_starts: BTreeMap<u64, u32> = BTreeMap::new();
    block_starts.insert(entry_addr, 0);

    for (i, rec) in insns.iter().enumerate() {
        if rec.is_terminator {
            if let Some(next) = insns.get(i + 1) {
                block_starts.entry(next.addr).or_insert(0);
            }

            for ir_op in &rec.ir_ops {
                if matches!(ir_op.op, IrOp::Branch | IrOp::Cbranch) {
                    if let Some(target) = ir_op.inputs.first() {
                        if target.space == unlace_ir::SpaceId::Const
                            && insn_addr_set.contains(&target.offset)
                        {
                            block_starts.entry(target.offset).or_insert(0);
                        }
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
                            if let Some(target) = ir_op.inputs.first() {
                                if target.space == unlace_ir::SpaceId::Const {
                                    if let Some(&tid) = block_starts.get(&target.offset) {
                                        let target_bid = BlockId(tid);
                                        if !bb.successors.contains(&target_bid) {
                                            bb.successors.push(target_bid);
                                        }
                                    }
                                }
                            }
                        }
                        IrOp::Cbranch => {
                            if let Some(target) = ir_op.inputs.first() {
                                if target.space == unlace_ir::SpaceId::Const {
                                    if let Some(&tid) = block_starts.get(&target.offset) {
                                        let target_bid = BlockId(tid);
                                        if !bb.successors.contains(&target_bid) {
                                            bb.successors.push(target_bid);
                                        }
                                    }
                                }
                            }
                            if let Some(next) = insns.get(
                                start_pos
                                    + 1
                                    + (&insns[start_pos..])
                                        .iter()
                                        .position(|r| std::ptr::eq(r, rec))
                                        .unwrap_or(0),
                            ) {
                                if let Some(&fid) = block_starts.get(&next.addr) {
                                    let fall_bid = BlockId(fid);
                                    if !bb.successors.contains(&fall_bid) {
                                        bb.successors.push(fall_bid);
                                    }
                                }
                            }
                        }
                        _ => {}
                    }
                }

                break;
            }
        }

        function.insert_block(bb);
    }

    function
}

pub fn run_passes(ssa: &mut SsaFunction) -> Result<usize> {
    let fold = ConstantFoldPass;
    let prop = CopyPropagationPass;
    let gprop = GlobalCopyPropPass;
    let dce = DeadCodeElimPass;
    let sccp = SccpPass;
    let cse = CsePass;
    let gvn = GvnPass;
    let idiom = IdiomRecognitionPass;
    let cond = ConditionSimplifyPass;
    let passes: &[&dyn Pass] = &[&fold, &prop, &gprop, &dce, &sccp, &cse, &gvn, &idiom, &cond];

    let changes = run_to_fixedpoint(passes, ssa).context("pass pipeline failed")?;

    // Single-run passes (after fixedpoint stabilizes)
    DeadStoreElimPass
        .run(ssa)
        .context("dead store elimination failed")?;
    DeadFlagElimPass
        .run(ssa)
        .context("dead flag elimination failed")?;
    DivisionIdiomPass
        .run(ssa)
        .context("division idiom recovery failed")?;
    ModuloIdiomPass
        .run(ssa)
        .context("modulo idiom recovery failed")?;

    PrologueElimPass
        .run(ssa)
        .context("prologue/epilogue detection failed")?;

    CppVtablePass
        .run(ssa)
        .context("C++ vtable dispatch detection failed")?;

    CallingConventionDetectPass
        .run(ssa)
        .context("calling convention detection failed")?;
    ParamInferPass
        .run(ssa)
        .context("parameter inference failed")?;
    ReturnTypeInferPass
        .run(ssa)
        .context("return type inference failed")?;

    ExpressionTreePass
        .run(ssa)
        .context("expression tree pass failed")?;

    StructFieldDetectPass
        .run(ssa)
        .context("struct field detection failed")?;

    run_type_infer_bounded(ssa);

    VariableMergePass
        .run(ssa)
        .context("variable merge pass failed")?;

    tracing::debug!(changes, "pass pipeline complete");
    Ok(changes)
}

fn run_type_infer_bounded(ssa: &mut SsaFunction) {
    use unlace_ir::SpaceId;
    use unlace_ir::ssa::{PrimitiveType, SsaVarnode, VarnodeSlot};

    let max_iterations = 50;
    for _ in 0..max_iterations {
        let snapshot: BTreeMap<unlace_ir::ssa::SsaVarnode, unlace_ir::ssa::PrimitiveType> =
            ssa.var_types.clone();
        let before_len = ssa.var_types.len();

        for (&bid, block) in &ssa.function.blocks {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                let output_sv = ssa
                    .var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Output))
                    .copied();
                let input_sv = |idx: usize| -> Option<SsaVarnode> {
                    ssa.var_map
                        .get(&(bid, insn_idx, VarnodeSlot::Input(idx)))
                        .copied()
                };

                if let Some(out) = output_sv {
                    let ty = match insn.op.type_family() {
                        Some('b') => PrimitiveType::Bool,
                        Some('f') => {
                            if out.base.size == 4 {
                                PrimitiveType::Float
                            } else {
                                PrimitiveType::Double
                            }
                        }
                        Some('i') | Some(_) => PrimitiveType::Int(out.base.size),
                        None => continue,
                    };
                    ssa.var_types.entry(out).or_insert(ty);
                }

                for (idx, inp) in insn.inputs.iter().enumerate() {
                    if inp.space == SpaceId::Const {
                        continue;
                    }
                    if let Some(sv) = input_sv(idx) {
                        let ty = match insn.op.input_type_family(idx) {
                            'b' => PrimitiveType::Bool,
                            'f' => {
                                if sv.base.size == 4 {
                                    PrimitiveType::Float
                                } else {
                                    PrimitiveType::Double
                                }
                            }
                            _ => PrimitiveType::Int(sv.base.size),
                        };
                        ssa.var_types.entry(sv).or_insert(ty);
                    }
                }
            }
        }

        if ssa.var_types.len() == before_len && ssa.var_types == snapshot {
            break;
        }
    }
}

pub fn ir_node_count(ssa: &SsaFunction) -> usize {
    ssa.function.blocks.values().map(|b| b.insns.len()).sum()
}

pub fn warn_if_large_ir(func_name: &str, ssa: &SsaFunction) {
    let count = ir_node_count(ssa);
    if count > IR_NODE_WARN_THRESHOLD {
        tracing::warn!(
            func = %func_name,
            ir_nodes = count,
            threshold = IR_NODE_WARN_THRESHOLD,
            "function exceeds IR node threshold"
        );
    }
}

pub struct PipelineConfig {
    pub timeout: Duration,
}

impl Default for PipelineConfig {
    fn default() -> Self {
        Self {
            timeout: Duration::from_secs(30),
        }
    }
}

#[allow(dead_code)]
pub fn build_symbol_table(image: &BinaryImage) -> BTreeMap<u64, String> {
    build_symbol_table_with_functions(image, &[])
}

pub fn build_symbol_table_with_functions(
    image: &BinaryImage,
    discovered: &[FunctionEntry],
) -> BTreeMap<u64, String> {
    let mut table = BTreeMap::new();
    for entry in discovered {
        table.insert(entry.addr, entry.name.clone());
    }
    for (addr, sym) in &image.symbols {
        if sym.kind == SymbolKind::Function {
            table.insert(*addr, sym.name.clone());
        }
    }
    for (addr, name) in &image.plt_symbols {
        table.insert(*addr, name.clone());
    }
    table
}

#[allow(dead_code)]
pub fn decompile_function(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
) -> Result<String> {
    decompile_function_with_symbols(image, lifter, entry, emit, config, dwarf, &[])
}

pub fn decompile_function_with_symbols(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    discovered: &[FunctionEntry],
) -> Result<String> {
    let _span = tracing::debug_span!("decompile_function", func = %entry.name).entered();
    let deadline = Instant::now() + config.timeout;

    let t = Instant::now();
    let mut ir_func = lift_function(image, lifter, entry)?;
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        blocks = ir_func.blocks.len(),
        insns = ir_func
            .blocks
            .values()
            .map(|b| b.insns.len())
            .sum::<usize>(),
        "lift done"
    );

    let t = Instant::now();
    let merges = unlace_struct::merge_linear_blocks(&mut ir_func);
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        merges,
        "merge_linear_blocks done"
    );

    let t = Instant::now();
    let dups = unlace_struct::tail_duplicate_small_blocks(&mut ir_func);
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        dups,
        "tail_duplicate_small_blocks done"
    );

    let t = Instant::now();
    let splits = unlace_struct::split_irreducible_entries(&mut ir_func);
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        splits,
        "split_irreducible_entries done"
    );

    check_timeout(deadline, &entry.name)?;

    let t = Instant::now();
    let mut ssa = unlace_ir::ssa::build_ssa(ir_func);
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        "build_ssa done"
    );

    warn_if_large_ir(&entry.name, &ssa);
    check_timeout(deadline, &entry.name)?;

    let t = Instant::now();
    if let Err(e) = run_passes(&mut ssa) {
        tracing::warn!(err = %e, "pass pipeline failed; emitting unoptimized");
    }
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        "run_passes done"
    );

    check_timeout(deadline, &entry.name)?;

    let t = Instant::now();
    let symbols = build_symbol_table_with_functions(image, discovered);
    let result = emit_output(emit, &ssa, dwarf, &symbols, &image.string_table);
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        "emit_output done"
    );
    result
}

fn check_timeout(deadline: Instant, func_name: &str) -> Result<()> {
    if Instant::now() >= deadline {
        bail!("timeout exceeded for function '{func_name}'");
    }
    Ok(())
}

pub fn emit_output(
    format: EmitFormat,
    ssa: &SsaFunction,
    dwarf: Option<&DwarfInfo>,
    symbols: &BTreeMap<u64, String>,
    string_table: &BTreeMap<u64, String>,
) -> Result<String> {
    match format {
        EmitFormat::Ir => Ok(unlace_output::dump_ir(ssa)),
        EmitFormat::CfgDot => Ok(unlace_output::emit_cfg_dot(ssa)),
        EmitFormat::C => {
            let mut hir =
                unlace_struct::structure(ssa).context("control-flow structuring failed")?;
            unlace_struct::ternary_recovery(&mut hir);
            unlace_struct::short_circuit_recovery(&mut hir);
            unlace_struct::flatten_if_else_chains(&mut hir);
            unlace_struct::simplify_chain_conditions(&mut hir, ssa);
            unlace_struct::if_chain_to_switch(&mut hir, ssa);
            unlace_struct::goto_to_break(&mut hir);
            unlace_struct::goto_to_continue(&mut hir);
            unlace_struct::while_to_for(&mut hir);
            unlace_struct::eliminate_forward_gotos(&mut hir);
            unlace_struct::hoist_cross_branch_labels(&mut hir);
            unlace_struct::duplicate_goto_conditions(&mut hir);
            unlace_struct::eliminate_forward_gotos(&mut hir);
            unlace_struct::cleanup_unreachable_labels(&mut hir);
            unlace_struct::return_merge(&mut hir);
            unlace_struct::eliminate_forward_gotos(&mut hir);
            unlace_struct::recover_guarded_whiles(&mut hir);
            unlace_struct::cleanup_empty_ifs(&mut hir);
            let header = unlace_output::FunctionHeaderInfo::from_ssa(ssa, &symbols);
            Ok(unlace_output::print_c_full(
                &hir,
                dwarf,
                Some(&header),
                Some(symbols),
                Some(string_table),
            ))
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::ArchId;
    use unlace_loader::{BinaryImage, Endian, Section, SectionFlags};

    fn make_text_image(code: Vec<u8>, base: u64) -> BinaryImage {
        let size = code.len() as u64;
        BinaryImage {
            arch: ArchId::X86_64,
            endian: Endian::Little,
            entry: base,
            sections: vec![Section {
                name: ".text".to_string(),
                vaddr: base,
                size,
                data: code,
                flags: SectionFlags::READ | SectionFlags::EXEC,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
        }
    }

    #[test]
    fn test_recursive_discovery_finds_call_targets() {
        let base: u64 = 0x1000;
        // target = call_site + 5 + rel32
        let rel: i32 = 0x1010_i64.wrapping_sub(0x1005) as i32;
        let rel_bytes = rel.to_le_bytes();
        let mut code = Vec::new();
        code.push(0xE8);
        code.extend_from_slice(&rel_bytes);
        code.push(0xC3);

        while code.len() < 0x10 {
            code.push(0xCC);
        }

        code.push(0xC3);

        let image = make_text_image(code, base);

        let initial = vec![FunctionEntry {
            name: "func_a".into(),
            addr: base,
            size: 6,
        }];

        let result = recursive_descent_discovery(&image, initial);

        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();
        assert!(
            addrs.contains(&0x1010),
            "recursive descent should discover call target 0x1010, got: {addrs:?}",
        );
    }

    #[test]
    fn test_enhanced_prologue_patterns() {
        let base: u64 = 0x1000;
        let mut code = vec![0xCC; 0x100];

        // push r15 at offset 0x00
        code[0x00] = 0x41;
        code[0x01] = 0x57;

        // push r14 at offset 0x20
        code[0x20] = 0x41;
        code[0x21] = 0x56;

        // push r13 at offset 0x40
        code[0x40] = 0x41;
        code[0x41] = 0x55;

        // push r12 at offset 0x60
        code[0x60] = 0x41;
        code[0x61] = 0x54;

        // push rbx at 16-byte aligned offset 0x80
        code[0x80] = 0x53;

        // push rbx at non-aligned offset 0x83 (should NOT match)
        code[0x83] = 0x53;

        // endbr64 at offset 0xA0
        code[0xA0] = 0xF3;
        code[0xA1] = 0x0F;
        code[0xA2] = 0x1E;
        code[0xA3] = 0xFA;

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();

        assert!(addrs.contains(&(base + 0x00)), "push r15: {addrs:?}");
        assert!(addrs.contains(&(base + 0x20)), "push r14: {addrs:?}");
        assert!(addrs.contains(&(base + 0x40)), "push r13: {addrs:?}");
        assert!(addrs.contains(&(base + 0x60)), "push r12: {addrs:?}");
        assert!(
            addrs.contains(&(base + 0x80)),
            "push rbx aligned: {addrs:?}"
        );
        assert!(
            !addrs.contains(&(base + 0x83)),
            "push rbx unaligned should not match: {addrs:?}"
        );
        assert!(addrs.contains(&(base + 0xA0)), "endbr64: {addrs:?}");
    }

    /// Regression test for P6-3: callee-saved `push r15` immediately following
    /// a `push rbp; mov rbp, rsp` prologue must NOT be treated as a separate
    /// function start. This is the root cause of `sub_2436e0` lifting only
    /// 4 bytes instead of hundreds.
    #[test]
    fn test_prologue_no_false_positive_after_push_rbp_mov() {
        let base: u64 = 0x1000;
        let mut code = vec![0xCC; 0x40];

        // Real function at 0x1000: push rbp; mov rbp, rsp; push r15; push r14; push r13; push r12; ret
        code[0x00] = 0x55; // push rbp
        code[0x01] = 0x48; // mov rbp, rsp (rex.w)
        code[0x02] = 0x89;
        code[0x03] = 0xe5;
        code[0x04] = 0x41; // push r15  ← would have been a false positive
        code[0x05] = 0x57;
        code[0x06] = 0x41; // push r14
        code[0x07] = 0x56;
        code[0x08] = 0x41; // push r13
        code[0x09] = 0x55;
        code[0x0A] = 0x41; // push r12
        code[0x0B] = 0x54;
        code[0x0C] = 0xC3; // ret

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();

        assert!(
            addrs.contains(&base),
            "real prologue at {base:#x} must be detected; got: {addrs:?}",
        );
        for off in [0x04u64, 0x06, 0x08, 0x0A] {
            assert!(
                !addrs.contains(&(base + off)),
                "push at offset {off:#x} (callee-saved register save) must NOT be a function start; got: {addrs:?}",
            );
        }

        let real_func = result.iter().find(|f| f.addr == base).expect("real func");
        assert!(
            real_func.size >= 0xD,
            "function size must extend through callee-saved pushes (got {})",
            real_func.size,
        );
    }

    /// Regression test for P6-3: a bare `push r12` in the middle of a function
    /// (not aligned, not preceded by a boundary) must NOT be treated as a
    /// function start. This was causing `sub_7b710` to be cut at offset 32.
    #[test]
    fn test_prologue_no_false_positive_for_misaligned_push_r12() {
        let base: u64 = 0x7B710;
        let mut code = vec![0xCC; 0x40];

        // sub rsp, 8 at offset 0 (16-byte aligned, valid prologue)
        code[0x00] = 0x48;
        code[0x01] = 0x83;
        code[0x02] = 0xEC;
        code[0x03] = 0x08;

        // ret at offset 0x12
        code[0x12] = 0xC3;

        // NOPL padding  at 0x13–0x1F (not a valid alignment slot for our test)
        // push r12 at offset 0x20 — preceded by 0xCC (boundary), 16-byte aligned
        code[0x20] = 0x41;
        code[0x21] = 0x54;

        // push r12 at offset 0x24 — NOT aligned, preceded by a push (chain)
        code[0x22] = 0x41;
        code[0x23] = 0x55;
        code[0x24] = 0x41;
        code[0x25] = 0x54;

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);
        let addrs: BTreeSet<u64> = result.iter().map(|f| f.addr).collect();

        assert!(addrs.contains(&base), "sub rsp prologue at base must match");
        assert!(
            addrs.contains(&(base + 0x20)),
            "push r12 aligned + boundary should match: {addrs:?}",
        );
        assert!(
            !addrs.contains(&(base + 0x22)),
            "push r13 misaligned & after push must NOT match: {addrs:?}",
        );
        assert!(
            !addrs.contains(&(base + 0x24)),
            "push r12 misaligned & after push must NOT match: {addrs:?}",
        );
    }

    /// Regression test for P6-3: with the false positive removed, a function
    /// that starts with `push rbp; ...; push r15..r12` must lift to its full
    /// size (next function start), not be cut off after 4 bytes.
    #[test]
    fn test_prologue_function_size_extends_through_callee_saved() {
        let base: u64 = 0x2436E0;
        let mut code = vec![0xCC; 0x100];

        // Function 1: push rbp; mov rbp, rsp; push r15..r12; ... ret
        code[0x00] = 0x55;
        code[0x01] = 0x48;
        code[0x02] = 0x89;
        code[0x03] = 0xe5;
        code[0x04] = 0x41;
        code[0x05] = 0x57;
        code[0x06] = 0x41;
        code[0x07] = 0x56;
        code[0x08] = 0x41;
        code[0x09] = 0x55;
        code[0x0A] = 0x41;
        code[0x0B] = 0x54;
        code[0x80] = 0xC3;

        // Function 2: starts at 0xA0 (16-byte aligned, preceded by 0xCC)
        code[0xA0] = 0xF3;
        code[0xA1] = 0x0F;
        code[0xA2] = 0x1E;
        code[0xA3] = 0xFA;

        let image = make_text_image(code, base);
        let result = scan_for_prologues(&image);

        let f1 = result.iter().find(|f| f.addr == base).expect("function 1");
        assert!(
            f1.size >= 0xA0,
            "function 1 size must reach next function start (got {})",
            f1.size,
        );
    }
}
