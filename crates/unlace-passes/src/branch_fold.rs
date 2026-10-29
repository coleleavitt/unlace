//! Constant branch folding over symbolic `base + offset` values.
//!
//! Compilers emit loop guards and peel checks over addresses they already
//! know relative to the stack pointer, e.g. `((sp + 0x40) - (sp + 4)) & 4`
//! or `sp + 0x40 == sp + 8`. SCCP only tracks concrete constants, so these
//! conditions stay symbolic and the structurer sees edges that can never
//! execute. Those dead edges are what turn a peeled loop into
//! `goto`-into-the-loop shapes and make otherwise reducible regions
//! irreducible.
//!
//! This pass evaluates each `CBRANCH` condition over values of the form
//! `base + offset`, where `base` is an opaque SSA value (or absent for plain
//! constants). Two values with the same base differ by a known constant, so
//! their difference and their equality are known even though the base is
//! not. A branch whose condition evaluates to a constant becomes an
//! unconditional `BRANCH`; blocks that only the dropped edge reached are
//! removed and the CFG, phis and `var_map` are repaired.

use std::collections::{BTreeMap, BTreeSet, VecDeque};

use smallvec::smallvec;
use unlace_ir::cfg::EdgeKind;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot, rebuild_cfg};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::cfg_repair::CfgRepairPass;
use crate::const_fold::evaluate;
use crate::pass::{Pass, PassError, PassPhase};

/// Recursion bound for following SSA definitions.
const MAX_DEPTH: u32 = 48;

pub struct ConstBranchFoldPass;

impl Pass for ConstBranchFoldPass {
    fn name(&self) -> &str {
        "const-branch-fold"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::GlobalOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let folds = {
            let evaluator = Evaluator::new(func);
            collect_folds(func, &evaluator)
        };
        if folds.is_empty() {
            return Ok(false);
        }

        let reachable_before = reachable_blocks(func);
        for fold in &folds {
            apply_fold(func, fold);
        }
        rebuild_cfg(func);
        let reachable_after = reachable_blocks(func);
        for dead in reachable_before.difference(&reachable_after) {
            func.function.blocks.remove(dead);
            func.phi_map.remove(dead);
        }
        CfgRepairPass.run(func)?;
        Ok(true)
    }
}

/// A `CBRANCH` proven to always go to `target`.
struct Fold {
    block: BlockId,
    insn_idx: usize,
    target: BlockId,
}

fn collect_folds(func: &SsaFunction, evaluator: &Evaluator<'_>) -> Vec<Fold> {
    let mut folds = Vec::new();
    for (&bid, block) in &func.function.blocks {
        let Some(insn_idx) = block.insns.len().checked_sub(1) else {
            continue;
        };
        let insn = &block.insns[insn_idx];
        if insn.op != IrOp::Cbranch || insn.inputs.len() < 2 {
            continue;
        }
        let Some(cond) = evaluator.input(bid, insn_idx, 1, 0) else {
            continue;
        };
        let Some(value) = cond.constant() else {
            continue;
        };
        let taken = value != 0;
        let wanted = if taken {
            EdgeKind::ConditionalTrue
        } else {
            EdgeKind::ConditionalFalse
        };
        let Some(target) = func
            .cfg
            .edges_from(bid)
            .into_iter()
            .find_map(|(succ, kind)| (kind == wanted).then_some(succ))
        else {
            continue;
        };
        tracing::debug!(
            target: "unlace::branch_fold",
            "func={} block={bid:?} addr={:#x} cond={value} -> {target:?}",
            func.function.name,
            insn.addr,
        );
        folds.push(Fold {
            block: bid,
            insn_idx,
            target,
        });
    }
    folds
}

fn apply_fold(func: &mut SsaFunction, fold: &Fold) {
    let target_addr = block_address(func, fold.target);
    let Some(block) = func.function.blocks.get_mut(&fold.block) else {
        return;
    };
    let cbranch = &block.insns[fold.insn_idx];
    let addr_vn = target_addr.map_or(cbranch.inputs[0], |a| Varnode::constant(a, 8));
    let branch = IrInsn::without_output(IrOp::Branch, smallvec![addr_vn], cbranch.addr);
    for slot in 0..cbranch.inputs.len() {
        func.var_map
            .remove(&(fold.block, fold.insn_idx, VarnodeSlot::Input(slot)));
    }
    block.insns[fold.insn_idx] = branch;
    block.successors = smallvec![fold.target];
}

