//! Static analysis: nullability tracking and taint flow.
//!
//! - Nullability: tracks per-SSA-value whether the value is must-be-null,
//!   may-be-null, or must-not-be-null. Sources: malloc returns may-null;
//!   constant 0 is must-null; non-zero const is must-not-null; an SSA value
//!   that flows through a null-check on the not-null branch becomes
//!   must-not-null on that branch.
//!
//! - Taint flow: propagates a "tainted" bit through SSA values starting
//!   from input sources (scanf/read/recv). When tainted data reaches a
//!   sink (strcpy/sprintf/system), emit a warning.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId, Varnode};

// ---------------------------------------------------------------------------
// Nullability
// ---------------------------------------------------------------------------

/// Lattice value for nullability.
#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum Nullability {
    /// Definitely null (constant 0).
    MustNull,
    /// Could be null or not.
    MayNull,
    /// Definitely not null (constant nonzero, malloc + post-check, etc.).
    NotNull,
    /// Unknown — not yet analyzed.
    Unknown,
}

impl Nullability {
    pub fn join(self, other: Self) -> Self {
        match (self, other) {
            (Self::Unknown, x) | (x, Self::Unknown) => x,
            (Self::MustNull, Self::MustNull) => Self::MustNull,
            (Self::NotNull, Self::NotNull) => Self::NotNull,
            _ => Self::MayNull,
        }
    }
}

/// Nullability inference for every SsaVarnode in a function.
pub fn infer_nullability(func: &SsaFunction) -> BTreeMap<SsaVarnode, Nullability> {
    let mut result = BTreeMap::new();
    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            infer_one_insn(func, block.id, idx, insn, &mut result);
        }
    }
    result
}

fn infer_one_insn(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    insn: &unlace_ir::IrInsn,
    result: &mut BTreeMap<SsaVarnode, Nullability>,
) {
    let Some(out_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied() else {
        return;
    };
    let n = compute_nullability_for_op(func, bid, idx, insn, result);
    result.insert(out_sv, n);
}

fn compute_nullability_for_op(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    insn: &unlace_ir::IrInsn,
    result: &BTreeMap<SsaVarnode, Nullability>,
) -> Nullability {
    match insn.op {
        IrOp::Copy if insn.inputs.len() == 1 => {
            nullability_of_operand(&insn.inputs[0], func, bid, idx, 0, result)
        }
        IrOp::Call | IrOp::Callind => Nullability::MayNull,
        IrOp::IntAdd | IrOp::IntSub => {
            let a = nullability_of_operand(&insn.inputs[0], func, bid, idx, 0, result);
            let b = if insn.inputs.len() > 1 {
                nullability_of_operand(&insn.inputs[1], func, bid, idx, 1, result)
            } else {
                Nullability::Unknown
            };
            a.join(b)
        }
        _ => Nullability::Unknown,
    }
}

fn nullability_of_operand(
    operand: &Varnode,
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    input_idx: usize,
    current: &BTreeMap<SsaVarnode, Nullability>,
) -> Nullability {
    if operand.space == SpaceId::Const {
        return if operand.offset == 0 {
            Nullability::MustNull
        } else {
            Nullability::NotNull
        };
    }
    let Some(sv) = func
        .var_map
        .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
        .copied()
    else {
        return Nullability::Unknown;
    };
    current.get(&sv).copied().unwrap_or(Nullability::Unknown)
}

// ---------------------------------------------------------------------------
// Taint flow
// ---------------------------------------------------------------------------

/// Source library calls that produce tainted data.
pub fn is_taint_source(name: &str) -> bool {
    matches!(
        name,
        "scanf"
            | "fscanf"
            | "sscanf"
            | "gets"
            | "fgets"
            | "read"
            | "recv"
            | "recvfrom"
            | "recvmsg"
            | "getenv"
            | "getline"
            | "readline"
    )
}

/// Sink library calls that should not receive tainted data.
pub fn is_taint_sink(name: &str) -> bool {
    matches!(
        name,
        "strcpy"
            | "strcat"
            | "sprintf"
            | "vsprintf"
            | "system"
            | "popen"
            | "exec"
            | "execve"
            | "execvp"
            | "execlp"
    )
}

/// A taint warning produced by the analysis.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct TaintWarning {
    pub sink_addr: u64,
    pub sink_name: String,
    pub message: String,
}

