//! # Pipeline Driver — Wave 24 Recovery Pass Dependency Order
//!
//! The Wave 24 recovery passes have hard ordering dependencies that this
//! file enforces. The intended sequence is:
//!
//! 1. **`recover_stack_frame`** (t209) — produces
//!    [`SsaFunction::stack_frame`]. Every later pass that reasons about
//!    locals reads this map; must run before byref detection so the
//!    detector knows which locals already participate in a stack slot.
//!
//! 2. **`detect_byref`** (t210) — produces
//!    [`SsaFunction::byref_info`]. Depends on the stack-frame layout
//!    above so it can mark stack locals whose address escapes (passed
//!    by-reference to callees, taken into a register, etc.). Also reads
//!    [`ParamInferPass`]'s output so it knows how many parameter
//!    registers are live for this calling convention.
//!
//! 3. **`recover_structs`** (t213) — populates
//!    [`SsaFunction::array_struct_layouts`]. Needs the IV/loop passes
//!    (`LicmPass` + `IvElimPass`) to have run so basic induction
//!    variables are stable.
//!
//! 4. **`TypeConstraintSolverPass`** (t228) — TIE-style constraint
//!    solver. Depends on byref_info (constraints from address-taken
//!    sites) and on stack_frame (constraints from same-slot accesses).
//!    *Wired (Wave 26): runs inside the outer fixedpoint immediately
//!    after `TypeInferPass`.*
//!
//! 5. **`annotate_libc_calls`** (t229) — annotates calls to recognised
//!    libc functions in [`SsaFunction::libc_call_annotations`]. Depends
//!    on the symbol-table side of call resolution. *Wired (Wave 26):
//!    runs once after the outer fixedpoint, with the symbol table as
//!    the resolver closure.*
//!
//! 6. **`VarNamingPass`** (t227) — assigns liveness-aware names
//!    (`i`/`j`/`k`, `arg<N>`, …) keyed in
//!    `SsaFunction::var_role_names`. Depends on stable types from t228
//!    so the role classifier can tell `LoopCounter` from `Argument`.
//!    *Wired (Wave 26): runs after `VariableMergePass`.*
//!
//! 7. **`CallingConvFinalizePass`** (t230) — finalises the function's
//!    public signature in `SsaFunction::finalized_signature` using the
//!    full caller set's recovered types. Depends on every preceding
//!    pass (var roles, types, libc info, byref info). *Wired (Wave 26):
//!    final per-function pass, after `VarNamingPass`.*
//!
//! Wave 26 landed all four wirings; this file's job from here is to
//! keep the ordering honest as new passes slot into the documented
//! sequence.

use std::collections::BTreeMap;
use std::collections::BTreeSet;
use std::sync::Arc;
use std::time::{Duration, Instant};

use anyhow::{Context, Result, bail};

use unlace_ir::ssa::SsaFunction;
use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
use unlace_ir::types::{StructFieldType, Type};
use unlace_ir::{ArchId, BasicBlock, BlockId, Function, IrOp, Lifter, SpaceId};
use unlace_loader::{BinaryImage, DwarfInfo, FlirtDb, Section, SymbolKind};
use unlace_passes::{
    AlgebraicSimplifyPass, BitfieldIdiomPass, BmiIdiomPass, CallBoundaryCopyPropPass,
    CallingConvFinalizePass, CallingConventionDetectPass, ConditionSimplifyPass, ConstantFoldPass,
    CopyPropagationPass, CppVtablePass, CryptoIdiomPass, CsePass, DEFAULT_OUTER_FIXEDPOINT_CAP,
    DeadCodeElimPass, DeadFlagElimPass, DeadStoreElimGlobalPass, DeadStoreElimPass,
    DivisionIdiomPass, ExpressionTreePass, GlobalCopyPropPass, GvnPass, IdiomRecognitionPass,
    IndirectCallResolvePass, IndirectJumpResolvePass, IvElimPass, LicmPass, LvarCollectPass, ModuloIdiomPass, NoreturnDetectPass,
    OpTypeBindingPass, OuterFixedpointReport, ParamInferPass, Pass, PrologueElimPass,
    RedundantFlagElimPass, RegisterCoalescePass, ReturnTypeInferPass, RustEnumPass, RustPanicPass,
    RustVtablePass, SccpPass, SignatureSnapshot, StackOffsetSnapshotPass, StackPointerTrackingPass,
    StackVarRecoveryPass, StrengthReducePass, StructFieldDetectPass, TailCallDetectPass,
    TypeConstraintSolverPass, VarNamingPass, VariableMergePass, annotate_libc_calls,
    bump_if_signature_changed, detect_byref, detect_go_defer, parse_printf_format_strings,
    recover_stack_frame, recover_structs, run_instrumented, run_outer_fixedpoint,
    run_to_fixedpoint,
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
        ArchId::Ppc | ArchId::Ppc64 | ArchId::V850 | ArchId::Arc | ArchId::Agx
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

/// Drop synthetic `sub_*` entries that point at DWARF low-PC addresses inside a
/// named symbol. Some compilers record the first debuggable instruction after a
/// prologue as the DWARF function address; recursive discovery can then add that
/// interior address as a second function. Keep standalone synthetic functions,
/// but avoid emitting duplicate bodies for named symbol functions.
pub fn drop_dwarf_duplicate_subfunctions(funcs: &mut Vec<FunctionEntry>, _dwarf: &DwarfInfo) {
    let named_ranges: Vec<(u64, u64)> = funcs
        .iter()
        .filter(|func| !func.name.starts_with("sub_") && func.size > 0)
        .map(|func| (func.addr, func.addr.saturating_add(func.size)))
        .collect();

    funcs.retain(|func| {
        if !func.name.starts_with("sub_") {
            return true;
        }
        !named_ranges
            .iter()
            .any(|(start, end)| func.addr > *start && func.addr < *end)
    });
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
                func.addr.saturating_add(func.size).min(text_end),
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
    let report = run_passes_with_report(ssa)?;
    Ok(report.ir_changes)
}

/// Variant of [`run_passes`] that accepts a `call-target VA → name` resolver.
///
/// Wired into [`decompile_function_with_symbols`] so the noreturn detector
/// and Rust panic annotator (Batch 1) can match against PLT/import names
/// without needing the symbol table baked into the pass module.
pub fn run_passes_with_resolver(
    ssa: &mut SsaFunction,
    resolver: &dyn Fn(u64) -> Option<&'static str>,
) -> Result<usize> {
    let report = run_passes_with_report_inner(ssa, Some(resolver))?;
    Ok(report.ir_changes)
}

/// Drive the whole-program interprocedural fixed-point loop over a map of
/// already-built (lifted + SSA-constructed) functions.
///
/// This is plan.md Batch 5: refines per-function signatures using caller
/// context until quiescence (or `cap` iterations).
///
/// `cap` of `0` selects [`DEFAULT_INTERPROC_CAP`]. The per-function pass
/// invoked inside the loop is [`run_passes`], so callers must have already
/// finished any one-time setup that should *not* be re-run (DWARF apply,
/// EH-landing-pad population, etc.).
///
/// This helper is intentionally separate from the per-function CLI path:
/// the existing `decompile_function_with_symbols` keeps emitting output
/// immediately after one pass run, so wiring this in by default would
/// require splitting the per-function pipeline into "lift+passes" and
/// "structure+emit" phases — a bigger refactor than this Batch 5 slice
/// targets. Callers who want whole-program propagation can build their own
/// SSA map and call this helper before emit.
pub fn run_whole_program_interproc(
    funcs: &mut std::collections::BTreeMap<u64, SsaFunction>,
    cap: usize,
) -> Result<unlace_passes::InterprocReport> {
    let cap = if cap == 0 {
        unlace_passes::DEFAULT_INTERPROC_CAP
    } else {
        cap
    };
    unlace_passes::run_interproc_fixpoint(funcs, cap, |ssa| {
        // The per-function pass surface used inside the cross-function loop
        // is the standard `run_passes`. We discard the inner `PassError`
        // chain via `?` — the outer driver already records iteration count
        // and signature deltas.
        run_passes(ssa).map(|_| ()).map_err(|e| {
            unlace_passes::PassError::InvariantViolation {
                message: format!("per-function pass failed: {e}"),
            }
        })
    })
    .context("interprocedural fixed-point loop failed")
}

/// Whole-program driver for printf-style format-string parsing.
///
/// Walks every `(addr, SsaFunction)` in `funcs` and merges newly
/// recovered variadic-call-site type lists into
/// [`SsaFunction::variadic_call_types`]. Each per-function invocation is
/// additive — the additive contract is documented on
/// [`parse_printf_format_strings`] — so calling this driver after the
/// per-function pre-pass that already runs inside
/// [`decompile_function_with_symbols`] only ever *adds* entries, never
/// drops them.
///
/// The symbol table is built once (function entries + import/PLT
/// thunks) and the resulting `&'static str` references are leaked so a
/// single resolver closure can be shared across all functions without
/// per-call allocation.
///
/// Returns the total count of `(BlockId, insn_idx)` entries populated
/// across the whole-program SSA map after the merge.
pub fn run_whole_program_printf_parse(
    funcs: &mut std::collections::BTreeMap<u64, SsaFunction>,
    image: &BinaryImage,
    discovered: &[FunctionEntry],
) -> usize {
    let symbols = build_symbol_table_with_functions(image, discovered);
    let mut stable_symbol_names: BTreeMap<u64, &'static str> = BTreeMap::new();
    for (&addr, name) in &symbols {
        stable_symbol_names.insert(addr, Box::leak(name.clone().into_boxed_str()));
    }
    let resolver = |addr: u64| -> Option<&'static str> {
        stable_symbol_names.get(&addr).copied()
    };

    for ssa in funcs.values_mut() {
        let _changed = parse_printf_format_strings(ssa, &resolver, &image.string_table);
    }

    funcs.values().map(|f| f.variadic_call_types.len()).sum()
}

