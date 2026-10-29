//! Caller→callee parameter type propagation (whole-program pass).
//!
//! For every direct `Call` instruction in every function, walk back from the
//! call site to find the SSA varnode that *defined* each argument register
//! (per the calling convention) and then merge its inferred type into the
//! callee's parameter slot in the [`FunctionSignatureRegistry`].
//!
//! Modelled after IDA's `apply_callee_tinfo` (`research/analyzed-references/IDA/IDAlib/all/`),
//! which fills in argument types from caller context when the callee body is
//! ambiguous. Each call site contributes a [`SignatureRank::CallSite`]
//! prototype and each callee body a [`SignatureRank::CalleeBody`] one; they
//! meet through [`FunctionSignature::merge`], so caller evidence refines the
//! types of a callee's parameters but never changes the parameter list a
//! better source established.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::signature::{
    FunctionSignature, FunctionSignatureRegistry, SignatureRank, merge_param_type,
};
use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::xref::CallGraph;
use unlace_ir::{BlockId, IrOp, SpaceId};

/// Run caller→callee parameter propagation across the whole program.
///
/// The prototypes of all call sites of one callee are merged with each
/// other first, so the result does not depend on caller order, and then
/// into the callee's registry entry.
///
/// Returns `true` if any signature in `registry` changed.
pub fn propagate_caller_params(
    funcs: &BTreeMap<u64, SsaFunction>,
    call_graph: &CallGraph,
    registry: &mut FunctionSignatureRegistry,
) -> bool {
    let mut from_sites = FunctionSignatureRegistry::new();

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

                merge_or_insert(
                    &mut from_sites,
                    callee_addr,
                    FunctionSignature::with_param_types(
                        cc,
                        SignatureRank::CallSite,
                        PrimitiveType::Unknown,
                        &arg_types,
                    ),
                );
            }
        }
    }

    let mut changed = false;
    for (callee_addr, site) in from_sites {
        changed |= merge_or_insert(registry, callee_addr, site);
    }
    changed
}

/// Merge `sig` into the registry entry at `addr`, inserting it when the
/// entry is absent. Returns `true` if the registry changed.
fn merge_or_insert(
    registry: &mut FunctionSignatureRegistry,
    addr: u64,
    sig: FunctionSignature,
) -> bool {
    match registry.get_mut(&addr) {
        Some(entry) => entry.merge(&sig),
        None => {
            registry.insert(addr, sig);
            true
        }
    }
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
    let regs = cc.int_arg_regs();
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
        if out.space == SpaceId::Register
            && let Some(&sv) = ssa.var_map.get(&(bid, idx, VarnodeSlot::Output))
        {
            last_def.insert(out.offset, sv);
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

        // Callers of a variadic function pass more arguments than it names.
        let named = ssa.variadic.map_or(usize::MAX, |v| v.fixed_params);
        for (slot, param_ty) in sig.param_types().enumerate().take(named) {
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
            let merged = merge_param_type(cur, param_ty);
            if merged != cur {
                ssa.inferred_params[slot].1 = merged;
                changed = true;
            }
        }
    }
    changed
}

/// The prototype a function's own analysis recovered: its inferred
/// parameters placed by its calling convention.
pub(crate) fn body_signature(ssa: &SsaFunction) -> FunctionSignature {
    let param_types: Vec<PrimitiveType> = ssa.inferred_params.iter().map(|(_, ty)| *ty).collect();
    FunctionSignature {
        variadic: ssa.variadic.is_some(),
        ..FunctionSignature::with_param_types(
            ssa.calling_convention,
            SignatureRank::CalleeBody,
            ssa.inferred_return_type,
            &param_types,
        )
    }
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
        merge_or_insert(registry, addr, body_signature(ssa));
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

    const RDI: u64 = 56;

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

    /// A callee whose body reads RDI without revealing its type.
    fn make_untyped_param_callee(addr: u64) -> SsaFunction {
        let mut ssa = make_empty_callee(addr);
        ssa.inferred_params = vec![("a1".into(), PrimitiveType::Unknown)];
        ssa
    }

    fn call_graph(funcs: &BTreeMap<u64, SsaFunction>) -> CallGraph {
        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        unlace_ir::xref::build_call_graph(&ir_funcs)
    }

    #[test]
    fn propagates_int_literal_into_untyped_callee_param() {
        let caller_addr = 0x1000;
        let callee_addr = 0x2000;

        let caller_ssa = make_caller("caller", caller_addr, callee_addr);
        let callee_ssa = make_untyped_param_callee(callee_addr);

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
        assert_eq!(sig.params.len(), 1);
        assert_eq!(sig.params[0].ty, PrimitiveType::Int(4));
        assert_eq!(sig.rank, SignatureRank::CalleeBody);
    }

    #[test]
    fn call_sites_do_not_add_params_to_an_analysed_callee() {
        let caller_addr = 0x1000;
        let callee_addr = 0x2000;
        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, make_caller("caller", caller_addr, callee_addr));
        funcs.insert(callee_addr, make_empty_callee(callee_addr));
        let cg = call_graph(&funcs);

        let mut registry = FunctionSignatureRegistry::new();
        seed_registry_from_funcs(&funcs, &mut registry);
        propagate_caller_params(&funcs, &cg, &mut registry);

        let sig = registry.get(&callee_addr).unwrap();
        assert!(
            sig.params.is_empty(),
            "the body reads no argument register, which outranks the call site"
        );
    }

    #[test]
    fn external_callee_takes_the_call_site_prototype() {
        let caller_addr = 0x1000;
        let callee_addr = 0x2000;
        let mut funcs = BTreeMap::new();
        funcs.insert(caller_addr, make_caller("caller", caller_addr, callee_addr));
        funcs.insert(callee_addr, make_empty_callee(callee_addr));
        let cg = call_graph(&funcs);
        funcs.remove(&callee_addr);

        let mut registry = FunctionSignatureRegistry::new();
        assert!(propagate_caller_params(&funcs, &cg, &mut registry));

        let sig = registry.get(&callee_addr).unwrap();
        assert_eq!(sig.rank, SignatureRank::CallSite);
        assert_eq!(
            sig.param_types().collect::<Vec<_>>(),
            vec![PrimitiveType::Int(4)]
        );
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

        let callee_ssa = make_untyped_param_callee(callee_addr);

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
            sig.params[0].ty,
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
            FunctionSignature::with_param_types(
                CallingConvention::SystemV,
                SignatureRank::CalleeBody,
                PrimitiveType::Unknown,
                &[PrimitiveType::Ptr],
            ),
        );

        propagate_caller_params(&funcs, &cg, &mut registry);

        let sig = registry.get(&callee_addr).unwrap();
        assert_eq!(
            sig.params[0].ty,
            PrimitiveType::Ptr,
            "Unknown argument from caller must not clobber a known callee type"
        );
    }
}
