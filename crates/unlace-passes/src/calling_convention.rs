//! Calling convention detection via argument register usage analysis.
//!
//! Detects System V AMD64 vs Microsoft x64 by examining which registers are
//! read before being written in the function entry block.
//!
//! Also provides [`ParamInferPass`] for parameter inference and
//! [`ReturnTypeInferPass`] for return type inference based on the detected
//! calling convention.

use std::collections::{BTreeMap, BTreeSet};

use smallvec::SmallVec;
use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
#[allow(dead_code)]
const RSP: u64 = 32;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const SYSV_VARARGS_READ_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9, RAX];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const SYSV_ONLY_REGS: &[u64] = &[RDI, RSI];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

fn calling_trace_line(func: &SsaFunction, message: impl std::fmt::Display) {
    tracing::debug!(target: "unlace::calling", "func={} {message}", func.function.name);
}

fn calling_trace_line_verbose(func: &SsaFunction, message: impl std::fmt::Display) {
    tracing::trace!(target: "unlace::calling", "func={} {message}", func.function.name);
}

fn tracked_reg_contains(tracked_regs: &[u64], reg: u64) -> bool {
    tracked_regs.contains(&reg)
}

fn tracked_input_register(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    input: &unlace_ir::Varnode,
    tracked_regs: &[u64],
) -> Option<(u64, u8)> {
    // The raw slot may be a unique temp that SSA maps to a register version, so
    // only constants can be rejected before the SSA lookup.
    if input.space == SpaceId::Const {
        return None;
    }
    let (reg, size) = input_register(func, bid, insn_idx, input_idx, input)?;
    tracked_reg_contains(tracked_regs, reg).then_some((reg, size))
}

pub struct CallingConventionDetectPass;

impl Pass for CallingConventionDetectPass {
    fn name(&self) -> &str {
        "calling-convention-detect"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let detected = {
            let _span = linkscope::phase("pass.calling-convention.detect");
            detect_calling_convention(func)
        };
        if detected != func.calling_convention {
            func.calling_convention = detected;
            Ok(true)
        } else {
            Ok(false)
        }
    }
}

fn detect_calling_convention(func: &SsaFunction) -> CallingConvention {
    if matches!(func.arch, ArchId::AArch64) {
        return CallingConvention::AArch64;
    }

    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return arch_default_cc(func);
    };

    // Collect registers that are READ before being WRITTEN in the entry block.
    let mut defined: BTreeSet<u64> = BTreeSet::new();
    let mut read_before_write: BTreeSet<u64> = BTreeSet::new();

    for (insn_idx, insn) in entry_block.insns.iter().enumerate() {
        match insn.op {
            IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
            _ => {}
        }

        for (input_idx, inp) in insn.inputs.iter().enumerate() {
            if let Some((reg, _size)) = input_register(func, entry, insn_idx, input_idx, inp)
                && !defined.contains(&reg)
            {
                read_before_write.insert(reg);
            }
        }

        if let Some(output) = insn.output
            && output.space == SpaceId::Register
        {
            defined.insert(output.offset);
        }
    }

    if let Some(phis) = func.phi_map.get(&entry) {
        for phi in phis {
            if phi.output.base.space == SpaceId::Register {
                defined.insert(phi.output.base.offset);
            }
        }
    }

    let base = score_convention_for_arch(func, &read_before_write);
    let result = refine_convention(func, base, &read_before_write);
    calling_trace_line(
        func,
        format!(
            "cc-detect entry={} defined={:?} read_before_write={:?} base={base:?} refined={result:?}",
            entry.0, defined, read_before_write
        ),
    );

    // If entry-block-only analysis produced Unknown (common after SSA
    // optimisation pushes arg register reads into successor blocks or
    // propagates them away entirely), fall back to the architecture-implied
    // default calling convention.
    if result == CallingConvention::Unknown {
        let fallback = arch_default_cc(func);
        calling_trace_line(
            func,
            format!("cc-detect fallback-to-arch-default result={fallback:?}"),
        );
        return fallback;
    }

    result
}

/// Collect registers that are read before being written in any block of the
/// function. This captures argument register usage that has migrated out of
/// the entry block due to SSA optimisation (copy-prop, DCE, block merging).
fn collect_whole_function_reads_for(func: &SsaFunction, tracked_regs: &[u64]) -> BTreeSet<u64> {
    let mut reads = BTreeSet::new();
    for (bid, block) in &func.function.blocks {
        let mut defined_in_block: BTreeSet<u64> = BTreeSet::new();
        if let Some(phis) = func.phi_map.get(bid) {
            for phi in phis {
                if phi.output.base.space == SpaceId::Register
                    && tracked_reg_contains(tracked_regs, phi.output.base.offset)
                {
                    defined_in_block.insert(phi.output.base.offset);
                }
            }
        }
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
                _ => {}
            }
            for (input_idx, inp) in insn.inputs.iter().enumerate() {
                if let Some((reg, _size)) =
                    tracked_input_register(func, *bid, insn_idx, input_idx, inp, tracked_regs)
                    && !defined_in_block.contains(&reg)
                {
                    reads.insert(reg);
                    if reads.len() == tracked_regs.len() {
                        return reads;
                    }
                }
            }
            if let Some(output) = insn.output
                && output.space == SpaceId::Register
                && tracked_reg_contains(tracked_regs, output.offset)
            {
                defined_in_block.insert(output.offset);
            }
        }
    }
    reads
}

/// Collect machine registers that are **live-on-entry** to the function, i.e.
/// some path from the entry block reaches a use before any def. This is the
/// principled parameter test: a true parameter must be read before it is
/// written along at least one path from entry.
///
/// `collect_whole_function_reads` is a coarse over-approximation — it counts a
/// register as "read" whenever it is read-before-write in *any single block*,
/// even when that block is dominated by a def of the register (e.g. `main`'s
/// outgoing-call-argument setups, where the register was loaded earlier). That
/// produces phantom `aN` parameters. Proper backward liveness eliminates them:
/// a register defined before its use along every path is not live-on-entry.
///
/// t61 (NOT wired in): this is the principled param fix — replacing the
/// `collect_whole_function_reads` fallback in `infer_params` with this makes
/// `main` → `main(void)` and drops the 14 phantom `aN`. It is correct and
/// validated (reproduces the documented 23/2 with cc-fails ONLY on the
/// `c5/c1 ->field` printer symptom), but it SURFACES a latent upstream SSA
/// pointer⊕scalar phi conflation (a register reused for a pointer and a scalar
/// is phi-merged before a deref — e.g. stripped `v8#10 = MULTIEQUAL(ptr v8#7,
/// scalar v8#9, ...)` is then `LOAD`ed). That conflation leaks an address into
/// the result and cannot be repaired at the name/printer layer. Re-wire this
/// only together with the upstream fix. See
/// `docs/design-lvar-liverange-split-2026-06-01.md`.
struct ParamInputScan {
    live_on_entry_reads: BTreeSet<u64>,
    reg_consumer_ops: BTreeMap<u64, Vec<IrOp>>,
    reg_input_sizes: BTreeMap<u64, BTreeSet<u8>>,
}