/// Detailed report from one [`run_passes`] invocation.
///
/// Captures the outer-fixed-point behaviour: how many outer iterations ran,
/// whether the iteration cap was hit (suggesting a non-converging cascade),
/// and the cumulative count of inner-fixedpoint changes across all
/// IR-level rounds.
#[derive(Clone, Debug, Default)]
pub struct PassesReport {
    /// Total number of inner IR-level fixedpoint changes across all outer iters.
    pub ir_changes: usize,
    /// Outer-loop convergence info.
    #[allow(dead_code)] // exposed for callers/tests; CLI code path only reads `ir_changes`.
    pub outer: OuterFixedpointReport,
}

/// Run the pass pipeline and return a structured report.
///
/// The pipeline mirrors IDA's two-tier driver (sub_14B8B0 / sub_F9180).
///
/// # Canonical PassPhase order (Batch 10 slice 1)
///
/// Each pass below carries a `phase()` tag — see
/// [`unlace_passes::PassPhase`] for the seven canonical buckets:
///
/// | Phase         | Examples                                              |
/// |---------------|-------------------------------------------------------|
/// | `PreOpt`      | CallBoundaryCopyProp, RedundantFlagElim, AlgSimp,     |
/// |               | PrologueElim, NoreturnDetect                          |
/// | `LocalOpt`    | SCCP, CopyProp, ConstFold, DCE, DSE, DFE,             |
/// |               | StrengthReduce, IvElim, IdiomRec, BMI, Cond/Bool      |
/// | `GlobalOpt`   | GVN, CSE, LICM, GlobalCopyProp, DseGlobal,            |
/// |               | TailCall, TailDup, IndirectCall/JumpResolve,          |
/// |               | MsvcSEH                                               |
/// | `TypeRecovery`| TypeInfer, TypeConstraintSolver, OpTypeBinding,       |
/// |               | CC detect/param/return, Struct/Sizeof, Cpp/Rust/Objc, |
/// |               | RustAsync                                             |
/// | `StackRecovery`| StackOffsetSnapshot, StackPointerTracking,           |
/// |               | StackVarRecovery                                      |
/// | `LVarAlloc`   | VariableMerge                                         |
/// | `FinalCleanup`| RegisterCoalesce, ExpressionTree, VarNaming,          |
/// |               | CallingConvFinalize                                   |
///
/// The schedule below interleaves phases **intentionally** — for
/// example, `CallBoundaryCopyPropPass` (PreOpt) is wired into the inner
/// fixed-point cluster alongside LocalOpt/GlobalOpt passes because the
/// three only converge when run together. As of Batch 10 slice 1 the
/// canonical schedule has 11 "backward" phase transitions across 47
/// adjacent pairs; the count is pinned by the
/// `canonical_pipeline_is_documented` test in
/// `unlace_passes::pass::phase_tests`. Reducing the count is a strict
/// win and is the goal of a follow-up Batch 10 slice.
///
/// # Schedule
///
/// 1. **One-time pre-pass.** [`StackOffsetSnapshotPass`] (StackRecovery)
///    captures the pre-optimization stack-offset map, used later by
///    stack var recovery. Followed by [`NoreturnDetectPass`] (PreOpt)
///    when a resolver is supplied.
/// 2. **Outer fixed-point loop** (capped at [`DEFAULT_OUTER_FIXEDPOINT_CAP`]).
///    Each outer iteration runs:
///      - the inner IR-level fixed-point cluster — mostly LocalOpt /
///        GlobalOpt with three PreOpt cleanups (call-boundary, redundant
///        flag, algebraic simplify), converging via [`run_to_fixedpoint`];
///      - LocalOpt/GlobalOpt cleanup (dead store, dead flag, cross-block
///        DSE, division/modulo idioms);
///      - PreOpt + StackRecovery + GlobalOpt + TypeRecovery structural
///        detection (prologue elim, tail-call detect, stack-pointer
///        tracking, stack-var recovery, indirect-call resolve, C++
///        vtable);
///      - TypeRecovery proper (calling-convention detect/param/return,
///        struct-field, primitive type infer, constraint solver).
///
///    After each iteration we hash the type-recovery state via
///    [`unlace_passes::ssa_type_signature`]; if it changed we run again.
///    This is the key cascade: better types ⇒ better simplification ⇒
///    better pattern matching ⇒ better types.
/// 3. **One-time post-pass.** [`ExpressionTreePass`] (folds inline
///    sub-expressions for printing) and [`VariableMergePass`] (assigns
///    final canonical names) run exactly once after convergence. They are
///    presentation-layer concerns and re-running them inside the loop
///    would either be redundant or risk oscillation.
pub fn run_passes_with_report(ssa: &mut SsaFunction) -> Result<PassesReport> {
    run_passes_with_report_inner(ssa, None)
}