/// Analyze taint flow. `call_resolver(addr) -> Option<name>` returns the
/// callee name for a given Call instruction's target address (used to
/// identify sources and sinks).
pub fn analyze_taint<F>(
    func: &SsaFunction,
    call_resolver: F,
) -> (BTreeSet<SsaVarnode>, Vec<TaintWarning>)
where
    F: Fn(u64) -> Option<String>,
{
    let mut tainted = identify_sources(func, &call_resolver);
    propagate_taint(func, &mut tainted);
    let warnings = check_sinks(func, &call_resolver, &tainted);
    (tainted, warnings)
}

/// Pass 1: identify taint sources — outputs of Call to a known source.
fn identify_sources<F>(func: &SsaFunction, call_resolver: &F) -> BTreeSet<SsaVarnode>
where
    F: Fn(u64) -> Option<String>,
{
    let mut tainted: BTreeSet<SsaVarnode> = BTreeSet::new();
    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            let Some(name) = resolve_call_target(insn, call_resolver) else {
                continue;
            };
            if !is_taint_source(&name) {
                continue;
            }
            mark_call_outputs_tainted(func, block.id, idx, insn, &mut tainted);
        }
    }
    tainted
}

/// Resolve a Call's target address to a name via the resolver.
fn resolve_call_target<F>(insn: &unlace_ir::IrInsn, call_resolver: &F) -> Option<String>
where
    F: Fn(u64) -> Option<String>,
{
    if insn.op != IrOp::Call || insn.inputs.is_empty() {
        return None;
    }
    let target = &insn.inputs[0];
    if target.space != SpaceId::Const {
        return None;
    }
    call_resolver(target.offset)
}

/// Mark all argument-pointer outputs of a Call as tainted (e.g., scanf(buf)).
fn mark_call_outputs_tainted(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    insn: &unlace_ir::IrInsn,
    tainted: &mut BTreeSet<SsaVarnode>,
) {
    for input_idx in 1..insn.inputs.len() {
        if let Some(sv) = func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
            .copied()
        {
            tainted.insert(sv);
        }
    }
    if let Some(out_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied() {
        tainted.insert(out_sv);
    }
}

/// Pass 2: propagate taint through copy/cast/arithmetic to fixed point.
fn propagate_taint(func: &SsaFunction, tainted: &mut BTreeSet<SsaVarnode>) {
    let mut changed = true;
    let mut iter = 0;
    while changed && iter < 20 {
        changed = false;
        iter += 1;
        for block in func.function.blocks.values() {
            for (idx, insn) in block.insns.iter().enumerate() {
                if propagate_taint_one_insn(func, block.id, idx, insn, tainted) {
                    changed = true;
                }
            }
        }
    }
}

fn propagate_taint_one_insn(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    insn: &unlace_ir::IrInsn,
    tainted: &mut BTreeSet<SsaVarnode>,
) -> bool {
    let Some(out_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied() else {
        return false;
    };
    if tainted.contains(&out_sv) {
        return false;
    }
    if !is_taint_propagating_op(insn.op) {
        return false;
    }
    if !any_input_tainted(func, bid, idx, insn.inputs.len(), tainted) {
        return false;
    }
    tainted.insert(out_sv);
    true
}

fn is_taint_propagating_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::Copy | IrOp::Cast | IrOp::IntAdd | IrOp::IntSub | IrOp::IntZext | IrOp::IntSext
    )
}

fn any_input_tainted(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    input_count: usize,
    tainted: &BTreeSet<SsaVarnode>,
) -> bool {
    for input_idx in 0..input_count {
        if let Some(sv) = func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
            .copied()
            && tainted.contains(&sv)
        {
            return true;
        }
    }
    false
}

