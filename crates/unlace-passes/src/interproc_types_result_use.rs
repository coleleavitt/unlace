//! What a caller's use of a call result says about the callee's return
//! type (Hex-Rays derives return types from call-site usage the same
//! way when the callee body leaves them open).

use unlace_ir::signature::ArgLoc;
use unlace_ir::signature::{FunctionSignatureRegistry, merge_composite};
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::Type;
use unlace_ir::{IrOp, SpaceId};

use super::call_site::{CallTarget, call_target_at};
use super::value_flow::{Read, ValueFlow};

/// The type a caller treats a call result as.
#[derive(Clone, Debug, PartialEq, Eq)]
pub(crate) struct ResultUse {
    pub ty: PrimitiveType,
    pub composite: Option<Type>,
}

/// How `func` uses `result`, or `None` when nothing reads it.
///
/// Reads through copies and phis are followed. Being returned in turn is
/// not a use: a `void` caller of a `void` callee still hands the return
/// register to its own `RETURN`, and the caller's return type may itself
/// have been inferred from that register (see [`result_is_returned`]).
///
/// A dereference, an indirect call through the value, or passing it for a
/// pointer parameter makes it a pointer, whatever else reads it (pointer
/// arithmetic reads a pointer as an integer). Otherwise integer
/// arithmetic gives the narrowest width it is read at. Comparisons and
/// flag computations use the value without saying what it is; a value
/// only used that way is a register-width integer.
pub(crate) fn result_use(
    func: &SsaFunction,
    flow: &ValueFlow,
    registry: &FunctionSignatureRegistry,
    result: SsaVarnode,
) -> Option<ResultUse> {
    let mut used = false;
    let mut pointer = false;
    let mut int_width: Option<u8> = None;
    let mut composite: Option<Type> = None;
    for value in flow.copy_web(func, result) {
        merge_composite(&mut composite, func.composite_var_types.get(&value));
        pointer |= func.var_types.get(&value) == Some(&PrimitiveType::Ptr);
        for read in flow.reads_of(value) {
            let insn = &func.function.blocks[&read.block].insns[read.insn_idx];
            if matches!(insn.op, IrOp::Copy | IrOp::Multiequal | IrOp::Return) {
                continue;
            }
            used = true;
            match read_evidence(func, flow, registry, read) {
                Evidence::Pointer(ty) => {
                    pointer = true;
                    merge_composite(&mut composite, ty.as_ref());
                }
                Evidence::Int(width) => {
                    int_width = Some(int_width.map_or(width, |w| w.min(width)));
                }
                Evidence::None => {}
            }
        }
    }
    if !used {
        return None;
    }
    let ty = if pointer || composite.is_some() {
        PrimitiveType::Ptr
    } else {
        PrimitiveType::Int(int_width.unwrap_or(result.base.size))
    };
    Some(ResultUse { ty, composite })
}

/// Whether `func` returns `result` (through copies and phis).
pub(crate) fn result_is_returned(func: &SsaFunction, flow: &ValueFlow, result: SsaVarnode) -> bool {
    flow.copy_web(func, result).into_iter().any(|value| {
        flow.reads_of(value)
            .iter()
            .any(|read| func.function.blocks[&read.block].insns[read.insn_idx].op == IrOp::Return)
    })
}

enum Evidence {
    /// A pointer, with the struct layout or prototype the read knows.
    Pointer(Option<Type>),
    /// An integer read at this width.
    Int(u8),
    None,
}

/// What one read says about the value it reads.
fn read_evidence(
    func: &SsaFunction,
    flow: &ValueFlow,
    registry: &FunctionSignatureRegistry,
    read: &Read,
) -> Evidence {
    let insn = &func.function.blocks[&read.block].insns[read.insn_idx];
    let other_const = || {
        insn.inputs
            .get(1 - read.input.min(1))
            .filter(|v| v.space == SpaceId::Const)
            .map(|v| v.offset)
    };
    let width = read.value.base.size;
    match (insn.op, read.input) {
        (IrOp::Load | IrOp::Store, 1) | (IrOp::Call | IrOp::Callind, 0) => Evidence::Pointer(None),
        (IrOp::Call | IrOp::Callind, arg) => {
            let param = match call_target_at(func, read.block, read.insn_idx) {
                Some(CallTarget::Function(addr)) => registry.get(&addr).and_then(|sig| {
                    let reg = *sig.calling_convention.int_arg_regs().get(arg - 1)?;
                    sig.params
                        .iter()
                        .find(|p| p.loc == ArgLoc::Reg(reg))
                        .cloned()
                }),
                _ => None,
            };
            match param {
                Some(p) if p.ty == PrimitiveType::Ptr || p.composite.is_some() => {
                    Evidence::Pointer(p.composite)
                }
                _ => Evidence::None,
            }
        }
        (IrOp::IntAnd, _) => match other_const() {
            Some(0xFF) => Evidence::Int(1),
            Some(0xFFFF) => Evidence::Int(2),
            Some(0xFFFF_FFFF) => Evidence::Int(4),
            _ => Evidence::Int(width),
        },
        (IrOp::IntAdd | IrOp::IntSub | IrOp::Ptradd | IrOp::Ptrsub, _)
            if other_const().is_some() =>
        {
            if offset_is_dereferenced(func, flow, read) {
                Evidence::Pointer(None)
            } else {
                Evidence::None
            }
        }
        (
            IrOp::IntAdd
            | IrOp::IntSub
            | IrOp::IntMult
            | IrOp::IntDiv
            | IrOp::IntSdiv
            | IrOp::IntRem
            | IrOp::IntSrem
            | IrOp::IntOr
            | IrOp::IntXor
            | IrOp::IntLeft
            | IrOp::IntRight
            | IrOp::IntSright
            | IrOp::IntZext
            | IrOp::IntSext
            | IrOp::Int2comp
            | IrOp::IntNegate,
            _,
        ) => Evidence::Int(width),
        _ => Evidence::None,
    }
}

/// Whether the `base + constant` computed by `read`'s instruction is used
/// as a memory address.
fn offset_is_dereferenced(func: &SsaFunction, flow: &ValueFlow, read: &Read) -> bool {
    let Some(&sum) = func
        .var_map
        .get(&(read.block, read.insn_idx, VarnodeSlot::Output))
    else {
        return false;
    };
    flow.copy_web(func, sum).into_iter().any(|value| {
        flow.reads_of(value).iter().any(|r| {
            r.input == 1
                && matches!(
                    func.function.blocks[&r.block].insns[r.insn_idx].op,
                    IrOp::Load | IrOp::Store
                )
        })
    })
}
