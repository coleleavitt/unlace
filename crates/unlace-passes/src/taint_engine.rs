//! Taint analysis engine.
//!
//! Performs forward taint propagation through the SSA graph starting from
//! known taint sources (network reads, env vars, user input). Tracks taint
//! through copies, arithmetic, and memory operations. Reports when taint
//! reaches a sensitive sink (command execution, memory copy, etc.).
//!
//! Relies on the source/sink registry in [`crate::source_sink`].

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};
use crate::source_sink::{SinkKind, SourceKind, classify_sink, classify_source};

/// A taint finding: tainted data reaches a sink.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TaintFinding {
    /// The source that introduced the taint.
    pub source: TaintSource,
    /// The sink where tainted data arrives.
    pub sink: TaintSink,
    /// Number of propagation steps from source to sink.
    pub path_length: usize,
}

/// Origin of taint in the program.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TaintSource {
    pub block: BlockId,
    pub insn_idx: usize,
    pub kind: SourceKind,
    pub symbol: String,
}

/// Destination where taint is consumed.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TaintSink {
    pub block: BlockId,
    pub insn_idx: usize,
    pub kind: SinkKind,
    pub symbol: String,
}

/// Forward taint propagation pass.
pub struct TaintEnginePass {
    /// Known function symbols keyed by call target address.
    pub symbols: BTreeMap<u64, String>,
}

impl Pass for TaintEnginePass {
    fn name(&self) -> &str {
        "taint-engine"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let findings = propagate_taint(func, &self.symbols);
        // Record findings as annotations (future: store in func metadata).
        Ok(!findings.is_empty())
    }
}

/// Propagate taint forward from sources, return findings.
pub fn propagate_taint(
    func: &SsaFunction,
    symbols: &BTreeMap<u64, String>,
) -> Vec<TaintFinding> {
    let mut tainted: BTreeSet<Varnode> = BTreeSet::new();
    let mut sources: Vec<TaintSource> = Vec::new();
    let mut findings: Vec<TaintFinding> = Vec::new();

    // Phase 1: Identify taint sources.
    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Call && !insn.inputs.is_empty() {
                let target = insn.inputs[0].offset;
                if let Some(sym) = symbols.get(&target) {
                    if let Some(kind) = classify_source(sym) {
                        // The return value (output) is tainted.
                        if let Some(out) = insn.output {
                            tainted.insert(out);
                        }
                        sources.push(TaintSource {
                            block: block_id,
                            insn_idx: idx,
                            kind,
                            symbol: sym.clone(),
                        });
                    }
                }
            }
        }
    }

    if sources.is_empty() {
        return findings;
    }

    // Phase 2: Forward propagation (worklist).
    let mut changed = true;
    let mut iterations = 0;
    while changed && iterations < 50 {
        changed = false;
        iterations += 1;

        for block in func.function.blocks.values() {
            for insn in &block.insns {
                // If any input is tainted, output becomes tainted.
                let any_tainted = insn.inputs.iter().any(|v| tainted.contains(v));
                if any_tainted {
                    if let Some(out) = insn.output {
                        if tainted.insert(out) {
                            changed = true;
                        }
                    }
                }
            }
        }
    }

    // Phase 3: Check sinks.
    for (&block_id, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Call && !insn.inputs.is_empty() {
                let target = insn.inputs[0].offset;
                if let Some(sym) = symbols.get(&target) {
                    if let Some(kind) = classify_sink(sym) {
                        // Check if any argument (beyond the target addr) is tainted.
                        let arg_tainted = insn.inputs.iter().skip(1).any(|v| tainted.contains(v));
                        if arg_tainted {
                            findings.push(TaintFinding {
                                source: sources[0].clone(),
                                sink: TaintSink {
                                    block: block_id,
                                    insn_idx: idx,
                                    kind,
                                    symbol: sym.clone(),
                                },
                                path_length: iterations,
                            });
                        }
                    }
                }
            }
        }
    }

    findings
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    #[test]
    fn test_taint_propagation_recv_to_system() {
        let recv_ret = Varnode::unique(0x100, 8);
        let sys_arg = Varnode::unique(0x100, 8); // same varnode = direct flow

        let mut func = Function::new("vuln", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        // recv() returns into recv_ret
        bb.insns.push(IrInsn::with_output(
            IrOp::Call, recv_ret, smallvec![Varnode::constant(0x2000, 8)], 0x1000,
        ));
        // system(recv_ret) — tainted arg reaches sink
        bb.insns.push(IrInsn::without_output(
            IrOp::Call, smallvec![Varnode::constant(0x3000, 8), sys_arg], 0x1004,
        ));
        bb.insns.push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let mut syms = BTreeMap::new();
        syms.insert(0x2000, "recv".to_string());
        syms.insert(0x3000, "system".to_string());

        let findings = propagate_taint(&ssa, &syms);
        assert_eq!(findings.len(), 1);
        assert_eq!(findings[0].source.kind, SourceKind::NetworkRead);
        assert_eq!(findings[0].sink.kind, SinkKind::CommandExec);
    }
}