/// Address of the first instruction executed when control enters `bid`,
/// following fallthrough through empty blocks.
fn block_address(func: &SsaFunction, mut bid: BlockId) -> Option<u64> {
    let mut seen = BTreeSet::new();
    while seen.insert(bid) {
        if let Some(insn) = func.function.blocks.get(&bid)?.insns.first() {
            return Some(insn.addr);
        }
        bid = func
            .cfg
            .edges_from(bid)
            .into_iter()
            .find_map(|(succ, kind)| (kind == EdgeKind::Fallthrough).then_some(succ))?;
    }
    None
}

fn reachable_blocks(func: &SsaFunction) -> BTreeSet<BlockId> {
    let mut seen = BTreeSet::new();
    let mut queue = VecDeque::from([func.function.entry]);
    while let Some(bid) = queue.pop_front() {
        if !func.function.blocks.contains_key(&bid) || !seen.insert(bid) {
            continue;
        }
        queue.extend(func.cfg.edges_from(bid).into_iter().map(|(succ, _)| succ));
    }
    seen
}

/// The unknown part of a [`Linear`] value: one definition site (or live-in
/// storage) read at one width. Identity is by site, never by SSA name, because
/// version 0 names both a register's live-in value and its first definition.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Base {
    Insn {
        block: BlockId,
        idx: usize,
        size: u8,
    },
    Phi {
        block: BlockId,
        var: SsaVarnode,
    },
    LiveIn(Varnode),
}

/// A value known to equal `base + offset` (wrapping, masked to its size).
/// `base == None` means the value is the constant `offset`.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
struct Linear {
    base: Option<Base>,
    offset: u64,
}

impl Linear {
    fn constant_value(value: u64, size: u8) -> Self {
        Self {
            base: None,
            offset: value & mask(size),
        }
    }

    fn opaque(base: Base) -> Self {
        Self {
            base: Some(base),
            offset: 0,
        }
    }

    fn constant(self) -> Option<u64> {
        self.base.is_none().then_some(self.offset)
    }
}

fn mask(size: u8) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (u32::from(size) * 8)) - 1
    }
}

/// Definitions keyed by storage and version, so a narrower use of a wider
/// definition (`v88#1:i32` of `v88#1:i64`) still finds it.
type DefKey = (SpaceId, u64, u32);

fn def_key(sv: SsaVarnode) -> DefKey {
    (sv.base.space, sv.base.offset, sv.version)
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum DefSite {
    Insn(BlockId, usize),
    Phi(BlockId, SsaVarnode),
}

struct Evaluator<'a> {
    func: &'a SsaFunction,
    defs: BTreeMap<DefKey, Vec<DefSite>>,
}

impl<'a> Evaluator<'a> {
    fn new(func: &'a SsaFunction) -> Self {
        let mut defs: BTreeMap<DefKey, Vec<DefSite>> = BTreeMap::new();
        for (&(bid, idx, ref slot), &sv) in &func.var_map {
            if matches!(slot, VarnodeSlot::Output) {
                defs.entry(def_key(sv))
                    .or_default()
                    .push(DefSite::Insn(bid, idx));
            }
        }
        for (&bid, phis) in &func.phi_map {
            for phi in phis {
                defs.entry(def_key(phi.output))
                    .or_default()
                    .push(DefSite::Phi(bid, phi.output));
            }
        }
        Self { func, defs }
    }

    fn input(&self, bid: BlockId, idx: usize, slot: usize, depth: u32) -> Option<Linear> {
        let insn = self.func.function.blocks.get(&bid)?.insns.get(idx)?;
        let raw = *insn.inputs.get(slot)?;
        if raw.space == SpaceId::Const {
            return (raw.size <= 8).then(|| Linear::constant_value(raw.offset, raw.size));
        }
        // Rewrites that replace an instruction in place can leave `var_map`
        // entries of the old operands behind; only trust an entry that still
        // names the operand's storage.
        let sv = *self
            .func
            .var_map
            .get(&(bid, idx, VarnodeSlot::Input(slot)))?;
        if sv.base.space != raw.space || sv.base.offset != raw.offset || sv.base.size > 8 {
            return None;
        }
        match self.reaching_def(bid, idx, sv)? {
            None => Some(Linear::opaque(Base::LiveIn(sv.base))),
            Some(DefSite::Phi(block, var)) => Some(Linear::opaque(Base::Phi {
                block,
                var: SsaVarnode {
                    base: Varnode {
                        size: sv.base.size,
                        ..var.base
                    },
                    ..var
                },
            })),
            Some(DefSite::Insn(block, def_idx)) => {
                self.def_value(block, def_idx, sv.base.size, depth)
            }
        }
    }