fn collect_param_input_scan(func: &SsaFunction, tracked_regs: &[u64]) -> ParamInputScan {
    // Per-block upward-exposed uses (`use`) and definitions (`def`) over machine
    // register offsets. Phi outputs define their register at the block header;
    // phi inputs are uses on the corresponding predecessor edge (recorded
    // separately as that predecessor's live-out contribution).
    let mut use_set: BTreeMap<BlockId, BTreeSet<u64>> = BTreeMap::new();
    let mut def_set: BTreeMap<BlockId, BTreeSet<u64>> = BTreeMap::new();
    let mut phi_pred_uses: BTreeMap<BlockId, BTreeSet<u64>> = BTreeMap::new();
    let mut reg_consumer_ops: BTreeMap<u64, Vec<IrOp>> = BTreeMap::new();
    let mut reg_input_sizes: BTreeMap<u64, BTreeSet<u8>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        let mut defined: BTreeSet<u64> = BTreeSet::new();
        let mut used: BTreeSet<u64> = BTreeSet::new();
        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                if phi.output.base.space == SpaceId::Register
                    && tracked_reg_contains(tracked_regs, phi.output.base.offset)
                {
                    defined.insert(phi.output.base.offset);
                }
            }
        }
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
                _ => {}
            }
            for (input_idx, inp) in insn.inputs.iter().enumerate() {
                let Some((reg, mut size)) =
                    tracked_input_register(func, bid, insn_idx, input_idx, inp, tracked_regs)
                else {
                    continue;
                };
                if !defined.contains(&reg) {
                    used.insert(reg);
                }
                if input_role_can_imply_pointer(insn.op, input_idx) {
                    reg_consumer_ops.entry(reg).or_default().push(insn.op);
                }
                let raw_size = size;
                if insn.op == IrOp::Subpiece
                    && input_idx == 0
                    && insn.inputs.get(1).is_some_and(|offset| {
                        offset.space == SpaceId::Const && offset.offset == 0 && offset.size > 0
                    })
                    && let Some(output) = insn.output
                    && output.size > 0
                    && output.size < size
                {
                    size = output.size;
                    calling_trace_line_verbose(
                        func,
                        format!(
                            "param-size-refine reg={reg} bid={} insn={} input={} raw_size={raw_size} refined_size={size} reason=subpiece-low-output",
                            bid.0, insn_idx, input_idx
                        ),
                    );
                }
                reg_input_sizes.entry(reg).or_default().insert(size);
            }
            if let Some(output) = insn.output
                && output.space == SpaceId::Register
                && tracked_reg_contains(tracked_regs, output.offset)
            {
                defined.insert(output.offset);
            }
        }
        use_set.insert(bid, used);
        def_set.insert(bid, defined);
    }

    // Phi inputs flow from a specific predecessor: record each as that
    // predecessor's live-out contribution (killed there if the predecessor
    // redefines the register before the edge).
    for phis in func.phi_map.values() {
        for phi in phis {
            if phi.output.base.space != SpaceId::Register {
                continue;
            }
            for (pred, input) in &phi.inputs {
                if input.base.space == SpaceId::Register
                    && tracked_reg_contains(tracked_regs, input.base.offset)
                {
                    phi_pred_uses
                        .entry(*pred)
                        .or_default()
                        .insert(input.base.offset);
                }
            }
        }
    }

    // Backward liveness fixpoint. live_in[B] = use[B] ∪ (live_out[B] − def[B]);
    // live_out[B] = ⋃ live_in[succ] ∪ phi-input-uses contributed by B.
    let mut live_in: BTreeMap<BlockId, BTreeSet<u64>> = func
        .function
        .blocks
        .keys()
        .map(|&bid| (bid, BTreeSet::new()))
        .collect();
    let mut changed = true;
    while changed {
        changed = false;
        for (&bid, block) in &func.function.blocks {
            let mut live_out: BTreeSet<u64> = BTreeSet::new();
            for &succ in &block.successors {
                if let Some(s) = live_in.get(&succ) {
                    live_out.extend(s.iter().copied());
                }
            }
            if let Some(pu) = phi_pred_uses.get(&bid) {
                live_out.extend(pu.iter().copied());
            }
            let def = &def_set[&bid];
            let mut new_in = use_set[&bid].clone();
            new_in.extend(live_out.into_iter().filter(|r| !def.contains(r)));
            if new_in != live_in[&bid] {
                live_in.insert(bid, new_in);
                changed = true;
            }
        }
    }

    ParamInputScan {
        live_on_entry_reads: live_in
            .get(&func.function.entry)
            .cloned()
            .unwrap_or_default(),
        reg_consumer_ops,
        reg_input_sizes,
    }
}

fn input_register(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    input: &unlace_ir::Varnode,
) -> Option<(u64, u8)> {
    if let Some(sv) = func
        .var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        && sv.base.space == SpaceId::Register
    {
        let primitive = func.var_types.get(sv).copied();
        let size = narrowest_nonzero_width([
            primitive.and_then(primitive_type_width),
            (input.size > 0).then_some(input.size),
            (sv.base.size > 0).then_some(sv.base.size),
        ])
        .unwrap_or(sv.base.size);
        calling_trace_line_verbose(
            func,
            format!(
                "input-register via=ssa bid={} insn={} input={} raw={:?} sv={:?} primitive={primitive:?} chosen_size={size}",
                bid.0, insn_idx, input_idx, input, sv
            ),
        );
        return Some((sv.base.offset, size));
    }
    if input.space == SpaceId::Register {
        calling_trace_line_verbose(
            func,
            format!(
                "input-register via=raw bid={} insn={} input={} raw={:?} chosen_size={}",
                bid.0, insn_idx, input_idx, input, input.size
            ),
        );
        return Some((input.offset, input.size));
    }
    calling_trace_line_verbose(
        func,
        format!(
            "input-register none bid={} insn={} input={} raw={:?}",
            bid.0, insn_idx, input_idx, input
        ),
    );
    None
}

fn narrowest_nonzero_width<const N: usize>(widths: [Option<u8>; N]) -> Option<u8> {
    widths.into_iter().flatten().filter(|w| *w > 0).min()
}

fn primitive_type_width(ty: PrimitiveType) -> Option<u8> {
    match ty {
        PrimitiveType::Unknown => None,
        PrimitiveType::Bool => Some(1),
        PrimitiveType::Int(width) | PrimitiveType::UnsignedInt(width) => Some(width),
        PrimitiveType::Float => Some(4),
        PrimitiveType::Double | PrimitiveType::Ptr => Some(8),
    }
}