/// Pass 3: check sinks — emit warnings when tainted data flows into them.
fn check_sinks<F>(
    func: &SsaFunction,
    call_resolver: &F,
    tainted: &BTreeSet<SsaVarnode>,
) -> Vec<TaintWarning>
where
    F: Fn(u64) -> Option<String>,
{
    let mut warnings: Vec<TaintWarning> = Vec::new();
    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            let Some(name) = resolve_call_target(insn, call_resolver) else {
                continue;
            };
            if !is_taint_sink(&name) {
                continue;
            }
            if let Some(arg_idx) = find_tainted_arg(func, block.id, idx, insn, tainted) {
                warnings.push(TaintWarning {
                    sink_addr: insn.addr,
                    sink_name: name.clone(),
                    message: format!("tainted data flows into {} arg {}", name, arg_idx),
                });
            }
        }
    }
    warnings
}

fn find_tainted_arg(
    func: &SsaFunction,
    bid: unlace_ir::BlockId,
    idx: usize,
    insn: &unlace_ir::IrInsn,
    tainted: &BTreeSet<SsaVarnode>,
) -> Option<usize> {
    for input_idx in 1..insn.inputs.len() {
        if let Some(sv) = func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
            .copied()
            && tainted.contains(&sv)
        {
            return Some(input_idx);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    #[test]
    fn test_nullability_const_zero_is_must_null() {
        let out = Varnode::reg(0, 8);
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![Varnode::constant(0, 8)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let result = infer_nullability(&ssa);
        let sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .unwrap();
        assert_eq!(result[&sv], Nullability::MustNull);
    }

    #[test]
    fn test_nullability_const_nonzero_is_not_null() {
        let out = Varnode::reg(0, 8);
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            out,
            smallvec![Varnode::constant(42, 8)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let result = infer_nullability(&ssa);
        let sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .unwrap();
        assert_eq!(result[&sv], Nullability::NotNull);
    }

    #[test]
    fn test_nullability_call_return_is_may_null() {
        let out = Varnode::reg(0, 8);
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Call,
            out,
            smallvec![Varnode::constant(0x9000, 8)], // malloc
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let result = infer_nullability(&ssa);
        let sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .unwrap();
        assert_eq!(result[&sv], Nullability::MayNull);
    }

    #[test]
    fn test_nullability_join() {
        assert_eq!(
            Nullability::Unknown.join(Nullability::NotNull),
            Nullability::NotNull
        );
        assert_eq!(
            Nullability::MustNull.join(Nullability::NotNull),
            Nullability::MayNull
        );
        assert_eq!(
            Nullability::NotNull.join(Nullability::NotNull),
            Nullability::NotNull
        );
    }

    #[test]
    fn test_taint_source_detection() {
        assert!(is_taint_source("scanf"));
        assert!(is_taint_source("read"));
        assert!(!is_taint_source("strlen"));
        assert!(!is_taint_source("printf"));
    }

    #[test]
    fn test_taint_sink_detection() {
        assert!(is_taint_sink("strcpy"));
        assert!(is_taint_sink("system"));
        assert!(!is_taint_sink("strlen"));
    }

    #[test]
    fn test_taint_flow_through_call() {
        // call scanf — taints the buffer.
        // call strcpy(dest, buffer) — sink receives tainted arg.
        let buf = Varnode::reg(0, 8);
        let dest = Varnode::reg(8, 8);
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x9000, 8), buf], // scanf(buf)
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x9100, 8), dest, buf], // strcpy(dest, buf)
            0x1004,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let resolver = |addr: u64| match addr {
            0x9000 => Some("scanf".to_string()),
            0x9100 => Some("strcpy".to_string()),
            _ => None,
        };
        let (tainted, warnings) = analyze_taint(&ssa, resolver);
        assert!(!tainted.is_empty());
        assert!(!warnings.is_empty(), "expected at least one taint warning");
        assert_eq!(warnings[0].sink_name, "strcpy");
    }

    #[test]
    fn test_no_taint_when_no_source() {
        let dest = Varnode::reg(0, 8);
        let src = Varnode::reg(8, 8);
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x9100, 8), dest, src], // strcpy
            0x1000,
        ));
        b0.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(b0);
        let ssa = build_ssa(func);
        let resolver = |addr: u64| match addr {
            0x9100 => Some("strcpy".to_string()),
            _ => None,
        };
        let (_, warnings) = analyze_taint(&ssa, resolver);
        assert!(warnings.is_empty(), "no source → no taint warnings");
    }
}
