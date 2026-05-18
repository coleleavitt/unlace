//! Whole-program calling-convention finalization (t369).
//!
//! This interprocedural pass runs **after** all per-function analysis has
//! converged and uses the global call graph to perform three optimizations
//! on function signatures:
//!
//! 1. **Dead-parameter drop.** If a parameter register is never read in
//!    the function body *and* no caller ever passes a meaningful value
//!    (i.e. all callers leave the slot as `PrimitiveType::Unknown` or
//!    constant-zero), the parameter is removed from the signature.
//!
//! 2. **Return-type void propagation.** If *all* callers of a function
//!    ignore the return value (no post-call read of the return register
//!    before the next write), the return type is marked as
//!    [`PrimitiveType::Unknown`] (void equivalent).
//!
//! 3. **Calling-convention unification.** When a function is only called
//!    from a single call site *and* the caller's convention is known,
//!    adopt the caller's convention for the callee (useful for static
//!    helpers that the compiler may have emitted with a bespoke register
//!    assignment).
//!
//! The pass is modelled as an interprocedural fixpoint: iterate the three
//! refinement rules until no signature changes, bounded by
//! [`DEFAULT_WHOLE_PROG_CC_CAP`].

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction};
use unlace_ir::xref::{CallGraph, build_call_graph};
use unlace_ir::{IrOp, SpaceId};

/// Maximum number of fixpoint iterations before bailing.
pub const DEFAULT_WHOLE_PROG_CC_CAP: usize = 5;

/// x86-64 register-space offsets (mirrors `caller_param_propagate`).
const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

/// AArch64 return register (X0).
const AARCH64_X0: u64 = 0;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

/// Argument-passing register list for a calling convention.
fn arg_regs(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Thiscall => &[RCX],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => &[],
    }
}

/// Return-value register for a given calling convention.
fn return_register(cc: CallingConvention) -> Option<u64> {
    match cc {
        CallingConvention::SystemV
        | CallingConvention::MicrosoftX64
        | CallingConvention::Thiscall
        | CallingConvention::Cdecl
        | CallingConvention::Stdcall => Some(RAX),
        CallingConvention::AArch64 => Some(AARCH64_X0),
        CallingConvention::Unknown => None,
    }
}

/// Report emitted by [`run_whole_prog_cc`].
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct WholeProgramCcReport {
    /// Number of outer iterations performed.
    pub iterations: usize,
    /// Whether the iteration cap was hit before convergence.
    pub hit_cap: bool,
    /// Number of parameters dropped across all functions.
    pub params_dropped: usize,
    /// Number of functions whose return type was voided.
    pub returns_voided: usize,
    /// Number of functions whose calling convention was unified.
    pub conventions_unified: usize,
}

/// Run the whole-program calling-convention finalization fixpoint.
///
/// Mutates the `inferred_params`, `inferred_return_type`, and
/// `calling_convention` fields of each [`SsaFunction`] in `funcs`.
pub fn run_whole_prog_cc(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    cap: usize,
) -> WholeProgramCcReport {
    let mut report = WholeProgramCcReport::default();
    let effective_cap = cap.max(1);

    for _iter in 0..effective_cap {
        report.iterations += 1;

        // Build the call graph from current IR state.
        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = build_call_graph(&ir_funcs);

        let mut changed = false;

        // Collect per-function caller info once before mutating.
        let caller_info = collect_caller_info(funcs, &cg);

        // Rule 1: Dead-parameter drop.
        let addrs: Vec<u64> = funcs.keys().copied().collect();
        for &addr in &addrs {
            let dropped = drop_dead_params(funcs, addr, &caller_info);
            if dropped > 0 {
                report.params_dropped += dropped;
                changed = true;
            }
        }

        // Rule 2: Return-type void propagation.
        for &addr in &addrs {
            if void_unused_return(funcs, addr, &cg) {
                report.returns_voided += 1;
                changed = true;
            }
        }

        // Rule 3: Calling-convention unification (single-caller adopt).
        for &addr in &addrs {
            if unify_convention(funcs, addr, &cg) {
                report.conventions_unified += 1;
                changed = true;
            }
        }

        if !changed {
            return report;
        }
    }

    report.hit_cap = true;
    report
}