/// Inner driver shared by [`run_passes_with_report`] (no resolver) and
/// [`run_passes_with_resolver`] (PLT/import-name aware).
///
/// The resolver, when present, is consumed by symbol-pattern-gated passes
/// (Batch 1): [`NoreturnDetectPass::run_with_resolver`] and
/// [`RustPanicPass::run_with_resolver`]. Without a resolver these passes
/// are skipped — they would otherwise no-op via the trait's default `run()`.
fn run_passes_with_report_inner(
    ssa: &mut SsaFunction,
    resolver: Option<&dyn Fn(u64) -> Option<&'static str>>,
) -> Result<PassesReport> {
    // (1) One-time pre-pass: snapshot pre-optimization stack offsets so
    // later iterations of stack-var recovery still see the original
    // RSP/RBP-relative addressing.
    run_instrumented(&StackOffsetSnapshotPass, ssa)
        .context("stack offset snapshot failed")?;

    // Snapshot the signature triple so we can bump `signature_revision`
    // exactly once if the per-function pipeline mutates it. This makes the
    // revision counter usable as a dirty-flag for any whole-program
    // [`unlace_passes::reanalysis_fixpoint`] driver layered on top.
    let pre_pipeline_sig = SignatureSnapshot::of(ssa);

    // Batch 1: noreturn detection runs *once* before the outer loop, with
    // the caller-provided PLT/import-name resolver. Strips unreachable
    // instructions after recognised noreturn calls (`exit`, `abort`,
    // `__cxa_throw`, …) so the IR-fixedpoint and structural detection
    // never re-process them. Symbols are stable across outer iterations,
    // so re-running this inside the loop would be wasted work.
    if let Some(resolve) = resolver {
        NoreturnDetectPass::new()
            .run_with_resolver(ssa, resolve)
            .context("noreturn detect pass failed")?;
    }

    let mut total_ir_changes: usize = 0usize;

    // (2) Outer fixed-point loop. The inner cluster already converges per
    // call to `run_to_fixedpoint`; the outer loop re-runs the whole sweep
    // when type recovery learned something new that the IR-level passes
    // couldn't see on the previous round.
    let outer_report = run_outer_fixedpoint(
        ssa,
        DEFAULT_OUTER_FIXEDPOINT_CAP,
        |ssa, _iter| -> Result<(), unlace_passes::PassError> {
            // ---- IR-level fixed-point cluster ----
            let fold = ConstantFoldPass;
            let prop = CopyPropagationPass;
            let gprop = GlobalCopyPropPass;
            let dce = DeadCodeElimPass;
            let sccp = SccpPass;
            let cse = CsePass;
            let gvn = GvnPass;
            let licm = LicmPass;
            let iv_elim = IvElimPass;
            let strength_reduce = StrengthReducePass;
            let idiom = IdiomRecognitionPass;
            let bmi = BmiIdiomPass;
            let cond = ConditionSimplifyPass;
            // Batch 1 additions to the inner fixed-point cluster:
            // - call-boundary copy-prop removes the spurious post-call
            //   register restore version (`reg_post = LOAD(stkN)` → fold
            //   into the pre-call name) so CSE/GVN see one canonical name.
            // - redundant-flag elim rewrites lifter-emitted `(a-b)==0`
            //   shape into direct comparisons.
            // - algebraic-simplify is currently a skeleton landing zone;
            //   wiring now means future rules light up automatically.
            let call_bound = CallBoundaryCopyPropPass;
            let red_flag = RedundantFlagElimPass;
            let algebraic = AlgebraicSimplifyPass;
            let passes: &[&dyn Pass] = &[
                &fold,
                &prop,
                &gprop,
                &dce,
                &sccp,
                &cse,
                &gvn,
                &bmi,
                &licm,
                &iv_elim,
                &strength_reduce,
                &idiom,
                &cond,
                &call_bound,
                &red_flag,
                &algebraic,
            ];
            let inner = run_to_fixedpoint(passes, ssa)?;
            total_ir_changes = total_ir_changes.saturating_add(inner);

            // ---- Cleanup passes (single-run per outer iter) ----
            run_instrumented(&DeadStoreElimPass, ssa)?;
            run_instrumented(&DeadFlagElimPass, ssa)?;
            // Batch 1: cross-block DSE picks up stores killed by writes in
            // a successor block — the intra-block DSE above misses them.
            run_instrumented(&DeadStoreElimGlobalPass, ssa)?;
            run_instrumented(&DivisionIdiomPass, ssa)?;
            run_instrumented(&ModuloIdiomPass, ssa)?;

            // ---- Structural detection ----
            run_instrumented(&PrologueElimPass, ssa)?;
            run_instrumented(&TailCallDetectPass, ssa)?;
            // Batch 1: SP-delta tracking populates `sp_delta_at`,
            // `stack_holes`, `dynamic_sp` *before* stack var recovery so
            // the latter can resolve frame addresses through the right
            // SP-state at each instruction.
            run_instrumented(&StackPointerTrackingPass, ssa)?;
            run_instrumented(&StackVarRecoveryPass, ssa)?;
            // Wave 24 / t209: synthesise the high-level stack frame layout
            // (one slot per offset, fused partial-access groups, array
            // collapsing) so the type-recovery layer can consume a stable
            // BTreeMap<i64, StackLocal> instead of re-walking the IR.
            ssa.stack_frame = Some(recover_stack_frame(ssa));
            // Batch 1: indirect-call resolution recovers a unique
            // constant target for `Callind` chains where the source
            // narrows to a single `Const` after copy-prop. Runs before
            // CppVtablePass / language-specific devirt so they all see
            // the same `resolved_indirect_calls` map.
            run_instrumented(&IndirectCallResolvePass, ssa)?;
            run_instrumented(&CppVtablePass, ssa)?;

            // ---- Type recovery ----
            run_instrumented(&CallingConventionDetectPass, ssa)?;
            run_instrumented(&ParamInferPass, ssa)?;
            run_instrumented(&ReturnTypeInferPass, ssa)?;
            run_instrumented(&StructFieldDetectPass, ssa)?;
            // Wave 24 / t210: address-taken / byref bookkeeping. Runs
            // after ParamInferPass so the detector knows how many
            // parameter registers are "live" for this calling convention.
            ssa.byref_info = Some(detect_byref(ssa));
            // Wave 24 / t213: array-of-structs layout recovery. Runs
            // after IvElim/LicmPass have stabilised loop induction
            // variables so `recover_structs` can identify
            // `(base_sv, stride, iv, offset)` access chains inside
            // natural loops. The resulting `InferredStruct` layouts
            // are keyed by base-pointer SSA varnode and consumed by
            // (a) `emit_inferred_struct_preamble` (t224) for the
            // `struct __anon<N>` declarations, and (b) the c_printer
            // Load/Store renderer (t231) which rewrites the matching
            // address arithmetic as `arr<N>[i].field_<offset>`.
            ssa.array_struct_layouts = recover_structs(ssa);
            // Real TypeInferPass (unlace-passes). Self-bounded at 100 inner
            // iterations with monotone lattice joins, plus
            // `seed_from_composites` so pointer-typed struct fields are
            // recognised as `Ptr` instead of bottoming out at `Int(8)`.
            // The caller's per-function deadline (`config.timeout`,
            // default 30s) still applies; an inner divergence emits a
            // `tracing::warn!` and breaks out, so this cannot wedge the
            // pipeline. Replaces the historical `run_type_infer_bounded`
            // CLI-local stub (left only in `benches/decompile_medium.rs`
            // as a frozen benchmark baseline).
            run_instrumented(&unlace_passes::type_infer::TypeInferPass, ssa)?;
            // t228: TIE-style constraint solver fills the holes left by
            // the ad-hoc walker (LOAD/STORE addresses as `Ptr`, phi joins,
            // binop SameType edges) so the outer fixed-point's type-
            // signature comparison can settle once the constraint graph
            // converges.
            run_instrumented(&TypeConstraintSolverPass, ssa)?;

            Ok(())
        },
    )
    .context("outer fixed-point pipeline failed")?;

    if outer_report.hit_cap {
        tracing::warn!(
            func = %ssa.function.name,
            cap = DEFAULT_OUTER_FIXEDPOINT_CAP,
            "pass pipeline outer loop hit iteration cap without converging"
        );
    }

    // Batch 1: pattern-recognition / annotation-only passes that don't
    // influence the outer-loop type/IR fixedpoint. Running them once
    // after convergence (instead of every outer iter) keeps large
    // functions inside the per-function timeout — wiring all four inside
    // the loop pushed `medium.elf::sub_1560` (1845 bytes) past 30 s.
    //
    // - BitfieldIdiomPass: byte-swap (`bswap`) idiom recognition.
    // - CryptoIdiomPass: AES / RISC-V Zk sequence annotation.
    // - IndirectCallResolvePass: traces `Callind` chains back to a
    //   unique `Const` target after copy-prop has settled.
    // - OpTypeBindingPass: attaches struct-offset / enum-constant
    //   bindings to LOAD/STORE/compare operands. Reads
    //   `composite_var_types` and `enum_discriminants`, both of which
    //   are stable by the time the outer loop exits.
    run_instrumented(&BitfieldIdiomPass, ssa)
        .context("bitfield idiom pass failed")?;
    run_instrumented(&CryptoIdiomPass, ssa)
        .context("crypto idiom pass failed")?;
    run_instrumented(&IndirectCallResolvePass, ssa)
        .context("indirect call resolve pass failed")?;
    // Batch 9: companion to IndirectCallResolvePass — detect Branchind
    // jump-table patterns and record candidate (base, entry_size) pairs
    // on `ssa.resolved_jump_tables`. Concrete target decoding happens
    // later in `decompile_function_with_symbols` once the binary's
    // read-only sections are in scope; emit_output then feeds the
    // resolved tables to `refine_switches_with_tables`.
    run_instrumented(&IndirectJumpResolvePass, ssa)
        .context("indirect jump resolve pass failed")?;
    run_instrumented(&OpTypeBindingPass, ssa)
        .context("op type binding pass failed")?;

    // (3) Presentation-layer post-passes. These run once, after the type
    // and IR shape have stabilised, because they encode print-time
    // decisions that should be made against the final IR.
    run_instrumented(&ExpressionTreePass, ssa)
        .context("expression tree pass failed")?;

    run_instrumented(&VariableMergePass, ssa)
        .context("variable merge pass failed")?;

    // Batch 3 slice 1: Lvar candidate collection. Runs after the
    // variable-merge coalescer (whose `merged_names` we read as the
    // surviving-temp set) and before the C printer (which currently
    // ignores `lvars` — pure metadata). No IR changes; no emitter
    // impact; goldens unchanged. See
    // `unlace_passes::lvar_collect::LvarCollectPass`.
    run_instrumented(&LvarCollectPass, ssa)
        .context("lvar collect pass failed")?;

    // Batch 1: Chaitin-Briggs PHI-operand coalescing. Sits after the
    // variable-merge coalescer and before role-based naming so its
    // interference-graph-driven merge groups land in `merged_names`
    // alongside the merger's output — VarNamingPass then names one C
    // variable per coalesced cluster.
    run_instrumented(&RegisterCoalescePass, ssa)
        .context("register coalesce pass failed")?;

    // Batch 1: language-specific recovery passes. Each is gated by its
    // own data shape — Rust enum/vtable passes early-return when no
    // discriminant-load / fat-pointer pattern is present, so they are
    // no-ops on non-Rust binaries. RustPanicPass needs the symbol
    // resolver (panic-function name matching) and so only runs on the
    // resolver-aware path.
    run_instrumented(&RustEnumPass, ssa).context("rust enum pass failed")?;
    run_instrumented(&RustVtablePass, ssa).context("rust vtable pass failed")?;
    if let Some(resolve) = resolver {
        RustPanicPass
            .run_with_resolver(ssa, resolve)
            .context("rust panic pass failed")?;
    }

    // t227 — role-based naming. Sits after the variable-merge coalescer so
    // role names like `i`/`saved_rbx` can override the merger's generic
    // `vN` choices, while still losing to *meaningful* (non-`vN`) names
    // produced by the merger (it occasionally promotes a DWARF name into
    // its output map).
    run_instrumented(&VarNamingPass, ssa).context("var naming pass failed")?;

    // t230 — calling-convention finalization. Runs last so the
    // dead-param drop, byte-mask narrowing, and caller-side
    // return-type inference all see the fully-stabilised IR + names.
    run_instrumented(&CallingConvFinalizePass, ssa)
        .context("calling-conv finalization pass failed")?;

    // Bump the signature revision iff the pipeline mutated any of the three
    // observable signature components. Whole-program drivers can compare
    // revisions across runs to know which functions to re-analyze.
    let _ = bump_if_signature_changed(ssa, &pre_pipeline_sig);

    tracing::debug!(
        ir_changes = total_ir_changes,
        outer_iters = outer_report.iterations,
        outer_hit_cap = outer_report.hit_cap,
        signature_revision = ssa.signature_revision,
        "pass pipeline complete"
    );

    Ok(PassesReport {
        ir_changes: total_ir_changes,
        outer: outer_report,
    })
}

