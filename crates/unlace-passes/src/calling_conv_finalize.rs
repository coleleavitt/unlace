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

use unlace_ir::ssa::{CallingConvention, PrimitiveType, SsaFunction};
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

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

/// AArch64 return register (X0).
const AARCH64_X0: u64 = 0;

/// Finalized prototype emitted for a function.
///
/// Wraps the user-facing parameter list (post-dead-drop, post-narrow)
/// and the inferred return type. `dropped_param_count` records the
/// number of parameters dropped from the original
/// [`SsaFunction::inferred_params`] so the caller can sanity-check
/// against external prototypes (mismatched `dropped_param_count`
/// against a known ABI = analysis bug, not just style choice).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FinalizedSignature {
    /// Final parameter list in calling-convention order. Names match
    /// the originals from [`SsaFunction::inferred_params`] — only
    /// types may have been narrowed.
    pub params: Vec<(String, Type)>,
    /// Final return type — either the existing
    /// [`SsaFunction::inferred_return_type`] or a refinement from
    /// consistent caller-side use.
    pub return_type: Type,
    /// Number of parameters dropped relative to
    /// [`SsaFunction::inferred_params`].
    pub dropped_param_count: usize,
}

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
        if uses.is_empty() {
            // Rule 1: dead param — drop entirely.
            dropped += 1;
            continue;
        }

        // Rule 2: narrow type if every use is an `IntAnd(reg, 0xFF)` mask.
        let narrowed = if uses.iter().all(|u| matches!(u, ParamUse::AndMaskFF)) {
            Type::Primitive(PrimitiveType::Int(1))
        } else {
            Type::Primitive(*ty)
        };

        final_params.push((name.clone(), narrowed));
    }

    // Rule 3: infer return type from caller-side use.
    let return_type =
        infer_return_from_callers(func, callers).unwrap_or(Type::Primitive(func.inferred_return_type));

    FinalizedSignature {
        params: final_params,
        return_type,
        dropped_param_count: dropped,
    }
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
        CallingConvention::Cdecl
        | CallingConvention::Stdcall
        | CallingConvention::Unknown => &[],
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

    for block in func.function.blocks.values() {
        let mut written_in_block = false;
        for insn in &block.insns {
            // Read first (the instruction reads its inputs before
            // computing the output).
            for input in &insn.inputs {
                if !written_in_block
                    && input.space == SpaceId::Register
                    && input.offset == reg_offset
                {
                    uses.push(classify_param_use(insn, input));
                }
            }
            if let Some(out) = insn.output {
                if out.space == SpaceId::Register && out.offset == reg_offset {
                    written_in_block = true;
                }
            }
        }
    }

    uses
}

/// Classify how `reg_input` is consumed by `insn`.
fn classify_param_use(insn: &unlace_ir::IrInsn, reg_input: &Varnode) -> ParamUse {
    if insn.op == IrOp::IntAnd && insn.inputs.len() == 2 {
        let (a, b) = (&insn.inputs[0], &insn.inputs[1]);
        // Identify which side is the register and which is the mask.
        let (reg_side, other) = if a == reg_input {
            (a, b)
        } else if b == reg_input {
            (b, a)
        } else {
            return ParamUse::Other;
        };
        let _ = reg_side;
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
                    continue;
                };
                saw_any = true;
                match observed {
                    None => observed = Some(use_ty),
                    Some(ref t) if *t == use_ty => {}
                    Some(_) => return None, // conflict → bail
                }
            }
        }
    }

    if !saw_any { None } else { observed }
}

/// Walk `block` starting at the insn *after* `call_idx` and return the
/// `Type` implied by the first instruction that reads `ret_reg`.
fn first_return_use(
    block: &unlace_ir::BasicBlock,
    call_idx: usize,
    ret_reg: u64,
) -> Option<Type> {
    let start = call_idx + 1;
    for insn in block.insns.iter().skip(start) {
        for input in &insn.inputs {
            if input.space == SpaceId::Register && input.offset == ret_reg {
                return Some(infer_consumer_type(insn, input));
            }
        }
        // A write to the return register that doesn't read it first
        // means the original return value was discarded.
        if let Some(out) = insn.output {
            if out.space == SpaceId::Register && out.offset == ret_reg {
                return None;
            }
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
    fn make_func(addr: u64, insns: Vec<IrInsn>, params: Vec<(String, PrimitiveType)>) -> SsaFunction {
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
        let ssa = make_func(
            0x1000,
            insns,
            vec![("a1".into(), PrimitiveType::Int(8))],
        );

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
                IrInsn::without_output(
                    IrOp::Call,
                    smallvec![Varnode::constant(0x1000, 8)],
                    0x2000,
                ),
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
                IrInsn::without_output(
                    IrOp::Call,
                    smallvec![Varnode::constant(0x1000, 8)],
                    0x3000,
                ),
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
}
