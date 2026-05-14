//! Clang-style `_Nonnull` / `_Nullable` parameter inference.
//!
//! Heuristic, intra-procedural:
//!
//! * A parameter is **`Nonnull`** if **every** path from entry to a reachable
//!   point of the function dereferences the parameter (`LOAD(p + const)`)
//!   **before** any explicit null check (`INT_EQUAL(p, 0)`). Code that
//!   unconditionally derefs the pointer is treating it as non-null; the
//!   programmer would have crashed before getting there if it were null.
//!
//! * A parameter is **`Nullable`** if **any** path performs an explicit
//!   null check `p == 0` **before** dereferencing `p`. The presence of a
//!   guard implies the author thought the pointer might be null.
//!
//! * Otherwise `Unknown` (no evidence in either direction).
//!
//! The analysis is approximate: we track which raw [`Varnode`]s alias the
//! parameter via simple value-forwarding (`COPY`, `INT_ADD p, c`, `PTRADD`,
//! `CAST`) and look at the **first** event (deref vs. null-check) on each
//! CFG path. Cross-block propagation is over the value-alias set; the
//! per-path "first event" is folded over the CFG via a worklist.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{CallingConvention, SsaFunction};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

/// Inferred nullability for a single parameter.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash)]
pub enum Nullability {
    /// Some path explicitly null-checks the parameter before dereferencing it.
    Nullable,
    /// Every reachable path dereferences the parameter before any null check.
    Nonnull,
    /// No conclusive evidence either way.
    Unknown,
}

/// Infer `_Nonnull` / `_Nullable` annotations for every recovered parameter
/// of `func`. Returns a map keyed by parameter index (0-based, matching the
/// order in [`SsaFunction::inferred_params`]).
///
/// Parameter discovery follows the function's detected
/// [`CallingConvention`]: we walk the calling-convention's integer-argument
/// registers in order and stop at the first one that is **not** read-before-
/// write in the entry block. This intentionally mirrors `infer_params` so
/// the indices line up with `inferred_params`.
pub fn infer_param_nullability(func: &SsaFunction) -> BTreeMap<u32, Nullability> {
    let mut out = BTreeMap::new();

    let entry = func.function.entry;
    let Some(entry_block) = func.function.blocks.get(&entry) else {
        return out;
    };

    let int_regs: &[u64] = match func.calling_convention {
        CallingConvention::SystemV => &SYSV_INT_REGS,
        CallingConvention::MicrosoftX64 => &MSX64_INT_REGS,
        CallingConvention::AArch64 => &AARCH64_INT_REGS,
        CallingConvention::Thiscall => &THISCALL_INT_REGS,
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => {
            return out;
        }
    };

    // Replay `infer_params` ordering: consecutive arg registers that are
    // read before any write in the entry block become parameters a1, a2, …
    // We stop at the first gap so the indices match `inferred_params`.
    let mut defined: BTreeSet<u64> = BTreeSet::new();
    let mut read_before_write: BTreeSet<u64> = BTreeSet::new();
    for insn in &entry_block.insns {
        if matches!(insn.op, IrOp::Branch | IrOp::Cbranch | IrOp::Branchind) {
            continue;
        }
        for inp in &insn.inputs {
            if inp.space == SpaceId::Register && !defined.contains(&inp.offset) {
                read_before_write.insert(inp.offset);
            }
        }
        if let Some(o) = insn.output {
            if o.space == SpaceId::Register {
                defined.insert(o.offset);
            }
        }
    }

    for (param_idx, &reg_off) in (0_u32..).zip(int_regs.iter()) {
        if !read_before_write.contains(&reg_off) {
            break;
        }
        let nullability = classify_param(func, reg_off);
        out.insert(param_idx, nullability);
    }

    out
}

// ---------------------------------------------------------------------------
// Calling-convention argument-register tables (integer params only).
// XMM/float params are not pointer candidates so we skip them here.
// Mirrors the constants in `calling_convention.rs`.
// ---------------------------------------------------------------------------