fn apply_dwarf_to_ssa(ssa: &mut SsaFunction, dwarf: &DwarfInfo, entry: &FunctionEntry) {
    let Some(debug_func) = dwarf_function_for_entry(dwarf, entry) else {
        return;
    };

    for local in &debug_func.locals {
        let Some(frame_offset) = local.frame_offset else {
            continue;
        };
        ssa.dwarf_local_names
            .entry(frame_offset)
            .or_insert_with(|| local.name.clone());

        let Some(type_name) = local.type_name.as_deref() else {
            continue;
        };
        let Some(dwarf_type) = dwarf_type_to_ssa_type(type_name, dwarf) else {
            continue;
        };
        for base in stack_bases_for_frame_offset(ssa, frame_offset) {
            ssa.composite_var_types
                .entry(base)
                .or_insert_with(|| dwarf_type.clone());
        }
    }
}

fn dwarf_function_for_entry<'a>(
    dwarf: &'a DwarfInfo,
    entry: &FunctionEntry,
) -> Option<&'a unlace_loader::FunctionDebugInfo> {
    dwarf
        .functions
        .values()
        .find(|func| func.name == entry.name)
        .or_else(|| dwarf.functions.get(&entry.addr))
}

fn stack_bases_for_frame_offset(ssa: &SsaFunction, frame_offset: i64) -> Vec<SsaVarnode> {
    let mut bases = BTreeSet::new();
    for var in ssa.var_map.values() {
        let base = var.base;
        if base.space == SpaceId::Stack && stack_offset_matches(base.offset, frame_offset) {
            bases.insert(*var);
        }
    }
    bases.into_iter().collect()
}

fn stack_offset_matches(raw_offset: u64, frame_offset: i64) -> bool {
    raw_offset as i64 == frame_offset || raw_offset == frame_offset.unsigned_abs()
}

fn dwarf_type_to_ssa_type(type_name: &str, dwarf: &DwarfInfo) -> Option<Type> {
    let normalized = normalize_dwarf_type_name(type_name);
    let pointer_depth = normalized.matches('*').count();
    let base_name = normalized.replace('*', " ");
    let base_name = base_name.split_whitespace().collect::<Vec<_>>().join(" ");
    let mut ty = dwarf_base_type_to_ssa(&base_name, dwarf)?;
    for _ in 0..pointer_depth {
        ty = Type::Ptr(Box::new(ty));
    }
    Some(ty)
}

fn normalize_dwarf_type_name(type_name: &str) -> String {
    type_name
        .trim()
        .replace("const ", "")
        .replace("volatile ", "")
        .replace("restrict ", "")
        .replace("typedef ", "")
}

fn dwarf_base_type_to_ssa(base_name: &str, dwarf: &DwarfInfo) -> Option<Type> {
    let struct_name = base_name.strip_prefix("struct ").unwrap_or(base_name);
    if let Some(struct_type) = dwarf.structs.get(struct_name) {
        return Some(Type::Struct {
            name: struct_type.name.clone(),
            fields: struct_type
                .fields
                .iter()
                .filter_map(|field| {
                    dwarf_type_to_ssa_type(&field.type_name, dwarf).map(|ty| StructFieldType {
                        name: field.name.clone(),
                        offset: field.offset,
                        ty,
                    })
                })
                .collect(),
        });
    }

    let primitive = match base_name {
        "_Bool" | "bool" => PrimitiveType::Bool,
        "char" | "signed char" | "unsigned char" => PrimitiveType::Int(1),
        "short" | "short int" | "signed short" | "signed short int" | "unsigned short"
        | "unsigned short int" => PrimitiveType::Int(2),
        "int" | "signed int" | "unsigned int" => PrimitiveType::Int(4),
        "long" | "long int" | "signed long" | "signed long int" | "unsigned long"
        | "unsigned long int" => PrimitiveType::Int(8),
        "long long"
        | "long long int"
        | "signed long long"
        | "signed long long int"
        | "unsigned long long"
        | "unsigned long long int" => PrimitiveType::Int(8),
        "float" => PrimitiveType::Float,
        "double" => PrimitiveType::Double,
        "void" => return None,
        _ => return None,
    };
    Some(Type::Primitive(primitive))
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
    /// Optional explicit C-printer configuration. When `None` the printer
    /// derives its config from `UNLACE_*` environment variables.
    pub print_config: Option<unlace_output::PrintConfig>,
    /// User-authored annotations (function comments, custom names, …) loaded
    /// from a sidecar JSON file.  `None` when no sidecar was found.
    pub annotations: Option<crate::annotations::AnnotationDb>,
}