    /// The definition a use at `(bid, idx)` reads: `Some(None)` for the
    /// live-in value, `None` when the SSA naming is ambiguous.
    ///
    /// A read at a width the register was never defined at carries version 0
    /// whatever reaches it (SSA renames per exact varnode); it is matched to
    /// the register's definition only when there is exactly one.
    fn reaching_def(&self, bid: BlockId, idx: usize, sv: SsaVarnode) -> Option<Option<DefSite>> {
        let sites: Vec<DefSite> = match self.defs.get(&def_key(sv)) {
            Some(sites) => sites.clone(),
            None if sv.version == 0 => self
                .defs
                .range((sv.base.space, sv.base.offset, 0)..=(sv.base.space, sv.base.offset, u32::MAX))
                .flat_map(|(_, sites)| sites.iter().copied())
                .collect(),
            None => return Some(None),
        };
        let [site] = sites.as_slice() else {
            return (sites.is_empty()).then_some(None);
        };
        let dominates_use = match *site {
            DefSite::Insn(def_bid, def_idx) => {
                (def_bid == bid && def_idx < idx)
                    || (def_bid != bid && self.dominates(def_bid, bid))
            }
            DefSite::Phi(def_bid, _) => self.dominates(def_bid, bid),
        };
        if dominates_use {
            Some(Some(*site))
        } else if sv.version == 0 {
            Some(None)
        } else {
            None
        }
    }

    fn dominates(&self, a: BlockId, mut b: BlockId) -> bool {
        loop {
            if a == b {
                return true;
            }
            match self.func.dom_tree.idom(b) {
                Some(parent) if parent != b => b = parent,
                _ => return false,
            }
        }
    }

    /// Value of the definition at `(block, idx)` read at `size` bytes.
    fn def_value(&self, block: BlockId, idx: usize, size: u8, depth: u32) -> Option<Linear> {
        let insn = self.func.function.blocks.get(&block)?.insns.get(idx)?;
        let out = insn.output?;
        if out.size < size {
            return None;
        }
        let opaque = Linear::opaque(Base::Insn { block, idx, size });
        if depth >= MAX_DEPTH || out.size > 8 {
            return Some(opaque);
        }
        Some(
            match self.eval_insn(block, idx, insn, out.size, depth + 1) {
                Some(v) if out.size == size => v,
                // A low-part use of a wider definition is only known when the
                // definition is a constant (little-endian: same offset = low bytes).
                Some(Linear { base: None, offset }) => Linear::constant_value(offset, size),
                _ => opaque,
            },
        )
    }

