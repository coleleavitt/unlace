//! Logical variable candidate collector — Batch 3 slice 1.
//!
//! Foundation pass that walks the *already-stable* SSA function and emits
//! one [`Lvar`] per candidate storage location:
//!
//! 1. Recovered stack-frame members (`stack_frame.locals` + `stack_vars`)
//!    → [`LvarStorage::Stack { offset }`].
//! 2. SSA temporaries surviving `variable_merge` (one candidate per distinct
//!    emitted `merged_names` cluster) → [`LvarStorage::Temp { ssa_var }`].
//! 3. Function parameters (`inferred_params`) → [`LvarStorage::Param { idx }`].
//! 4. The function's return slot when its inferred return type is not
//!    `PrimitiveType::Unknown` → [`LvarStorage::Return`].
//!
//! This pass deliberately performs **no storage-class merging**: duplicate
//! candidates across storage classes (e.g. a stack slot that also surfaces as
//! a `Temp` via `merged_names`) are allowed. SSA temp versions that already
//! share one coalesced emitted name are represented by one temp candidate.
//!
//! The pass writes only [`SsaFunction::lvars`] — no other IR field is
//! touched. It runs after `VariableMergePass` and before the C printer,
//! and is treated as pure metadata: emitter output (and goldens) must
//! not change.

use std::collections::BTreeMap;

use unlace_ir::lvar::{LiveRange, Lvar, LvarFlags, LvarId, LvarSource, LvarStorage};
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::types::TypeKind;
use unlace_ir::{BlockId, SpaceId};

use crate::pass::{Pass, PassError, PassPhase};

/// x86 RFLAGS bits occupy CF..OF at offsets 256..=261.
/// Mirrors [`crate::dead_flag_elim`].
const FLAG_OFFSET_MIN: u64 = 256;
const FLAG_OFFSET_END: u64 = 262;

/// x86-64 RIP register offset in the lifter's register file. Matches
/// [`unlace-lift-x86/src/register_file.rs`]; the instruction pointer is
/// never a user-visible C declaration.
const RIP_OFFSET: u64 = 0x288;

fn env_flag_enabled(name: &str) -> bool {
    std::env::var_os(name)
        .and_then(|v| v.into_string().ok())
        .map(|v| {
            let v = v.trim().to_ascii_lowercase();
            !(v.is_empty() || v == "0" || v == "false" || v == "off" || v == "no")
        })
        .unwrap_or(false)
}

fn lvar_trace_enabled() -> bool {
    env_flag_enabled("UNLACE_LVAR_TRACE") || env_flag_enabled("UNLACE_TRACE_ALL")
}

fn lvar_trace_filter() -> Option<String> {
    std::env::var("UNLACE_LVAR_TRACE_FILTER")
        .ok()
        .or_else(|| std::env::var("UNLACE_TRACE_FILTER").ok())
        .map(|s| s.trim().to_string())
        .filter(|s| !s.is_empty())
}

fn lvar_trace_line(line: &str) {
    if !lvar_trace_enabled() {
        return;
    }
    if let Some(filter) = lvar_trace_filter()
        && !line.contains(&filter)
    {
        return;
    }
    eprintln!("[unlace lvar] {line}");
}

/// Suppression reason recorded against a candidate `Temp` SSA varnode
/// that the lvar collector dropped instead of emitting as an [`Lvar`].
/// Used purely by the audit dump to explain why a `merged_names` entry
/// did not become a user-visible declaration.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum SuppressionReason {
    /// `Register`-space varnode at the lifter's RFLAGS offset region
    /// (CF/ZF/SF/OF/PF/AF). Flag bits are emitter-suppressed and must
    /// not be presented as source variables.
    FlagRegister,
    /// `Register`-space varnode aliasing the architectural instruction
    /// pointer (RIP / EIP on x86-64). The IP is implicit in C control
    /// flow and has no user-visible identity.
    InstructionPointer,
    /// `Unique`-space SSA temporary observed at exactly one program
    /// point — a one-shot scratch slot that the printer always folds
    /// inline. Materialising it as an Lvar would create a spurious
    /// declaration the user has no way to recognise.
    OneShotTemp,
}

impl SuppressionReason {
    /// Stable short tag used by the dump.
    pub const fn tag(self) -> &'static str {
        match self {
            Self::FlagRegister => "flag-reg",
            Self::InstructionPointer => "ip-reg",
            Self::OneShotTemp => "one-shot-temp",
        }
    }
}

/// Decide whether the candidate `Temp` lvar backed by `sv` must be
/// suppressed and, if so, why. Returns `None` when the candidate is
/// legitimately a user-visible declaration.
///
/// This is the single seam where flag-register / instruction-pointer /
/// one-shot suppression moves from the C printer into the lvar layer.
/// The printer keeps its parallel storage filter for now (it's a
/// belt-and-braces check), but the audit dump is the new source of truth
/// for "why didn't variable X appear in the output?".
pub fn classify_temp_suppression(sv: SsaVarnode, use_count: usize) -> Option<SuppressionReason> {
    match sv.base.space {
        SpaceId::Register if sv.base.offset == RIP_OFFSET => {
            Some(SuppressionReason::InstructionPointer)
        }
        SpaceId::Register
            if sv.base.offset >= FLAG_OFFSET_MIN && sv.base.offset < FLAG_OFFSET_END =>
        {
            Some(SuppressionReason::FlagRegister)
        }
        SpaceId::Unique if use_count <= 1 => Some(SuppressionReason::OneShotTemp),
        _ => None,
    }
}

/// Candidate-collector pass. Stateless. See module docs.
///
/// Slice 2 (this revision) populates each [`Lvar::live_range`] with a
/// proper SSA-derived `[start_block, end_block]` bracket rather than
/// the previous entry-block placeholder. Liveness is approximated by
/// the `(min, max)` block ids at which the SSA varnodes backing the
/// lvar appear in `var_map` (def or use). Stack/Param/Return lvars
/// without a per-varnode binding get a `[entry, max_block]` range. No
/// interference graph and no coalescing — those land in later slices.
pub struct LvarCollectPass;

impl Pass for LvarCollectPass {
    fn name(&self) -> &str {
        "lvar-collect"
    }