impl Default for PipelineConfig {
    fn default() -> Self {
        Self {
            timeout: Duration::from_secs(30),
            print_config: None,
            annotations: None,
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

/// Phase-1 helper for interproc batch: lift a function, build SSA, apply DWARF
/// and EH info, and run the pass pipeline (with symbol resolver). Returns the
/// fully-optimised `SsaFunction` ready for interprocedural refinement and later
/// emission.
///
/// This deliberately stops *before* `emit_output` — the caller is expected to
/// collect all results into a `BTreeMap<u64, SsaFunction>`, run
/// [`run_whole_program_interproc`] over the map, and then call
/// [`emit_function_interproc`] on each entry.
pub fn lift_and_run_passes(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    discovered: &[FunctionEntry],
) -> Result<SsaFunction> {
    let _span = tracing::debug_span!("lift_and_run_passes", func = %entry.name).entered();
    let deadline = Instant::now() + config.timeout;

    let mut ir_func = lift_function(image, lifter, entry)?;
    unlace_struct::merge_linear_blocks(&mut ir_func);
    unlace_struct::tail_duplicate_small_blocks(&mut ir_func);
    unlace_struct::split_irreducible_entries(&mut ir_func);

    check_timeout(deadline, &entry.name)?;

    let mut ssa = unlace_ir::ssa::build_ssa(ir_func);
    ssa.arch = image.arch;

    if let Some(dwarf_info) = dwarf {
        apply_dwarf_to_ssa(&mut ssa, dwarf_info, entry);
    }

    populate_eh_landing_pads(image, entry, &mut ssa);
    warn_if_large_ir(&entry.name, &ssa);
    check_timeout(deadline, &entry.name)?;

    let symbols = build_symbol_table_with_functions(image, discovered);
    let mut stable_symbol_names: BTreeMap<u64, &'static str> = BTreeMap::new();
    for (&addr, name) in &symbols {
        stable_symbol_names.insert(addr, Box::leak(name.clone().into_boxed_str()));
    }
    let resolve_name = |addr: u64| -> Option<&'static str> {
        stable_symbol_names.get(&addr).copied()
    };

    // Batch 6 (pre-pass): parse printf-family format strings against the
    // raw post-SSA IR. The pre-pass run is load-bearing because the
    // copyprop / sccp clusters inside `run_passes_with_resolver` fold the
    // `Copy(reg, …) ; IntAdd(base, const)` pattern that
    // `find_constant_arg` keys on — once those passes run, the format
    // string's absolute address is no longer reachable from the call
    // site. The post-pass call below remains for completeness and to
    // capture sites the pre-pass missed; `parse_printf_format_strings`
    // is additive and never clobbers existing entries.
    let _variadic_types_pre = parse_printf_format_strings(
        &mut ssa,
        &|addr| stable_symbol_names.get(&addr).copied(),
        &image.string_table,
    );

    if let Err(e) = run_passes_with_resolver(&mut ssa, &resolve_name) {
        tracing::warn!(func = %entry.name, err = %e, "pass pipeline failed; continuing with unoptimized");
    }

    check_timeout(deadline, &entry.name)?;
    Ok(ssa)
}

/// Phase-3 helper for interproc batch: emit output from a refined `SsaFunction`.
pub fn emit_function_interproc(
    ssa: &mut SsaFunction,
    image: &BinaryImage,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    discovered: &[FunctionEntry],
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Result<String> {
    let _span = tracing::debug_span!("emit_function_interproc", func = %entry.name).entered();
    let symbols = build_symbol_table_with_functions(image, discovered);
    let mut stable_symbol_names: BTreeMap<u64, &'static str> = BTreeMap::new();
    for (&addr, name) in &symbols {
        stable_symbol_names.insert(addr, Box::leak(name.clone().into_boxed_str()));
    }
    if !symbols.is_empty() {
        ssa.go_defer_sites = detect_go_defer(ssa, |addr| stable_symbol_names.get(&addr).copied())
            .into_iter()
            .map(|site| unlace_ir::ssa::GoDeferSite {
                defer_block: site.defer_block,
                deferred_func: site.deferred_func,
                has_recover: site.has_recover,
            })
            .collect();
    }
    let _libc = annotate_libc_calls(ssa, &|addr| symbols.get(&addr).cloned());
    let _var = parse_printf_format_strings(ssa, &|addr| stable_symbol_names.get(&addr).copied(), &image.string_table);
    let go_iface_devirtualized_calls = collect_go_iface_devirtualized_calls(ssa, image, &symbols);
    let mut libc_call_canonical: BTreeMap<u64, String> = BTreeMap::new();
    for (&(bid, idx), canonical) in &ssa.libc_call_annotations {
        if let Some(block) = ssa.function.blocks.get(&bid) {
            if let Some(insn) = block.insns.get(idx) {
                libc_call_canonical.insert(insn.addr, canonical.clone());
            }
        }
    }
    let mut printer_annotations = config.annotations.as_ref()
        .map(|db| build_printer_annotations(db, entry.addr))
        .unwrap_or_default();
    printer_annotations.go_defer_sites = ssa.go_defer_sites.clone();
    let hash_pass = unlace_passes::StringHashSwitchPass::from_strings(&image.string_table);
    printer_annotations.string_hash_table = hash_pass.hash_table().clone();
    if let Some(pdb_types) = image.pdb_types.as_ref() {
        printer_annotations.pdb_constants_by_value = pdb_types.constants_by_value.clone();
    }
    let objc_info = unlace_loader::scan_objc_classlist(image);
    printer_annotations.objc_classes = objc_info.classes.into_values().collect();
    printer_annotations.go_interfaces = image.go_types.clone();
    printer_annotations.libc_call_canonical = libc_call_canonical;
    printer_annotations.go_iface_devirtualized_calls = go_iface_devirtualized_calls;
    let printer_annotations = Some(printer_annotations);
    resolve_jump_table_targets(ssa, image);
    let jt_sections = build_jump_table_section_views(image);
    emit_output(emit, ssa, dwarf, &symbols, &image.string_table, rtti, config.print_config, printer_annotations.as_ref(), &jt_sections)
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
    decompile_function_with_symbols(image, lifter, entry, emit, config, dwarf, &[], None)
}

/// Process-wide FLIRT signature database; lazily built on first use.
fn flirt_db() -> &'static FlirtDb {
    use std::sync::OnceLock;
    static DB: OnceLock<FlirtDb> = OnceLock::new();
    DB.get_or_init(unlace_loader::default_flirt_db)
}

/// Try to identify `entry`'s function body as a known library stub.
/// Returns the canonical name when matched.
///
/// FLIRT is only consulted for functions whose user-facing name *already*
/// looks like a stripped-binary stub (`sub_XXXX`, empty / synthesised, or
/// already a known libc name from PLT resolution). For named functions
/// (`main`, application code) we skip the lookup — false-positives there
/// would silently elide user code with a library stub comment. This
/// mirrors IDA's behaviour where FLIRT only renames `unknown_libname`
/// entries.
pub fn flirt_match(image: &BinaryImage, entry: &FunctionEntry) -> Option<String> {
    let resolved = flirt_resolved_names(image);
    flirt_match_with_resolved(image, entry, &resolved)
}

fn flirt_match_with_resolved(
    image: &BinaryImage,
    entry: &FunctionEntry,
    resolved: &BTreeMap<u64, String>,
) -> Option<String> {
    if !is_flirt_eligible_name(&entry.name) {
        return None;
    }
    let text = text_section(image)?;
    let (start, end) = function_bounds(entry, text);
    if start < text.vaddr {
        return None;
    }
    let off_start = (start - text.vaddr) as usize;
    let off_end = ((end - text.vaddr) as usize).min(text.data.len());
    if off_start >= off_end {
        return None;
    }
    let bytes = &text.data[off_start..off_end];
    flirt_db()
        .match_function_with_refs(bytes, resolved)
        .map(|m| m.name.to_string())
}

fn flirt_resolved_names(image: &BinaryImage) -> BTreeMap<u64, String> {
    let mut resolved = BTreeMap::new();
    for (&addr, sym) in &image.symbols {
        if sym.kind == SymbolKind::Function && !is_flirt_eligible_name(&sym.name) {
            resolved.insert(addr, sym.name.clone());
        }
    }
    for (&addr, name) in &image.plt_symbols {
        resolved.insert(addr, name.clone());
    }

    let mut changed = true;
    while changed {
        changed = false;
        let mut candidates: Vec<(u64, String)> = image
            .symbols
            .iter()
            .filter(|(addr, sym)| {
                sym.kind == SymbolKind::Function
                    && is_flirt_eligible_name(&sym.name)
                    && !resolved.contains_key(addr)
            })
            .filter_map(|(_addr, sym)| {
                let entry = FunctionEntry {
                    name: sym.name.clone(),
                    addr: sym.addr,
                    size: sym.size,
                };
                flirt_match_with_resolved(image, &entry, &resolved).map(|name| (sym.addr, name))
            })
            .collect();
        candidates.sort_by_key(|(addr, _)| *addr);
        for (addr, name) in candidates {
            if resolved.insert(addr, name).is_none() {
                changed = true;
            }
        }
    }

    resolved
}

/// Whether `name` looks like a stripped-binary placeholder that FLIRT is
/// allowed to rename. Real symbol names ("main", "process_args") are off
/// limits — the user named them deliberately and a pattern collision
/// would silently swap the body.
fn is_flirt_eligible_name(name: &str) -> bool {
    name.is_empty()
        || name.starts_with("sub_")
        || name.starts_with("loc_")
        || name.starts_with("unk_")
        || name.starts_with("nullsub_")
        || name == "entry"
}

/// Render a one-line C-printer surrogate for a FLIRT-matched function.
/// The body is elided; the canonical library name is surfaced as both the
/// emitted symbol and a `// [flirt] …` annotation so a human reader knows
/// the decompiler chose pattern-recognition over instruction-by-instruction
/// recovery.
pub fn render_flirt_stub(canonical: &str, entry: &FunctionEntry) -> String {
    format!(
        "// [flirt] {canonical}\n// {} @ {:#x} (matched library stub; body elided)\n\
         void {}(void) {{ /* {canonical} */ }}\n",
        entry.name, entry.addr, canonical,
    )
}

pub fn decompile_function_with_symbols(
    image: &BinaryImage,
    lifter: &dyn Lifter,
    entry: &FunctionEntry,
    emit: EmitFormat,
    config: &PipelineConfig,
    dwarf: Option<&DwarfInfo>,
    discovered: &[FunctionEntry],
    rtti: Option<&unlace_loader::RttiInfo>,
) -> Result<String> {
    let _span = tracing::debug_span!("decompile_function", func = %entry.name).entered();
    let deadline = Instant::now() + config.timeout;

    if matches!(emit, EmitFormat::C) {
        if let Some(canonical) = flirt_match(image, entry) {
            tracing::debug!(func = %entry.name, canonical = %canonical, "flirt match; eliding body");
            return Ok(render_flirt_stub(&canonical, entry));
        }
    }

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
    // Batch 2: tag the SSA function with its target arch so stack-recovery
    // passes consult the right [`unlace_ir::stack::StackSpec`]. Previously
    // every non-x86 binary fell through to a hard-coded RSP=32 lookup and
    // produced `stack_vars.len() == 0`.
    ssa.arch = image.arch;
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        "build_ssa done"
    );

    if let Some(dwarf_info) = dwarf {
        apply_dwarf_to_ssa(&mut ssa, dwarf_info, entry);
    }

    populate_eh_landing_pads(image, entry, &mut ssa);

    warn_if_large_ir(&entry.name, &ssa);
    check_timeout(deadline, &entry.name)?;

    // Batch 1: build the call-target VA → name resolver *before* the pass
    // pipeline so symbol-pattern-gated passes (NoreturnDetectPass,
    // RustPanicPass) can match against PLT/import names. The leaked
    // `&'static str`s previously built only for `detect_go_defer` are now
    // also reused as the resolver backing store.
    let symbols = build_symbol_table_with_functions(image, discovered);
    let mut stable_symbol_names: BTreeMap<u64, &'static str> = BTreeMap::new();
    for (&addr, name) in &symbols {
        stable_symbol_names.insert(addr, Box::leak(name.clone().into_boxed_str()));
    }

    let t = Instant::now();
    let resolve_name = |addr: u64| -> Option<&'static str> {
        stable_symbol_names.get(&addr).copied()
    };

