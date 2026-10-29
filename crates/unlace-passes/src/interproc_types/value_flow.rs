//! SSA value flow inside one function, as interprocedural type
//! propagation needs it: which value a copy came from, where a value is
//! read, and which reads see a parameter's entry value.
//!
//! Raw instruction operands are not reliable here (late passes rename
//! registers into temporaries), so everything is answered from
//! [`SsaFunction::var_map`] and [`SsaFunction::phi_map`].

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::DefIndex;

/// Longest chain of copies followed back to the copied value.
const MAX_COPY_CHAIN: usize = 16;

/// SSA versions are counted per register width, so one value read
/// through a narrower view of its register carries the same version
/// under a different size. Reads are matched on everything but the size.
fn value_key(sv: SsaVarnode) -> SsaVarnode {
    SsaVarnode {
        base: Varnode { size: 0, ..sv.base },
        version: sv.version,
    }
}

/// One read of a value: instruction `insn_idx` of `block` reads it as
/// input `input`.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub(crate) struct Read {
    pub block: BlockId,
    pub insn_idx: usize,
    pub input: usize,
    /// The value as read, with the width of this read.
    pub value: SsaVarnode,
}

/// Definitions and reads of every SSA value of a function.
pub(crate) struct ValueFlow {
    defs: DefIndex,
    reads: BTreeMap<SsaVarnode, Vec<Read>>,
    /// Phi inputs, mapped to the phi outputs they flow into.
    phi_outputs: BTreeMap<SsaVarnode, Vec<SsaVarnode>>,
}

impl ValueFlow {
    pub fn build(func: &SsaFunction) -> Self {
        let mut reads: BTreeMap<SsaVarnode, Vec<Read>> = BTreeMap::new();
        for (&(block, insn_idx, ref slot), &value) in &func.var_map {
            if let VarnodeSlot::Input(input) = *slot {
                reads.entry(value_key(value)).or_default().push(Read {
                    block,
                    insn_idx,
                    input,
                    value,
                });
            }
        }
        let mut phi_outputs: BTreeMap<SsaVarnode, Vec<SsaVarnode>> = BTreeMap::new();
        for phi in func.phi_map.values().flatten() {
            for (_, input) in &phi.inputs {
                phi_outputs
                    .entry(value_key(*input))
                    .or_default()
                    .push(phi.output);
            }
        }
        ValueFlow {
            defs: DefIndex::build(func),
            reads,
            phi_outputs,
        }
    }

    /// Instruction reads of `value`.
    pub fn reads_of(&self, value: SsaVarnode) -> &[Read] {
        self.reads.get(&value_key(value)).map_or(&[], Vec::as_slice)
    }

    /// `value` and every value it was copied from, nearest first.
    pub fn copy_chain(&self, func: &SsaFunction, value: SsaVarnode) -> Vec<SsaVarnode> {
        let mut chain = vec![value];
        let mut current = value;
        while chain.len() < MAX_COPY_CHAIN {
            let Some((block, idx)) = self.defs.lookup(current) else {
                break;
            };
            let is_copy = func
                .function
                .blocks
                .get(&block)
                .and_then(|b| b.insns.get(idx))
                .is_some_and(|insn| insn.op == IrOp::Copy);
            if !is_copy {
                break;
            }
            let Some(&source) = func.var_map.get(&(block, idx, VarnodeSlot::Input(0))) else {
                break;
            };
            if source.base.space == SpaceId::Const || chain.contains(&source) {
                break;
            }
            chain.push(source);
            current = source;
        }
        chain
    }

    /// The constant `value` holds when its copy chain starts at one.
    pub fn copied_constant(&self, func: &SsaFunction, value: SsaVarnode) -> Option<u64> {
        let root = *self.copy_chain(func, value).last()?;
        let (block, idx) = self.defs.lookup(root)?;
        let insn = func.function.blocks.get(&block)?.insns.get(idx)?;
        let source = insn.inputs.first()?;
        (insn.op == IrOp::Copy && source.space == SpaceId::Const).then_some(source.offset)
    }

    /// `value` and every value it flows into unchanged through copies and
    /// phis.
    pub fn copy_web(&self, func: &SsaFunction, value: SsaVarnode) -> BTreeSet<SsaVarnode> {
        let mut web = BTreeSet::new();
        let mut work = vec![value];
        while let Some(current) = work.pop() {
            if web.len() >= MAX_COPY_CHAIN * 4 || !web.insert(current) {
                continue;
            }
            for read in self.reads_of(current) {
                let Some(insn) = func
                    .function
                    .blocks
                    .get(&read.block)
                    .and_then(|b| b.insns.get(read.insn_idx))
                else {
                    continue;
                };
                if matches!(insn.op, IrOp::Copy | IrOp::Multiequal)
                    && let Some(&out) =
                        func.var_map
                            .get(&(read.block, read.insn_idx, VarnodeSlot::Output))
                {
                    work.push(out);
                }
            }
            if let Some(outs) = self.phi_outputs.get(&value_key(current)) {
                work.extend(outs.iter().copied());
            }
        }
        web
    }
}

/// Reads of register `reg` that see its value at function entry.
///
/// SSA numbers a register's entry value and its first definition both as
/// version 0, so a version-0 read is the entry value only where no
/// version-0 definition can precede it: anywhere when the function never
/// defines version 0 of the register, otherwise only in the entry block
/// up to that definition.
pub(crate) fn entry_value_reads(func: &SsaFunction, reg: u64) -> Vec<Read> {
    let is_reg_v0 = |sv: &SsaVarnode| {
        sv.base.space == SpaceId::Register && sv.base.offset == reg && sv.version == 0
    };
    let entry = func.function.entry;
    let defs: Vec<(BlockId, usize)> = func
        .var_map
        .iter()
        .filter(|((_, _, slot), sv)| *slot == VarnodeSlot::Output && is_reg_v0(sv))
        .map(|((block, idx, _), _)| (*block, *idx))
        .collect();
    let first_entry_def = defs
        .iter()
        .filter(|(block, _)| *block == entry)
        .map(|&(_, idx)| idx)
        .min();
    func.var_map
        .iter()
        .filter_map(|(&(block, insn_idx, ref slot), &value)| match *slot {
            VarnodeSlot::Input(input) if is_reg_v0(&value) => Some(Read {
                block,
                insn_idx,
                input,
                value,
            }),
            _ => None,
        })
        .filter(|read| {
            defs.is_empty()
                || (read.block == entry && first_entry_def.is_none_or(|def| read.insn_idx <= def))
        })
        .collect()
}