const SYSV_INT_REGS: [u64; 6] = [56, 48, 16, 8, 64, 72]; // RDI, RSI, RDX, RCX, R8, R9
const MSX64_INT_REGS: [u64; 4] = [8, 16, 64, 72]; // RCX, RDX, R8, R9
const AARCH64_INT_REGS: [u64; 8] = [0, 8, 16, 24, 32, 40, 48, 56]; // X0..X7
const THISCALL_INT_REGS: [u64; 1] = [8]; // ECX

// ---------------------------------------------------------------------------
// Per-parameter classification
// ---------------------------------------------------------------------------

/// What happened first on a CFG path with respect to one parameter.
#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash, PartialOrd, Ord)]
enum FirstEvent {
    Deref,
    Check,
}

fn classify_param(func: &SsaFunction, param_reg_off: u64) -> Nullability {
    let entry = func.function.entry;
    let cfg = &func.cfg;

    // Alias set carried into each block. The set holds raw `Varnode`s that
    // are known to point to (or numerically equal) the parameter value.
    //
    // Joining different incoming aliases is sound for *finding* derefs and
    // checks (we err toward seeing more events); it is not used for any
    // value-replacement, only for detection.
    let mut in_alias: BTreeMap<BlockId, BTreeSet<Varnode>> = BTreeMap::new();

    // Set of first-events observed on any path entering each block.
    let mut in_events: BTreeMap<BlockId, BTreeSet<FirstEvent>> = BTreeMap::new();

    // Initial alias: any register-space varnode at `param_reg_off`, regardless
    // of access size (RDI vs EDI vs DI). The parameter register is only valid
    // *in the entry block* — registers get clobbered across blocks and the
    // raw Varnode would no longer refer to the parameter SSA value.
    let mut entry_aliases = BTreeSet::new();
    for insn in &func.function.blocks[&entry].insns {
        if let Some(o) = insn.output
            && o.space == SpaceId::Register
            && o.offset == param_reg_off
        {
            // Stop adding the bare register varnode after it gets redefined.
            break;
        }
        for inp in &insn.inputs {
            if inp.space == SpaceId::Register && inp.offset == param_reg_off {
                entry_aliases.insert(*inp);
            }
        }
    }
    in_alias.insert(entry, entry_aliases);
    in_events.insert(entry, BTreeSet::new());

    // Worklist over the CFG.
    let mut worklist: VecDeque<BlockId> = VecDeque::new();
    worklist.push_back(entry);
    let mut in_worklist: BTreeSet<BlockId> = BTreeSet::new();
    in_worklist.insert(entry);

    // Track all reachable first-events at function exit. Since events can
    // occur at any block (not only ones flowing into a real RETURN), we
    // simply union every "out_events" we observe — any path's first event
    // matters for the classification.
    let mut all_first_events: BTreeSet<FirstEvent> = BTreeSet::new();

    // Cap iterations to guarantee termination on pathological CFGs.
    let mut budget = func.function.blocks.len().saturating_mul(8).max(64);

    while let Some(bid) = worklist.pop_front() {
        in_worklist.remove(&bid);
        if budget == 0 {
            break;
        }
        budget -= 1;

        let Some(block) = func.function.blocks.get(&bid) else {
            continue;
        };

        let aliases_in = in_alias.get(&bid).cloned().unwrap_or_default();
        let events_in = in_events.get(&bid).cloned().unwrap_or_default();

        let (aliases_out, events_out) = walk_block(block, aliases_in, events_in);

        for &e in &events_out {
            all_first_events.insert(e);
        }

        for (succ, _) in cfg.edges_from(bid) {
            let mut changed = false;

            // Propagate alias set.
            let succ_alias_entry = in_alias.entry(succ).or_default();
            for v in &aliases_out {
                // Only unique-space varnodes survive across block boundaries;
                // register-space aliases can be invalidated by intervening
                // writes we did not observe. This is a conservative pruning.
                if v.space == SpaceId::Unique && succ_alias_entry.insert(*v) {
                    changed = true;
                }
            }

            // Propagate first-event set.
            let succ_events_entry = in_events.entry(succ).or_default();
            for e in &events_out {
                if succ_events_entry.insert(*e) {
                    changed = true;
                }
            }

            if changed && in_worklist.insert(succ) {
                worklist.push_back(succ);
            }
        }
    }

    if all_first_events.contains(&FirstEvent::Check) {
        Nullability::Nullable
    } else if all_first_events.contains(&FirstEvent::Deref) {
        Nullability::Nonnull
    } else {
        Nullability::Unknown
    }
}