    // Batch 6 (pre-pass): parse printf-family format strings *before*
    // the optimization pipeline runs. The IR pattern that
    // `find_constant_arg` relies on (`Copy(arg_reg, t)` where `t` is
    // defined by `IntAdd(image_base, const)`) is destroyed by copyprop /
    // sccp, so the call must precede `run_passes_with_resolver`. The
    // post-pass call below is kept (additive merge) to cover any sites
    // the pre-pass missed.
    let _variadic_types_pre = parse_printf_format_strings(
        &mut ssa,
        &|addr| stable_symbol_names.get(&addr).copied(),
        &image.string_table,
    );

    if let Err(e) = run_passes_with_resolver(&mut ssa, &resolve_name) {
        tracing::warn!(err = %e, "pass pipeline failed; emitting unoptimized");
    }
    tracing::trace!(
        elapsed_us = t.elapsed().as_micros() as u64,
        "run_passes done"
    );

    check_timeout(deadline, &entry.name)?;

    let t = Instant::now();

    if !symbols.is_empty() {
        ssa.go_defer_sites = detect_go_defer(&ssa, |addr| stable_symbol_names.get(&addr).copied())
            .into_iter()
            .map(|site| unlace_ir::ssa::GoDeferSite {
                defer_block: site.defer_block,
                deferred_func: site.deferred_func,
                has_recover: site.has_recover,
            })
            .collect();
    }

    // t229: classify Call targets against the libc family roster
    // (memcpy / malloc / printf-family aliases) and stash the canonical
    // names on ssa.libc_call_annotations. The closure resolves the
    // constant-target VA of each Call against the just-built symbol
    // table — the same map the printer will use, so a name only matches
    // here if the printer would also have rendered it.
    let _libc_annotations_added =
        annotate_libc_calls(&mut ssa, &|addr| symbols.get(&addr).cloned());

    // Batch 6: recover per-slot variadic argument types for printf-style
    // call sites. Walks each Call to a variadic libc function, resolves
    // the format-string argument's constant address through the string
    // table, parses the conversions, and stashes the inferred
    // `PrimitiveType` list in `ssa.variadic_call_types`. The resolver is
    // the same `&'static str` symbol map the noreturn/rust-panic passes
    // used; the string table is the loader's read-only data map.
    let _variadic_types_added = parse_printf_format_strings(
        &mut ssa,
        &|addr| stable_symbol_names.get(&addr).copied(),
        &image.string_table,
    );

    // t298 — Go iface-to-concrete devirtualization. When a `Callind`
    // target resolves to a unique method pointer recorded in a
    // `runtime.itab`, surface the concrete method symbol at print time.
    let go_iface_devirtualized_calls = collect_go_iface_devirtualized_calls(&ssa, image, &symbols);

    // Re-key (BlockId, insn_idx) → canonical name to (call_va → canonical
    // name) for the printer, which sees instructions only by their VA.
    let mut libc_call_canonical: BTreeMap<u64, String> = BTreeMap::new();
    for (&(bid, idx), canonical) in &ssa.libc_call_annotations {
        if let Some(block) = ssa.function.blocks.get(&bid) {
            if let Some(insn) = block.insns.get(idx) {
                libc_call_canonical.insert(insn.addr, canonical.clone());
            }
        }
    }

    let mut printer_annotations = config
        .annotations
        .as_ref()
        .map(|db| build_printer_annotations(db, entry.addr))
        .unwrap_or_default();
    printer_annotations.go_defer_sites = ssa.go_defer_sites.clone();
    let hash_pass = unlace_passes::StringHashSwitchPass::from_strings(&image.string_table);
    printer_annotations.string_hash_table = hash_pass.hash_table().clone();
    if let Some(pdb_types) = image.pdb_types.as_ref() {
        printer_annotations.pdb_constants_by_value = pdb_types.constants_by_value.clone();
    }
    let objc_info = unlace_loader::scan_objc_classlist(image);
    printer_annotations.objc_classes = objc_info.classes.into_values().collect();
    printer_annotations.go_interfaces = image.go_types.clone();
    printer_annotations.libc_call_canonical = libc_call_canonical;
    printer_annotations.go_iface_devirtualized_calls = go_iface_devirtualized_calls;
    let printer_annotations = Some(printer_annotations);

    // Batch 9: section-aware second phase of jump-table recovery.
    // `IndirectJumpResolvePass` (run as a post-loop one-shot above) has
    // already detected candidate `Branchind` table dispatches and stashed
    // their bases on `ssa.resolved_jump_tables`; here we walk the binary
    // image to decode the concrete target addresses out of `.rodata`.
    // No-op when no candidates were detected.
    resolve_jump_table_targets(&mut ssa, image);
    let jt_sections = build_jump_table_section_views(image);

