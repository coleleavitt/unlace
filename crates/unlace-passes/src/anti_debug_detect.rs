//! Anti-debugging probe detection (ROADMAP Phase E.4.3).
//!
//! Scans an [`SsaFunction`] for calls to well-known anti-debugging APIs and
//! reports each as an [`AntiDebugFinding`] in deterministic order. Like
//! [`crate::cwe_detect`] it relies on `func.libc_call_annotations` (populated
//! upstream by [`crate::libc_idioms::annotate_libc_calls`]) for the canonical
//! call-target name; an unannotated call is ignored. This is a reviewable
//! signal that evasion logic is present, not a proof that the binary is
//! malicious.

use std::collections::BTreeSet;

use unlace_ir::BlockId;
use unlace_ir::IrOp;
use unlace_ir::ssa::SsaFunction;

/// Category of anti-debugging technique recognised at a call site.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum AntiDebugKind {
    /// Direct debugger-presence query (`IsDebuggerPresent`, …).
    DebuggerCheck,
    /// Self-trace via `ptrace(PTRACE_TRACEME, …)`.
    PtraceSelf,
    /// Timing-based detection (`rdtsc`, `QueryPerformanceCounter`, …).
    TimingCheck,
    /// Debugger-channel side effect (`OutputDebugStringA`).
    OutputDebug,
}

/// A single anti-debug probe at an IR `(block, insn_idx)`.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct AntiDebugFinding {
    pub kind: AntiDebugKind,
    pub location: (BlockId, usize),
    /// The canonical API name that triggered the finding.
    pub api: String,
}

/// Detect anti-debugging probes in `func`. Results are returned in
/// deterministic `(block, insn, kind)` order.
pub fn detect_anti_debug(func: &SsaFunction) -> Vec<AntiDebugFinding> {
    let mut findings: BTreeSet<AntiDebugFinding> = BTreeSet::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Call {
                continue;
            }
            let Some(annotation) = func.libc_call_annotations.get(&(bid, idx)) else {
                continue;
            };
            if let Some(kind) = classify_anti_debug(annotation.as_str()) {
                findings.insert(AntiDebugFinding {
                    kind,
                    location: (bid, idx),
                    api: annotation.clone(),
                });
            }
        }
    }

    findings.into_iter().collect()
}

/// Classify a call-target name as an anti-debug technique, or `None`.
/// Explicit match so the roster stays auditable.
fn classify_anti_debug(name: &str) -> Option<AntiDebugKind> {
    match name {
        "IsDebuggerPresent"
        | "CheckRemoteDebuggerPresent"
        | "NtQueryInformationProcess"
        | "NtSetInformationThread" => Some(AntiDebugKind::DebuggerCheck),
        "ptrace" => Some(AntiDebugKind::PtraceSelf),
        "rdtsc" | "GetTickCount" | "GetTickCount64" | "QueryPerformanceCounter" => {
            Some(AntiDebugKind::TimingCheck)
        }
        "OutputDebugStringA" | "OutputDebugStringW" => Some(AntiDebugKind::OutputDebug),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::{SsaFunction, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    fn c(value: u64) -> Varnode {
        Varnode::constant(value, 8)
    }

    fn annotate(ssa: &mut SsaFunction, bid: BlockId, idx: usize, name: &str) {
        ssa.libc_call_annotations
            .insert((bid, idx), name.to_string());
    }

    fn one_call_func(name: &str) -> SsaFunction {
        let mut func = Function::new("probe", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x2000)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, name);
        ssa
    }

    #[test]
    fn detects_isdebuggerpresent_as_debugger_check() {
        let ssa = one_call_func("IsDebuggerPresent");
        let f = detect_anti_debug(&ssa);
        assert_eq!(f.len(), 1, "got: {f:?}");
        assert_eq!(f[0].kind, AntiDebugKind::DebuggerCheck);
        assert_eq!(f[0].location, (BlockId(0), 0));
        assert_eq!(f[0].api, "IsDebuggerPresent");
    }

    #[test]
    fn detects_ptrace_self() {
        let ssa = one_call_func("ptrace");
        let f = detect_anti_debug(&ssa);
        assert_eq!(f.len(), 1);
        assert_eq!(f[0].kind, AntiDebugKind::PtraceSelf);
    }

    #[test]
    fn detects_timing_check() {
        let ssa = one_call_func("QueryPerformanceCounter");
        let f = detect_anti_debug(&ssa);
        assert_eq!(f.len(), 1);
        assert_eq!(f[0].kind, AntiDebugKind::TimingCheck);
    }

    #[test]
    fn ignores_unannotated_and_benign_calls() {
        let ssa = one_call_func("malloc");
        assert!(detect_anti_debug(&ssa).is_empty());
    }
}