// ---------------------------------------------------------------------------
// Rule 1 helpers: dead-parameter drop
// ---------------------------------------------------------------------------

/// Per-function caller-side argument info: for each callee, for each param
/// slot, a set of the types actually passed by all known callers.
type CallerArgInfo = BTreeMap<u64, Vec<BTreeSet<PrimitiveType>>>;

/// Gather caller-side argument types for each callee.
fn collect_caller_info(funcs: &BTreeMap<u64, SsaFunction>, cg: &CallGraph) -> CallerArgInfo {
    let mut info: CallerArgInfo = BTreeMap::new();

    for (&caller_addr, ssa) in funcs {
        let callees = cg.callees_of(caller_addr);
        if callees.is_empty() {
            continue;
        }

        for block in ssa.function.blocks.values() {
            for (insn_idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }
                let Some(target_vn) = insn.inputs.first() else {
                    continue;
                };
                if target_vn.space != SpaceId::Const {
                    continue;
                }
                let callee_addr = target_vn.offset;
                if !callees.contains(&callee_addr) {
                    continue;
                }

                // Determine calling convention for this callee.
                let cc = funcs
                    .get(&callee_addr)
                    .map(|f| f.calling_convention)
                    .unwrap_or(ssa.calling_convention);
                let regs = arg_regs(cc);

                // Walk backwards from the call site to find last definitions of
                // arg registers in the same block.
                let arg_types = collect_arg_types_before_call(ssa, block, insn_idx, regs);

                let entry = info.entry(callee_addr).or_default();
                for (slot, ty) in arg_types.into_iter().enumerate() {
                    if slot >= entry.len() {
                        entry.resize_with(slot + 1, BTreeSet::new);
                    }
                    entry[slot].insert(ty);
                }
            }
        }
    }

    info
}

/// For each arg register, find the PrimitiveType of the last definition
/// before `call_insn_idx` in the same block.
fn collect_arg_types_before_call(
    ssa: &SsaFunction,
    block: &unlace_ir::BasicBlock,
    call_insn_idx: usize,
    regs: &[u64],
) -> Vec<PrimitiveType> {
    use unlace_ir::ssa::VarnodeSlot;

    let bid = block.id;
    let mut last_def: BTreeMap<u64, PrimitiveType> = BTreeMap::new();

    for (idx, insn) in block.insns.iter().enumerate() {
        if idx >= call_insn_idx {
            break;
        }
        let Some(out) = insn.output else { continue };
        if out.space == SpaceId::Register {
            let ty = ssa
                .var_map
                .get(&(bid, idx, VarnodeSlot::Output))
                .and_then(|sv| ssa.var_types.get(sv).copied())
                .unwrap_or(PrimitiveType::Unknown);
            last_def.insert(out.offset, ty);
        }
    }

    let mut result = Vec::new();
    for &reg in regs {
        match last_def.get(&reg) {
            Some(&ty) => result.push(ty),
            None => break, // stop at first gap (IDA-style consecutive rule)
        }
    }
    result
}

/// Returns true if `reg_offset` is read anywhere in the function body
/// *before* its first redefinition in each block.
fn is_param_read_in_body(ssa: &SsaFunction, reg_offset: u64) -> bool {
    for block in ssa.function.blocks.values() {
        let mut written = false;
        for insn in &block.insns {
            // Check inputs first (reads happen before the output write).
            if !written {
                for input in &insn.inputs {
                    if input.space == SpaceId::Register && input.offset == reg_offset {
                        return true;
                    }
                }
            }
            // Track redefinitions.
            if let Some(out) = insn.output {
                if out.space == SpaceId::Register && out.offset == reg_offset {
                    written = true;
                }
            }
        }
    }
    false
}

