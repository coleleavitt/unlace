//! Caller→callee parameter type propagation (whole-program pass).
//!
//! For every direct `Call` instruction in every function, walk back from the
//! call site to find the SSA varnode that *defined* each argument register
//! (per the calling convention) and then merge its inferred type into the
//! callee's parameter slot in the [`FunctionSignatureRegistry`].
//!
//! Modelled after IDA's `apply_callee_tinfo` (`references/ida/idalib/all/`),
//! which fills in argument types from caller context when the callee body is
//! ambiguous. The merge rule is the [`PrimitiveType::join`] lattice: `Unknown`
//! is replaced by anything; equal types stay; conflicts collapse to `Unknown`.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{
    CallingConvention, FunctionSignatureRegistry, PrimitiveType, SsaFunction, SsaVarnode,
    VarnodeSlot,
};
use unlace_ir::xref::CallGraph;
use unlace_ir::{BlockId, IrOp, SpaceId};

/// x86-64 register offsets (must match `calling_convention.rs`).
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_INT_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_INT_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_INT_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

/// Argument-passing register list for a calling convention.
fn arg_regs(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_INT_REGS,
        CallingConvention::MicrosoftX64 => MSX64_INT_REGS,
        CallingConvention::AArch64 => AARCH64_INT_REGS,
        CallingConvention::Thiscall => &[RCX],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => &[],
    }
}

/// Run caller→callee parameter propagation across the whole program.
///
/// Returns `true` if any signature in `registry` changed.
pub fn propagate_caller_params(
    funcs: &BTreeMap<u64, SsaFunction>,
    call_graph: &CallGraph,
    registry: &mut FunctionSignatureRegistry,
) -> bool {
    let mut changed = false;

    for (&caller_addr, ssa) in funcs {
        let callees = call_graph.callees_of(caller_addr);
        if callees.is_empty() {
            continue;
        }

        for (&bid, block) in &ssa.function.blocks {
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

                let cc = registry
                    .get(&callee_addr)
                    .map(|sig| sig.calling_convention)
                    .filter(|cc| *cc != CallingConvention::Unknown)
                    .or_else(|| funcs.get(&callee_addr).map(|f| f.calling_convention))
                    .unwrap_or(ssa.calling_convention);

                let arg_types = collect_arg_types_at_call(ssa, bid, insn_idx, cc);
                if arg_types.is_empty() {
                    continue;
                }

                changed |= merge_into_registry(registry, callee_addr, cc, &arg_types);
            }
        }
    }

    changed
}

/// For each argument register of `cc`, find the most recent definition
/// preceding `(bid, insn_idx)` in the same block and return its inferred
/// type. Stops at the first arg register that has no preceding definition
/// (matches IDA's "consecutive registers used" rule).
fn collect_arg_types_at_call(
    ssa: &SsaFunction,
    bid: BlockId,
    call_insn_idx: usize,
    cc: CallingConvention,
) -> Vec<PrimitiveType> {
    let regs = arg_regs(cc);
    if regs.is_empty() {
        return Vec::new();
    }

    let Some(block) = ssa.function.blocks.get(&bid) else {
        return Vec::new();
    };

    let mut last_def: BTreeMap<u64, SsaVarnode> = BTreeMap::new();
    for (idx, insn) in block.insns.iter().enumerate() {
        if idx >= call_insn_idx {
            break;
        }
        let Some(out) = insn.output else { continue };
        if out.space == SpaceId::Register {
            if let Some(&sv) = ssa.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                last_def.insert(out.offset, sv);
            }
        }
    }

    let mut out = Vec::new();
    for &reg in regs {
        match last_def.get(&reg) {
            Some(sv) => {
                let ty = ssa
                    .var_types
                    .get(sv)
                    .copied()
                    .unwrap_or(PrimitiveType::Unknown);
                out.push(ty);
            }
            None => break,
        }
    }
    out
}