/// Architecture-implied default calling convention. Used as a final fallback
/// when heuristic detection cannot classify the function (e.g. leaf functions
/// whose argument usage was optimised away).
fn arch_default_cc(func: &SsaFunction) -> CallingConvention {
    use unlace_ir::ArchId;
    match func.arch {
        ArchId::X86_64 => CallingConvention::SystemV,
        ArchId::AArch64 => CallingConvention::AArch64,
        _ => CallingConvention::Unknown,
    }
}

/// Post-process the score-based CC pick by looking for **strong, positive**
/// evidence of stdcall (`ret N` with `N > 0`), thiscall (`this` written to
/// RCX-relative storage at entry), or fastcall (`ret N` + ECX/EDX prefix).
///
/// The refinement only fires on **explicit** signals so it never demotes a
/// well-classified SysV/MSx64/AArch64 candidate. `score_convention`'s output
/// is returned unchanged when no positive signal is present.
fn refine_convention(
    func: &SsaFunction,
    base: CallingConvention,
    read_before_write: &BTreeSet<u64>,
) -> CallingConvention {
    let callee_pops_bytes = callee_pop_bytes(func);
    let stores_this = stores_this_pointer(func);

    // Thiscall — strongest signal is "writes ECX to a stack slot at entry"
    // (the classic `mov [rsp+8], ecx` `this`-spill). Only override if the
    // base wasn't already a confident SysV pick.
    if stores_this
        && !matches!(base, CallingConvention::SystemV)
        && read_before_write.contains(&RCX)
        && !SYSV_ONLY_REGS.iter().any(|r| read_before_write.contains(r))
    {
        return CallingConvention::Thiscall;
    }

    // Stdcall — non-zero `ret N` epilogue, and no RDI/RSI/R8/R9 in the arg
    // pool (those would imply 64-bit ABI, which never uses `ret N`). We
    // override base = MicrosoftX64 here because i386 stdcall and amd64
    // MS x64 are mutually exclusive yet share the RCX/RDX prefix.
    if callee_pops_bytes > 0
        && !SYSV_ONLY_REGS.iter().any(|r| read_before_write.contains(r))
        && ![R8, R9].iter().any(|r| read_before_write.contains(r))
    {
        return CallingConvention::Stdcall;
    }

    base
}

/// Detect a `this`-pointer spill: a `Store` of `ECX` to an RSP/RBP-relative
/// slot in the entry block. This is a near-certain marker of i386 thiscall
/// (`mov dword ptr [ebp - X], ecx`) and Windows x64 thiscall (`mov [rsp+8],
/// rcx`).
fn stores_this_pointer(func: &SsaFunction) -> bool {
    let entry = func.function.entry;
    let Some(block) = func.function.blocks.get(&entry) else {
        return false;
    };

    for insn in &block.insns {
        if insn.op != IrOp::Store {
            continue;
        }
        if insn.inputs.len() < 3 {
            continue;
        }
        let value = insn.inputs[2];
        if value.space == SpaceId::Register && value.offset == RCX {
            return true;
        }
    }
    false
}

/// Inspect every `Return` instruction and return the bytes the callee pops
/// from the stack. The current IR models `RETURN input[0]` as the source-level
/// return value register, not the machine `ret imm16` stack-pop immediate, so
/// folded constants like `return 42;` are not callee-pop evidence.
fn callee_pop_bytes(func: &SsaFunction) -> u64 {
    let _ = func;
    0
}

fn score_convention(read_before_write: &BTreeSet<u64>) -> CallingConvention {
    if read_before_write.is_empty() {
        return CallingConvention::Unknown;
    }

    let aarch64_hits: usize = read_before_write
        .iter()
        .filter(|&&off| AARCH64_ARG_REGS.contains(&off))
        .count();

    // AArch64 X0=offset 0 overlaps with x86 RAX=offset 0, and X1=8 overlaps
    // with RCX=8. Disambiguate: RAX is never an argument in either x86 CC,
    // so if offset 0 is read as an input without any x86-specific arg regs
    // (RDI/RSI for SysV, RCX/RDX/R8/R9 for MSx64), it's AArch64.
    let has_rax_read = read_before_write.contains(&RAX);
    let has_sysv_only = SYSV_ONLY_REGS.iter().any(|r| read_before_write.contains(r));
    let has_x64_common = [RCX, RDX, R8, R9]
        .iter()
        .any(|r| read_before_write.contains(r));

    if has_rax_read && !has_sysv_only && !has_x64_common && aarch64_hits >= 1 {
        return CallingConvention::AArch64;
    }

    let sysv_hits: usize = read_before_write
        .iter()
        .filter(|&&off| SYSV_ARG_REGS.contains(&off))
        .count();

    let msx64_hits: usize = read_before_write
        .iter()
        .filter(|&&off| MSX64_ARG_REGS.contains(&off))
        .count();

    // RDI/RSI are argument regs ONLY in System V; MS x64 never uses them.
    if has_sysv_only {
        return CallingConvention::SystemV;
    }

    // Both CCs share RCX, RDX, R8, R9. Without RDI/RSI present, lean MS x64
    // since System V would use RDI as the first argument.
    if msx64_hits > 0 && !has_sysv_only {
        return CallingConvention::MicrosoftX64;
    }

    if sysv_hits > 0 {
        return CallingConvention::SystemV;
    }

    if aarch64_hits >= 2 {
        return CallingConvention::AArch64;
    }

    CallingConvention::Unknown
}

/// Classify a calling convention from the set of argument-register offsets read
/// before being written (the `score_convention` decision procedure), exposed as
/// a pure, side-effect-free function so the formal-verification harness can pin
/// it to the proved spec in `rocq-tests/theories/CallingConv.v`
/// (`score_convention` there mirrors this arm-for-arm: separating-witness
/// classification over the aliased x86/AArch64 register-offset space). It does
/// not change any classification behavior — it is the same `score_convention`,
/// just callable from a conformance test.
pub fn classify_calling_convention(read_offsets: &BTreeSet<u64>) -> CallingConvention {
    score_convention(read_offsets)
}

