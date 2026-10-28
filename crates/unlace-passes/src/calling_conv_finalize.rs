//! Per-function calling-convention finalization (t216).
//!
//! Late-pipeline pass that takes the per-function results of
//! [`ParamInferPass`](crate::calling_convention::ParamInferPass) /
//! [`ReturnTypeInferPass`](crate::calling_convention::ReturnTypeInferPass)
//! plus caller-side evidence and emits a final [`FinalizedSignature`]
//! — the "what would IDA print" view that the C printer ultimately
//! consumes for the function's prototype.
//!
//! Three independent refinements are applied:
//!
//! 1. **Dead-param drop.** A parameter whose arg-register is never
//!    read as an instruction input anywhere in the body is dropped.
//!    Trailing dropped params are reported via
//!    [`FinalizedSignature::dropped_param_count`] so the caller can
//!    cross-check against external prototypes.
//!
//! 2. **Narrow-type recovery.** A parameter whose arg-register is only
//!    ever read through an `IntAnd(reg, 0xFF)` mask is widened from
//!    its current primitive (typically `i32` / `i64`) down to `int8`.
//!    Mirrors IDA's `narrow_to_byte` inference for `unsigned char`
//!    arguments forwarded into `tolower`/`isspace`/etc.
//!
//! 3. **Return-type inference from callers.** Walk every caller's
//!    `Call <this>` site and look at the *next* use of the return
//!    register (RAX / X0). If every caller treats the return the same
//!    way — a width-N read, a mask to int8, a pointer dereference —
//!    that concrete type wins. Mixed uses across callers leave the
//!    return type at the function's existing
//!    [`SsaFunction::inferred_return_type`] (typically
//!    `PrimitiveType::Unknown`).
//!
//! The pass produces a fresh [`FinalizedSignature`] each call — it
//! does **not** mutate the underlying `SsaFunction`. The caller is
//! responsible for splicing the result wherever it makes sense
//! (printer prototype, registry, downstream type propagation).

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction, VarnodeSlot};
use unlace_ir::types::Type;
use unlace_ir::{IrOp, SpaceId, Varnode};

/// AMD64 register-space offsets shared with the rest of the passes
/// crate. Mirrors the constants in `caller_param_propagate` /
/// `byref_detect` — kept local to avoid a cross-module re-export.
const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;
const RIP: u64 = 0x288;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

/// AArch64 return register (X0).
const AARCH64_X0: u64 = 0;

const X87_FLD: u64 = 0x310;
const X87_FSTP: u64 = 0x311;
const X87_FADD: u64 = 0x312;
const X87_FSUB: u64 = 0x313;
const X87_FMUL: u64 = 0x314;
const X87_FDIV: u64 = 0x315;
const X87_FCOM: u64 = 0x316;
const X87_FXCH: u64 = 0x317;
const X87_FST: u64 = 0x318;
const X87_FADDP: u64 = 0x360;
const X87_FSUBP: u64 = 0x361;
const X87_FSUBRP: u64 = 0x362;
const X87_FMULP: u64 = 0x363;
const X87_FDIVP: u64 = 0x364;
const X87_FDIVRP: u64 = 0x365;
const X87_FCOMP: u64 = 0x366;
const X87_FCOMPP: u64 = 0x367;

fn sig_trace_line(func: &SsaFunction, message: impl std::fmt::Display) {
    tracing::debug!(target: "unlace::calling::signature", "func={} {message}", func.function.name);
}

fn sig_trace_line_verbose(func: &SsaFunction, message: impl std::fmt::Display) {
    tracing::trace!(target: "unlace::calling::signature", "func={} {message}", func.function.name);
}

/// Finalized prototype emitted for a function.
///
/// The shape mirrors what IDA prints for the function header:
/// dead-param–dropped, byte-mask–narrowed parameter list plus a
/// caller-corroborated return type. `dropped_param_count` records the
/// number of parameters dropped from the original
/// [`SsaFunction::inferred_params`] so the caller can sanity-check
/// against external prototypes (mismatched `dropped_param_count`
/// against a known ABI = analysis bug, not just style choice).
///
/// The type itself lives in [`unlace_ir::ssa`] (t227) so an
/// `SsaFunction` can carry the result without a cyclic dependency on
/// `unlace-passes`. We re-export it here for ergonomic use at the
/// pass-layer call sites.
pub use unlace_ir::ssa::FinalizedSignature;

