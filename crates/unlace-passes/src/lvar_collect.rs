//! Logical variable candidate collector — Batch 3 slice 1.
//!
//! Foundation pass that walks the *already-stable* SSA function and emits
//! one [`Lvar`] per candidate storage location:
//!
//! 1. Recovered stack-frame members (`stack_frame.locals` + `stack_vars`)
//!    → [`LvarStorage::Stack { offset }`].
//! 2. SSA temporaries surviving `variable_merge` (each distinct key in
//!    `merged_names`) → [`LvarStorage::Temp { ssa_var }`].
//! 3. Function parameters (`inferred_params`) → [`LvarStorage::Param { idx }`].
//! 4. The function's return slot when its inferred return type is not
//!    `PrimitiveType::Unknown` → [`LvarStorage::Return`].
//!
//! This pass deliberately performs **no merging**: duplicate candidates
//! across storage classes (e.g. a stack slot that also surfaces as a
//! `Temp` via `merged_names`) are allowed. Coalescing, interference
//! graph construction, and naming all land in follow-up batches.
//!
//! The pass writes only [`SsaFunction::lvars`] — no other IR field is
//! touched. It runs after `VariableMergePass` and before the C printer,
//! and is treated as pure metadata: emitter output (and goldens) must
//! not change.

use std::collections::BTreeMap;

use unlace_ir::BlockId;
use unlace_ir::lvar::{LiveRange, Lvar, LvarFlags, LvarId, LvarSource, LvarStorage};
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::types::TypeKind;

use crate::pass::{Pass, PassError, PassPhase};

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
        let new_lvars = collect(func);
        if new_lvars == func.lvars {
            return Ok(false);
        }
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

    collect_stack(func, &mut out, &mut next_id, &alloc_id, &use_blocks, func_range);
    collect_temps(func, &mut out, &mut next_id, &alloc_id, &use_blocks, entry);
    collect_params(func, &mut out, &mut next_id, &alloc_id, func_range);
    collect_return(func, &mut out, &mut next_id, &alloc_id, func_range);

    out
}

/// `[entry, max_block_id]` covering every real block in the function.
/// Falls back to a single-point range at `entry` if the function has
/// no blocks (defensive — shouldn't happen for well-formed SSA).
fn function_wide_range(func: &SsaFunction, entry: BlockId) -> LiveRange {
    let max = func
        .function
        .blocks
        .keys()
        .copied()
        .last()
        .unwrap_or(entry);
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
            let ty = stack_local_typekind(func, offset, local.size);
            let flags = stack_flags(func, offset);
            let source = stack_source(func, offset);
            let lr = stack_live_range(func, offset, use_blocks, func_range);
            out.push(Lvar::new(
                alloc_id(next_id),
                LvarStorage::Stack { offset },
                lr,
                ty,
                source,
                flags,
            ));
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
        out.push(Lvar::new(
            alloc_id(next_id),
            LvarStorage::Stack { offset },
            lr,
            ty,
            source,
            flags,
        ));
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

/// (2) SSA temporaries surviving `variable_merge`. `merged_names` is
/// keyed per `SsaVarnode`; each distinct key is a candidate `Temp`.
/// Live range derived from `var_map` (block of first/last observation).
fn collect_temps(
    func: &SsaFunction,
    out: &mut Vec<Lvar>,
    next_id: &mut u32,
    alloc_id: &impl Fn(&mut u32) -> LvarId,
    use_blocks: &BTreeMap<SsaVarnode, (BlockId, BlockId)>,
    entry: BlockId,
) {
    for (sv, _) in &func.merged_names {
        let lr = live_range_for_temp(*sv, use_blocks, entry);
        let ty = primitive_to_kind(
            func.var_types
                .get(sv)
                .copied()
                .unwrap_or(PrimitiveType::Unknown),
        );
        out.push(Lvar::new(
            alloc_id(next_id),
            LvarStorage::Temp { ssa_var: *sv },
            lr,
            ty,
            LvarSource::Inferred,
            LvarFlags::EMPTY,
        ));
    }
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
        if let Some(byref) = &func.byref_info {
            if byref.byref_params.contains(&(idx as u32)) {
                flags |= LvarFlags::ADDRESS_TAKEN;
            }
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
    if let Some(byref) = &func.byref_info {
        if byref.byref_locals.contains(&offset) {
            f |= LvarFlags::ADDRESS_TAKEN;
        }
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
    use unlace_ir::ssa::{StackVar, VarnodeSlot, build_ssa};
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
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), sv);
        assert!(LvarCollectPass.run(&mut ssa).unwrap());
        assert_eq!(ssa.lvars.len(), 1);
        assert!(matches!(ssa.lvars[0].storage, LvarStorage::Temp { .. }));
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
        ssa.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), sv);
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
            ssa.var_map
                .insert((BlockId(v), 0, VarnodeSlot::Output), sv);
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
}