fn score_convention_for_arch(
    func: &SsaFunction,
    read_before_write: &BTreeSet<u64>,
) -> CallingConvention {
    use unlace_ir::ArchId;

    let scored = score_convention(read_before_write);
    match func.arch {
        // AArch64: trust the scorer's AArch64 result; an x86-CC guess on an
        // ARM binary is a register-offset collision artifact, not a real CC.
        ArchId::AArch64 => match scored {
            CallingConvention::SystemV | CallingConvention::MicrosoftX64 => {
                CallingConvention::Unknown
            }
            other => other,
        },
        // x86-64: the SystemV/MicrosoftX64 scorer is authoritative; an AArch64
        // guess (X0/X1 overlapping RAX/RCX offsets) is the collision artifact.
        ArchId::X86_64 | ArchId::X86 => {
            if scored == CallingConvention::AArch64 {
                CallingConvention::Unknown
            } else {
                scored
            }
        }
        // Every other architecture (MIPS, RISC-V, PPC, V850, ARM32, …) has its
        // own register file. The scorer reads x86 register-file *offsets*
        // (RCX=8, RDX=16, …), which on these arches map to unrelated physical
        // registers and spuriously produce `Microsoft x64` / `System V`. None
        // of this scorer's x86/AArch64 verdicts are meaningful there, so report
        // `Unknown` rather than a wrong convention. (This matches the golden
        // fixtures, which show `unknown` for mips64/riscv64/ppc64/v850.)
        _ => CallingConvention::Unknown,
    }
}

// Helper to check if a register-space store to RSP-relative addresses exists
// (shadow space detection for MS x64). Reserved for future refinement.
#[allow(dead_code)]
fn has_shadow_space_stores(func: &SsaFunction) -> bool {
    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return false;
    };

    let mut shadow_stores = 0u32;
    for insn in &entry_block.insns {
        if insn.op == IrOp::Store
            && let Some(addr) = insn.inputs.get(1)
            && addr.space == SpaceId::Stack
            && addr.offset <= 32
            && addr.offset >= 8
        {
            shadow_stores += 1;
        }
    }
    shadow_stores >= 2
}

// ---------------------------------------------------------------------------
// XMM register offsets (must match unlace-lift-x86 register_file.rs)
// ---------------------------------------------------------------------------

const VEC_BASE: u64 = 0x400;
// 64-byte stride: each vector slot is sized for a full ZMM (AVX-512).
// XMM/YMM still alias at the same base offset.
const VEC_STRIDE: u64 = 64;
const fn xmm_offset(n: u64) -> u64 {
    VEC_BASE + n * VEC_STRIDE
}

const XMM0: u64 = xmm_offset(0);
const XMM1: u64 = xmm_offset(1);
const XMM2: u64 = xmm_offset(2);
const XMM3: u64 = xmm_offset(3);
const XMM4: u64 = xmm_offset(4);
const XMM5: u64 = xmm_offset(5);
const XMM6: u64 = xmm_offset(6);
const XMM7: u64 = xmm_offset(7);

const SYSV_FLOAT_REGS: &[u64] = &[XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, XMM7];
const MSX64_FLOAT_REGS: &[u64] = &[XMM0, XMM1, XMM2, XMM3];

// ---------------------------------------------------------------------------
// Parameter inference
// ---------------------------------------------------------------------------

pub struct ParamInferPass;

impl Pass for ParamInferPass {
    fn name(&self) -> &str {
        "param-infer"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        let params = {
            let _span = linkscope::phase("pass.param-infer.params");
            infer_params(func)
        };
        if params != func.inferred_params {
            func.inferred_params = params;
            changed = true;
        }

        let stack_params = {
            let _span = linkscope::phase("pass.param-infer.stack-params");
            infer_stack_params(func)
        };
        if stack_params != func.inferred_stack_params {
            func.inferred_stack_params = stack_params;
            changed = true;
        }

        let is_varargs = {
            let _span = linkscope::phase("pass.param-infer.varargs");
            detect_varargs(func)
        };
        if is_varargs != func.is_varargs {
            func.is_varargs = is_varargs;
            changed = true;
        }

        Ok(changed)
    }
}

fn infer_params(func: &SsaFunction) -> Vec<(String, PrimitiveType)> {
    let cc = func.calling_convention;
    if cc == CallingConvention::Unknown {
        return Vec::new();
    }

    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return Vec::new();
    };

    // If the entry block has no arg-register reads (common after SSA
    // optimisation pushes usage into successor blocks), fall back to the
    // whole-function scan so we still detect parameters.
    let (int_regs, float_regs): (&[u64], &[u64]) = match cc {
        CallingConvention::SystemV => (SYSV_ARG_REGS, SYSV_FLOAT_REGS),
        CallingConvention::MicrosoftX64 => (MSX64_ARG_REGS, MSX64_FLOAT_REGS),
        CallingConvention::AArch64 => (AARCH64_ARG_REGS, &[]),
        CallingConvention::Thiscall => (&[8], &[]),
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => {
            return Vec::new();
        }
    };
    let tracked_regs: SmallVec<[u64; 16]> =
        int_regs.iter().chain(float_regs.iter()).copied().collect();
    let tracked_regs = tracked_regs.as_slice();

    // Collect registers read-before-write in the entry block.
    let entry_scan_span = linkscope::phase("pass.param-infer.entry-scan");
    let mut defined: BTreeSet<u64> = BTreeSet::new();
    let mut read_before_write: BTreeSet<u64> = BTreeSet::new();

    for (insn_idx, insn) in entry_block.insns.iter().enumerate() {
        match insn.op {
            IrOp::Branch | IrOp::Cbranch | IrOp::Branchind => continue,
            _ => {}
        }
        for (input_idx, inp) in insn.inputs.iter().enumerate() {
            if let Some((reg, _size)) =
                tracked_input_register(func, entry, insn_idx, input_idx, inp, tracked_regs)
                && !defined.contains(&reg)
            {
                read_before_write.insert(reg);
            }
        }
        if let Some(output) = insn.output
            && output.space == SpaceId::Register
            && tracked_reg_contains(tracked_regs, output.offset)
        {
            defined.insert(output.offset);
        }
    }
    drop(entry_scan_span);

    let has_arg_reg_in_entry = int_regs
        .iter()
        .chain(float_regs.iter())
        .any(|r| read_before_write.contains(r));

    let all_param_scan = if !has_arg_reg_in_entry {
        let _span = linkscope::phase("pass.param-infer.fallback-scan");
        let scan = collect_param_input_scan(func, tracked_regs);
        read_before_write = scan.live_on_entry_reads.clone();
        calling_trace_line(
            func,
            format!(
                "param-fallback reason=no-arg-reg-in-entry scan=live-on-entry live_on_entry_reads={read_before_write:?} \
                 note=backward liveness from entry; excludes outgoing-call-arg setups dominated by defs"
            ),
        );
        Some(scan)
    } else {
        None
    };

    // Build a map of which registers feed into which ops for type inference
    // of each parameter. When we fell back to the whole-function scan, collect
    // consumer ops across all blocks too.
    let (reg_consumer_ops, reg_input_sizes) = if has_arg_reg_in_entry {
        let _span = linkscope::phase("pass.param-infer.entry-consumers");
        (
            collect_reg_consumer_ops_block(func, entry, tracked_regs),
            collect_reg_input_size_set_block(func, entry, tracked_regs),
        )
    } else if let Some(scan) = all_param_scan {
        (scan.reg_consumer_ops, scan.reg_input_sizes)
    } else {
        (BTreeMap::new(), BTreeMap::new())
    };

    let mut params = Vec::new();
    let mut param_idx = 1u32;

    // Count consecutive integer parameter registers that are used.
    for &reg_off in int_regs {
        if !read_before_write.contains(&reg_off) {
            break;
        }
        let ty = infer_param_type(reg_off, &reg_consumer_ops, &reg_input_sizes);
        calling_trace_line(
            func,
            format!(
                "param-promote kind=int idx={} reg={} scan={} sizes={:?} ops={:?} ty={ty:?}",
                param_idx,
                reg_off,
                if has_arg_reg_in_entry {
                    "entry"
                } else {
                    "whole-function"
                },
                reg_input_sizes.get(&reg_off),
                reg_consumer_ops.get(&reg_off)
            ),
        );
        params.push((format!("a{}", param_idx), ty));
        param_idx += 1;
    }

    // Float parameters (XMM registers).
    for &reg_off in float_regs {
        if !read_before_write.contains(&reg_off) {
            break;
        }
        calling_trace_line(
            func,
            format!(
                "param-promote kind=float idx={} reg={} scan={} ty=Double",
                param_idx,
                reg_off,
                if has_arg_reg_in_entry {
                    "entry"
                } else {
                    "whole-function"
                }
            ),
        );
        params.push((format!("a{}", param_idx), PrimitiveType::Double));
        param_idx += 1;
    }

    calling_trace_line(
        func,
        format!(
            "param-infer cc={:?} entry_arg_reads={} reads={:?} input_sizes={:?} consumer_ops={:?} params={:?}",
            cc, has_arg_reg_in_entry, read_before_write, reg_input_sizes, reg_consumer_ops, params
        ),
    );

    params
}