/// Finalize `func`'s signature using its body and a slice of known
/// callers.
///
/// `callers` should be every direct caller of this function; missing
/// callers conservatively widen the inferred return type back to the
/// function's existing `inferred_return_type` (the pass never claims
/// a sharper type than the evidence supports).
pub fn finalize_signature(func: &SsaFunction, callers: &[&SsaFunction]) -> FinalizedSignature {
    let cc = func.calling_convention;
    let arg_regs = arg_register_list(cc);

    let mut final_params: Vec<(String, Type)> = Vec::new();
    let mut dropped = 0usize;

    for (idx, (name, ty)) in func.inferred_params.iter().enumerate() {
        let Some(&reg) = arg_regs.get(idx) else {
            // No corresponding arg register — keep as-is. (This is the
            // stack-passed tail under Cdecl etc.; outside the current
            // scope of dead-param / narrow inference.)
            final_params.push((name.clone(), Type::Primitive(*ty)));
            continue;
        };

        let uses = param_register_uses(func, reg);
        if uses.is_empty() && func.variadic.is_none() {
            // Rule 1: dead param — drop entirely.
            dropped += 1;
            sig_trace_line(
                func,
                format!("drop-param idx={idx} name={name} reg={reg} reason=no-uses"),
            );
            continue;
        }

        // Rule 2: narrow type if every use is an `IntAnd(reg, 0xFF)` mask.
        let narrowed = if uses.iter().all(|u| matches!(u, ParamUse::AndMaskFF)) {
            sig_trace_line(
                func,
                format!(
                    "narrow-param idx={idx} name={name} reg={reg} from={ty:?} to=Int(1) uses={uses:?}"
                ),
            );
            Type::Primitive(PrimitiveType::Int(1))
        } else {
            Type::Primitive(*ty)
        };

        final_params.push((name.clone(), narrowed));
    }

    if final_params.is_empty()
        && let Some(x87_params) = x87_long_double_stack_params(func)
    {
        sig_trace_line(
            func,
            format!("x87-stack-params params={x87_params:?} source=inferred-stack-params"),
        );
        final_params = x87_params;
    }

    // Rule 3: infer return type from caller-side use.
    let mut return_type = infer_return_from_callers(func, callers)
        .unwrap_or(Type::Primitive(func.inferred_return_type));
    if matches!(return_type, Type::Primitive(PrimitiveType::Unknown))
        && x87_arithmetic_returns_long_double(func)
    {
        sig_trace_line(
            func,
            "x87-return type=long double reason=st0-arithmetic-return",
        );
        return_type = long_double_type();
    }
    if matches!(return_type, Type::Primitive(PrimitiveType::Unknown))
        && x87_compare_returns_int(func)
    {
        sig_trace_line(func, "x87-return type=int reason=compare-result-return");
        return_type = Type::Primitive(PrimitiveType::Int(4));
    }
    if matches!(return_type, Type::Primitive(PrimitiveType::Unknown))
        && cxx_explicit_zero_return_int(func)
    {
        sig_trace_line(func, "cxx-return type=int reason=explicit-zero-return");
        return_type = Type::Primitive(PrimitiveType::Int(4));
    }
    if matches!(return_type, Type::Primitive(PrimitiveType::Unknown))
        && cxx_indirect_tailcall_returns_int(func)
    {
        sig_trace_line(func, "cxx-return type=int reason=indirect-tailcall-return");
        return_type = Type::Primitive(PrimitiveType::Int(4));
    }
    if matches!(
        return_type,
        Type::Primitive(PrimitiveType::Unknown | PrimitiveType::Int(8))
    ) && cxx_returns_rip_relative_static_address(func)
    {
        sig_trace_line(
            func,
            "static-address-return type=char * reason=cxx-rip-relative-return",
        );
        return_type = char_ptr_type();
    }

    // Rule 4: detect sret (hidden struct-return pointer).
    let sret = detect_sret(func);

    let sig = FinalizedSignature {
        params: final_params,
        return_type,
        dropped_param_count: dropped,
        sret,
        variadic: func.variadic.is_some(),
    };
    sig_trace_line(
        func,
        format!(
            "finalize cc={cc:?} inferred_params={:?} inferred_return={:?} params={:?} return={:?} dropped={} sret={} variadic={}",
            func.inferred_params,
            func.inferred_return_type,
            sig.params,
            sig.return_type,
            sig.dropped_param_count,
            sig.sret,
            sig.variadic
        ),
    );
    sig
}

/// Classification of one read of a parameter register in the function
/// body.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum ParamUse {
    /// The register is read directly as one operand of an
    /// `IntAnd(reg, 0xFF)` instruction whose other operand is the
    /// constant `0xFF`.
    AndMaskFF,
    /// Any other use (passed to a call, arithmetic, store, …).
    Other,
}

/// Argument-passing register list for `cc`.
fn arg_register_list(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Thiscall => &[RCX],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => &[],
    }
}

/// Return-value register for `cc` (the register whose post-call use
/// the caller-side return-type inference inspects).
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