/// Merge `arg_types` into the callee's `param_types`, growing the vector
/// as needed. Returns `true` if the entry changed.
fn merge_into_registry(
    registry: &mut FunctionSignatureRegistry,
    callee_addr: u64,
    cc: CallingConvention,
    arg_types: &[PrimitiveType],
) -> bool {
    let entry = registry.entry(callee_addr).or_default();

    let mut changed = false;
    if entry.calling_convention == CallingConvention::Unknown && cc != CallingConvention::Unknown {
        entry.calling_convention = cc;
        changed = true;
    }

    if entry.param_types.len() < arg_types.len() {
        entry
            .param_types
            .resize(arg_types.len(), PrimitiveType::Unknown);
        changed = true;
    }

    for (slot, &incoming) in arg_types.iter().enumerate() {
        let cur = entry.param_types[slot];
        let merged = cur.join(incoming);
        if merged != cur {
            entry.param_types[slot] = merged;
            changed = true;
        }
    }

    changed
}

/// Apply a previously-built [`FunctionSignatureRegistry`] back into each
/// function's per-function `external_signatures` map and refine the
/// callee's *own* `inferred_params` when the registry contains more
/// specific types than what the callee was able to learn locally.
pub fn apply_registry_to_callees(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    registry: &FunctionSignatureRegistry,
) -> bool {
    let mut changed = false;
    for (&addr, ssa) in funcs.iter_mut() {
        if ssa.external_signatures != *registry {
            ssa.external_signatures = registry.clone();
            changed = true;
        }

        let Some(sig) = registry.get(&addr) else {
            continue;
        };

        for (slot, &param_ty) in sig.param_types.iter().enumerate() {
            if param_ty == PrimitiveType::Unknown {
                continue;
            }
            if slot >= ssa.inferred_params.len() {
                ssa.inferred_params
                    .push((format!("a{}", slot + 1), param_ty));
                changed = true;
                continue;
            }
            let cur = ssa.inferred_params[slot].1;
            let merged = cur.join(param_ty);
            if merged != cur {
                ssa.inferred_params[slot].1 = merged;
                changed = true;
            }
        }
    }
    changed
}

/// Build (or refresh) the [`FunctionSignatureRegistry`] from the per-function
/// inferred state. Callers usually run this once before
/// [`propagate_caller_params`] so callee-locally-inferred types form the
/// initial lattice.
pub fn seed_registry_from_funcs(
    funcs: &BTreeMap<u64, SsaFunction>,
    registry: &mut FunctionSignatureRegistry,
) {
    for (&addr, ssa) in funcs {
        let entry = registry.entry(addr).or_default();
        if entry.calling_convention == CallingConvention::Unknown {
            entry.calling_convention = ssa.calling_convention;
        }
        if entry.return_type == PrimitiveType::Unknown {
            entry.return_type = ssa.inferred_return_type;
        }
        if entry.param_types.len() < ssa.inferred_params.len() {
            entry
                .param_types
                .resize(ssa.inferred_params.len(), PrimitiveType::Unknown);
        }
        for (slot, (_, ty)) in ssa.inferred_params.iter().enumerate() {
            let cur = entry.param_types[slot];
            entry.param_types[slot] = cur.join(*ty);
        }
    }
}