fn collect_reg_consumer_ops_block(
    func: &SsaFunction,
    entry: BlockId,
    tracked_regs: &[u64],
) -> BTreeMap<u64, Vec<IrOp>> {
    let Some(block) = func.function.blocks.get(&entry) else {
        return BTreeMap::new();
    };
    let mut map: BTreeMap<u64, Vec<IrOp>> = BTreeMap::new();
    for (insn_idx, insn) in block.insns.iter().enumerate() {
        for (input_idx, inp) in insn.inputs.iter().enumerate() {
            if !input_role_can_imply_pointer(insn.op, input_idx) {
                continue;
            }
            if let Some((reg, _size)) =
                tracked_input_register(func, entry, insn_idx, input_idx, inp, tracked_regs)
            {
                map.entry(reg).or_default().push(insn.op);
            }
        }
    }
    map
}

fn input_role_can_imply_pointer(op: IrOp, input_idx: usize) -> bool {
    match op {
        // LOAD/STORE p-code inputs are `[space, address, value?]`. Only the
        // address operand proves that a parameter is pointer-like; the value
        // operand is just a scalar being spilled or stored.
        IrOp::Load | IrOp::Store => input_idx == 1,
        _ => true,
    }
}

fn collect_reg_input_size_set_block(
    func: &SsaFunction,
    entry: BlockId,
    tracked_regs: &[u64],
) -> BTreeMap<u64, BTreeSet<u8>> {
    let Some(block) = func.function.blocks.get(&entry) else {
        return BTreeMap::new();
    };
    let mut map: BTreeMap<u64, BTreeSet<u8>> = BTreeMap::new();
    for (insn_idx, insn) in block.insns.iter().enumerate() {
        for (input_idx, inp) in insn.inputs.iter().enumerate() {
            if let Some((reg, size)) =
                parameter_input_size(func, entry, insn_idx, input_idx, inp, insn, tracked_regs)
            {
                map.entry(reg).or_default().insert(size);
            }
        }
    }
    map
}

fn parameter_input_size(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    input: &unlace_ir::Varnode,
    insn: &unlace_ir::IrInsn,
    tracked_regs: &[u64],
) -> Option<(u64, u8)> {
    let (reg, mut size) =
        tracked_input_register(func, bid, insn_idx, input_idx, input, tracked_regs)?;
    let raw_size = size;

    if insn.op == IrOp::Subpiece
        && input_idx == 0
        && insn.inputs.get(1).is_some_and(|offset| {
            offset.space == SpaceId::Const && offset.offset == 0 && offset.size > 0
        })
        && let Some(output) = insn.output
        && output.size > 0
        && output.size < size
    {
        size = output.size;
        calling_trace_line_verbose(
            func,
            format!(
                "param-size-refine reg={reg} bid={} insn={} input={} raw_size={raw_size} refined_size={size} reason=subpiece-low-output",
                bid.0, insn_idx, input_idx
            ),
        );
    }

    Some((reg, size))
}

// ---------------------------------------------------------------------------
// Stack-passed parameter detection
// ---------------------------------------------------------------------------
//
// SysV / cdecl convention: caller pushes overflow arguments onto the stack,
// then `call` pushes the return address (8 bytes on x86-64, 4 on i386). So
// at function entry, `[rsp + ptr_size]` is the first stack-passed arg,
// `[rsp + ptr_size + 8]` is the second, and so on.
//
// MS x64 reserves a 32-byte shadow region above the return address for
// the four register arguments, so the first real stack arg lands at
// `[rsp + ptr_size + 32]`.
//
// We detect stack params by walking the entry block for `Load`s whose
// address resolves to a positive RSP-relative offset above the
// return-address slot. The detection runs regardless of whether the
// stack-frame-recovery pass has materialised `stack_frame.locals`, so
// it works even when `StackPointerTrackingPass` hasn't fired yet (e.g.
// on the first call inside the reanalysis fixpoint).