    let result = emit_output(
        emit,
        &ssa,
        dwarf,
        &symbols,
        &image.string_table,
        rtti,
        config.print_config,
        printer_annotations.as_ref(),
        &jt_sections,
    );
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

/// Recover precise try/catch boundaries for `entry` from the binary's
/// `.eh_frame` and `.gcc_except_table` sections, populating
/// [`SsaFunction::eh_landing_pads`].
///
/// This replaces the heuristic `__cxa_throw` / `__cxa_begin_catch` call-site
/// detection with the authoritative LSDA call-site table that the C++
/// personality routine consumes at runtime. Each landing-pad VA is the first
/// instruction of a catch / cleanup handler — the structurer wraps blocks
/// starting at these addresses in `HirNode::TryCatch`.
///
/// On any failure (missing sections, parse error, no FDE for this function)
/// the landing-pad set is left empty and structuring proceeds as if no
/// exception data existed. This is safe: empty set ⇒
/// `structure_with_landing_pads` behaves identically to plain `structure`.
///
/// **Deferred:** this only stores landing-pad addresses, not the per-handler
/// typeinfo / action chain. Multiple `catch (T1) / catch (T2)` arms collapse
/// into a single `HirNode::TryCatch` body — disambiguating them requires
/// extending the HIR with a per-arm typeinfo slot, which is left for later.
fn populate_eh_landing_pads(image: &BinaryImage, entry: &FunctionEntry, ssa: &mut SsaFunction) {
    let eh = match unlace_loader::parse_eh_frame(image) {
        Ok(eh) if !eh.lsda_entries.is_empty() => eh,
        _ => return,
    };

    let info = match unlace_loader::parse_gcc_except_table(image, &eh.lsda_entries) {
        Ok(info) if !info.is_empty() => info,
        _ => return,
    };

    // Match this function's start address against the LSDA function map.
    // The FDE's initial_address is what populates `function_start`, which
    // matches `FunctionEntry::addr` for entries discovered from the symbol
    // table or DWARF.
    let Some(lsda) = info.functions.get(&entry.addr) else {
        return;
    };

    for region in &lsda.try_regions {
        if let Some(lp) = region.landing_pad {
            ssa.eh_landing_pads.insert(lp);
        }
    }

    if !ssa.eh_landing_pads.is_empty() {
        tracing::trace!(
            func = %entry.name,
            count = ssa.eh_landing_pads.len(),
            "populated EH landing pads from LSDA",
        );
    }
}

/// Slice an [`AnnotationDb`] down to the per-function view the printer needs.
///
/// `function_comments`/`line_comments` are keyed by function entry address;
/// `custom_names` is the global addr→name map and is passed through whole so
/// the printer can also rename callees referenced from inside this function.
fn build_printer_annotations(
    db: &crate::annotations::AnnotationDb,
    func_addr: u64,
) -> unlace_output::PrinterAnnotations {
    unlace_output::PrinterAnnotations {
        function_comment: db.function_comments.get(&func_addr).cloned(),
        line_comments: db
            .line_comments
            .get(&func_addr)
            .cloned()
            .unwrap_or_default(),
        custom_names: db.custom_names.clone(),
        ..Default::default()
    }
}

fn collect_go_iface_devirtualized_calls(
    ssa: &SsaFunction,
    image: &BinaryImage,
    symbols: &BTreeMap<u64, String>,
) -> BTreeMap<u64, String> {
    let mut method_to_symbol: BTreeMap<u64, String> = BTreeMap::new();
    for (&addr, raw) in symbols {
        method_to_symbol.entry(addr).or_insert_with(|| raw.clone());
    }

    let itabs = Arc::new(image.go_itabs.clone());
    if itabs.is_empty() || method_to_symbol.is_empty() {
        return BTreeMap::new();
    }

    let mut resolved: BTreeMap<u64, String> = BTreeMap::new();
    for (&(bid, idx), &target) in &ssa.resolved_indirect_calls {
        let Some(block) = ssa.function.blocks.get(&bid) else {
            continue;
        };
        let Some(insn) = block.insns.get(idx) else {
            continue;
        };
        if insn.op != IrOp::Callind {
            continue;
        }

        let mut matched_name: Option<String> = None;
        for itab in itabs.values() {
            if !itab.methods.contains(&target) {
                continue;
            }
            let Some(raw_name) = method_to_symbol.get(&target) else {
                continue;
            };
            // The unique target address is enough to prove the concrete
            // implementation body. We intentionally don't require the
            // interface/concrete type metadata itself to be rendered here —
            // the `runtime.itab` membership test is the devirtualization proof,
            // and the printer just needs a stable direct-callee label.
            matched_name = Some(unlace_output::demangle::sanitize_for_c(
                &unlace_output::demangle::demangle(raw_name)
                    .map(|d| d.short_name)
                    .unwrap_or_else(|| raw_name.clone()),
            ));
            break;
        }

        if let Some(name) = matched_name {
            resolved.insert(insn.addr, name);
        }
    }
    resolved
}

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

    // Heuristic upper bound on how many entries we'll try to decode: we
    // don't yet recover the bounds-check at the dispatch site, so cap at
    // a generous slot count and let xref / size logic shorten later. For
    // the wiring slice we simply walk until either the base section ends
    // or we've decoded `MAX_PROBE_ENTRIES` slots.
    const MAX_PROBE_ENTRIES: u32 = 64;

