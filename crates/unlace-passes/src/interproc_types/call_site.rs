//! Call sites as interprocedural type propagation sees them: what is
//! called, which value each argument register holds, and which value
//! receives the result.

use unlace_ir::ssa::{CallingConvention, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};

/// What a call site calls.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) enum CallTarget {
    /// A known function entry: a direct call, or an indirect call whose
    /// single target was resolved.
    Function(u64),
    /// An indirect call through this function-pointer value.
    Pointer(SsaVarnode),
}

/// The value one argument register holds at a call.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) enum ArgValue {
    Var(SsaVarnode),
    Const(u64),
}

#[derive(Clone, Debug)]
pub(crate) struct CallSite {
    pub block: BlockId,
    pub insn_idx: usize,
    pub target: CallTarget,
    /// Values of the leading integer argument registers, in
    /// calling-convention order, as `(register, value)`.
    pub args: Vec<(u64, ArgValue)>,
    /// The value the call returns into.
    pub result: Option<SsaVarnode>,
}

/// Every `Call` / `Callind` of `func`, with arguments placed by `cc`
/// when the callee's own convention is not known.
pub(crate) fn call_sites(func: &SsaFunction) -> Vec<CallSite> {
    let mut sites = Vec::new();
    for (&block, bb) in &func.function.blocks {
        for (insn_idx, insn) in bb.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
                continue;
            }
            let Some(target) = call_target_at(func, block, insn_idx) else {
                continue;
            };
            sites.push(CallSite {
                block,
                insn_idx,
                target,
                args: Vec::new(),
                result: insn
                    .output
                    .and_then(|_| func.var_map.get(&(block, insn_idx, VarnodeSlot::Output)))
                    .copied(),
            });
        }
    }
    sites
}

/// What the call instruction at `(block, insn_idx)` calls.
pub(crate) fn call_target_at(
    func: &SsaFunction,
    block: BlockId,
    insn_idx: usize,
) -> Option<CallTarget> {
    let insn = func.function.blocks.get(&block)?.insns.get(insn_idx)?;
    let target = insn.inputs.first()?;
    if insn.op == IrOp::Call && target.space == SpaceId::Const {
        return Some(CallTarget::Function(target.offset));
    }
    if let Some(&addr) = func.resolved_indirect_calls.get(&(block, insn_idx)) {
        return Some(CallTarget::Function(addr));
    }
    func.var_map
        .get(&(block, insn_idx, VarnodeSlot::Input(0)))
        .map(|&sv| CallTarget::Pointer(sv))
}

impl CallSite {
    /// Fill [`Self::args`] for a callee using `cc`.
    ///
    /// Argument recovery appends the argument registers a callee reads to
    /// the call's inputs in convention order; those win. Otherwise the
    /// arguments are the leading registers defined earlier in the call's
    /// block, stopping at the first one that is not (IDA's "consecutive
    /// registers" rule).
    pub fn with_args(mut self, func: &SsaFunction, cc: CallingConvention) -> Self {
        let regs = cc.int_arg_regs();
        let Some(insn) = func
            .function
            .blocks
            .get(&self.block)
            .and_then(|b| b.insns.get(self.insn_idx))
        else {
            return self;
        };
        let explicit = insn.inputs.len().saturating_sub(1);
        if explicit > 0 {
            self.args = regs
                .iter()
                .zip(1..=explicit)
                .filter_map(|(&reg, input)| {
                    let value = match func.var_map.get(&(
                        self.block,
                        self.insn_idx,
                        VarnodeSlot::Input(input),
                    )) {
                        Some(&sv) if sv.base.space == SpaceId::Const => {
                            ArgValue::Const(sv.base.offset)
                        }
                        Some(&sv) => ArgValue::Var(sv),
                        None if insn.inputs[input].space == SpaceId::Const => {
                            ArgValue::Const(insn.inputs[input].offset)
                        }
                        None => return None,
                    };
                    Some((reg, value))
                })
                .collect();
            return self;
        }

        let Some(bb) = func.function.blocks.get(&self.block) else {
            return self;
        };
        let mut last_def = std::collections::BTreeMap::new();
        for (idx, prev) in bb.insns.iter().enumerate().take(self.insn_idx) {
            if let Some(out) = prev.output
                && out.space == SpaceId::Register
                && let Some(&sv) = func.var_map.get(&(self.block, idx, VarnodeSlot::Output))
            {
                last_def.insert(out.offset, sv);
            }
        }
        self.args = regs
            .iter()
            .map_while(|reg| last_def.get(reg).map(|&sv| (*reg, ArgValue::Var(sv))))
            .collect();
        self
    }
}