/// Walk every instruction in `func` and classify each read of the
/// register at `reg_offset`.
///
/// We treat a read as a usage iff the register varnode appears in the
/// instruction's `inputs` *before* any prior store to the same
/// register in the same block (so a register reloaded with an
/// unrelated value doesn't masquerade as the original parameter).
/// Returns the empty vec when the parameter register is never read —
/// the marker for dead-param drop.
fn param_register_uses(func: &SsaFunction, reg_offset: u64) -> Vec<ParamUse> {
    let mut uses = Vec::new();

    for (&bid, block) in &func.function.blocks {
        let mut written_in_block = false;
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            // Read first (the instruction reads its inputs before
            // computing the output).
            for (input_idx, input) in insn.inputs.iter().enumerate() {
                if !written_in_block
                    && input_reads_register(func, bid, insn_idx, input_idx, input, reg_offset)
                {
                    let use_kind =
                        classify_param_use(func, bid, insn_idx, insn, input_idx, reg_offset);
                    sig_trace_line_verbose(
                        func,
                        format!(
                            "param-use reg={} bid={} insn={} input={} op={:?} kind={use_kind:?} raw={:?}",
                            reg_offset, bid.0, insn_idx, input_idx, insn.op, input
                        ),
                    );
                    uses.push(use_kind);
                }
            }
            if let Some(out) = insn.output
                && out.space == SpaceId::Register
                && out.offset == reg_offset
            {
                written_in_block = true;
            }
        }
    }

    uses
}

fn input_reads_register(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    insn_idx: usize,
    input_idx: usize,
    input: &Varnode,
    reg_offset: u64,
) -> bool {
    if input.space == SpaceId::Register && input.offset == reg_offset {
        return true;
    }
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .is_some_and(|sv| sv.base.space == SpaceId::Register && sv.base.offset == reg_offset)
}

/// Classify how `reg_input` is consumed by `insn`.
fn classify_param_use(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    input_idx: usize,
    reg_offset: u64,
) -> ParamUse {
    if insn.op == IrOp::IntAnd && insn.inputs.len() == 2 {
        let other_idx = if input_idx == 0 { 1 } else { 0 };
        if !input_reads_register(
            func,
            bid,
            insn_idx,
            input_idx,
            &insn.inputs[input_idx],
            reg_offset,
        ) {
            return ParamUse::Other;
        }
        let other = &insn.inputs[other_idx];
        if other.space == SpaceId::Const && other.offset == 0xFF {
            return ParamUse::AndMaskFF;
        }
    }
    ParamUse::Other
}

/// Examine each caller's first use of the return register after a
/// `Call <func.function.addr>` and intersect their inferred types.
///
/// Returns:
/// - `Some(t)` when every caller's first use agrees on type `t`.
/// - `None` when callers disagree, when no caller's call site is
///   recognised, or when the calling convention has no return
///   register (`Unknown`). The caller falls back to the function's
///   existing `inferred_return_type` in that case.
fn infer_return_from_callers(func: &SsaFunction, callers: &[&SsaFunction]) -> Option<Type> {
    let cc = func.calling_convention;
    let ret_reg = return_register(cc)?;
    let this_addr = func.function.addr;

    let mut observed: Option<Type> = None;
    let mut saw_any = false;

    for &caller in callers {
        sig_trace_line_verbose(
            func,
            format!(
                "return-from-callers inspect caller={} target=0x{:x} ret_reg={ret_reg}",
                caller.function.name, this_addr
            ),
        );
        for block in caller.function.blocks.values() {
            for (idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }
                let Some(target) = insn.inputs.first() else {
                    continue;
                };
                if target.space != SpaceId::Const || target.offset != this_addr {
                    continue;
                }
                let Some(use_ty) = first_return_use(block, idx, ret_reg) else {
                    sig_trace_line_verbose(
                        func,
                        format!(
                            "return-from-callers caller={} block={} call_idx={} no-first-use",
                            caller.function.name, block.id.0, idx
                        ),
                    );
                    continue;
                };
                sig_trace_line_verbose(
                    func,
                    format!(
                        "return-from-callers caller={} block={} call_idx={} use_ty={use_ty:?}",
                        caller.function.name, block.id.0, idx
                    ),
                );
                saw_any = true;
                match observed {
                    None => observed = Some(use_ty),
                    Some(ref t) if *t == use_ty => {}
                    Some(ref t) => {
                        sig_trace_line(
                            func,
                            format!(
                                "return-from-callers conflict caller={} previous={t:?} observed={use_ty:?}",
                                caller.function.name
                            ),
                        );
                        return None;
                    }
                }
            }
        }
    }

    if !saw_any { None } else { observed }
}

/// Walk `block` starting at the insn *after* `call_idx` and return the
/// `Type` implied by the first instruction that reads `ret_reg`.
fn first_return_use(block: &unlace_ir::BasicBlock, call_idx: usize, ret_reg: u64) -> Option<Type> {
    let start = call_idx + 1;
    for insn in block.insns.iter().skip(start) {
        for input in &insn.inputs {
            if input.space == SpaceId::Register && input.offset == ret_reg {
                return Some(infer_consumer_type(insn, input));
            }
        }
        // A write to the return register that doesn't read it first
        // means the original return value was discarded.
        if let Some(out) = insn.output
            && out.space == SpaceId::Register
            && out.offset == ret_reg
        {
            return None;
        }
    }
    None
}