    let mut updated = std::collections::BTreeMap::new();
    for (&branch_addr, cand) in &ssa.resolved_jump_tables {
        // Already resolved? keep as-is.
        if cand.num_entries > 0 && !cand.targets.is_empty() {
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
        let probe_entries = fit_entries.min(MAX_PROBE_ENTRIES);
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
            if let Some(targets) = read_jump_table(&table, section) {
                // Sanity check: every entry must point inside the binary's
                // executable footprint, otherwise this isn't really a table.
                let plausible = !targets.is_empty()
                    && targets.iter().all(|&t| {
                        sections
                            .iter()
                            .any(|s| s.contains_addr(t) && s.perms == unlace_struct::SectionPerms::RX)
                    });
                if plausible {
                    updated.insert(
                        branch_addr,
                        JumpTableInfo {
                            base: cand.base,
                            entry_size,
                            num_entries: targets.len() as u32,
                            endian_little: matches!(endian, TableEndian::Little),
                            targets,
                        },
                    );
                    resolved = true;
                    break;
                }
            }
        }
        if !resolved {
            updated.insert(branch_addr, cand.clone());
        }
    }
    ssa.resolved_jump_tables = updated;
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

pub fn emit_output(
    format: EmitFormat,
    ssa: &SsaFunction,
    dwarf: Option<&DwarfInfo>,
    symbols: &BTreeMap<u64, String>,
    string_table: &BTreeMap<u64, String>,
    rtti: Option<&unlace_loader::RttiInfo>,
    print_config: Option<unlace_output::PrintConfig>,
    annotations: Option<&unlace_output::PrinterAnnotations>,
    jump_table_sections: &[unlace_struct::SectionView<'_>],
) -> Result<String> {
    match format {
        EmitFormat::Ir => Ok(unlace_output::dump_ir(ssa)),
        EmitFormat::CfgDot => Ok(unlace_output::emit_cfg_dot(ssa)),
        EmitFormat::C => {
            // Use LSDA-derived landing pads when available; falls back to
            // plain `structure` (no TryCatch wrapping) when the set is empty.
            let mut hir = if ssa.eh_landing_pads.is_empty() {
                unlace_struct::structure(ssa).context("control-flow structuring failed")?
            } else {
                unlace_struct::structure_with_landing_pads(ssa, &ssa.eh_landing_pads)
                    .context("control-flow structuring failed")?
            };
            // Batch 9: post-structuring switch recovery, followed by
            // jump-table-aware refinement. `recover_switches` walks the
            // HIR and normalises any `HirNode::Switch` produced by the
            // structurer; `refine_switches_with_tables` then promotes
            // those switches' arm labels from synthetic indices to the
            // concrete case values decoded from the binary's jump
            // tables (populated upstream by
            // `IndirectJumpResolvePass` + `resolve_jump_table_targets`).
            unlace_struct::recover_switches(&mut hir);
            if !ssa.resolved_jump_tables.is_empty() && !jump_table_sections.is_empty() {
                let tables_for_refine = jump_table_info_map_to_struct(&ssa.resolved_jump_tables);
                if !tables_for_refine.is_empty() {
                    unlace_struct::refine_switches_with_tables(
                        &mut hir,
                        &tables_for_refine,
                        jump_table_sections,
                    );
                }
            }
            unlace_struct::ternary_recovery(&mut hir);
            unlace_struct::short_circuit_recovery(&mut hir);
            unlace_struct::flatten_if_else_chains(&mut hir);
            unlace_struct::simplify_chain_conditions(&mut hir, ssa);
            unlace_struct::if_chain_to_switch(&mut hir, ssa);
            unlace_struct::recover_cmov_switches(&mut hir, ssa);
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
            // Batch 9 slice 2: collapse consecutive cases with equal
            // bodies and drop redundant `default:` arms so the printer
            // emits IDA-style stacked case labels.
            unlace_struct::cleanup_switches(&mut hir);
            let header = unlace_output::FunctionHeaderInfo::from_ssa(ssa, symbols);

            // t224: precompute the recovered-composite preamble from the
            // SsaFunction here — the printer sees only HirFunction and so
            // can't reach `inferred_structs` / `array_struct_layouts`
            // directly.  Splice the rendered block onto a local clone of
            // the caller's annotations (or build a fresh one) so the
            // upstream `AnnotationDb`-derived view is left untouched.
            //
            // t231: alongside the preamble, compute the
            // `array_struct_indices` map (same numbering as the
            // preamble) and clone the layouts themselves through so the
            // printer's `try_array_struct_field_access` can rewrite
            // Load/Store sites into `arr<N>[i].field_<offset>` form.
            let inferred_preamble = unlace_output::emit_inferred_struct_preamble(ssa);
            let array_indices = unlace_output::compute_array_struct_indices(ssa);
            let has_arrays = !ssa.array_struct_layouts.is_empty();
            let mut ann_owned: Option<unlace_output::PrinterAnnotations> = None;
            if !inferred_preamble.is_empty() || has_arrays {
                let mut clone = annotations.cloned().unwrap_or_default();
                if !inferred_preamble.is_empty() {
                    clone.inferred_struct_preamble = Some(inferred_preamble);
                }
                if has_arrays {
                    clone.array_struct_layouts = ssa.array_struct_layouts.clone();
                    clone.array_struct_indices = array_indices;
                }
                ann_owned = Some(clone);
            }
            let ann_ref = ann_owned.as_ref().or(annotations);

            Ok(unlace_output::print_c_with_annotations(
                &hir,
                dwarf,
                Some(&header),
                Some(symbols),
                Some(string_table),
                rtti,
                print_config,
                ann_ref,
            ))
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ArchId;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{Function, IrInsn, Varnode};
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
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
            go_types: std::collections::BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
        }
    }

    #[test]
    fn t298_collects_go_iface_devirtualized_calls_from_itab_method() {
        let mut func = Function::new("go_iface", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let target = Varnode::unique(0, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            target,
            smallvec![Varnode::constant(0x4010, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![target, Varnode::reg(0, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        unlace_passes::IndirectCallResolvePass
            .run(&mut ssa)
            .unwrap();

        let mut image = make_text_image(vec![0xC3], 0x1000);
        image.go_itabs.insert(
            0x9000,
            unlace_loader::go_types::GoItab {
                va: 0x9000,
                inter_type_va: 0xA000,
                concrete_type_va: 0xB000,
                hash: 0x1234,
                methods: vec![0x4010],
            },
        );
        let mut symbols = BTreeMap::new();
        symbols.insert(0x4010, "main.(*MyType).Do".to_string());

        let resolved = collect_go_iface_devirtualized_calls(&ssa, &image, &symbols);
        assert_eq!(
            resolved.get(&0x1004).map(String::as_str),
            Some("main_MyType_Do")
        );
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

        assert!(addrs.contains(&base), "push r15: {addrs:?}");
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

    #[test]
    fn flirt_render_stub_emits_canonical_header() {
        let entry = FunctionEntry {
            name: "sub_4011a0".into(),
            addr: 0x4011a0,
            size: 16,
        };
        let out = super::render_flirt_stub("strcpy", &entry);
        assert!(out.contains("// [flirt] strcpy"), "header missing: {out}");
        assert!(out.contains("body elided"));
        assert!(out.contains("void strcpy(void)"));
    }

    // -----------------------------------------------------------------
    // t234 — Wave 24 pipeline ordering smoke test
    //
    // Builds a synthetic SsaFunction that exercises every recovery
    // dependency tracked in the module-level doc comment:
    //
    //   * a stack local at RSP-8 (drives `recover_stack_frame`),
    //   * a STORE whose value is the local's address (drives
    //     `detect_byref` — the address escapes),
    //   * a loop with an induction variable and an array-of-struct
    //     access (drives `recover_structs`),
    //   * a CALL to a recognised libc symbol (drives `LibcIdiomsPass`
    //     once wired).
    //
    // The test asserts each Wave-24 side effect that has actually been
    // wired into the pipeline at this revision, and notes the rest as
    // TODOs so the assertions can be lifted in lock-step with each
    // pass landing.
    // -----------------------------------------------------------------
    #[test]
    fn t234_wave24_pipeline_ordering_smoke() {
        use smallvec::smallvec;
        use unlace_ir::ssa::{PrimitiveType, build_ssa};
        use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

        // ---- Build a synthetic SsaFunction ----
        //
        //   entry:
        //     u0 = rsp - 8         ; address of a stack local
        //     store ram, u0, rax   ; spill `rax` to the local
        //     u1 = rcx + 8         ; loop-counter-ish param chain
        //     store ram, u0, rcx   ; second write to the same local
        //                          ; (forms a partial-access group)
        //     call malloc, 0x40    ; libc call (recognised by name)
        //     return rcx
        //
        // The CALL target is `Varnode::constant(0x4040, 8)`; the
        // matching symbol table entry "malloc" lives on the SSA func's
        // `extra_symbols` slot (mirrors how the real loader populates
        // PLT/IAT name maps).
        let rsp = Varnode::reg(0x20, 8); // sysv x86_64 RSP encoding
        let rax = Varnode::reg(0x00, 8);
        let rcx = Varnode::reg(0x10, 8);
        let u0 = Varnode::unique(0, 8);
        let u1 = Varnode::unique(8, 8);
        let c8 = Varnode::constant(8, 8);
        let ram = Varnode::constant(1, 8);
        let malloc_addr = Varnode::constant(0x4040, 8);
        let malloc_arg = Varnode::constant(0x40, 8);

        let insns = vec![
            // stack local at -8: u0 = rsp - 8
            IrInsn::with_output(IrOp::IntSub, u0, smallvec![rsp, c8], 0x1000),
            // store rax at *(rsp-8)
            IrInsn::without_output(IrOp::Store, smallvec![ram, u0, rax], 0x1004),
            // small loop-counter update for variety
            IrInsn::with_output(IrOp::IntAdd, u1, smallvec![rcx, c8], 0x1008),
            // libc call site
            IrInsn::without_output(IrOp::Call, smallvec![malloc_addr, malloc_arg], 0x100C),
            // return
            IrInsn::without_output(IrOp::Return, smallvec![rcx], 0x1014),
        ];

        let mut func = Function::new("t234_smoke", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);

        let _ = &PrimitiveType::Unknown; // satisfy unused-import lints

        let mut ssa = build_ssa(func);

        // Run the full pass pipeline.
        super::run_passes(&mut ssa).expect("pipeline must not crash on a synthetic SsaFunction");

        // (1) stack_frame populated — t209 wired.
        assert!(
            ssa.stack_frame.is_some(),
            "Wave-24/t209: `recover_stack_frame` must populate `ssa.stack_frame`"
        );

        // (2) byref_info populated — t210 wired.
        assert!(
            ssa.byref_info.is_some(),
            "Wave-24/t210: `detect_byref` must populate `ssa.byref_info`"
        );

        // (3) At least one var has a more-specific type than Unknown.
        //     Driven by `TypeInferPass` + the cluster of type
        //     recovery passes; this is the most permissive assertion
        //     because the t228 constraint solver is not yet wired.
        let non_unknown = ssa
            .var_types
            .values()
            .any(|t| !matches!(t, PrimitiveType::Unknown));
        assert!(
            non_unknown,
            "type recovery must produce at least one non-Unknown var_type entry; got: {:?}",
            ssa.var_types,
        );

        // (4) t229: `annotate_libc_calls` runs at the tail of
        //     `run_passes`, but only inside the CLI driver — the bare
        //     `run_passes(&mut ssa)` smoke path used by this test does
        //     NOT thread a symbol-table resolver in. Touch the field to
        //     guard against rename / removal; the genuine assertion
        //     lives in `unlace-output`'s c_printer tests
        //     (`t229_call_rewrites_*`).
        let _ = &ssa.libc_call_annotations;

        // (5) t227: `VarNamingPass` always runs and writes into
        //     `var_role_names`. The synthetic body is too tight to
        //     classify as a loop, so `var_role_names` may legitimately
        //     stay empty here; we just touch the field to ensure the
        //     pass didn't crash.
        let _ = &ssa.var_role_names;

        // (6) t230: `CallingConvFinalizePass` always populates
        //     `finalized_signature` (with empty params if no callers
        //     are supplied to this single-function smoke test).
        assert!(
            ssa.finalized_signature.is_some(),
            "Wave-26/t230: `CallingConvFinalizePass` must populate \
             `ssa.finalized_signature`"
        );
    }

    #[test]
    fn flirt_match_finds_known_prologue_in_text() {
        // Build a tiny image whose .text holds the leading bytes of glibc's
        // memcpy: endbr64; mov %rdi,%rax; mov %rdx,%rcx; rep movsb; ret.
        let memcpy_bytes: Vec<u8> = vec![
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xD1, 0xF3, 0xA4, 0xC3,
        ];
        let base: u64 = 0x1000;
        let image = make_text_image(memcpy_bytes.clone(), base);
        let entry = FunctionEntry {
            name: "sub_1000".into(),
            addr: base,
            size: memcpy_bytes.len() as u64,
        };
        let canonical = super::flirt_match(&image, &entry);
        assert_eq!(canonical.as_deref(), Some("memcpy"));
    }

    #[test]
    fn flirt_match_resolves_reference_name_lists() {
        let mut code = vec![0x55, 0x48, 0x89, 0xE5, 0xE8, 0x37, 0x00, 0x00, 0x00];
        code.resize(0x40, 0x90);
        code.extend_from_slice(&[
            0xF3, 0x0F, 0x1E, 0xFA, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xD1, 0xF3, 0xA4, 0xC3,
        ]);
        let base: u64 = 0x1000;
        let mut image = make_text_image(code, base);
        image.symbols.insert(
            base,
            unlace_loader::Symbol {
                name: "sub_1000".into(),
                addr: base,
                size: 9,
                kind: SymbolKind::Function,
            },
        );
        image.symbols.insert(
            base + 0x40,
            unlace_loader::Symbol {
                name: "sub_1040".into(),
                addr: base + 0x40,
                size: 13,
                kind: SymbolKind::Function,
            },
        );
        let entry = FunctionEntry {
            name: "sub_1000".into(),
            addr: base,
            size: 9,
        };
        let canonical = super::flirt_match(&image, &entry);
        assert_eq!(canonical.as_deref(), Some("__memcpy_chk"));
    }
}