    fn eval_insn(
        &self,
        bid: BlockId,
        idx: usize,
        insn: &IrInsn,
        size: u8,
        depth: u32,
    ) -> Option<Linear> {
        let arg = |slot| self.input(bid, idx, slot, depth);
        match insn.op {
            IrOp::Copy => arg(0),
            IrOp::IntAdd => {
                let (a, b) = (arg(0)?, arg(1)?);
                let base = match (a.base, b.base) {
                    (base, None) | (None, base) => base,
                    _ => return None,
                };
                Some(Linear {
                    base,
                    offset: a.offset.wrapping_add(b.offset) & mask(size),
                })
            }
            IrOp::IntSub => {
                let (a, b) = (arg(0)?, arg(1)?);
                let base = match (a.base, b.base) {
                    (x, y) if x == y => None,
                    (base, None) => base,
                    _ => return None,
                };
                Some(Linear {
                    base,
                    offset: a.offset.wrapping_sub(b.offset) & mask(size),
                })
            }
            IrOp::IntEqual | IrOp::IntNotequal => {
                let (a, b) = (arg(0)?, arg(1)?);
                if a.base != b.base {
                    return None;
                }
                let equal = a.offset == b.offset;
                Some(Linear::constant_value(
                    u64::from(equal == (insn.op == IrOp::IntEqual)),
                    size,
                ))
            }
            IrOp::Subpiece => {
                let value = arg(0)?.constant()?;
                let byte_offset = arg(1)?.constant()?;
                let shifted = value.checked_shr(u32::try_from(byte_offset * 8).ok()?)?;
                Some(Linear::constant_value(shifted, size))
            }
            op => {
                let inputs = (0..insn.inputs.len())
                    .map(|slot| {
                        let value = arg(slot)?.constant()?;
                        Some(Varnode::constant(value, insn.inputs[slot].size))
                    })
                    .collect::<Option<Vec<_>>>()?;
                evaluate(op, &inputs, size).map(|v| Linear::constant_value(v, size))
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};

    use super::*;

    const SP: Varnode = Varnode::reg(0x20, 8);

    fn op(op: IrOp, out: Varnode, inputs: &[Varnode]) -> IrInsn {
        IrInsn::with_output(op, out, inputs.to_vec(), 0x1000)
    }

    fn reg(offset: u64, size: u8) -> Varnode {
        Varnode::reg(offset, size)
    }

    /// `BB0: <body>; CBRANCH BB2, cond` / `BB1: RETURN` / `BB2: RETURN`.
    fn diamond(body: Vec<IrInsn>, cond: Varnode) -> SsaFunction {
        let mut func = Function::new("t", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns = body;
        b0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0x2000, 8), cond],
            0x1010,
        ));
        b0.successors = smallvec![BlockId(2), BlockId(1)];
        func.insert_block(b0);
        for (id, addr) in [(1, 0x1020), (2, 0x2000)] {
            let mut b = BasicBlock::new(BlockId(id));
            b.insns
                .push(IrInsn::without_output(IrOp::Return, smallvec![], addr));
            func.insert_block(b);
        }
        build_ssa(func)
    }

    fn terminator(func: &SsaFunction) -> (IrOp, Vec<BlockId>) {
        let block = &func.function.blocks[&BlockId(0)];
        let last = block.insns.last().expect("terminator");
        (last.op, block.successors.to_vec())
    }

    /// `end = sp + 0x40; p = sp + 4; if (((end - p) & 4) == 0)` is never
    /// taken even though `sp` is unknown.
    #[test]
    fn folds_difference_of_same_stack_base() {
        let (end, p, diff, bit, zf) = (
            reg(0x40, 8),
            reg(0x38, 8),
            reg(0x58, 8),
            reg(0x60, 4),
            reg(0x103, 1),
        );
        let body = vec![
            op(IrOp::IntAdd, end, &[SP, Varnode::constant(0x40, 8)]),
            op(IrOp::IntAdd, p, &[SP, Varnode::constant(4, 8)]),
            op(IrOp::IntSub, diff, &[end, p]),
            op(IrOp::IntAnd, bit, &[reg(0x58, 4), Varnode::constant(4, 4)]),
            op(IrOp::BoolNegate, zf, &[bit]),
        ];
        let mut func = diamond(body, zf);
        assert!(ConstBranchFoldPass.run(&mut func).expect("fold"));
        assert_eq!(terminator(&func), (IrOp::Branch, vec![BlockId(1)]));
        assert!(!func.function.blocks.contains_key(&BlockId(2)));
    }

    /// `sp` read before and after `sp = sp - 8` are different values (the
    /// live-in is version 0, the definition version 1): `sp_in == sp_new` is
    /// false, not true.
    #[test]
    fn live_in_and_first_definition_are_distinct() {
        let (old, cond) = (reg(0x60, 8), reg(0x103, 1));
        let body = vec![
            op(IrOp::Copy, old, &[SP]),
            op(IrOp::IntSub, SP, &[SP, Varnode::constant(8, 8)]),
            op(IrOp::IntEqual, cond, &[old, SP]),
        ];
        let mut func = diamond(body, cond);
        assert!(ConstBranchFoldPass.run(&mut func).expect("fold"));
        assert_eq!(terminator(&func), (IrOp::Branch, vec![BlockId(1)]));
    }

    /// A 32-bit use of a 64-bit constant definition folds to its low part;
    /// boolean operators treat any non-zero operand as true.
    #[test]
    fn narrow_use_of_wide_constant_and_full_width_booleans() {
        let (wide, flag) = (reg(0x58, 8), reg(0x103, 1));
        let body = vec![
            op(IrOp::Copy, wide, &[Varnode::constant(0x1_0000_0002, 8)]),
            op(IrOp::BoolNegate, flag, &[reg(0x58, 4)]),
        ];
        let mut func = diamond(body, flag);
        assert!(ConstBranchFoldPass.run(&mut func).expect("fold"));
        assert_eq!(terminator(&func), (IrOp::Branch, vec![BlockId(1)]));
    }
}