fn infer_stack_params(func: &SsaFunction) -> BTreeSet<i64> {
    let mut out = BTreeSet::new();
    let cc = func.calling_convention;
    let ptr_size: i64 = 8;
    let min_off: i64 = match cc {
        CallingConvention::SystemV | CallingConvention::Cdecl => ptr_size,
        CallingConvention::MicrosoftX64 => ptr_size + 32,
        // Other CCs (AArch64, Thiscall, Stdcall, Unknown) are skipped:
        // their stack-arg shape isn't a flat positive RSP displacement
        // we can recognise cheaply here.
        _ => {
            calling_trace_line_verbose(
                func,
                format!("stack-param skip cc={cc:?} reason=unsupported-flat-stack-shape"),
            );
            return out;
        }
    };

    // Primary signal: the stack-frame-recovery pass already classified
    // slot kinds. Trust its `StackArg` tag when present.
    if let Some(frame) = func.stack_frame.as_ref() {
        for (&off, slot) in &frame.locals {
            if slot.kind == unlace_ir::ssa::FrameSlotKind::StackArg && off >= min_off {
                out.insert(off);
            }
        }
        if !out.is_empty() {
            calling_trace_line(
                func,
                format!(
                    "stack-param source=stack-frame cc={cc:?} min_off={min_off} params={out:?}"
                ),
            );
            return out;
        }
    }

    // Fallback: scan the entry block for `Load`s addressed at
    // `[rsp + const]` where `const >= min_off`. The address operand of a
    // `Load` is `inputs[1]`; `inputs[0]` is the space id constant.
    let entry = func.function.entry;
    let Some(block) = func.function.blocks.get(&entry) else {
        return out;
    };

    for insn in &block.insns {
        if insn.op != IrOp::Load {
            continue;
        }
        let Some(addr) = insn.inputs.get(1) else {
            continue;
        };
        // Direct Stack-space load: e.g. `Load(stack, off)`.
        if addr.space == SpaceId::Stack {
            let off = addr.offset as i64;
            if off >= min_off && off % ptr_size == 0 {
                out.insert(off);
            }
        }
    }

    calling_trace_line_verbose(
        func,
        format!("stack-param source=entry-load-scan cc={cc:?} min_off={min_off} params={out:?}"),
    );
    out
}

// ---------------------------------------------------------------------------
// Varargs detection
// ---------------------------------------------------------------------------
//
// On SysV AMD64 a variadic call requires the caller to set `%al` to the
// number of XMM registers it used to pass float args. The callee's
// `va_start` macro saves all six int arg regs and (conditionally on
// `%al > 0`) the eight XMM arg regs into a contiguous save area on the
// stack. The two strongest residual signals after SSA optimisation are:
//
// 1. `%rax` is read-before-write in the entry block (the `va_start`
//    prologue reads it to branch on the XMM count).
// 2. The function spills XMM0..XMM7 to consecutive stack slots — only
//    `va_start` produces this exact pattern (regular code spills the
//    callee-saved XMMs, not the volatile ones).
//
// We require BOTH of: `rax` read AND all 6 SysV int arg regs read
// before-write — the latter is the classic `va_start` register-save-area
// fingerprint. This avoids false positives on functions that simply use
// `rax` as a scratch-arg slot before assigning to it.

fn detect_varargs(func: &SsaFunction) -> bool {
    if func.calling_convention != CallingConvention::SystemV {
        // MS x64 / Win64 has no `%al`-style varargs marker — varargs there
        // looks identical to regular calls. We can't tell from the callee.
        return false;
    }

    let reads = collect_whole_function_reads_for(func, SYSV_VARARGS_READ_REGS);

    // Signal A: %al / %rax read-before-write somewhere in the function.
    let reads_rax = reads.contains(&RAX);

    // Signal B: all 6 SysV int arg regs read-before-write. `va_start`'s
    // register save area spills each one to `gp_offset_save`.
    let all_int_args_read = SYSV_ARG_REGS.iter().all(|r| reads.contains(r));

    // Signal C: XMM-save-area spill — stores of XMM0..XMM7 to consecutive
    // stack slots. This is the most specific signal but also the most
    // expensive; only consult it when A and B aren't both satisfied.
    let has_xmm_save_area = || -> bool {
        let mut xmm_spilled = 0u32;
        for block in func.function.blocks.values() {
            for insn in &block.insns {
                if insn.op != IrOp::Store {
                    continue;
                }
                let Some(value) = insn.inputs.get(2) else {
                    continue;
                };
                if value.space == SpaceId::Register && SYSV_FLOAT_REGS.contains(&value.offset) {
                    xmm_spilled += 1;
                }
            }
        }
        // The full save area spills all 8; require >= 4 to allow for
        // DSE-elided slots while still rejecting incidental single-XMM
        // spills.
        xmm_spilled >= 4
    };

    let xmm_save_area = !(reads_rax && all_int_args_read) && has_xmm_save_area();
    let result = (reads_rax && all_int_args_read) || xmm_save_area;
    calling_trace_line_verbose(
        func,
        format!(
            "varargs reads_rax={reads_rax} all_int_args_read={all_int_args_read} xmm_save_area={xmm_save_area} result={result} reads={reads:?}"
        ),
    );
    result
}

fn infer_param_type(
    reg_off: u64,
    consumer_ops: &BTreeMap<u64, Vec<IrOp>>,
    input_sizes: &BTreeMap<u64, BTreeSet<u8>>,
) -> PrimitiveType {
    let Some(ops) = consumer_ops.get(&reg_off) else {
        return PrimitiveType::Int(preferred_scalar_param_width(reg_off, input_sizes));
    };
    for &op in ops {
        match op {
            IrOp::FloatAdd
            | IrOp::FloatSub
            | IrOp::FloatMult
            | IrOp::FloatDiv
            | IrOp::FloatNeg
            | IrOp::FloatAbs
            | IrOp::FloatSqrt
            | IrOp::FloatInt2float
            | IrOp::FloatFloat2float
            | IrOp::FloatFloat2int
            | IrOp::FloatEqual
            | IrOp::FloatNotequal
            | IrOp::FloatLess
            | IrOp::FloatLessequal => {
                return PrimitiveType::Double;
            }
            IrOp::Ptradd | IrOp::Ptrsub | IrOp::Load | IrOp::Store => {
                return PrimitiveType::Ptr;
            }
            _ => {}
        }
    }
    PrimitiveType::Int(preferred_scalar_param_width(reg_off, input_sizes))
}

fn preferred_scalar_param_width(reg_off: u64, input_sizes: &BTreeMap<u64, BTreeSet<u8>>) -> u8 {
    let Some(sizes) = input_sizes.get(&reg_off) else {
        return 8;
    };
    sizes
        .iter()
        .copied()
        .find(|size| *size >= 4)
        .or_else(|| sizes.iter().next().copied())
        .unwrap_or(8)
}

// ---------------------------------------------------------------------------
// Return type inference
// ---------------------------------------------------------------------------

pub struct ReturnTypeInferPass;

impl Pass for ReturnTypeInferPass {
    fn name(&self) -> &str {
        "return-type-infer"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let ret_ty = infer_return_type(func);
        if ret_ty != func.inferred_return_type {
            func.inferred_return_type = ret_ty;
            Ok(true)
        } else {
            Ok(false)
        }
    }
}