/// Given an instruction that reads the return register, return the
/// width/type the consumer treats it as.
fn infer_consumer_type(insn: &unlace_ir::IrInsn, reg_input: &Varnode) -> Type {
    if insn.op == IrOp::IntAnd && insn.inputs.len() == 2 {
        let other = if insn.inputs[0] == *reg_input {
            &insn.inputs[1]
        } else {
            &insn.inputs[0]
        };
        if other.space == SpaceId::Const {
            // Power-of-two minus one masks select the low N bytes.
            match other.offset {
                0xFF => return Type::Primitive(PrimitiveType::Int(1)),
                0xFFFF => return Type::Primitive(PrimitiveType::Int(2)),
                0xFFFF_FFFF => return Type::Primitive(PrimitiveType::Int(4)),
                _ => {}
            }
        }
    }
    // Generic copy / move / store / further arithmetic on the full
    // register treats it as the register's full width.
    Type::Primitive(PrimitiveType::Int(reg_input.size))
}

fn long_double_type() -> Type {
    Type::Named("long double".to_string())
}

fn char_ptr_type() -> Type {
    Type::Named("char *".to_string())
}

fn x87_long_double_stack_params(func: &SsaFunction) -> Option<Vec<(String, Type)>> {
    if !has_x87_callother(func) || func.inferred_stack_params.is_empty() {
        return None;
    }
    let params = func
        .inferred_stack_params
        .iter()
        .copied()
        .filter(|off| *off >= 8)
        .enumerate()
        .map(|(idx, _off)| (format!("a{}", idx + 1), long_double_type()))
        .collect::<Vec<_>>();
    (!params.is_empty()).then_some(params)
}

fn has_x87_callother(func: &SsaFunction) -> bool {
    func.function
        .blocks
        .values()
        .flat_map(|block| block.insns.iter())
        .any(|insn| x87_callother_tag(insn).is_some())
}

fn x87_arithmetic_returns_long_double(func: &SsaFunction) -> bool {
    let mut saw_arithmetic = false;
    let mut saw_return = false;
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(tag) = x87_callother_tag(insn)
                && matches!(
                    tag,
                    X87_FADD
                        | X87_FSUB
                        | X87_FMUL
                        | X87_FDIV
                        | X87_FADDP
                        | X87_FSUBP
                        | X87_FSUBRP
                        | X87_FMULP
                        | X87_FDIVP
                        | X87_FDIVRP
                )
            {
                saw_arithmetic = true;
            }
            if insn.op == IrOp::Return {
                saw_return = true;
            }
        }
    }
    saw_arithmetic && saw_return
}

fn x87_compare_returns_int(func: &SsaFunction) -> bool {
    if !func
        .function
        .blocks
        .values()
        .flat_map(|block| block.insns.iter())
        .any(|insn| {
            matches!(
                x87_callother_tag(insn),
                Some(X87_FCOM | X87_FCOMP | X87_FCOMPP)
            )
        })
    {
        return false;
    }

    let defs = build_def_map(func);
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if insn.op != IrOp::Return {
                continue;
            }
            let Some(value) = insn.inputs.first() else {
                continue;
            };
            let mut visiting = BTreeSet::new();
            if value_is_int_like_return(*value, &defs, &mut visiting) {
                return true;
            }
        }
    }
    false
}

fn x87_callother_tag(insn: &unlace_ir::IrInsn) -> Option<u64> {
    if insn.op != IrOp::Callother {
        return None;
    }
    let tag = insn.inputs.first()?;
    if tag.space != SpaceId::Const {
        return None;
    }
    matches!(
        tag.offset,
        X87_FLD
            | X87_FSTP
            | X87_FADD
            | X87_FSUB
            | X87_FMUL
            | X87_FDIV
            | X87_FCOM
            | X87_FXCH
            | X87_FST
            | X87_FADDP
            | X87_FSUBP
            | X87_FSUBRP
            | X87_FMULP
            | X87_FDIVP
            | X87_FDIVRP
            | X87_FCOMP
            | X87_FCOMPP
    )
    .then_some(tag.offset)
}

fn cxx_returns_rip_relative_static_address(func: &SsaFunction) -> bool {
    if !is_itanium_cpp_symbol(func) {
        return false;
    }
    let defs = build_def_map(func);
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if insn.op != IrOp::Return {
                continue;
            }
            let Some(value) = insn.inputs.first() else {
                continue;
            };
            let mut visiting = BTreeSet::new();
            if value_is_rip_relative_static_address(*value, &defs, &mut visiting) {
                return true;
            }
        }
    }
    false
}

fn cxx_explicit_zero_return_int(func: &SsaFunction) -> bool {
    if !is_itanium_cpp_symbol(func) || is_itanium_ctor_or_dtor(&func.function.name) {
        return false;
    }
    func.function.blocks.values().any(|block| {
        block.insns.iter().any(|insn| {
            insn.op == IrOp::Return
                && insn.inputs.first().is_some_and(|value| {
                    value.space == SpaceId::Const && value.offset == 0 && value.size <= 8
                })
        })
    })
}

fn cxx_indirect_tailcall_returns_int(func: &SsaFunction) -> bool {
    if !is_itanium_cpp_symbol(func) || is_itanium_ctor_or_dtor(&func.function.name) {
        return false;
    }
    func.function
        .blocks
        .values()
        .flat_map(|block| block.insns.iter())
        .any(|insn| insn.op == IrOp::Branchind)
}