    fn phase(&self) -> PassPhase {
        // Runs after VariableMergePass (LVarAlloc) and before the C
        // printer; it's pure post-recovery presentation metadata.
        PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        lvar_trace_line(&format!(
            "start func={} existing_lvars={} merged_names={} stack_vars={} params={} return_type={}",
            func.function.name,
            func.lvars.len(),
            func.merged_names.len(),
            func.stack_vars.len(),
            func.inferred_params.len(),
            func.inferred_return_type,
        ));
        let new_lvars = collect(func);
        if new_lvars == func.lvars {
            lvar_trace_line(&format!(
                "done func={} changed=false lvars={}",
                func.function.name,
                new_lvars.len(),
            ));
            return Ok(false);
        }
        lvar_trace_line(&format!(
            "done func={} changed=true old_lvars={} new_lvars={}",
            func.function.name,
            func.lvars.len(),
            new_lvars.len(),
        ));
        func.lvars = new_lvars;
        Ok(true)
    }
}

/// Build the full candidate list for `func`. Returned vector is sorted
/// by [`LvarId`] (dense from 0), which matches insertion order.
fn collect(func: &SsaFunction) -> Vec<Lvar> {
    let entry = func.cfg.entry_block();
    let use_blocks = collect_use_blocks(func);
    // Function-wide span: entry block → highest real BlockId. Used as
    // a sound (over-)approximation for storage classes (Param/Return,
    // stack slots without recorded accesses) whose values logically
    // live across the whole CFG and whose individual SSA varnodes
    // aren't tracked elsewhere.
    let func_range = function_wide_range(func, entry);

    let mut out: Vec<Lvar> = Vec::new();
    let mut next_id: u32 = 0;
    let alloc_id = |id: &mut u32| {
        let r = LvarId::new(*id);
        *id += 1;
        r
    };

    collect_stack(
        func,
        &mut out,
        &mut next_id,
        &alloc_id,
        &use_blocks,
        func_range,
    );
    lvar_trace_line(&format!(
        "after-stack func={} lvars={} use_blocks={}",
        func.function.name,
        out.len(),
        use_blocks.len(),
    ));
    let use_counts = count_var_uses(func);
    for (sv, count) in &use_counts {
        lvar_trace_line(&format!(
            "use-count func={} sv={:?} count={}",
            func.function.name, sv, count
        ));
    }
    collect_temps(
        func,
        &mut out,
        &mut next_id,
        &alloc_id,
        &use_blocks,
        &use_counts,
        entry,
    );
    lvar_trace_line(&format!(
        "after-temps func={} lvars={}",
        func.function.name,
        out.len(),
    ));
    collect_params(func, &mut out, &mut next_id, &alloc_id, func_range);
    lvar_trace_line(&format!(
        "after-params func={} lvars={}",
        func.function.name,
        out.len(),
    ));
    collect_return(func, &mut out, &mut next_id, &alloc_id, func_range);
    lvar_trace_line(&format!(
        "after-return func={} lvars={}",
        func.function.name,
        out.len(),
    ));

    out
}

/// `[entry, max_block_id]` covering every real block in the function.
/// Falls back to a single-point range at `entry` if the function has
/// no blocks (defensive — shouldn't happen for well-formed SSA).
fn function_wide_range(func: &SsaFunction, entry: BlockId) -> LiveRange {
    let max = func.function.blocks.keys().copied().last().unwrap_or(entry);
    LiveRange {
        start_block: entry.min(max),
        end_block: entry.max(max),
    }
}

/// (1) Recovered stack frame members. Prefer the higher-level
/// `stack_frame.locals` when present (richer: includes parameter-region
/// positives). Fall back to the legacy `stack_vars` map for functions
/// where the frame-recovery pass hasn't run / has nothing to record.
fn collect_stack(
    func: &SsaFunction,
    out: &mut Vec<Lvar>,
    next_id: &mut u32,
    alloc_id: &impl Fn(&mut u32) -> LvarId,
    use_blocks: &BTreeMap<SsaVarnode, (BlockId, BlockId)>,
    func_range: LiveRange,
) {
    let mut emitted: std::collections::BTreeSet<i64> = std::collections::BTreeSet::new();
    if let Some(frame) = &func.stack_frame {
        for (&offset, local) in &frame.locals {
            if !matches!(local.kind, unlace_ir::ssa::FrameSlotKind::Local) {
                lvar_trace_line(&format!(
                    "suppress-stack func={} offset={} size={} kind={:?} reason=non-source-storage",
                    func.function.name, offset, local.size, local.kind
                ));
                emitted.insert(offset);
                continue;
            }
            let ty = stack_local_typekind(func, offset, local.size);
            let flags = stack_flags(func, offset);
            let source = stack_source(func, offset);
            let lr = stack_live_range(func, offset, use_blocks, func_range);
            let name = stack_lvar_name(func, offset, local.size);
            lvar_trace_line(&format!(
                "emit-stack func={} offset={} size={} name={} range={:?}->{:?} ty={:?} source={:?} flags={:?}",
                func.function.name,
                offset,
                local.size,
                name,
                lr.start_block,
                lr.end_block,
                ty,
                source,
                flags
            ));
            let mut lv = Lvar::new(
                alloc_id(next_id),
                LvarStorage::Stack { offset },
                lr,
                ty,
                source,
                flags,
            );
            lv.name = Some(name);
            out.push(lv);
            emitted.insert(offset);
        }
    }
    for (&offset, sv) in &func.stack_vars {
        if emitted.contains(&offset) {
            continue;
        }
        let ty = primitive_to_kind(sv.ty);
        let flags = stack_flags(func, offset);
        let source = stack_source(func, offset);
        let lr = stack_live_range(func, offset, use_blocks, func_range);
        let name = stack_lvar_name(
            func,
            offset,
            primitive_width(sv.ty).map(u64::from).unwrap_or(8),
        );
        lvar_trace_line(&format!(
            "emit-stack-legacy func={} offset={} name={} raw_stack_var_name={} range={:?}->{:?} ty={:?} source={:?} flags={:?}",
            func.function.name,
            offset,
            name,
            sv.name,
            lr.start_block,
            lr.end_block,
            ty,
            source,
            flags
        ));
        let mut lv = Lvar::new(
            alloc_id(next_id),
            LvarStorage::Stack { offset },
            lr,
            ty,
            source,
            flags,
        );
        lv.name = Some(name);
        out.push(lv);
        emitted.insert(offset);
    }
}

