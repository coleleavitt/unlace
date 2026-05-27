//! Collector-style call-site snapshots.
//!
//! These snapshots do not mutate the IR. They expose the register definitions
//! reaching a call and whether those SSA values are used after the call, which
//! is the audit data needed before choosing a stronger Van Emmerik-style call
//! collector.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CallingConvention, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId, Varnode};

use crate::abi_clobber::{RAX, argument_registers};

#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub struct UseSite {
    pub bid: BlockId,
    pub insn_idx: usize,
    pub input_idx: usize,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CallRegisterSnapshot {
    pub reg_offset: u64,
    pub operand: Varnode,
    pub ssa: SsaVarnode,
    pub live_after_uses: Vec<UseSite>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CallSnapshot {
    pub site: (BlockId, usize),
    pub target: Option<Varnode>,
    pub registers: Vec<CallRegisterSnapshot>,
}

type RegState = BTreeMap<u64, SsaVarnode>;

pub fn collect_call_snapshots(func: &SsaFunction) -> Vec<CallSnapshot> {
    let cc = calling_convention_for(func);
    let arg_regs = argument_registers(cc);
    if arg_regs.is_empty() {
        return Vec::new();
    }

    let tracked: BTreeSet<u64> = arg_regs.iter().copied().chain([RAX]).collect();
    let mut snapshots = Vec::new();
    for (&bid, block) in &func.function.blocks {
        let mut state = RegState::new();
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if matches!(insn.op, IrOp::Call | IrOp::Callind) {
                let site = (bid, insn_idx);
                let mut registers = Vec::new();
                for (&reg_offset, &ssa) in &state {
                    if !tracked.contains(&reg_offset) {
                        continue;
                    }
                    registers.push(CallRegisterSnapshot {
                        reg_offset,
                        operand: ssa.base,
                        ssa,
                        live_after_uses: collect_later_uses(func, site, ssa),
                    });
                }
                snapshots.push(CallSnapshot {
                    site,
                    target: insn.inputs.first().copied(),
                    registers,
                });
                for &reg in arg_regs {
                    state.remove(&reg);
                }
            }

            if let Some(out) = insn.output
                && out.space == SpaceId::Register
                && let Some(&ssa) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))
            {
                state.insert(canonical_register_offset(out.offset), ssa);
            }
        }
    }
    snapshots
}

fn collect_later_uses(func: &SsaFunction, site: (BlockId, usize), ssa: SsaVarnode) -> Vec<UseSite> {
    let mut uses = Vec::new();
    for (key, &candidate) in &func.var_map {
        let (bid, insn_idx, slot) = key;
        if (*bid, *insn_idx) <= site || candidate != ssa {
            continue;
        }
        if let VarnodeSlot::Input(input_idx) = slot {
            uses.push(UseSite {
                bid: *bid,
                insn_idx: *insn_idx,
                input_idx: *input_idx,
            });
        }
    }
    uses
}

fn calling_convention_for(func: &SsaFunction) -> CallingConvention {
    if func.calling_convention != CallingConvention::Unknown {
        return func.calling_convention;
    }
    match func.arch {
        ArchId::AArch64 => CallingConvention::AArch64,
        ArchId::X86_64 => CallingConvention::SystemV,
        _ => CallingConvention::Unknown,
    }
}

fn canonical_register_offset(offset: u64) -> u64 {
    if offset < 0x100 { offset & !7 } else { offset }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    use super::*;
    use crate::abi_clobber::RDI;

    #[test]
    fn call_snapshot_records_reaching_arg_and_later_use() {
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(RDI, 8),
            smallvec![Varnode::constant(0x1234, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x2000, 8)],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::unique(0, 8),
            smallvec![Varnode::reg(RDI, 8)],
            0x1010,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        ssa.calling_convention = CallingConvention::SystemV;

        let snapshots = collect_call_snapshots(&ssa);
        assert_eq!(snapshots.len(), 1);
        let snap = &snapshots[0];
        assert_eq!(snap.site, (BlockId(0), 1));
        assert_eq!(snap.target, Some(Varnode::constant(0x2000, 8)));
        let rdi = snap
            .registers
            .iter()
            .find(|entry| entry.reg_offset == RDI)
            .expect("RDI reaching definition should be snapshotted");
        assert_eq!(rdi.operand, Varnode::reg(RDI, 8));
        assert_eq!(
            rdi.live_after_uses,
            vec![UseSite {
                bid: BlockId(0),
                insn_idx: 2,
                input_idx: 0,
            }]
        );
    }
}