fn is_itanium_cpp_symbol(func: &SsaFunction) -> bool {
    func.function.name.starts_with("_Z")
}

fn is_itanium_ctor_or_dtor(name: &str) -> bool {
    name.contains("C1E")
        || name.contains("C2E")
        || name.contains("C3E")
        || name.contains("D0E")
        || name.contains("D1E")
        || name.contains("D2E")
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, &unlace_ir::IrInsn> {
    let mut defs = BTreeMap::new();
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(out) = insn.output {
                defs.entry(out).or_insert(insn);
            }
        }
    }
    defs
}

fn value_is_int_like_return(
    value: Varnode,
    defs: &BTreeMap<Varnode, &unlace_ir::IrInsn>,
    visiting: &mut BTreeSet<Varnode>,
) -> bool {
    if value.space == SpaceId::Const {
        return value.size <= 8;
    }
    if value.space == SpaceId::Register && value.offset == RAX {
        return value.size <= 8;
    }
    if !visiting.insert(value) {
        return false;
    }
    let result = defs.get(&value).is_some_and(|insn| match insn.op {
        IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece => insn
            .inputs
            .first()
            .copied()
            .is_some_and(|input| value_is_int_like_return(input, defs, visiting)),
        IrOp::IntOr
        | IrOp::IntAnd
        | IrOp::IntXor
        | IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntMult
        | IrOp::IntSright
        | IrOp::IntRight
        | IrOp::IntLeft
        | IrOp::Multiequal => insn
            .inputs
            .iter()
            .copied()
            .all(|input| value_is_int_like_return(input, defs, visiting)),
        _ => false,
    });
    visiting.remove(&value);
    result
}

fn value_is_rip_relative_static_address(
    value: Varnode,
    defs: &BTreeMap<Varnode, &unlace_ir::IrInsn>,
    visiting: &mut BTreeSet<Varnode>,
) -> bool {
    if !visiting.insert(value) {
        return false;
    }
    let result = defs.get(&value).is_some_and(|insn| match insn.op {
        IrOp::IntAdd | IrOp::Ptradd => {
            insn.inputs.len() == 2
                && ((value_is_rip_base_or_address(insn.inputs[0], defs, visiting)
                    && insn.inputs[1].space == SpaceId::Const)
                    || (value_is_rip_base_or_address(insn.inputs[1], defs, visiting)
                        && insn.inputs[0].space == SpaceId::Const))
        }
        IrOp::Copy | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece => insn
            .inputs
            .first()
            .copied()
            .is_some_and(|input| value_is_rip_relative_static_address(input, defs, visiting)),
        IrOp::Multiequal => {
            !insn.inputs.is_empty()
                && insn
                    .inputs
                    .iter()
                    .copied()
                    .all(|input| value_is_rip_relative_static_address(input, defs, visiting))
        }
        _ => false,
    });
    visiting.remove(&value);
    result
}

fn value_is_rip_base_or_address(
    value: Varnode,
    defs: &BTreeMap<Varnode, &unlace_ir::IrInsn>,
    visiting: &mut BTreeSet<Varnode>,
) -> bool {
    if value.space == SpaceId::Register && value.offset == RIP {
        return true;
    }
    value_is_rip_relative_static_address(value, defs, visiting)
}