/// Compute a stack-slot's live range by unioning the per-block ranges
/// of every SSA varnode that accesses it (from
/// [`unlace_ir::ssa::StackVar::accesses`]). When no accesses are
/// recorded (e.g. the slot was recovered purely from
/// `stack_frame.locals` without a matching `stack_vars` entry), fall
/// back to the function-wide range — sound because we *know* the slot
/// is referenced somewhere.
fn stack_live_range(
    func: &SsaFunction,
    offset: i64,
    use_blocks: &BTreeMap<SsaVarnode, (BlockId, BlockId)>,
    func_range: LiveRange,
) -> LiveRange {
    let Some(sv) = func.stack_vars.get(&offset) else {
        return func_range;
    };
    let mut lr: Option<LiveRange> = None;
    for access in &sv.accesses {
        let Some(&(start, end)) = use_blocks.get(access) else {
            continue;
        };
        match lr.as_mut() {
            Some(r) => {
                r.extend_to(start);
                r.extend_to(end);
            }
            None => {
                lr = Some(LiveRange {
                    start_block: start,
                    end_block: end,
                });
            }
        }
    }
    lr.unwrap_or(func_range)
}

/// (2) SSA temporaries surviving `variable_merge`. `merged_names` is keyed
/// per `SsaVarnode`, but one logical temp may cover several coalesced SSA
/// versions with the same emitted name. Emit one `Temp` lvar per visible
/// merged-name cluster, with a unioned coarse live range, so the lvar metadata
/// matches the source-level variable rather than the raw SSA version count.
fn collect_temps(
    func: &SsaFunction,
    out: &mut Vec<Lvar>,
    next_id: &mut u32,
    alloc_id: &impl Fn(&mut u32) -> LvarId,
    use_blocks: &BTreeMap<SsaVarnode, (BlockId, BlockId)>,
    use_counts: &BTreeMap<SsaVarnode, usize>,
    entry: BlockId,
) {
    let mut by_name: BTreeMap<String, Vec<SsaVarnode>> = BTreeMap::new();
    for (sv, name) in &func.merged_names {
        by_name.entry(name.clone()).or_default().push(*sv);
    }

    for (name, members) in by_name {
        // Suppression: flag bits, the instruction pointer, and one-shot
        // Unique temps never become user-visible declarations. The audit
        // dump derives the same decision from `merged_names` keys so
        // suppressed entries are still explainable.
        let visible: Vec<SsaVarnode> = members
            .iter()
            .copied()
            .filter(|sv| {
                let uses = use_counts.get(sv).copied().unwrap_or(0);
                if let Some(reason) = classify_temp_suppression(*sv, uses) {
                    lvar_trace_line(&format!(
                        "suppress-temp func={} sv={:?} name={} uses={} reason={}",
                        func.function.name,
                        sv,
                        name,
                        uses,
                        reason.tag(),
                    ));
                    false
                } else {
                    true
                }
            })
            .collect();
        let Some(&representative) = visible.first() else {
            continue;
        };
        let mut lr = LiveRange::point(entry);
        let mut first_range = true;
        let mut pty = PrimitiveType::Unknown;
        for sv in &visible {
            let member_lr = live_range_for_temp(*sv, use_blocks, entry);
            if first_range {
                lr = member_lr;
                first_range = false;
            } else {
                lr.extend_to(member_lr.start_block);
                lr.extend_to(member_lr.end_block);
            }
            pty = pty.join(
                func.var_types
                    .get(sv)
                    .copied()
                    .unwrap_or(PrimitiveType::Unknown),
            );
        }
        let ty = primitive_to_kind(pty);
        lvar_trace_line(&format!(
            "emit-temp func={} sv={:?} name={} members={} range={:?}->{:?} ty={:?}",
            func.function.name,
            representative,
            name,
            visible.len(),
            lr.start_block,
            lr.end_block,
            ty,
        ));
        let mut lv = Lvar::new(
            alloc_id(next_id),
            LvarStorage::Temp {
                ssa_var: representative,
            },
            lr,
            ty,
            LvarSource::Inferred,
            LvarFlags::EMPTY,
        );
        lv.name = Some(name);
        out.push(lv);
    }
}

/// Count how many times each SSA varnode appears in `var_map` as either
/// a definition or a use. Used to recognise *one-shot* `Unique` temps
/// (count ≤ 1 → single program-point varnode the printer inlines).
fn count_var_uses(func: &SsaFunction) -> BTreeMap<SsaVarnode, usize> {
    let mut counts: BTreeMap<SsaVarnode, usize> = BTreeMap::new();
    for sv in func.var_map.values() {
        *counts.entry(*sv).or_insert(0) += 1;
    }
    // Phi inputs and outputs also represent real references — count them
    // so a varnode that appears only as a phi input isn't mis-classified
    // as a dead one-shot temp.
    for phis in func.phi_map.values() {
        for phi in phis {
            *counts.entry(phi.output).or_insert(0) += 1;
            for &(_pred, sv) in &phi.inputs {
                *counts.entry(sv).or_insert(0) += 1;
            }
        }
    }
    counts
}

/// Render a markdown trace of every `merged_names` entry the lvar
/// collector dropped, paired with the reason (flag-reg / ip-reg /
/// one-shot-temp). Pairs with [`dump_lvars`](unlace_ir::lvar::dump_lvars)
/// so an audit reader can answer "where did variable X go?" from a
/// single dump.
///
/// Rows are emitted in `SsaVarnode` order; the empty case yields just
/// the header so the dump is uniform across binaries.
pub fn dump_lvar_suppressions(func: &SsaFunction) -> String {
    use std::fmt::Write;
    let uses = count_var_uses(func);
    let mut out = String::new();
    let _ = writeln!(out, "| ssa | reason | uses |");
    let _ = writeln!(out, "|-----|--------|-----:|");
    for sv in func.merged_names.keys() {
        let n = uses.get(sv).copied().unwrap_or(0);
        let Some(reason) = classify_temp_suppression(*sv, n) else {
            continue;
        };
        let _ = writeln!(
            out,
            "| {:?}@0x{:x}#{} | {} | {} |",
            sv.base.space,
            sv.base.offset,
            sv.version,
            reason.tag(),
            n,
        );
    }
    out
}