/// Walks a single basic block. Given the alias set + first-events at block
/// entry, returns the alias set + first-events at block exit.
///
/// `events_in` is the set of "first events that have already fired on some
/// path reaching this block". If it's non-empty, the path's first event is
/// already decided — events inside this block do not overwrite it. We still
/// extend the alias set in case downstream blocks need it.
fn walk_block(
    block: &unlace_ir::BasicBlock,
    aliases_in: BTreeSet<Varnode>,
    events_in: BTreeSet<FirstEvent>,
) -> (BTreeSet<Varnode>, BTreeSet<FirstEvent>) {
    let mut aliases = aliases_in;
    let mut events = events_in;

    // If a first-event has *not* yet been observed on this path, the very
    // first event encountered in this block becomes the path's first event.
    let mut path_first_event: Option<FirstEvent> = None;

    for insn in &block.insns {
        // Classify the instruction against the current alias set, then
        // possibly update the alias set with new derived values.
        let event = classify_insn(insn, &aliases);
        if let Some(ev) = event
            && events.is_empty()
            && path_first_event.is_none()
        {
            path_first_event = Some(ev);
        }

        // Propagate aliases through value-forwarding ops.
        if let Some(out) = insn.output
            && let Some(new_alias) = forwarding_output(insn, &aliases)
            && new_alias
        {
            aliases.insert(out);
        }
    }

    if let Some(ev) = path_first_event {
        events.insert(ev);
    }

    (aliases, events)
}

/// Returns the first event implied by `insn` against `aliases`, if any.
fn classify_insn(insn: &unlace_ir::IrInsn, aliases: &BTreeSet<Varnode>) -> Option<FirstEvent> {
    match insn.op {
        IrOp::Load => {
            // LOAD inputs are conventionally [space_id_const, address].
            // Treat any input pointing into the alias set as a deref.
            for inp in &insn.inputs {
                if aliases.contains(inp) {
                    return Some(FirstEvent::Deref);
                }
            }
            None
        }
        IrOp::Store => {
            // STORE also dereferences its address operand: STORE
            // [const, addr, value].
            for inp in &insn.inputs {
                if aliases.contains(inp) {
                    return Some(FirstEvent::Deref);
                }
            }
            None
        }
        IrOp::IntEqual | IrOp::IntNotequal => {
            // Null check pattern: compare against constant zero.
            if insn.inputs.len() == 2 {
                let a = insn.inputs[0];
                let b = insn.inputs[1];
                let is_zero = |v: Varnode| v.space == SpaceId::Const && v.offset == 0;
                if (aliases.contains(&a) && is_zero(b)) || (aliases.contains(&b) && is_zero(a)) {
                    return Some(FirstEvent::Check);
                }
            }
            None
        }
        _ => None,
    }
}