/// Set of callee addresses with a fresh signature delta, useful for the
/// outer fixed-point loop.
#[allow(dead_code)]
pub fn callees_with_changes(
    before: &FunctionSignatureRegistry,
    after: &FunctionSignatureRegistry,
) -> BTreeSet<u64> {
    let mut out = BTreeSet::new();
    for (addr, sig) in after {
        match before.get(addr) {
            Some(prev) if prev == sig => {}
            _ => {
                out.insert(*addr);
            }
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    /// Build a System V function whose body sets RDI = const(42, 4) and
    /// then calls `callee_addr`. Returns `(caller_addr, ssa)`.
    fn make_caller(name: &str, caller_addr: u64, callee_addr: u64) -> SsaFunction {
        let mut func = Function::new(name, BlockId(0), caller_addr);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(RDI, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![Varnode::constant(42, 4)],
            caller_addr,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(callee_addr, 8)],
            caller_addr + 4,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            caller_addr + 8,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;

        // Manually annotate the Copy's output: RDI now holds Int(4).
        // (Production runs TypeInferPass first; we shortcut for the test.)
        if let Some(&sv) = ssa.var_map.get(&(BlockId(0), 0, VarnodeSlot::Output)) {
            ssa.var_types.insert(sv, PrimitiveType::Int(4));
        }
        ssa
    }

    fn make_empty_callee(addr: u64) -> SsaFunction {
        let mut func = Function::new("callee", BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            addr,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa
    }

    #[test]
    fn propagates_int_literal_into_empty_callee() {
        let caller_addr = 0x1000;
        let callee_addr = 0x2000;

        let caller_ssa = make_caller("caller", caller_addr, callee_addr);
        let callee_ssa = make_empty_callee(callee_addr);

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller_ssa);
        funcs.insert(callee_addr, callee_ssa);

        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = unlace_ir::xref::build_call_graph(&ir_funcs);

        let mut registry = FunctionSignatureRegistry::new();
        seed_registry_from_funcs(&funcs, &mut registry);

        let changed = propagate_caller_params(&funcs, &cg, &mut registry);
        assert!(changed, "registry should have been updated");

        let sig = registry
            .get(&callee_addr)
            .expect("callee must have a signature");
        assert!(
            !sig.param_types.is_empty(),
            "callee should have at least 1 param"
        );
        assert_eq!(sig.param_types[0], PrimitiveType::Int(4));
    }

    #[test]
    fn conflict_between_callers_collapses_to_unknown() {
        let caller_a_addr = 0x1000;
        let caller_b_addr = 0x1100;
        let callee_addr = 0x2000;

        // Caller A passes Int(4); caller B passes Ptr.
        let caller_a = make_caller("caller_a", caller_a_addr, callee_addr);
        let mut caller_b = make_caller("caller_b", caller_b_addr, callee_addr);
        if let Some(&sv) = caller_b.var_map.get(&(BlockId(0), 0, VarnodeSlot::Output)) {
            caller_b.var_types.insert(sv, PrimitiveType::Ptr);
        }

        let callee_ssa = make_empty_callee(callee_addr);

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_a_addr, caller_a);
        funcs.insert(caller_b_addr, caller_b);
        funcs.insert(callee_addr, callee_ssa);

        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = unlace_ir::xref::build_call_graph(&ir_funcs);

        let mut registry = FunctionSignatureRegistry::new();
        seed_registry_from_funcs(&funcs, &mut registry);
        propagate_caller_params(&funcs, &cg, &mut registry);

        let sig = registry.get(&callee_addr).unwrap();
        assert_eq!(
            sig.param_types[0],
            PrimitiveType::Unknown,
            "Int+Ptr should collapse to Unknown via join"
        );
    }

    #[test]
    fn unknown_caller_arg_does_not_overwrite_known_callee() {
        let caller_addr = 0x1000;
        let callee_addr = 0x2000;
        let mut caller = make_caller("caller", caller_addr, callee_addr);
        // Strip the Copy's output type so the arg is Unknown.
        caller.var_types.clear();
        let callee = make_empty_callee(callee_addr);

        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, caller);
        funcs.insert(callee_addr, callee);

        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = unlace_ir::xref::build_call_graph(&ir_funcs);

        let mut registry = FunctionSignatureRegistry::new();
        registry.insert(
            callee_addr,
            unlace_ir::ssa::FunctionSignature {
                return_type: PrimitiveType::Unknown,
                param_types: vec![PrimitiveType::Ptr],
                calling_convention: CallingConvention::SystemV,
            },
        );

        propagate_caller_params(&funcs, &cg, &mut registry);

        let sig = registry.get(&callee_addr).unwrap();
        assert_eq!(
            sig.param_types[0],
            PrimitiveType::Ptr,
            "Unknown argument from caller must not clobber a known callee type"
        );
    }
}