/// (3) Function parameters. Each `inferred_params` entry carries a name
/// (e.g. `a1`) and a primitive type. We attach the name as a hint;
/// later naming pass can override.
fn collect_params(
    func: &SsaFunction,
    out: &mut Vec<Lvar>,
    next_id: &mut u32,
    alloc_id: &impl Fn(&mut u32) -> LvarId,
    func_range: LiveRange,
) {
    for (idx, (name, pty)) in func.inferred_params.iter().enumerate() {
        let mut flags = LvarFlags::IS_PARAM;
        if let Some(byref) = &func.byref_info
            && byref.byref_params.contains(&(idx as u32))
        {
            flags |= LvarFlags::ADDRESS_TAKEN;
        }
        // Params have no per-SSA-varnode binding in
        // `inferred_params`, so use the function-wide range — sound
        // because params are live from entry until at least the last
        // block that observes them.
        let mut lv = Lvar::new(
            alloc_id(next_id),
            LvarStorage::Param { idx: idx as u32 },
            func_range,
            primitive_to_kind(*pty),
            LvarSource::FromSig,
            flags,
        );
        if !name.is_empty() {
            lv.name = Some(name.clone());
        }
        lvar_trace_line(&format!(
            "emit-param func={} idx={} name={} type={:?} range={:?}->{:?} flags={:?}",
            func.function.name, idx, name, pty, func_range.start_block, func_range.end_block, flags,
        ));
        out.push(lv);
    }
}

/// (4) Return slot — only when the inferred return type is concrete.
/// `PrimitiveType::Unknown` means we never observed a RETURN with a
/// value (effectively `void`); skip those.
fn collect_return(
    func: &SsaFunction,
    out: &mut Vec<Lvar>,
    next_id: &mut u32,
    alloc_id: &impl Fn(&mut u32) -> LvarId,
    func_range: LiveRange,
) {
    if func.inferred_return_type != PrimitiveType::Unknown {
        // Return slot can be written from any RETURN block; use the
        // function-wide range.
        lvar_trace_line(&format!(
            "emit-return func={} type={:?} range={:?}->{:?}",
            func.function.name,
            func.inferred_return_type,
            func_range.start_block,
            func_range.end_block,
        ));
        out.push(Lvar::new(
            alloc_id(next_id),
            LvarStorage::Return,
            func_range,
            primitive_to_kind(func.inferred_return_type),
            LvarSource::Inferred,
            LvarFlags::IS_RETURN,
        ));
    }
}

/// Map a [`PrimitiveType`] to the closest [`TypeKind`] for lvar metadata.
///
/// The `TypeKind` enum is intentionally coarse (printer-oriented); this
/// is a best-effort projection. Unknown widths collapse to `Int`.
fn primitive_to_kind(pty: PrimitiveType) -> TypeKind {
    match pty {
        PrimitiveType::Unknown => TypeKind::Void,
        PrimitiveType::Bool => TypeKind::Int,
        PrimitiveType::Int(8) => TypeKind::Long,
        PrimitiveType::Int(_) => TypeKind::Int,
        PrimitiveType::UnsignedInt(8) => TypeKind::ULong,
        PrimitiveType::UnsignedInt(_) => TypeKind::UInt,
        PrimitiveType::Float => TypeKind::Int, // no f32 in TypeKind
        PrimitiveType::Double => TypeKind::Long, // no f64 in TypeKind
        PrimitiveType::Ptr => TypeKind::VoidPtr,
    }
}

fn primitive_width(pty: PrimitiveType) -> Option<u8> {
    match pty {
        PrimitiveType::Unknown => None,
        PrimitiveType::Bool => Some(1),
        PrimitiveType::Int(width) | PrimitiveType::UnsignedInt(width) => Some(width),
        PrimitiveType::Float => Some(4),
        PrimitiveType::Double => Some(8),
        PrimitiveType::Ptr => Some(8),
    }
}

fn stack_lvar_name(func: &SsaFunction, offset: i64, size: u64) -> String {
    if let Some(name) = func
        .dwarf_local_names
        .get(&offset)
        .filter(|name| !name.trim().is_empty())
    {
        return name.clone();
    }
    if size > 8 {
        format!("buf_{}", offset.unsigned_abs())
    } else {
        format!("v_{}", offset.unsigned_abs())
    }
}

/// Best-effort type for a recovered stack-frame slot. Falls back to
/// inferred primitive types from `stack_vars` and finally to `Void`.
fn stack_local_typekind(func: &SsaFunction, offset: i64, _size: u64) -> TypeKind {
    if let Some(sv) = func.stack_vars.get(&offset) {
        return primitive_to_kind(sv.ty);
    }
    TypeKind::Void
}

/// Flags for a stack-frame slot at the given offset. We set
/// `ADDRESS_TAKEN` whenever `byref_info` flags this offset as a byref
/// local, and always set `SYNTHETIC` since the lvar wasn't named by the
/// user yet.
fn stack_flags(func: &SsaFunction, offset: i64) -> LvarFlags {
    let mut f = LvarFlags::SYNTHETIC;
    if let Some(byref) = &func.byref_info
        && byref.byref_locals.contains(&offset)
    {
        f |= LvarFlags::ADDRESS_TAKEN;
    }
    if func.dwarf_local_names.contains_key(&offset) {
        f |= LvarFlags::FROM_DEBUG;
    }
    f
}

/// Source classifier for a stack slot: DWARF-provided names win, then
/// falls back to `Inferred`.
fn stack_source(func: &SsaFunction, offset: i64) -> LvarSource {
    if func.dwarf_local_names.contains_key(&offset) {
        LvarSource::FromDebug
    } else {
        LvarSource::Inferred
    }
}

/// Walk `var_map` once and collect, per `SsaVarnode`, the lowest and
/// highest blocks where it appears as either a definition or a use slot.
/// Used to compute coarse live ranges.
fn collect_use_blocks(func: &SsaFunction) -> BTreeMap<SsaVarnode, (BlockId, BlockId)> {
    let mut out: BTreeMap<SsaVarnode, (BlockId, BlockId)> = BTreeMap::new();
    for ((block, _idx, _slot), sv) in &func.var_map {
        let block = *block;
        out.entry(*sv)
            .and_modify(|(start, end)| {
                if block < *start {
                    *start = block;
                }
                if block > *end {
                    *end = block;
                }
            })
            .or_insert((block, block));
    }
    for (sv, (start, end)) in &out {
        lvar_trace_line(&format!(
            "use-blocks func={} sv={:?} range={:?}->{:?}",
            func.function.name, sv, start, end
        ));
    }
    out
}