fn infer_return_type(func: &SsaFunction) -> PrimitiveType {
    // Scan all blocks for RETURN instructions.
    let mut has_return = false;
    let mut has_rax_at_return = false;
    let mut has_xmm0_at_return = false;
    let mut rax_size: u8 = 8;

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Return {
                continue;
            }
            has_return = true;

            if let Some(ret_ty) = constant_return_type(insn) {
                return ret_ty;
            }

            // Look backwards from the RETURN to find the last write to RAX or XMM0
            // in this block.
            let mut found_rax = false;
            let mut found_xmm0 = false;
            for prev_insn in block.insns[..insn_idx].iter().rev() {
                if let Some(out) = prev_insn.output {
                    if out.space == SpaceId::Register && out.offset == RAX {
                        found_rax = true;
                        rax_size = out.size;
                        // Check what op produced the RAX value.
                        let ret_ty = classify_return_value(prev_insn, &func.var_types, bid, func);
                        if ret_ty != PrimitiveType::Unknown {
                            calling_trace_line(
                                func,
                                format!(
                                    "return-infer producer={:?} out_size={} ty={ret_ty:?}",
                                    prev_insn.op, out.size
                                ),
                            );
                            return ret_ty;
                        }
                        break;
                    }
                    if out.space == SpaceId::Register && out.offset == XMM0 {
                        found_xmm0 = true;
                        break;
                    }
                }
            }
            if found_xmm0 {
                has_xmm0_at_return = true;
            }
            if found_rax {
                has_rax_at_return = true;
            }
        }
    }

    if !has_return {
        return PrimitiveType::Unknown;
    }

    if has_xmm0_at_return {
        calling_trace_line(func, "return-infer xmm0-at-return ty=Double");
        return PrimitiveType::Double;
    }

    if has_rax_at_return {
        let ty = match rax_size {
            1 => PrimitiveType::Bool,
            4 => PrimitiveType::Int(4),
            _ => PrimitiveType::Int(8),
        };
        calling_trace_line(
            func,
            format!("return-infer rax-at-return size={rax_size} ty={ty:?}"),
        );
        return ty;
    }

    // RETURN exists but no RAX/XMM0 write found — likely void.
    calling_trace_line(func, "return-infer no-return-register-write ty=Unknown");
    PrimitiveType::Unknown
}

fn constant_return_type(insn: &unlace_ir::IrInsn) -> Option<PrimitiveType> {
    let ret = insn.inputs.first()?;
    if ret.space != SpaceId::Const {
        return None;
    }
    if ret.size == 8 && ret.offset == 0 {
        return None;
    }
    Some(match ret.size {
        1 => PrimitiveType::Bool,
        2 => PrimitiveType::Int(2),
        4 => PrimitiveType::Int(4),
        8 if ret.offset <= u32::MAX as u64 => PrimitiveType::Int(4),
        8 => PrimitiveType::Int(8),
        _ => PrimitiveType::Int(8),
    })
}