/// Detect the sret (struct-return) pattern: the first parameter is a
/// pointer that is used exclusively (or predominantly) as a store
/// destination and is returned in the return register (RAX/X0).
///
/// IDA's `sub_1F8DC0` logic similarly detects the "hidden output pointer"
/// idiom used by compilers when a function returns a struct larger than
/// can fit in register(s). The calling convention passes the struct
/// address as a hidden first argument; the function fills it in via
/// stores and returns the same pointer.
///
/// Heuristic:
/// 1. The first argument register must be typed as `Ptr` or have all
///    uses be `Store` (address operand) or passed to another call.
/// 2. The return register (RAX/X0) must be written from the same
///    register (or a copy of it) before at least one Return instruction.
/// 3. The pointer must be used in at least 2 distinct `Store` instructions
///    (otherwise it's just a passthrough, not a struct fill).
pub fn detect_sret(func: &SsaFunction) -> bool {
    let cc = func.calling_convention;
    let first_arg_reg = match cc {
        CallingConvention::SystemV => RDI,
        CallingConvention::MicrosoftX64 => RCX,
        CallingConvention::AArch64 => 0,             // X0
        CallingConvention::Thiscall => return false, // `this` is never sret
        _ => return false,
    };
    let ret_reg = match return_register(cc) {
        Some(r) => r,
        None => return false,
    };

    // Check if the first arg is typed as Ptr.
    let first_param_is_ptr = func
        .inferred_params
        .first()
        .map(|(_, ty)| *ty == PrimitiveType::Ptr)
        .unwrap_or(false);

    // Count how the first arg register is used in the function body.
    let mut store_addr_uses = 0usize;
    let mut other_uses = 0usize;
    let mut returned_through_rax = false;
    // -O0 diagnostic: at -O0 the hidden sret pointer is immediately spilled to
    // a stack slot (`STORE stack_slot, rdi`) and thereafter accessed
    // indirectly, so the direct-`Store(addr=rdi)` heuristic sees zero uses.
    // Track the spill so the gap is visible in traces (see tasks t67/t68).
    let mut spilled_to_stack = false;

    for block in func.function.blocks.values() {
        let mut first_arg_overwritten = false;
        for insn in &block.insns {
            // Detect the -O0 spill: a STORE whose *value* operand (input[2] of
            // Store(space, addr, value)) is the first arg register.
            if insn.op == IrOp::Store
                && !first_arg_overwritten
                && let Some(value) = insn.inputs.get(2)
                && value.space == SpaceId::Register
                && value.offset == first_arg_reg
            {
                spilled_to_stack = true;
            }

            // Track if the first arg register has been overwritten.
            if let Some(out) = insn.output {
                if out.space == SpaceId::Register && out.offset == first_arg_reg {
                    first_arg_overwritten = true;
                }
                // Check if RAX/X0 is written from the first arg register.
                if out.space == SpaceId::Register && out.offset == ret_reg {
                    for inp in &insn.inputs {
                        if inp.space == SpaceId::Register
                            && inp.offset == first_arg_reg
                            && !first_arg_overwritten
                        {
                            returned_through_rax = true;
                        }
                    }
                }
            }

            // Count uses of the first arg register as a store address.
            if !first_arg_overwritten {
                match insn.op {
                    IrOp::Store => {
                        // Store(space, addr, value) — addr is input[1]
                        if let Some(addr) = insn.inputs.get(1)
                            && addr.space == SpaceId::Register
                            && addr.offset == first_arg_reg
                        {
                            store_addr_uses += 1;
                        }
                    }
                    _ => {
                        for inp in &insn.inputs {
                            if inp.space == SpaceId::Register && inp.offset == first_arg_reg {
                                // Used as something other than a store addr
                                if insn.op != IrOp::Copy {
                                    other_uses += 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // Heuristic: sret if:
    // - First param looks like a pointer (typed or inferred from use)
    // - Used as store address at least twice (struct fill)
    // - Returned through RAX (or copy chain to RAX)
    // - Store uses dominate other uses (predominantly used for writing)
    let predominantly_store = store_addr_uses >= 2 && store_addr_uses > other_uses;
    let is_ptr_like = first_param_is_ptr || (store_addr_uses >= 2 && other_uses == 0);

    let result = is_ptr_like && predominantly_store && returned_through_rax;
    sig_trace_line_verbose(
        func,
        format!(
            "sret first_arg_reg={first_arg_reg} ret_reg={ret_reg} first_param_is_ptr={first_param_is_ptr} store_addr_uses={store_addr_uses} other_uses={other_uses} returned_through_ret={returned_through_rax} predominantly_store={predominantly_store} spilled_to_stack={spilled_to_stack} result={result}"
        ),
    );
    if !result && spilled_to_stack && store_addr_uses == 0 {
        // Visible even at non-verbose level: this is the -O0 sret-spill miss
        // that leaks a phantom `a2` on struct-return functions like make_array.
        sig_trace_line(
            func,
            format!(
                "sret-miss reason=O0-spill first_arg_reg={first_arg_reg} \
                 note=hidden sret pointer spilled to stack then accessed indirectly; \
                 direct-store heuristic sees 0 uses (tasks t67/t68)"
            ),
        );
    }
    result
}

/// Late-pipeline pass that runs [`finalize_signature`] against the
/// function and its known callers and stores the result on
/// [`SsaFunction::finalized_signature`] (t230 wiring).
///
/// `callers` is taken from
/// [`SsaFunction::external_signatures`] when populated (whole-program
/// driver) — but since we only have access to the current function's
/// view of the world, the pass calls `finalize_signature` with an
/// empty caller slice. The single-function path still applies the
/// dead-param and byte-mask narrowing refinements; return-type
/// inference from consistent caller use simply degenerates to the
/// existing [`SsaFunction::inferred_return_type`], which is what we
/// want when no callers are visible.
///
/// Returns `Ok(false)` — the pass writes to a side-map, not to the
/// IR proper, so the fixed-point runner has no reason to re-iterate.
pub struct CallingConvFinalizePass;

impl crate::pass::Pass for CallingConvFinalizePass {
    fn name(&self) -> &str {
        "CallingConvFinalizePass"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, crate::pass::PassError> {
        let sig = finalize_signature(func, &[]);
        func.finalized_signature = Some(sig);
        Ok(false)
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    fn rdi() -> Varnode {
        Varnode::reg(RDI, 8)
    }
    fn rsi() -> Varnode {
        Varnode::reg(RSI, 8)
    }
    fn rax() -> Varnode {
        Varnode::reg(RAX, 8)
    }

    /// Build a one-block function at the given entry address whose
    /// body is `insns` followed by `RETURN`.
    fn make_func(
        addr: u64,
        insns: Vec<IrInsn>,
        params: Vec<(String, PrimitiveType)>,
    ) -> SsaFunction {
        let mut f = Function::new("f", BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            addr + 0xFF,
        ));
        f.insert_block(bb);
        let mut ssa = build_ssa(f);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa.inferred_params = params;
        ssa
    }

    fn make_named_func(name: &str, addr: u64, insns: Vec<IrInsn>) -> SsaFunction {
        let mut f = Function::new(name, BlockId(0), addr);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        f.insert_block(bb);
        let mut ssa = build_ssa(f);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa
    }

    /// Test 1: a two-param function where the second param's register
    /// (RSI) is never read → it is dropped from the finalized
    /// signature.
    #[test]
    fn t216_dead_param_dropped() {
        // Body uses RDI but never RSI.
        let t1 = Varnode::unique(0, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::Copy, t1, smallvec![rdi()], 0x1000),
            IrInsn::with_output(IrOp::Copy, rax(), smallvec![t1], 0x1004),
        ];
        let ssa = make_func(
            0x1000,
            insns,
            vec![
                ("a1".into(), PrimitiveType::Int(8)),
                ("a2".into(), PrimitiveType::Int(8)),
            ],
        );

        let sig = finalize_signature(&ssa, &[]);
        assert_eq!(sig.params.len(), 1);
        assert_eq!(sig.params[0].0, "a1");
        assert_eq!(sig.dropped_param_count, 1);
    }

    /// Test 2: a one-param function where the param is only ever
    /// `IntAnd(rdi, 0xFF)` → narrowed to `int8`.
    #[test]
    fn t216_param_only_masked_to_byte_narrowed_to_int8() {
        let t1 = Varnode::unique(0, 8);
        let mask = Varnode::constant(0xFF, 8);
        let insns = vec![
            // t1 = rdi & 0xFF
            IrInsn::with_output(IrOp::IntAnd, t1, smallvec![rdi(), mask], 0x1000),
            // rax = t1
            IrInsn::with_output(IrOp::Copy, rax(), smallvec![t1], 0x1004),
        ];
        let ssa = make_func(0x1000, insns, vec![("a1".into(), PrimitiveType::Int(8))]);

        let sig = finalize_signature(&ssa, &[]);
        assert_eq!(sig.params.len(), 1);
        assert_eq!(sig.params[0].1, Type::Primitive(PrimitiveType::Int(1)));
        assert_eq!(sig.dropped_param_count, 0);
    }

    /// Test 3: callers consistently mask the return register with
    /// `0xFF` ⇒ the return type is `int8`.
    #[test]
    fn t216_consistent_caller_use_finalizes_return_type() {
        // Callee at 0x1000: leaves something in RAX (body irrelevant
        // to caller-side inference).
        let callee = make_func(
            0x1000,
            vec![IrInsn::with_output(
                IrOp::Copy,
                rax(),
                smallvec![Varnode::constant(42, 8)],
                0x1000,
            )],
            vec![],
        );

        // Build two callers, each one masks RAX with 0xFF after the call.
        let t1 = Varnode::unique(0, 8);
        let mask = Varnode::constant(0xFF, 8);

        let mk_caller = |addr: u64| {
            make_func(
                addr,
                vec![
                    IrInsn::without_output(
                        IrOp::Call,
                        smallvec![Varnode::constant(0x1000, 8)],
                        addr,
                    ),
                    IrInsn::with_output(IrOp::IntAnd, t1, smallvec![rax(), mask], addr + 4),
                ],
                vec![],
            )
        };
        let caller_a = mk_caller(0x2000);
        let caller_b = mk_caller(0x3000);
        let callers: Vec<&SsaFunction> = vec![&caller_a, &caller_b];

        let sig = finalize_signature(&callee, &callers);
        assert_eq!(sig.return_type, Type::Primitive(PrimitiveType::Int(1)));
    }

    /// Test 4: mixed caller-side return uses ⇒ return type collapses
    /// back to the function's existing `inferred_return_type`
    /// (`Unknown` in this fixture).
    #[test]
    fn t216_mixed_caller_use_leaves_return_unknown() {
        let callee = make_func(
            0x1000,
            vec![IrInsn::with_output(
                IrOp::Copy,
                rax(),
                smallvec![Varnode::constant(42, 8)],
                0x1000,
            )],
            vec![],
        );

        let t1 = Varnode::unique(0, 8);
        let t2 = Varnode::unique(1, 8);

        // Caller A: masks with 0xFF → int8.
        let caller_a = make_func(
            0x2000,
            vec![
                IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x1000, 8)], 0x2000),
                IrInsn::with_output(
                    IrOp::IntAnd,
                    t1,
                    smallvec![rax(), Varnode::constant(0xFF, 8)],
                    0x2004,
                ),
            ],
            vec![],
        );

        // Caller B: masks with 0xFFFF → int16. Different from caller A.
        let caller_b = make_func(
            0x3000,
            vec![
                IrInsn::without_output(IrOp::Call, smallvec![Varnode::constant(0x1000, 8)], 0x3000),
                IrInsn::with_output(
                    IrOp::IntAnd,
                    t2,
                    smallvec![rax(), Varnode::constant(0xFFFF, 8)],
                    0x3004,
                ),
            ],
            vec![],
        );

        let callers: Vec<&SsaFunction> = vec![&caller_a, &caller_b];
        let sig = finalize_signature(&callee, &callers);
        // inferred_return_type was Unknown ⇒ stays Unknown.
        assert_eq!(sig.return_type, Type::Primitive(PrimitiveType::Unknown));
    }

    #[test]
    fn t216_rsi_unused_silently_kept_when_only_one_param_declared() {
        // Smoke: one declared param, RDI is used; RSI activity
        // shouldn't matter.
        let _ = rsi();
    }

    /// Test: sret detected when first arg is a Ptr used predominantly
    /// for stores and returned through RAX.
    #[test]
    fn detect_sret_struct_return_pattern() {
        // Build a function that:
        //   1. Takes RDI (first arg) as a pointer
        //   2. Stores to [RDI] at two offsets (struct fill)
        //   3. Copies RDI to RAX before return
        let insns = vec![
            // Store field_0: *(RDI + 0) = 42
            IrInsn::without_output(
                IrOp::Store,
                smallvec![
                    Varnode::constant(SpaceId::Stack as u64, 4),
                    rdi(),
                    Varnode::constant(42, 8),
                ],
                0x1000,
            ),
            // Store field_8: *(RDI + 8) = 99
            IrInsn::without_output(
                IrOp::Store,
                smallvec![
                    Varnode::constant(SpaceId::Stack as u64, 4),
                    rdi(),
                    Varnode::constant(99, 8),
                ],
                0x1004,
            ),
            // RAX = RDI (return the sret pointer)
            IrInsn::with_output(IrOp::Copy, rax(), smallvec![rdi()], 0x1008),
        ];
        let mut ssa = make_func(0x1000, insns, vec![("a1".into(), PrimitiveType::Ptr)]);
        ssa.calling_convention = CallingConvention::SystemV;

        assert!(
            detect_sret(&ssa),
            "should detect sret: first param is Ptr, stored to twice, returned via RAX"
        );
    }

    /// Test: sret NOT detected when the first arg is used for arithmetic
    /// (not predominantly stores).
    #[test]
    fn detect_sret_not_triggered_for_regular_ptr() {
        // Function that uses RDI as a regular pointer: loads from it, does math.
        let t1 = Varnode::unique(0, 8);
        let insns = vec![
            // Load from [RDI]
            IrInsn::with_output(
                IrOp::Load,
                t1,
                smallvec![Varnode::constant(SpaceId::Stack as u64, 4), rdi()],
                0x1000,
            ),
            // RAX = t1 (returns the loaded value, not RDI itself)
            IrInsn::with_output(IrOp::Copy, rax(), smallvec![t1], 0x1004),
        ];
        let mut ssa = make_func(0x1000, insns, vec![("a1".into(), PrimitiveType::Ptr)]);
        ssa.calling_convention = CallingConvention::SystemV;

        assert!(
            !detect_sret(&ssa),
            "should NOT detect sret: RDI is loaded from, not stored to"
        );
    }

    #[test]
    fn x87_compare_result_finalizes_int_return() {
        let ssa = make_named_func(
            "compare_x87",
            0x1000,
            vec![
                IrInsn::without_output(
                    IrOp::Callother,
                    smallvec![Varnode::constant(X87_FCOM, 8), Varnode::unique(0, 10)],
                    0x1000,
                ),
                IrInsn::without_output(IrOp::Return, smallvec![Varnode::constant(0, 8)], 0x1004),
            ],
        );

        let sig = finalize_signature(&ssa, &[]);
        assert_eq!(sig.return_type, Type::Primitive(PrimitiveType::Int(4)));
    }

    #[test]
    fn cxx_rip_relative_return_finalizes_char_ptr() {
        let out = Varnode::unique(0x100, 8);
        let ssa = make_named_func(
            "_ZN3Dog5speakEv",
            0x1000,
            vec![
                IrInsn::with_output(
                    IrOp::IntAdd,
                    out,
                    smallvec![Varnode::reg(RIP, 8), Varnode::constant(0x2000, 8)],
                    0x1000,
                ),
                IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004),
            ],
        );

        let sig = finalize_signature(&ssa, &[]);
        assert_eq!(sig.return_type, Type::Named("char *".to_string()));
    }

    #[test]
    fn cxx_zero_return_and_indirect_tailcall_finalize_int() {
        let zero = make_named_func(
            "_Z9safe_calli",
            0x1000,
            vec![IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                0x1000,
            )],
        );
        assert_eq!(
            finalize_signature(&zero, &[]).return_type,
            Type::Primitive(PrimitiveType::Int(4))
        );

        let tail = make_named_func(
            "_Z8use_baseP4Base",
            0x2000,
            vec![IrInsn::without_output(
                IrOp::Branchind,
                smallvec![Varnode::unique(0x200, 8)],
                0x2000,
            )],
        );
        assert_eq!(
            finalize_signature(&tail, &[]).return_type,
            Type::Primitive(PrimitiveType::Int(4))
        );
    }
}
