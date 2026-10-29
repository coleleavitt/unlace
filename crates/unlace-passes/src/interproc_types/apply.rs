//! Callee prototypes written back into their callers.

use std::collections::BTreeMap;

use unlace_ir::signature::{
    ArgLoc, FunctionSignature, FunctionSignatureRegistry, SignatureRank, merge_composite,
};
use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::types::Type;

use super::{ArgValue, CallTarget, ValueFlow, call_sites};

/// Give every call site the types its callee's prototype declares.
///
/// For a direct or resolved call the prototype is the callee's
/// [`FunctionSignatureRegistry`] entry; for a call through a value whose
/// type is a function pointer it is that pointer's prototype. The result
/// value takes the return type and returned struct layout; each argument
/// value (and the value it was copied from) takes the parameter's struct
/// layout or prototype, and `Ptr` for a pointer parameter.
///
/// Types the caller already knows are kept: an unknown or pointer-width
/// integer becomes a pointer, struct layouts merge field by field, and
/// nothing else is overwritten. Returns `true` if any function changed.
pub fn apply_registry_to_callers(
    funcs: &mut BTreeMap<u64, SsaFunction>,
    registry: &FunctionSignatureRegistry,
) -> bool {
    let mut changed = false;
    for ssa in funcs.values_mut() {
        changed |= apply_to_caller(ssa, registry);
    }
    changed
}

fn apply_to_caller(func: &mut SsaFunction, registry: &FunctionSignatureRegistry) -> bool {
    let flow = ValueFlow::build(func);
    let mut var_updates: Vec<(SsaVarnode, PrimitiveType)> = Vec::new();
    let mut composite_updates: Vec<(SsaVarnode, Type)> = Vec::new();

    for site in call_sites(func) {
        let sig = match site.target {
            CallTarget::Function(addr) => registry.get(&addr).cloned(),
            CallTarget::Pointer(target) => flow
                .copy_chain(func, target)
                .iter()
                .find_map(|value| func.composite_var_types.get(value))
                .and_then(|ty| func_ptr_signature(ty, func.calling_convention)),
        };
        let Some(sig) = sig else {
            continue;
        };

        if let Some(result) = site.result {
            if sig.return_type != PrimitiveType::Unknown {
                var_updates.push((result, sig.return_type));
            }
            if let Some(ty) = &sig.return_composite {
                composite_updates.push((result, ty.clone()));
            }
        }

        let cc = match sig.calling_convention {
            CallingConvention::Unknown => func.calling_convention,
            cc => cc,
        };
        for (reg, value) in site.with_args(func, cc).args {
            let ArgValue::Var(arg) = value else {
                continue;
            };
            let Some(param) = sig.params.iter().find(|p| p.loc == ArgLoc::Reg(reg)) else {
                continue;
            };
            for value in flow.copy_chain(func, arg) {
                if param.ty == PrimitiveType::Ptr {
                    var_updates.push((value, PrimitiveType::Ptr));
                }
                if let Some(ty) = &param.composite {
                    composite_updates.push((value, ty.clone()));
                }
            }
        }
    }

    let mut changed = false;
    for (value, ty) in var_updates {
        let current = func
            .var_types
            .get(&value)
            .copied()
            .unwrap_or(PrimitiveType::Unknown);
        let refined = refine_var_type(current, ty);
        if refined != current {
            trace_update(func, value, &format!("{current:?} -> {refined:?}"));
            func.var_types.insert(value, refined);
            changed = true;
        }
    }
    for (value, ty) in composite_updates {
        let entry = func.composite_var_types.get(&value).cloned();
        let mut merged = entry.clone();
        merge_composite(&mut merged, Some(&ty));
        if merged != entry
            && let Some(merged) = merged
        {
            trace_update(func, value, &format!("composite {merged}"));
            func.composite_var_types.insert(value, merged);
            changed = true;
        }
    }
    changed
}

fn trace_update(func: &SsaFunction, value: SsaVarnode, what: &str) {
    tracing::debug!(
        target: "unlace::interproc",
        "caller-type func={} value={:?}#{} {what}",
        func.function.name,
        value.base,
        value.version
    );
}

/// The type a caller-side value takes from a callee's declared `incoming`
/// type: an unknown type takes it, and a pointer-width integer becomes a
/// pointer; anything the caller inferred itself is kept.
fn refine_var_type(current: PrimitiveType, incoming: PrimitiveType) -> PrimitiveType {
    match (current, incoming) {
        (PrimitiveType::Unknown, ty) => ty,
        (PrimitiveType::Int(8) | PrimitiveType::UnsignedInt(8), PrimitiveType::Ptr) => {
            PrimitiveType::Ptr
        }
        (current, _) => current,
    }
}

/// The prototype a function-pointer type describes, placed by `cc`.
fn func_ptr_signature(ty: &Type, cc: CallingConvention) -> Option<FunctionSignature> {
    let Type::FuncPtr {
        params,
        return_type,
        variadic,
    } = ty
    else {
        return None;
    };
    let (param_types, composites): (Vec<_>, Vec<_>) = params.iter().map(split_value_type).unzip();
    let (ret, ret_composite) = split_value_type(return_type);
    let mut sig =
        FunctionSignature::with_param_types(cc, SignatureRank::CallSite, ret, &param_types);
    for (param, composite) in sig.params.iter_mut().zip(composites) {
        param.composite = composite;
    }
    sig.return_composite = ret_composite;
    sig.variadic = *variadic;
    Some(sig)
}

/// Inverse of `SignatureParam::value_type`.
fn split_value_type(ty: &Type) -> (PrimitiveType, Option<Type>) {
    match ty {
        Type::Primitive(p) => (*p, None),
        Type::Ptr(inner) if matches!(**inner, Type::Struct { .. } | Type::Union { .. }) => {
            (PrimitiveType::Ptr, Some((**inner).clone()))
        }
        Type::Ptr(_) => (PrimitiveType::Ptr, None),
        Type::FuncPtr { .. } => (PrimitiveType::Ptr, Some(ty.clone())),
        _ => (PrimitiveType::Unknown, None),
    }
}