fn classify_return_value(
    insn: &unlace_ir::IrInsn,
    _var_types: &BTreeMap<SsaVarnode, PrimitiveType>,
    _bid: BlockId,
    _func: &SsaFunction,
) -> PrimitiveType {
    match insn.op {
        IrOp::IntZext | IrOp::IntSext => insn
            .inputs
            .first()
            .map(|input| PrimitiveType::Int(input.size.min(8)))
            .unwrap_or(PrimitiveType::Unknown),
        IrOp::Subpiece => insn
            .output
            .map(|output| PrimitiveType::Int(output.size.min(8)))
            .unwrap_or(PrimitiveType::Unknown),
        IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatNeg
        | IrOp::FloatAbs
        | IrOp::FloatSqrt
        | IrOp::FloatInt2float
        | IrOp::FloatFloat2float => PrimitiveType::Double,

        IrOp::IntEqual
        | IrOp::IntNotequal
        | IrOp::IntLess
        | IrOp::IntLessequal
        | IrOp::IntSless
        | IrOp::IntSlessequal
        | IrOp::BoolAnd
        | IrOp::BoolOr
        | IrOp::BoolNegate
        | IrOp::FloatEqual
        | IrOp::FloatNotequal
        | IrOp::FloatLess
        | IrOp::FloatLessequal => PrimitiveType::Bool,

        IrOp::Ptradd | IrOp::Ptrsub => PrimitiveType::Ptr,

        _ => PrimitiveType::Unknown,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    #[allow(dead_code)]
    fn make_entry_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// Helper: a "uses RDI as an int param" insn — `Copy(uniq, rdi)`.
    fn read_reg_to_unique(reg_off: u64, addr: u64) -> IrInsn {
        IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(0x1000 + reg_off, 8),
            smallvec![Varnode::reg(reg_off, 8)],
            addr,
        )
    }

    fn store_reg_to_stack(reg_off: u64, stack_off: u64, addr: u64) -> IrInsn {
        // STORE has 3 inputs: space-id const, address, value.
        IrInsn::without_output(
            IrOp::Store,
            smallvec![
                Varnode::constant(SpaceId::Stack as u64, 4),
                Varnode::stack(stack_off, 8),
                Varnode::reg(reg_off, 8),
            ],
            addr,
        )
    }

    #[test]
    fn param_store_value_spill_does_not_force_pointer_type() {
        let spill = store_reg_to_stack(RDI, 0x20, 0x1001);
        let mut ssa = make_entry_block_ssa(vec![spill]);
        ssa.calling_convention = CallingConvention::SystemV;

        let params = infer_params(&ssa);
        assert_eq!(
            params.first(),
            Some(&("a1".to_string(), PrimitiveType::Int(8))),
            "stored scalar parameter value should not become a pointer: {params:?}",
        );
    }

    #[test]
    fn param_load_address_operand_still_forces_pointer_type() {
        let load = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0x2000, 8),
            smallvec![
                Varnode::constant(SpaceId::Ram as u64, 4),
                Varnode::reg(RDI, 8),
            ],
            0x1001,
        );
        let mut ssa = make_entry_block_ssa(vec![load]);
        ssa.calling_convention = CallingConvention::SystemV;

        let params = infer_params(&ssa);
        assert_eq!(
            params.first(),
            Some(&("a1".to_string(), PrimitiveType::Ptr)),
            "load address operand should remain pointer evidence: {params:?}",
        );
    }

    // -- Stack param detection ------------------------------------------------

    #[test]
    fn stack_param_load_above_return_address_is_detected_sysv() {
        // SysV: a load from [rsp + 8] is the first stack-passed arg.
        let load = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0, 8),
            smallvec![
                Varnode::constant(SpaceId::Stack as u64, 4),
                Varnode::stack(8, 8),
            ],
            0x1001,
        );
        let mut ssa = make_entry_block_ssa(vec![load]);
        ssa.calling_convention = CallingConvention::SystemV;
        let stack_params = infer_stack_params(&ssa);
        assert!(
            stack_params.contains(&8),
            "expected stack offset 8 in {stack_params:?}"
        );
    }

    #[test]
    fn stack_param_below_return_address_ignored() {
        // [rsp + 0] is the return-address slot, not a parameter.
        let load = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0, 8),
            smallvec![
                Varnode::constant(SpaceId::Stack as u64, 4),
                Varnode::stack(0, 8),
            ],
            0x1001,
        );
        let mut ssa = make_entry_block_ssa(vec![load]);
        ssa.calling_convention = CallingConvention::SystemV;
        let stack_params = infer_stack_params(&ssa);
        assert!(stack_params.is_empty(), "got {stack_params:?}");
    }

    #[test]
    fn stack_param_msx64_shadow_space_skipped() {
        // MS x64: [rsp + 8 .. rsp + 40) is the shadow region. First real
        // stack arg is at [rsp + 40].
        let shadow = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0, 8),
            smallvec![
                Varnode::constant(SpaceId::Stack as u64, 4),
                Varnode::stack(16, 8),
            ],
            0x1001,
        );
        let real_arg = IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(1, 8),
            smallvec![
                Varnode::constant(SpaceId::Stack as u64, 4),
                Varnode::stack(40, 8),
            ],
            0x1002,
        );
        let mut ssa = make_entry_block_ssa(vec![shadow, real_arg]);
        ssa.calling_convention = CallingConvention::MicrosoftX64;
        let stack_params = infer_stack_params(&ssa);
        assert!(!stack_params.contains(&16), "shadow @16 leaked");
        assert!(
            stack_params.contains(&40),
            "missed real arg @40: {stack_params:?}"
        );
    }

    // -- Varargs detection ----------------------------------------------------

    #[test]
    fn varargs_detected_when_rax_plus_all_int_args_read() {
        let insns = vec![
            read_reg_to_unique(RDI, 0x1001),
            read_reg_to_unique(RSI, 0x1002),
            read_reg_to_unique(RDX, 0x1003),
            read_reg_to_unique(RCX, 0x1004),
            read_reg_to_unique(R8, 0x1005),
            read_reg_to_unique(R9, 0x1006),
            read_reg_to_unique(RAX, 0x1007),
        ];
        let mut ssa = make_entry_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        assert!(detect_varargs(&ssa));
    }

    #[test]
    fn varargs_not_detected_when_rax_alone() {
        let insns = vec![
            read_reg_to_unique(RDI, 0x1001),
            read_reg_to_unique(RAX, 0x1002),
        ];
        let mut ssa = make_entry_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        assert!(
            !detect_varargs(&ssa),
            "RAX read alone should not flag varargs"
        );
    }

    #[test]
    fn varargs_detected_via_xmm_save_area() {
        // Spilling XMM0..XMM3 to consecutive stack slots — the classic
        // `va_start` register save area fingerprint.
        let insns = vec![
            store_reg_to_stack(XMM0, 0x100, 0x1001),
            store_reg_to_stack(XMM1, 0x110, 0x1002),
            store_reg_to_stack(XMM2, 0x120, 0x1003),
            store_reg_to_stack(XMM3, 0x130, 0x1004),
        ];
        let mut ssa = make_entry_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        assert!(detect_varargs(&ssa), "XMM0..3 spill should flag varargs");
    }

    #[test]
    fn varargs_disabled_for_non_sysv() {
        let insns = vec![
            read_reg_to_unique(RDI, 0x1001),
            read_reg_to_unique(RSI, 0x1002),
            read_reg_to_unique(RDX, 0x1003),
            read_reg_to_unique(RCX, 0x1004),
            read_reg_to_unique(R8, 0x1005),
            read_reg_to_unique(R9, 0x1006),
            read_reg_to_unique(RAX, 0x1007),
        ];
        let mut ssa = make_entry_block_ssa(insns);
        ssa.calling_convention = CallingConvention::MicrosoftX64;
        // The MS x64 ABI has no callee-visible varargs marker.
        assert!(!detect_varargs(&ssa));
    }

    // -- Return inference -----------------------------------------------------

    #[test]
    fn return_type_void_when_no_rax_write_before_return() {
        // Empty entry block (just the RETURN added by the helper).
        let ssa = make_entry_block_ssa(vec![]);
        let ty = infer_return_type(&ssa);
        // No RAX write → caller sees Unknown (= treated as void downstream).
        assert_eq!(ty, PrimitiveType::Unknown);
    }

    #[test]
    fn return_type_int_when_rax_written_before_return() {
        // Mov rax, 42  ;  ret
        let write_rax = IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(RAX, 8),
            smallvec![Varnode::constant(42, 8)],
            0x1001,
        );
        let ssa = make_entry_block_ssa(vec![write_rax]);
        let ty = infer_return_type(&ssa);
        assert!(
            matches!(ty, PrimitiveType::Int(_) | PrimitiveType::Bool),
            "got {ty:?}"
        );
    }

    #[test]
    fn return_type_int_when_return_operand_is_folded_constant() {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        assert_eq!(infer_return_type(&ssa), PrimitiveType::Int(4));
    }

    #[test]
    fn constant_return_value_is_not_stdcall_callee_pop_evidence() {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(6, 4)],
            0x1000,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = unlace_ir::ArchId::X86_64;
        assert_eq!(detect_calling_convention(&ssa), CallingConvention::SystemV);
    }

    #[test]
    fn folded_64_bit_return_value_is_not_stdcall_callee_pop_evidence() {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(87, 8)],
            0x1000,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = unlace_ir::ArchId::X86_64;
        assert_eq!(infer_return_type(&ssa), PrimitiveType::Int(4));
        assert_eq!(detect_calling_convention(&ssa), CallingConvention::SystemV);
    }

    // -- End-to-end via the pass ---------------------------------------------

    #[test]
    fn param_infer_pass_sets_varargs_flag_and_stack_params_together() {
        let insns = vec![
            read_reg_to_unique(RDI, 0x1001),
            read_reg_to_unique(RSI, 0x1002),
            read_reg_to_unique(RDX, 0x1003),
            read_reg_to_unique(RCX, 0x1004),
            read_reg_to_unique(R8, 0x1005),
            read_reg_to_unique(R9, 0x1006),
            read_reg_to_unique(RAX, 0x1007),
            // Stack-arg read at [rsp + 8]
            IrInsn::with_output(
                IrOp::Load,
                Varnode::unique(0xdead, 8),
                smallvec![
                    Varnode::constant(SpaceId::Stack as u64, 4),
                    Varnode::stack(8, 8),
                ],
                0x1008,
            ),
        ];
        let mut ssa = make_entry_block_ssa(insns);
        ssa.calling_convention = CallingConvention::SystemV;
        let pass = ParamInferPass;
        pass.run(&mut ssa).unwrap();
        assert!(ssa.is_varargs, "varargs flag not set");
        assert!(
            ssa.inferred_stack_params.contains(&8),
            "stack param missing: {:?}",
            ssa.inferred_stack_params
        );
        assert!(
            !ssa.inferred_params.is_empty(),
            "register params should also be populated"
        );
    }
}
