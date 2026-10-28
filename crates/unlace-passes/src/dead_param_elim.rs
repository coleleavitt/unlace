//! Inter-procedural dead-parameter elimination analysis (ROADMAP Phase D.2).
//!
//! This is an **analysis-only** pass: it detects function parameters that are
//! never read in the callee body and records them in a [`DeadParamReport`] so
//! that a later, separately-gated transform (or the user) can drop them from
//! the signature and from caller argument lists. It deliberately does **not**
//! mutate the IR — mutating signatures mid-pipeline can break downstream
//! analyses, so we keep this conservative and side-effect free.
//!
//! Conservatism rules (a parameter is treated as **USED** — and therefore is
//! *not* reported — whenever any of these hold):
//!
//! 1. The parameter's argument register is read anywhere in the body before it
//!    is redefined (the classic "is the param live on entry" check, mirroring
//!    [`crate::whole_prog_cc`]'s `is_param_read_in_body`).
//! 2. The parameter slot has no known argument register for the function's
//!    calling convention (e.g. stack-passed args, or an `Unknown` convention).
//!    We cannot prove non-use, so we keep it.
//! 3. The function is variadic — later varargs may alias the declared slots,
//!    so we never report any of its parameters.
//!
//! Only parameters we can *positively* prove are never read get reported.

use std::collections::BTreeMap;

use unlace_ir::SpaceId;
use unlace_ir::ssa::{CallingConvention, SsaFunction};

/// x86-64 / AArch64 argument-register offsets (mirrors `whole_prog_cc`).
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

/// Argument-passing register list for a calling convention.
///
/// Conventions that pass arguments on the stack (or whose argument locations we
/// cannot model here) return an empty slice, which makes every parameter
/// conservatively "used" (rule 2 above).
fn arg_regs(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Thiscall => &[RCX],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => &[],
    }
}

/// Report produced by [`analyze_dead_params`].
///
/// Maps each function's entry address to the list of **parameter indices**
/// (into [`SsaFunction::inferred_params`]) that were proven never read in the
/// body. Functions with no dead parameters are omitted, so an empty map means
/// "nothing to drop". Indices within each `Vec` are ascending and unique.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct DeadParamReport {
    /// Function entry address → indices of parameters never read in the body.
    pub functions: BTreeMap<u64, Vec<usize>>,
}

impl DeadParamReport {
    /// Total number of dead parameters across all functions.
    pub fn total_dead_params(&self) -> usize {
        self.functions.values().map(Vec::len).sum()
    }

    /// Number of functions that have at least one dead parameter.
    pub fn functions_with_dead_params(&self) -> usize {
        self.functions.len()
    }

    /// Dead-parameter indices for a single function, if any.
    pub fn dead_params_for(&self, addr: u64) -> Option<&[usize]> {
        self.functions.get(&addr).map(Vec::as_slice)
    }
}

/// Returns `true` if `reg_offset` is read anywhere in the function body before
/// its first redefinition in each block.
///
/// This is the same liveness-on-entry check used by the whole-program
/// calling-convention finalizer: an argument register is "read as a parameter"
/// only if some instruction consumes it before any instruction in that block
/// overwrites it.
fn is_param_read_in_body(ssa: &SsaFunction, reg_offset: u64) -> bool {
    for block in ssa.function.blocks.values() {
        let mut written = false;
        for insn in &block.insns {
            // Reads happen before the output write within an instruction.
            if !written {
                for input in &insn.inputs {
                    if input.space == SpaceId::Register && input.offset == reg_offset {
                        return true;
                    }
                }
            }
            // Track redefinitions of the register.
            if let Some(out) = insn.output
                && out.space == SpaceId::Register
                && out.offset == reg_offset
            {
                written = true;
            }
        }
    }
    false
}

/// Determine which declared parameters of `ssa` are never read in its body.
///
/// Returns the ascending list of dead parameter indices. Conservative: any
/// parameter whose use cannot be determined is treated as used and omitted.
fn dead_params_of(ssa: &SsaFunction) -> Vec<usize> {
    if ssa.inferred_params.is_empty() {
        return Vec::new();
    }

    // Rule 3: variadic functions may reference declared slots through the
    // varargs machinery; never report any of their parameters.
    if ssa.variadic.is_some() {
        return Vec::new();
    }

    let regs = arg_regs(ssa.calling_convention);
    let mut dead = Vec::new();

    for idx in 0..ssa.inferred_params.len() {
        // Rule 2: no modelled argument register for this slot ⇒ treat as used.
        let Some(&reg) = regs.get(idx) else {
            continue;
        };

        // Rule 1: register read before redefinition ⇒ used.
        if is_param_read_in_body(ssa, reg) {
            continue;
        }

        dead.push(idx);
    }

    dead
}