/// Returns `true` if `insn`'s output should be added to the alias set —
/// i.e. the instruction forwards the parameter value to a new Varnode.
fn forwarding_output(insn: &unlace_ir::IrInsn, aliases: &BTreeSet<Varnode>) -> Option<bool> {
    let _ = insn.output?;
    let any_param_input = insn.inputs.iter().any(|i| aliases.contains(i));
    if !any_param_input {
        return Some(false);
    }
    let forwards = matches!(
        insn.op,
        IrOp::Copy | IrOp::IntAdd | IrOp::IntSub | IrOp::Ptradd | IrOp::Ptrsub | IrOp::Cast
    );
    Some(forwards)
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::{CallingConvention, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    // RDI = parameter 0 under System V.
    const RDI: u64 = 56;
    // RSI = parameter 1 under System V.
    const RSI: u64 = 48;

    fn rdi() -> Varnode {
        Varnode::reg(RDI, 8)
    }
    fn rsi() -> Varnode {
        Varnode::reg(RSI, 8)
    }
    fn u(off: u64) -> Varnode {
        Varnode::unique(off, 8)
    }
    fn k0() -> Varnode {
        Varnode::constant(0, 8)
    }
    fn k(v: u64) -> Varnode {
        Varnode::constant(v, 8)
    }
    fn space_const() -> Varnode {
        // Synthetic "space id" operand for LOAD/STORE — its value is
        // irrelevant to this analysis.
        Varnode::constant(0, 8)
    }

    fn build(blocks: Vec<BasicBlock>) -> SsaFunction {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        for b in blocks {
            func.insert_block(b);
        }
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa
    }

    /// Single-block deref: `*p` with no null check ⇒ `Nonnull`.
    #[test]
    fn test_unconditional_deref_is_nonnull() {
        // BB0: tmp = LOAD(space, RDI); RETURN tmp
        let tmp = u(0);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            tmp,
            smallvec![space_const(), rdi()],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![tmp], 0x1004));

        let ssa = build(vec![bb0]);
        let res = infer_param_nullability(&ssa);
        assert_eq!(res.get(&0), Some(&Nullability::Nonnull));
        // No second parameter (RSI never read).
        assert!(!res.contains_key(&1));
    }

    /// Null check before any deref ⇒ `Nullable`.
    #[test]
    fn test_explicit_null_check_is_nullable() {
        // BB0:
        //   cmp = INT_EQUAL RDI, 0
        //   CBRANCH BB2, cmp     (if RDI==0 jump to BB2)
        // BB1 (fallthrough, RDI != 0):
        //   tmp = LOAD(space, RDI)
        //   RETURN tmp
        // BB2 (null path):
        //   RETURN 0
        let cmp = u(0);
        let load_tmp = u(8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp,
            smallvec![rdi(), k0()],
            0x1000,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![k(0x2000), cmp],
            0x1004,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_tmp,
            smallvec![space_const(), rdi()],
            0x1010,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![load_tmp],
            0x1014,
        ));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![k0()],
            0x1020,
        ));

        let ssa = build(vec![bb0, bb1, bb2]);
        let res = infer_param_nullability(&ssa);
        assert_eq!(
            res.get(&0),
            Some(&Nullability::Nullable),
            "explicit p == 0 before any deref ⇒ Nullable"
        );
    }

    /// LOAD through `IntAdd(p, const)` — the parameter is dereferenced via
    /// a struct-field access. Must still be classified as `Nonnull`.
    #[test]
    fn test_deref_via_field_offset_is_nonnull() {
        // BB0:
        //   addr = INT_ADD RDI, 16     ; &p->field
        //   tmp  = LOAD(space, addr)
        //   RETURN tmp
        let addr = u(0);
        let tmp = u(8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![rdi(), k(16)],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            tmp,
            smallvec![space_const(), addr],
            0x1004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![tmp], 0x1008));

        let ssa = build(vec![bb0]);
        let res = infer_param_nullability(&ssa);
        assert_eq!(res.get(&0), Some(&Nullability::Nonnull));
    }

    /// Parameter never observed (no LOAD, no INT_EQUAL with 0) ⇒ `Unknown`.
    /// Also exercises the multi-parameter case: RDI is touched (used as the
    /// return value), RSI is dereferenced.
    #[test]
    fn test_unobserved_param_is_unknown_and_indices_match() {
        // void f(long a, int *b) { return; /* uses 'a' as ret val, derefs 'b' */ }
        //
        // BB0:
        //   ret_tmp = COPY RDI         ; a kept around but never deref'd / checked
        //   load_tmp = LOAD(space, RSI) ; *b
        //   RETURN load_tmp
        let ret_tmp = u(0);
        let load_tmp = u(8);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            ret_tmp,
            smallvec![rdi()],
            0x1000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            load_tmp,
            smallvec![space_const(), rsi()],
            0x1004,
        ));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![load_tmp],
            0x1008,
        ));

        let ssa = build(vec![bb0]);
        let res = infer_param_nullability(&ssa);

        // Param 0 (RDI) is just COPY'd — not a deref, not a null check.
        // COPY *does* propagate the alias, but no deref/check fires.
        assert_eq!(
            res.get(&0),
            Some(&Nullability::Unknown),
            "param 0 has no deref and no null check ⇒ Unknown"
        );
        // Param 1 (RSI) is dereferenced ⇒ Nonnull.
        assert_eq!(res.get(&1), Some(&Nullability::Nonnull));
        // No phantom third param.
        assert!(!res.contains_key(&2));
    }
}