/// Live-range bracket for an SSA temp. Falls back to a single-point
/// range at the entry block when the variable wasn't observed in
/// `var_map`.
fn live_range_for_temp(
    sv: SsaVarnode,
    use_blocks: &BTreeMap<SsaVarnode, (BlockId, BlockId)>,
    entry: BlockId,
) -> LiveRange {
    match use_blocks.get(&sv) {
        Some(&(start, end)) => LiveRange {
            start_block: start,
            end_block: end,
        },
        None => LiveRange::point(entry),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use unlace_ir::lvar::LvarStorage;
    use unlace_ir::ssa::{FrameSlotKind, StackFrame, StackLocal, StackVar, VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    /// Build a minimal one-block SSA function (no real IR; just enough
    /// to drive the collector's branches via direct field assignment).
    fn empty_ssa(name: &str) -> SsaFunction {
        let bid = BlockId(0);
        let mut block = BasicBlock::new(bid);
        block.insns.push(IrInsn {
            op: IrOp::Return,
            output: None,
            inputs: smallvec::smallvec![],
            addr: 0,
            guard: None,
            category: None,
        });
        let mut func = Function::new(name, bid, 0);
        func.insert_block(block);
        build_ssa(func)
    }

    #[test]
    fn empty_function_emits_no_lvars() {
        let mut ssa = empty_ssa("nada");
        // First run leaves lvars empty (nothing to emit) → returns false
        // because new_lvars == func.lvars (both empty).
        let changed = LvarCollectPass.run(&mut ssa).unwrap();
        assert!(!changed);
        assert!(
            ssa.lvars.is_empty(),
            "empty SSA produced lvars: {:?}",
            ssa.lvars
        );
    }

    #[test]
    fn collects_stack_vars() {
        let mut ssa = empty_ssa("stack_only");
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "local_8".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        ssa.stack_vars.insert(
            -16,
            StackVar {
                offset: -16,
                name: "local_10".into(),
                ty: PrimitiveType::Ptr,
                accesses: vec![],
            },
        );
        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        assert_eq!(ssa.lvars.len(), 2);
        let classes: Vec<_> = ssa.lvars.iter().map(|l| l.storage.class()).collect();
        assert_eq!(classes, vec!["stack", "stack"]);
        // IDs must be dense from 0.
        assert_eq!(ssa.lvars[0].id, LvarId::new(0));
        assert_eq!(ssa.lvars[1].id, LvarId::new(1));
        let names_by_offset: BTreeMap<i64, Option<&str>> = ssa
            .lvars
            .iter()
            .filter_map(|lv| match lv.storage {
                LvarStorage::Stack { offset } => Some((offset, lv.name.as_deref())),
                _ => None,
            })
            .collect();
        assert_eq!(names_by_offset.get(&-8).copied().flatten(), Some("v_8"));
        assert_eq!(names_by_offset.get(&-16).copied().flatten(), Some("v_16"));
    }

    #[test]
    fn stack_lvar_uses_debug_name_and_source() {
        let mut ssa = empty_ssa("debug_stack");
        ssa.dwarf_local_names.insert(-8, "counter".to_string());
        let mut locals = BTreeMap::new();
        locals.insert(
            -8,
            StackLocal {
                offset: -8,
                size: 4,
                access_widths: vec![4],
                kind: Default::default(),
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals,
            frame_size: 4,
            max_pos_offset: -4,
            min_neg_offset: -8,
        });

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let slot = ssa
            .lvars
            .iter()
            .find(|lv| matches!(lv.storage, LvarStorage::Stack { offset: -8 }))
            .expect("stack lvar emitted");
        assert_eq!(slot.name.as_deref(), Some("counter"));
        assert_eq!(slot.source, LvarSource::FromDebug);
        assert!(slot.flags.contains(LvarFlags::FROM_DEBUG));
    }

    #[test]
    fn stack_lvar_names_wide_slots_as_buffers() {
        let mut ssa = empty_ssa("wide_stack");
        let mut locals = BTreeMap::new();
        locals.insert(
            -32,
            StackLocal {
                offset: -32,
                size: 16,
                access_widths: vec![1],
                kind: Default::default(),
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals,
            frame_size: 16,
            max_pos_offset: -16,
            min_neg_offset: -32,
        });

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let slot = &ssa.lvars[0];
        assert!(matches!(slot.storage, LvarStorage::Stack { offset: -32 }));
        assert_eq!(slot.name.as_deref(), Some("buf_32"));
    }

    #[test]
    fn overlapping_stack_ranges_keep_distinct_lvar_identity() {
        let mut ssa = empty_ssa("overlapping_stack_lvars");
        ssa.dwarf_local_names.insert(-48, "p".to_string());
        ssa.dwarf_local_names.insert(-40, "values".to_string());

        let mut locals = BTreeMap::new();
        locals.insert(
            -48,
            StackLocal {
                offset: -48,
                size: 32,
                access_widths: vec![8],
                kind: FrameSlotKind::Local,
            },
        );
        locals.insert(
            -40,
            StackLocal {
                offset: -40,
                size: 12,
                access_widths: vec![4],
                kind: FrameSlotKind::Local,
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals,
            frame_size: 32,
            max_pos_offset: -16,
            min_neg_offset: -48,
        });

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let stack_lvars: BTreeMap<i64, &Lvar> = ssa
            .lvars
            .iter()
            .filter_map(|lv| match lv.storage {
                LvarStorage::Stack { offset } => Some((offset, lv)),
                _ => None,
            })
            .collect();

        assert_eq!(
            stack_lvars.len(),
            2,
            "overlapping source ranges must not collapse into one lvar: {:?}",
            ssa.lvars
        );
        let p = stack_lvars.get(&-48).expect("outer aggregate lvar");
        let values = stack_lvars.get(&-40).expect("inner overlapping lvar");
        assert_eq!(p.name.as_deref(), Some("p"));
        assert_eq!(values.name.as_deref(), Some("values"));
        assert_eq!(p.source, LvarSource::FromDebug);
        assert_eq!(values.source, LvarSource::FromDebug);
    }

    #[test]
    fn address_taken_stack_local_survives_as_byref_lvar() {
        let rsp = Varnode::reg(32, 8);
        let rdi = Varnode::reg(56, 8);
        let addr = Varnode::unique(0, 8);
        let c16 = Varnode::constant(16, 8);
        let ram = Varnode::constant(1, 8);
        let value = Varnode::reg(0, 8);
        let callee = Varnode::constant(0x2000, 8);

        let mut block = BasicBlock::new(BlockId(0));
        block.insns = vec![
            IrInsn::with_output(IrOp::IntSub, addr, smallvec::smallvec![rsp, c16], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec::smallvec![ram, addr, value], 0x1004),
            IrInsn::with_output(IrOp::Copy, rdi, smallvec::smallvec![addr], 0x1008),
            IrInsn::without_output(IrOp::Call, smallvec::smallvec![callee, rdi], 0x100c),
            IrInsn::without_output(IrOp::Return, smallvec::smallvec![], 0x1010),
        ];
        let mut func = Function::new("byref_lvar", BlockId(0), 0x1000);
        func.insert_block(block);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = unlace_ir::ssa::CallingConvention::SystemV;
        ssa.inferred_params = vec![("dst".to_string(), PrimitiveType::Ptr)];

        ssa.stack_frame = Some(crate::stack_frame_recovery::recover_stack_frame(&ssa));
        ssa.byref_info = Some(crate::byref_detect::detect_byref(&ssa));

        assert!(
            ssa.stack_frame
                .as_ref()
                .is_some_and(|frame| frame.locals.contains_key(&-16)),
            "stack-frame producer should recover the local at -16: {:?}",
            ssa.stack_frame
        );
        assert!(
            ssa.byref_info
                .as_ref()
                .is_some_and(|info| info.byref_locals.contains(&-16)),
            "BYREF detector should mark the local at -16: {:?}",
            ssa.byref_info
        );

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let stack_lvars: Vec<_> = ssa
            .lvars
            .iter()
            .filter(|lv| matches!(lv.storage, LvarStorage::Stack { offset: -16 }))
            .collect();
        assert_eq!(
            stack_lvars.len(),
            1,
            "address-taken stack local should remain one distinct Lvar: {:?}",
            ssa.lvars
        );
        let lvar = stack_lvars[0];
        assert!(
            lvar.flags.contains(LvarFlags::ADDRESS_TAKEN),
            "BYREF stack local must carry ADDRESS_TAKEN: {lvar:?}"
        );
        assert_eq!(lvar.name.as_deref(), Some("v_16"));
    }

    #[test]
    fn return_address_stack_slot_is_not_exported_as_lvar() {
        let mut ssa = empty_ssa("return_addr_slot");
        let mut locals = BTreeMap::new();
        locals.insert(
            0,
            StackLocal {
                offset: 0,
                size: 8,
                access_widths: vec![8],
                kind: FrameSlotKind::ReturnAddress,
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals,
            frame_size: 8,
            max_pos_offset: 8,
            min_neg_offset: 0,
        });

        LvarCollectPass.run(&mut ssa).unwrap();
        assert!(
            ssa.lvars
                .iter()
                .all(|lv| !matches!(lv.storage, LvarStorage::Stack { offset: 0 })),
            "return-address carrier must not surface as an Lvar: {:?}",
            ssa.lvars
        );
    }

    #[test]
    fn stack_arg_stack_slot_is_not_exported_as_lvar() {
        let mut ssa = empty_ssa("stack_arg_slot");
        let mut locals = BTreeMap::new();
        locals.insert(
            16,
            StackLocal {
                offset: 16,
                size: 8,
                access_widths: vec![8],
                kind: FrameSlotKind::StackArg,
            },
        );
        ssa.stack_frame = Some(StackFrame {
            locals,
            frame_size: 8,
            max_pos_offset: 24,
            min_neg_offset: 16,
        });

        LvarCollectPass.run(&mut ssa).unwrap();
        assert!(
            ssa.lvars
                .iter()
                .all(|lv| !matches!(lv.storage, LvarStorage::Stack { offset: 16 })),
            "stack-arg carrier must not surface as a source Lvar: {:?}",
            ssa.lvars
        );
    }

    #[test]
    fn collects_params_and_return() {
        let mut ssa = empty_ssa("with_sig");
        ssa.inferred_params = vec![
            ("a1".to_string(), PrimitiveType::Int(4)),
            ("a2".to_string(), PrimitiveType::Ptr),
        ];
        ssa.inferred_return_type = PrimitiveType::Int(4);
        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        assert_eq!(ssa.lvars.len(), 3); // 2 params + 1 return
        assert!(matches!(
            ssa.lvars[0].storage,
            LvarStorage::Param { idx: 0 }
        ));
        assert!(matches!(
            ssa.lvars[1].storage,
            LvarStorage::Param { idx: 1 }
        ));
        assert!(matches!(ssa.lvars[2].storage, LvarStorage::Return));
        assert_eq!(ssa.lvars[0].name.as_deref(), Some("a1"));
        assert!(ssa.lvars[0].flags.contains(LvarFlags::IS_PARAM));
        assert!(ssa.lvars[2].flags.contains(LvarFlags::IS_RETURN));
    }

    #[test]
    fn return_skipped_when_void() {
        let mut ssa = empty_ssa("void_ret");
        ssa.inferred_return_type = PrimitiveType::Unknown;
        let _ = LvarCollectPass.run(&mut ssa);
        assert!(
            ssa.lvars
                .iter()
                .all(|l| !matches!(l.storage, LvarStorage::Return)),
            "void function should not emit a return lvar"
        );
    }

    #[test]
    fn collects_merged_temps() {
        let mut ssa = empty_ssa("temps");
        let sv = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 0,
                size: 8,
            },
            version: 0,
        };
        ssa.merged_names.insert(sv, "v0".to_string());
        ssa.var_map.insert((BlockId(0), 0, VarnodeSlot::Output), sv);
        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        assert_eq!(ssa.lvars.len(), 1);
        assert!(matches!(ssa.lvars[0].storage, LvarStorage::Temp { .. }));
    }

    #[test]
    fn coalesced_temp_names_emit_one_lvar() {
        let mut ssa = empty_ssa("coalesced_temps");
        let sv0 = SsaVarnode {
            base: Varnode::unique(0, 4),
            version: 0,
        };
        let sv1 = SsaVarnode {
            base: Varnode::unique(4, 4),
            version: 0,
        };
        ssa.merged_names.insert(sv0, "v1".to_string());
        ssa.merged_names.insert(sv1, "v1".to_string());
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), sv0);
        ssa.var_map
            .insert((BlockId(0), 1, VarnodeSlot::Input(0)), sv0);
        ssa.var_map
            .insert((BlockId(0), 2, VarnodeSlot::Output), sv1);
        ssa.var_map
            .insert((BlockId(0), 3, VarnodeSlot::Input(0)), sv1);

        LvarCollectPass.run(&mut ssa).expect("collect");

        let temps: Vec<_> = ssa
            .lvars
            .iter()
            .filter(|lv| matches!(lv.storage, LvarStorage::Temp { .. }))
            .collect();
        assert_eq!(temps.len(), 1, "coalesced temp cluster should be one lvar");
        assert_eq!(temps[0].name.as_deref(), Some("v1"));
    }

    /// (Batch 3 slice 2, case a) A `Temp` lvar whose SSA varnode is
    /// observed in two distinct blocks must end up with a `LiveRange`
    /// spanning both — `start_block` = lower id, `end_block` = higher.
    #[test]
    fn temp_live_range_spans_observed_blocks() {
        let mut ssa = empty_ssa("temp_span");
        let sv = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 0,
                size: 8,
            },
            version: 0,
        };
        ssa.merged_names.insert(sv, "v0".to_string());
        // Def in block 0, use in block 3 — the collector reads
        // `var_map` directly, so the live-range comes from the
        // observed varnode keys regardless of whether the function's
        // `blocks` map physically contains BlockId(3).
        ssa.var_map.insert((BlockId(0), 0, VarnodeSlot::Output), sv);
        ssa.var_map
            .insert((BlockId(3), 2, VarnodeSlot::Input(0)), sv);

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let temp = ssa
            .lvars
            .iter()
            .find(|l| matches!(l.storage, LvarStorage::Temp { .. }))
            .expect("temp lvar emitted");
        assert_eq!(temp.live_range.start_block, BlockId(0));
        assert_eq!(temp.live_range.end_block, BlockId(3));
    }

    /// (Batch 3 slice 2, case b) A stack lvar whose backing
    /// `StackVar.accesses` SSA varnodes appear in five different
    /// blocks must end up with a `LiveRange` covering the full span.
    #[test]
    fn stack_live_range_spans_all_access_blocks() {
        let mut ssa = empty_ssa("stack_span");
        // Build 5 distinct SSA varnodes (one per access), each placed
        // into `var_map` at a different block id.
        let mut accesses: Vec<SsaVarnode> = Vec::new();
        for v in 0..5u32 {
            let sv = SsaVarnode {
                base: Varnode {
                    space: SpaceId::Register,
                    offset: 0,
                    size: 8,
                },
                version: v,
            };
            ssa.var_map.insert((BlockId(v), 0, VarnodeSlot::Output), sv);
            accesses.push(sv);
        }
        ssa.stack_vars.insert(
            -24,
            StackVar {
                offset: -24,
                name: "local_18".into(),
                ty: PrimitiveType::Int(4),
                accesses: accesses.clone(),
            },
        );

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let slot = ssa
            .lvars
            .iter()
            .find(|l| matches!(l.storage, LvarStorage::Stack { offset: -24 }))
            .expect("stack lvar emitted");
        assert_eq!(slot.live_range.start_block, BlockId(0));
        assert_eq!(slot.live_range.end_block, BlockId(4));
    }

    /// Stack slots with no SSA accesses fall back to the function-wide
    /// range (entry → max real block). For the test fixture that's
    /// `[BlockId(0), BlockId(0)]` since `empty_ssa` only builds one
    /// block; the point is that the fallback path doesn't panic and
    /// produces a defined range.
    #[test]
    fn stack_live_range_falls_back_when_no_accesses() {
        let mut ssa = empty_ssa("stack_noaccess");
        ssa.stack_vars.insert(
            -8,
            StackVar {
                offset: -8,
                name: "local_8".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let slot = &ssa.lvars[0];
        assert!(matches!(slot.storage, LvarStorage::Stack { offset: -8 }));
        assert_eq!(slot.live_range.start_block, BlockId(0));
        assert_eq!(slot.live_range.end_block, BlockId(0));
    }

    #[test]
    fn deterministic_order_across_runs() {
        let mut ssa = empty_ssa("det");
        ssa.stack_vars.insert(
            -32,
            StackVar {
                offset: -32,
                name: "local_20".into(),
                ty: PrimitiveType::Int(4),
                accesses: vec![],
            },
        );
        ssa.inferred_params = vec![("a1".to_string(), PrimitiveType::Int(4))];
        ssa.inferred_return_type = PrimitiveType::Int(4);
        LvarCollectPass.run(&mut ssa).unwrap();
        let first: Vec<_> = ssa.lvars.iter().map(|l| l.id).collect();
        // Re-run should produce identical output (no change → false).
        assert!(!LvarCollectPass.run(&mut ssa).unwrap());
        let second: Vec<_> = ssa.lvars.iter().map(|l| l.id).collect();
        assert_eq!(first, second);
    }

    /// Batch 18 — flag-register merged-names entry MUST NOT produce a
    /// user-visible Temp lvar. The audit-side `dump_lvar_suppressions`
    /// MUST attribute the drop to `flag-reg`.
    #[test]
    fn lvar_flag_register_temp_is_suppressed() {
        let mut ssa = empty_ssa("flag_sup");
        // CF lives at offset 256 in the x86-64 register file.
        let cf = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 256,
                size: 1,
            },
            version: 0,
        };
        ssa.merged_names.insert(cf, "v_cf".to_string());
        // Multiple uses → not a one-shot — suppression must come from the
        // flag-register classifier specifically.
        ssa.var_map.insert((BlockId(0), 0, VarnodeSlot::Output), cf);
        ssa.var_map
            .insert((BlockId(0), 1, VarnodeSlot::Input(0)), cf);

        LvarCollectPass.run(&mut ssa).unwrap();
        assert!(
            ssa.lvars
                .iter()
                .all(|l| !matches!(l.storage, LvarStorage::Temp { ssa_var } if ssa_var == cf)),
            "flag-register temp must not surface as an Lvar: {:?}",
            ssa.lvars,
        );

        let trace = dump_lvar_suppressions(&ssa);
        assert!(
            trace.contains("flag-reg"),
            "trace missing flag-reg: {trace}"
        );
    }

    /// Batch 18 — instruction-pointer alias is dropped from the lvar set
    /// regardless of how many uses appear in `var_map`.
    #[test]
    fn lvar_instruction_pointer_temp_is_suppressed() {
        let mut ssa = empty_ssa("rip_sup");
        let rip = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: RIP_OFFSET, // RIP in the x86-64 register file.
                size: 8,
            },
            version: 0,
        };
        ssa.merged_names.insert(rip, "v_rip".to_string());
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), rip);
        ssa.var_map
            .insert((BlockId(0), 1, VarnodeSlot::Input(0)), rip);

        LvarCollectPass.run(&mut ssa).unwrap();
        assert!(
            ssa.lvars
                .iter()
                .all(|l| !matches!(l.storage, LvarStorage::Temp { ssa_var } if ssa_var == rip)),
            "rip temp must not surface as an Lvar"
        );
        let trace = dump_lvar_suppressions(&ssa);
        assert!(trace.contains("ip-reg"), "trace missing ip-reg: {trace}");
    }

    /// Batch 18 — a `SpaceId::Unique` temp seen at exactly one program
    /// point is a one-shot and must not survive into the lvar set. A
    /// Unique temp seen at *two* program points is a legitimate variable
    /// and DOES emit an Lvar.
    #[test]
    fn lvar_one_shot_unique_temp_is_suppressed() {
        let mut ssa = empty_ssa("one_shot");

        // One-shot Unique: a single var_map entry.
        let single = SsaVarnode {
            base: Varnode {
                space: SpaceId::Unique,
                offset: 0x10,
                size: 4,
            },
            version: 0,
        };
        ssa.merged_names.insert(single, "v_tmp_1".to_string());
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), single);

        // Persistent Unique: two var_map entries → real value.
        let kept = SsaVarnode {
            base: Varnode {
                space: SpaceId::Unique,
                offset: 0x20,
                size: 4,
            },
            version: 0,
        };
        ssa.merged_names.insert(kept, "v1".to_string());
        ssa.var_map
            .insert((BlockId(0), 1, VarnodeSlot::Output), kept);
        ssa.var_map
            .insert((BlockId(0), 2, VarnodeSlot::Input(0)), kept);

        LvarCollectPass.run(&mut ssa).unwrap();
        let temps: Vec<SsaVarnode> = ssa
            .lvars
            .iter()
            .filter_map(|l| match l.storage {
                LvarStorage::Temp { ssa_var } => Some(ssa_var),
                _ => None,
            })
            .collect();
        assert!(temps.contains(&kept), "two-use Unique temp must survive");
        assert!(
            !temps.contains(&single),
            "one-shot Unique temp must be dropped, got: {temps:?}",
        );
        let trace = dump_lvar_suppressions(&ssa);
        assert!(
            trace.contains("one-shot-temp"),
            "trace missing one-shot-temp: {trace}"
        );
    }

    /// Batch 18 — suppression is per storage member, not per printed name.
    /// A coalesced name that contains a suppressed flag plus a real GPR must
    /// still emit the GPR-backed Lvar and report only the flag row in the
    /// suppression dump.
    #[test]
    fn lvar_suppression_keeps_visible_member_in_mixed_name_cluster() {
        let mut ssa = empty_ssa("mixed_cluster");
        let flag = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 256,
                size: 1,
            },
            version: 0,
        };
        let gpr = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 0,
                size: 8,
            },
            version: 0,
        };

        ssa.merged_names.insert(flag, "v_mixed".to_string());
        ssa.merged_names.insert(gpr, "v_mixed".to_string());
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), flag);
        ssa.var_map
            .insert((BlockId(0), 1, VarnodeSlot::Input(0)), flag);
        ssa.var_map
            .insert((BlockId(0), 2, VarnodeSlot::Output), gpr);
        ssa.var_map
            .insert((BlockId(0), 3, VarnodeSlot::Input(0)), gpr);

        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        let temps: Vec<_> = ssa
            .lvars
            .iter()
            .filter(|lv| lv.name.as_deref() == Some("v_mixed"))
            .collect();
        assert_eq!(
            temps.len(),
            1,
            "mixed cluster should emit one lvar: {:?}",
            ssa.lvars
        );
        assert!(
            matches!(temps[0].storage, LvarStorage::Temp { ssa_var } if ssa_var == gpr),
            "mixed cluster must keep the visible GPR-backed temp: {:?}",
            temps[0]
        );

        let trace = dump_lvar_suppressions(&ssa);
        assert!(
            trace.contains("flag-reg"),
            "trace missing flag-reg: {trace}"
        );
        assert!(
            !trace.contains("Register@0x0#0"),
            "visible GPR must not appear in suppression dump: {trace}"
        );
    }

    /// Batch 18 — `classify_temp_suppression` is the single decision
    /// point. Cover each branch directly so future refactors don't drift.
    #[test]
    fn classify_temp_suppression_covers_each_reason() {
        let flag = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 260, // ZF region.
                size: 1,
            },
            version: 0,
        };
        let rip = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: RIP_OFFSET,
                size: 8,
            },
            version: 0,
        };
        let one_shot = SsaVarnode {
            base: Varnode {
                space: SpaceId::Unique,
                offset: 0x40,
                size: 4,
            },
            version: 0,
        };
        let live_reg = SsaVarnode {
            base: Varnode {
                space: SpaceId::Register,
                offset: 0, // RAX — real GPR.
                size: 8,
            },
            version: 0,
        };

        assert_eq!(
            classify_temp_suppression(flag, 5),
            Some(SuppressionReason::FlagRegister),
        );
        assert_eq!(
            classify_temp_suppression(rip, 12),
            Some(SuppressionReason::InstructionPointer),
        );
        assert_eq!(
            classify_temp_suppression(one_shot, 1),
            Some(SuppressionReason::OneShotTemp),
        );
        // A Unique varnode seen >1 time is no longer one-shot.
        assert_eq!(classify_temp_suppression(one_shot, 2), None);
        // Real GPR survives at any use count.
        assert_eq!(classify_temp_suppression(live_reg, 1), None);
        assert_eq!(classify_temp_suppression(live_reg, 99), None);
    }

    /// Batch 18 — `dump_lvar_suppressions` always emits the header row
    /// so an empty function still produces a parseable audit table.
    #[test]
    fn dump_lvar_suppressions_emits_header_for_empty() {
        let ssa = empty_ssa("empty_dump");
        let trace = dump_lvar_suppressions(&ssa);
        assert!(trace.starts_with("| ssa | reason | uses |"));
        // Header + separator = 2 lines, no data rows.
        assert_eq!(trace.lines().count(), 2);
    }
}
