//! Interprocedural type propagation over the whole-program signature
//! registry.
//!
//! [`caller_param_propagate`](crate::caller_param_propagate) builds the
//! [`FunctionSignatureRegistry`](unlace_ir::signature::FunctionSignatureRegistry)
//! from callee bodies and call sites; this module holds what both
//! directions need from the SSA of one function:
//!
//! - [`call_site`]: what each call calls (direct, resolved indirect, or
//!   through a function-pointer value) and which values it passes and
//!   receives.
//! - [`result_use`]: the type a caller's use of a call result implies,
//!   which fills in return types callee bodies leave open.
//! - [`value_flow`]: copy chains and reads answered from `var_map`, since
//!   late passes rename the raw operands.
//! - [`apply`]: writes callee prototypes back into callers — result and
//!   argument types, struct layouts, and the prototype of a function
//!   pointer at the indirect calls made through it.

mod apply;
mod call_site;
mod result_use;
#[cfg(test)]
mod tests;
mod value_flow;

use std::collections::BTreeSet;

use unlace_ir::signature::merge_composite;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::Type;
use unlace_ir::{IrOp, SpaceId};

pub use apply::apply_registry_to_callers;
pub(crate) use call_site::{ArgValue, CallTarget, call_sites};
pub(crate) use result_use::{result_is_returned, result_use};
pub(crate) use value_flow::{ValueFlow, entry_value_reads};

/// What a function's body shows about the parameter passed in one
/// register.
#[derive(Debug, Default)]
pub(crate) struct ParamFlow {
    /// The values carrying the parameter's entry value.
    pub values: BTreeSet<SsaVarnode>,
    /// Struct layout or prototype recorded on any of them.
    pub composite: Option<Type>,
    /// The body calls through the parameter.
    pub called: bool,
}

pub(crate) fn param_flow(func: &SsaFunction, flow: &ValueFlow, reg: u64) -> ParamFlow {
    let mut out = ParamFlow::default();
    let mut copies = BTreeSet::new();
    for read in entry_value_reads(func, reg) {
        out.values.insert(read.value);
        let insn = &func.function.blocks[&read.block].insns[read.insn_idx];
        if matches!(insn.op, IrOp::Copy | IrOp::Multiequal)
            && let Some(&copy) = func
                .var_map
                .get(&(read.block, read.insn_idx, VarnodeSlot::Output))
        {
            copies.extend(flow.copy_web(func, copy));
        } else if read.input == 0 && is_indirect_call(insn) {
            out.called = true;
        }
    }
    // The entry value's own reads were classified above: reads of the same
    // SSA name elsewhere may see a later version-0 definition.
    out.called |= copies.iter().any(|&value| {
        flow.reads_of(value).iter().any(|read| {
            read.input == 0
                && is_indirect_call(&func.function.blocks[&read.block].insns[read.insn_idx])
        })
    });
    out.values.extend(copies);
    for value in &out.values {
        merge_composite(&mut out.composite, func.composite_var_types.get(value));
    }
    out
}

fn is_indirect_call(insn: &unlace_ir::IrInsn) -> bool {
    insn.op == IrOp::Callind
        || (insn.op == IrOp::Call
            && insn
                .inputs
                .first()
                .is_some_and(|t| t.space != SpaceId::Const))
}

/// Struct layout or prototype recorded on a value the function returns.
pub(crate) fn returned_composite(func: &SsaFunction, flow: &ValueFlow) -> Option<Type> {
    let mut out = None;
    for (&block, bb) in &func.function.blocks {
        for (idx, insn) in bb.insns.iter().enumerate() {
            if insn.op != IrOp::Return {
                continue;
            }
            let Some(&value) = func.var_map.get(&(block, idx, VarnodeSlot::Input(0))) else {
                continue;
            };
            for value in flow.copy_chain(func, value) {
                if let Some(ty) = func.composite_var_types.get(&value) {
                    merge_composite(&mut out, Some(ty));
                    break;
                }
            }
        }
    }
    out
}