/// Run the inter-procedural dead-parameter analysis over `funcs`.
///
/// For every function, records the indices of declared parameters that are
/// never read in the callee body. Pure analysis — `funcs` is borrowed
/// immutably and no IR is mutated. The result is suitable for a later,
/// separately-gated signature-rewrite transform.
pub fn analyze_dead_params(funcs: &BTreeMap<u64, SsaFunction>) -> DeadParamReport {
    let mut report = DeadParamReport::default();

    for (&addr, ssa) in funcs {
        let dead = dead_params_of(ssa);
        if !dead.is_empty() {
            report.functions.insert(addr, dead);
        }
    }

    report
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::{CallingConvention, PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    /// Build a one-block function with the given insns followed by RETURN.
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
    fn rsi() -> Varnode {
        Varnode::reg(RSI, 8)
    }
    fn rax() -> Varnode {
        Varnode::reg(0, 8)
    }

    /// Core case: a function declaring one *used* (RDI) and one *unused* (RSI)
    /// parameter — only the unused slot (index 1) must be reported.
    #[test]
    fn dead_param_only_unused_reported() {
        let addr = 0x1000;
        let t1 = Varnode::unique(0, 8);
        // Body reads RDI (param 0) but never RSI (param 1).
        let func = make_func(
            "f",
            addr,
            vec![IrInsn::with_output(IrOp::Copy, t1, smallvec![rdi()], addr)],
            CallingConvention::SystemV,
            vec![
                ("a0".into(), PrimitiveType::Int(8)),
                ("a1".into(), PrimitiveType::Int(8)),
            ],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(addr, func);

        let report = analyze_dead_params(&funcs);
        assert_eq!(
            report.dead_params_for(addr),
            Some(&[1usize][..]),
            "only the unused second parameter (RSI, index 1) should be reported"
        );
        assert_eq!(report.total_dead_params(), 1);
        assert_eq!(report.functions_with_dead_params(), 1);
    }

    /// A function whose every parameter is read reports nothing.
    #[test]
    fn dead_param_all_used_reports_nothing() {
        let addr = 0x2000;
        let t1 = Varnode::unique(0, 8);
        let t2 = Varnode::unique(8, 8);
        let func = make_func(
            "g",
            addr,
            vec![
                IrInsn::with_output(IrOp::Copy, t1, smallvec![rdi()], addr),
                IrInsn::with_output(IrOp::Copy, t2, smallvec![rsi()], addr + 4),
            ],
            CallingConvention::SystemV,
            vec![
                ("a0".into(), PrimitiveType::Int(8)),
                ("a1".into(), PrimitiveType::Int(8)),
            ],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(addr, func);

        let report = analyze_dead_params(&funcs);
        assert!(report.functions.is_empty(), "no dead params expected");
        assert_eq!(report.total_dead_params(), 0);
    }

    /// A function that reads none of its parameters reports all of them.
    #[test]
    fn dead_param_all_unused_reports_all() {
        let addr = 0x3000;
        let func = make_func(
            "h",
            addr,
            vec![IrInsn::with_output(
                IrOp::Copy,
                rax(),
                smallvec![Varnode::constant(0, 8)],
                addr,
            )],
            CallingConvention::SystemV,
            vec![
                ("a0".into(), PrimitiveType::Int(8)),
                ("a1".into(), PrimitiveType::Int(8)),
            ],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(addr, func);

        let report = analyze_dead_params(&funcs);
        assert_eq!(report.dead_params_for(addr), Some(&[0usize, 1usize][..]));
    }

    /// Conservative: variadic functions never report parameters even when the
    /// declared slots are not read directly.
    #[test]
    fn dead_param_variadic_reports_nothing() {
        let addr = 0x4000;
        let mut func = make_func(
            "v",
            addr,
            vec![IrInsn::with_output(
                IrOp::Copy,
                rax(),
                smallvec![Varnode::constant(0, 8)],
                addr,
            )],
            CallingConvention::SystemV,
            vec![("fmt".into(), PrimitiveType::Int(8))],
        );
        func.variadic = Some(unlace_ir::ssa::Variadic { fixed_params: 1 });

        let mut funcs = BTreeMap::new();
        funcs.insert(addr, func);

        let report = analyze_dead_params(&funcs);
        assert!(
            report.functions.is_empty(),
            "variadic functions must be skipped conservatively"
        );
    }

    /// Conservative: an Unknown calling convention has no modelled argument
    /// registers, so non-use can't be proven and nothing is reported.
    #[test]
    fn dead_param_unknown_cc_reports_nothing() {
        let addr = 0x5000;
        let func = make_func(
            "u",
            addr,
            vec![IrInsn::with_output(
                IrOp::Copy,
                rax(),
                smallvec![Varnode::constant(0, 8)],
                addr,
            )],
            CallingConvention::Unknown,
            vec![("a0".into(), PrimitiveType::Int(8))],
        );

        let mut funcs = BTreeMap::new();
        funcs.insert(addr, func);

        let report = analyze_dead_params(&funcs);
        assert!(
            report.functions.is_empty(),
            "Unknown CC must be treated conservatively"
        );
    }
}