/// Drop dead parameters from `funcs[addr]`. Returns count of params dropped.
fn drop_dead_params(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    addr: u64,
    caller_info: &CallerArgInfo,
) -> usize {
    let ssa = match funcs.get(&addr) {
        Some(s) => s,
        None => return 0,
    };

    if ssa.inferred_params.is_empty() {
        return 0;
    }

    let cc = ssa.calling_convention;
    let regs = arg_regs(cc);

    // Determine which param slots are dead.
    let mut dead_slots: Vec<usize> = Vec::new();
    for (idx, _) in ssa.inferred_params.iter().enumerate() {
        let Some(&reg) = regs.get(idx) else {
            continue;
        };

        // Condition A: register is never read in the body.
        if is_param_read_in_body(ssa, reg) {
            continue;
        }

        // Condition B: no caller passes a meaningful (non-Unknown) value.
        let callers_meaningful = caller_info
            .get(&addr)
            .and_then(|slots| slots.get(idx))
            .map(|types| types.iter().any(|t| *t != PrimitiveType::Unknown))
            .unwrap_or(false);

        if callers_meaningful {
            continue;
        }

        dead_slots.push(idx);
    }

    if dead_slots.is_empty() {
        return 0;
    }

    // Remove dead slots (from highest to lowest to preserve indices).
    let count = dead_slots.len();
    let ssa_mut = funcs.get_mut(&addr).unwrap();
    for &slot in dead_slots.iter().rev() {
        if slot < ssa_mut.inferred_params.len() {
            ssa_mut.inferred_params.remove(slot);
        }
    }
    count
}

// ---------------------------------------------------------------------------
// Rule 2 helpers: return-type void propagation
// ---------------------------------------------------------------------------

/// Check if all callers of `addr` ignore the return value. If so, set
/// `inferred_return_type = Unknown` (void). Returns true if changed.
fn void_unused_return(funcs: &mut BTreeMap<u64, SsaFunction>, addr: u64, cg: &CallGraph) -> bool {
    let callers = cg.callers_of(addr);
    if callers.is_empty() {
        // No callers visible — can't prove void.
        return false;
    }

    let cc = match funcs.get(&addr) {
        Some(ssa) => ssa.calling_convention,
        None => return false,
    };

    // Already void — nothing to do.
    if funcs[&addr].inferred_return_type == PrimitiveType::Unknown {
        return false;
    }

    let ret_reg = match return_register(cc) {
        Some(r) => r,
        None => return false,
    };

    // Check every caller: the return register must never be read after
    // the call to `addr` before being overwritten.
    for &caller_addr in callers {
        let caller = match funcs.get(&caller_addr) {
            Some(s) => s,
            None => return false, // missing caller — be conservative
        };

        if caller_uses_return_of(caller, addr, ret_reg) {
            return false;
        }
    }

    // All callers ignore the return value — void it.
    funcs.get_mut(&addr).unwrap().inferred_return_type = PrimitiveType::Unknown;
    true
}

/// Returns true if `caller` reads the return register after calling `callee_addr`
/// before writing it.
fn caller_uses_return_of(caller: &SsaFunction, callee_addr: u64, ret_reg: u64) -> bool {
    for block in caller.function.blocks.values() {
        let mut after_call = false;
        for insn in &block.insns {
            if after_call {
                // Check if the return register is read.
                for input in &insn.inputs {
                    if input.space == SpaceId::Register && input.offset == ret_reg {
                        return true;
                    }
                }
                // Check if the return register is written (kills it).
                if let Some(out) = insn.output {
                    if out.space == SpaceId::Register && out.offset == ret_reg {
                        after_call = false; // reset — no longer tracking
                    }
                }
                // Another call also clobbers the return register.
                if insn.op == IrOp::Call || insn.op == IrOp::Callind {
                    after_call = false;
                }
            }

            // Detect the call to our target.
            if insn.op == IrOp::Call {
                if let Some(target) = insn.inputs.first() {
                    if target.space == SpaceId::Const && target.offset == callee_addr {
                        after_call = true;
                    }
                }
            }
        }
    }
    false
}

// ---------------------------------------------------------------------------
// Rule 3 helpers: calling-convention unification
// ---------------------------------------------------------------------------

/// If `addr` has exactly one caller and the caller's convention is known,
/// adopt it. Returns true if the convention changed.
fn unify_convention(funcs: &mut BTreeMap<u64, SsaFunction>, addr: u64, cg: &CallGraph) -> bool {
    let callers = cg.callers_of(addr);
    if callers.len() != 1 {
        return false;
    }

    let caller_addr = *callers.iter().next().unwrap();
    let caller_cc = match funcs.get(&caller_addr) {
        Some(s) => s.calling_convention,
        None => return false,
    };

    if caller_cc == CallingConvention::Unknown {
        return false;
    }

    let ssa = match funcs.get(&addr) {
        Some(s) => s,
        None => return false,
    };

    if ssa.calling_convention == caller_cc {
        return false; // already the same
    }

    // Only unify from Unknown → known (don't override an already-known CC).
    if ssa.calling_convention != CallingConvention::Unknown {
        return false;
    }

    funcs.get_mut(&addr).unwrap().calling_convention = caller_cc;
    true
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::{CallingConvention, PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    /// Build a one-block function with given insns followed by RETURN.
    fn make_func(
        name: &str,
        addr: u64,
        insns: Vec<IrInsn>,
        cc: CallingConvention,
        params: Vec<(String, PrimitiveType)>,
    ) -> SsaFunction {
        let mut func = Function::new(name, BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            addr + 0xFF,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = cc;
        ssa.inferred_params = params;
        ssa
    }

    fn rdi() -> Varnode {
        Varnode::reg(RDI, 8)
    }
    fn rax() -> Varnode {
        Varnode::reg(RAX, 8)
    }

    /// Rule 1: A parameter that is never read and no caller passes a typed
    /// value gets dropped.
    #[test]
    fn dead_param_dropped_when_unused_by_body_and_callers() {
        let callee_addr = 0x2000;
        let caller_addr = 0x1000;

        // Callee: declares one param (RDI) but never reads it.
        let callee = make_func(
            "callee",
            callee_addr,
            vec![
                // Body does not read RDI at all — just returns a constant.
                IrInsn::with_output(
                    IrOp::Copy,
                    rax(),
                    smallvec![Varnode::constant(0, 8)],
                    callee_addr,
                ),
            ],
            CallingConvention::SystemV,
            vec![("a1".into(), PrimitiveType::Int(8))],
        );

        // Caller: calls callee but doesn't set RDI before the call
        // (no preceding definition of the arg register in the block).
        let caller = make_func(
            "caller",
            caller_addr,
            vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(callee_addr, 8)],
                caller_addr,
            )],
            CallingConvention::SystemV,
            vec![],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert!(report.params_dropped >= 1, "dead param should be dropped");
        assert!(
            funcs[&callee_addr].inferred_params.is_empty(),
            "callee should have no params after drop"
        );
    }

    /// Rule 1: A parameter that *is* read in the body should NOT be dropped
    /// even if callers pass Unknown.
    #[test]
    fn param_read_in_body_not_dropped() {
        let callee_addr = 0x2000;
        let caller_addr = 0x1000;

        // Callee reads RDI.
        let t1 = Varnode::unique(0, 8);
        let callee = make_func(
            "callee",
            callee_addr,
            vec![IrInsn::with_output(
                IrOp::Copy,
                t1,
                smallvec![rdi()],
                callee_addr,
            )],
            CallingConvention::SystemV,
            vec![("a1".into(), PrimitiveType::Int(8))],
        );

        // Caller doesn't set RDI.
        let caller = make_func(
            "caller",
            caller_addr,
            vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(callee_addr, 8)],
                caller_addr,
            )],
            CallingConvention::SystemV,
            vec![],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert_eq!(report.params_dropped, 0);
        assert_eq!(funcs[&callee_addr].inferred_params.len(), 1);
    }

    /// Rule 2: When all callers ignore the return value, it becomes void.
    #[test]
    fn return_voided_when_all_callers_ignore() {
        let callee_addr = 0x2000;
        let caller_addr = 0x1000;

        // Callee returns Int(4).
        let callee = {
            let mut s = make_func(
                "callee",
                callee_addr,
                vec![IrInsn::with_output(
                    IrOp::Copy,
                    rax(),
                    smallvec![Varnode::constant(42, 4)],
                    callee_addr,
                )],
                CallingConvention::SystemV,
                vec![],
            );
            s.inferred_return_type = PrimitiveType::Int(4);
            s
        };

        // Caller calls callee then immediately overwrites RAX (ignoring return).
        let caller = make_func(
            "caller",
            caller_addr,
            vec![
                IrInsn::without_output(
                    IrOp::Call,
                    smallvec![Varnode::constant(callee_addr, 8)],
                    caller_addr,
                ),
                // Overwrite RAX without reading it first.
                IrInsn::with_output(
                    IrOp::Copy,
                    rax(),
                    smallvec![Varnode::constant(0, 8)],
                    caller_addr + 4,
                ),
            ],
            CallingConvention::SystemV,
            vec![],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert_eq!(report.returns_voided, 1);
        assert_eq!(
            funcs[&callee_addr].inferred_return_type,
            PrimitiveType::Unknown
        );
    }

    /// Rule 2: If any caller reads the return register, return is NOT voided.
    #[test]
    fn return_not_voided_when_caller_uses_it() {
        let callee_addr = 0x2000;
        let caller_addr = 0x1000;

        let callee = {
            let mut s = make_func(
                "callee",
                callee_addr,
                vec![IrInsn::with_output(
                    IrOp::Copy,
                    rax(),
                    smallvec![Varnode::constant(42, 4)],
                    callee_addr,
                )],
                CallingConvention::SystemV,
                vec![],
            );
            s.inferred_return_type = PrimitiveType::Int(4);
            s
        };

        // Caller reads RAX after the call (uses the return value).
        let t1 = Varnode::unique(0, 8);
        let caller = make_func(
            "caller",
            caller_addr,
            vec![
                IrInsn::without_output(
                    IrOp::Call,
                    smallvec![Varnode::constant(callee_addr, 8)],
                    caller_addr,
                ),
                IrInsn::with_output(IrOp::Copy, t1, smallvec![rax()], caller_addr + 4),
            ],
            CallingConvention::SystemV,
            vec![],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert_eq!(report.returns_voided, 0);
        assert_eq!(
            funcs[&callee_addr].inferred_return_type,
            PrimitiveType::Int(4)
        );
    }

    /// Rule 3: Single-caller convention adoption from Unknown.
    #[test]
    fn single_caller_convention_unified() {
        let callee_addr = 0x2000;
        let caller_addr = 0x1000;

        let callee = make_func(
            "callee",
            callee_addr,
            vec![],
            CallingConvention::Unknown,
            vec![],
        );

        let caller = make_func(
            "caller",
            caller_addr,
            vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(callee_addr, 8)],
                caller_addr,
            )],
            CallingConvention::SystemV,
            vec![],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert_eq!(report.conventions_unified, 1);
        assert_eq!(
            funcs[&callee_addr].calling_convention,
            CallingConvention::SystemV
        );
    }

    /// Rule 3: When callee already has a known convention, don't override.
    #[test]
    fn convention_not_overridden_when_already_known() {
        let callee_addr = 0x2000;
        let caller_addr = 0x1000;

        let callee = make_func(
            "callee",
            callee_addr,
            vec![],
            CallingConvention::MicrosoftX64,
            vec![],
        );

        let caller = make_func(
            "caller",
            caller_addr,
            vec![IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(callee_addr, 8)],
                caller_addr,
            )],
            CallingConvention::SystemV,
            vec![],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert_eq!(report.conventions_unified, 0);
        assert_eq!(
            funcs[&callee_addr].calling_convention,
            CallingConvention::MicrosoftX64
        );
    }

    /// Convergence: no-op when nothing to do.
    #[test]
    fn converges_immediately_when_nothing_to_optimize() {
        let addr = 0x1000;
        let func = make_func("solo", addr, vec![], CallingConvention::SystemV, vec![]);
        let mut funcs = BTreeMap::new();
        funcs.insert(addr, func);

        let report = run_whole_prog_cc(&mut funcs, 5);
        assert_eq!(report.iterations, 1);
        assert!(!report.hit_cap);
    }
}
