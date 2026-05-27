//! Go interface-call devirtualization (t303).
//!
//! Go represents a non-empty interface value as two machine words:
//!
//! ```text
//! iface { tab *runtime.itab; data unsafe.Pointer }
//! ```
//!
//! The itab in turn starts with `{ inter, _type, hash, pad, fun[0], ... }`.
//! A method call through an interface therefore commonly lowers to:
//!
//! ```text
//! tab    = LOAD(iface + 0)
//! method = LOAD(tab + 24 + method_index * ptr_size)
//! CALLIND(method, iface.data, ...)
//! ```
//!
//! When earlier stores or copies make `iface.tab` a statically-known itab
//! address, this pass resolves the call target to the corresponding decoded
//! `GoItab.methods[method_index]` entry. The pass is conservative: ambiguous
//! chains, missing itabs, zero method entries, or out-of-range method slots are
//! ignored rather than guessed.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};
use unlace_loader::go_types::GoItab;

use crate::pass::{DefIndex, Pass, PassError};

const DEFAULT_PTR_SIZE: u64 = 8;
const GO_ITAB_FUN_OFFSET: u64 = 24;

/// A recovered Go interface dispatch site.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct GoIfaceCall {
    /// CFG block holding the `Callind`.
    pub block_id: BlockId,
    /// Index of the `Callind` within its block.
    pub insn_idx: usize,
    /// Static `runtime.itab` VA loaded into the interface value.
    pub itab_va: u64,
    /// Interface method slot (`fun[index]`) selected by the call.
    pub method_index: usize,
    /// Concrete implementation address from `runtime.itab.fun[index]`.
    pub target: u64,
    /// Interface type VA from the itab header.
    pub inter_type_va: u64,
    /// Concrete type VA from the itab header.
    pub concrete_type_va: u64,
}

/// Function-local pass variant for tests and callers that already have a
/// decoded Go itab table.
pub struct GoIfaceDevirtPass<'a> {
    itabs: &'a BTreeMap<u64, GoItab>,
}

impl<'a> GoIfaceDevirtPass<'a> {
    pub fn new(itabs: &'a BTreeMap<u64, GoItab>) -> Self {
        Self { itabs }
    }
}

impl Pass for GoIfaceDevirtPass<'_> {
    fn name(&self) -> &str {
        "go-iface-devirt"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let found = resolve_go_iface_calls(func, self.itabs);
        if found.is_empty() {
            return Ok(false);
        }

        let mut changed = false;
        for call in found {
            let key = (call.block_id, call.insn_idx);
            if func.resolved_indirect_calls.get(&key) != Some(&call.target) {
                func.resolved_indirect_calls.insert(key, call.target);
                changed = true;
            }
        }
        Ok(changed)
    }
}

/// Detect Go interface calls whose concrete itab is statically known.
pub fn resolve_go_iface_calls(
    func: &SsaFunction,
    itabs: &BTreeMap<u64, GoItab>,
) -> Vec<GoIfaceCall> {
    if itabs.is_empty() {
        return Vec::new();
    }

    // Reverse Output-definition index, built once. `resolve_go_iface_calls`
    // is read-only over `func`; the pass's `run` mutates only
    // `resolved_indirect_calls` afterwards, so the index never goes stale.
    let defs = DefIndex::build(func);

    let mut out = Vec::new();
    for (&bid, block) in &func.function.blocks {
        let insns = &block.insns;
        for (insn_idx, insn) in insns.iter().enumerate() {
            if insn.op != IrOp::Callind || insn.inputs.is_empty() {
                continue;
            }
            let Some(call) = try_resolve_call(func, &defs, bid, insns, insn_idx, itabs) else {
                continue;
            };
            out.push(call);
        }
    }
    out
}

fn try_resolve_call(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insns: &[IrInsn],
    callind_idx: usize,
    itabs: &BTreeMap<u64, GoItab>,
) -> Option<GoIfaceCall> {
    let callind = &insns[callind_idx];
    let _target = *callind.inputs.first()?;

    // CALLIND target must be produced by a LOAD from itab.fun[N].
    let &target_sv = func
        .var_map
        .get(&(bid, callind_idx, VarnodeSlot::Input(0)))?;
    let mut visited = BTreeSet::new();
    let method_load = trace_to_load(func, defs, target_sv, &mut visited)?;
    let method_insn = insns.get(method_load.1)?;
    let method_addr = load_address(method_insn)?;
    let (itab_value, method_offset) = resolve_offset(insns, method_load.1, &method_addr)?;
    if method_offset < GO_ITAB_FUN_OFFSET {
        return None;
    }
    let slot_off = method_offset - GO_ITAB_FUN_OFFSET;
    if !slot_off.is_multiple_of(DEFAULT_PTR_SIZE) {
        return None;
    }
    let method_index = (slot_off / DEFAULT_PTR_SIZE) as usize;

    // `itab_value` is the first word of the interface. Resolve it to a
    // constant itab VA, either through a preceding `iface.tab = const` store
    // or a direct copy/constant chain in synthetic IR.
    let itab_va = resolve_static_itab(func, defs, bid, insns, method_load.1, itab_value)?;
    let itab = itabs.get(&itab_va)?;
    let target = *itab.methods.get(method_index)?;
    if target == 0 {
        return None;
    }

    Some(GoIfaceCall {
        block_id: bid,
        insn_idx: callind_idx,
        itab_va,
        method_index,
        target,
        inter_type_va: itab.inter_type_va,
        concrete_type_va: itab.concrete_type_va,
    })
}

fn resolve_static_itab(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insns: &[IrInsn],
    before: usize,
    itab_value: Varnode,
) -> Option<u64> {
    if itab_value.space == SpaceId::Const {
        return Some(itab_value.offset);
    }

    if let Some(&sv) = func.var_map.get(&(bid, before, VarnodeSlot::Input(1))) {
        let mut visited = BTreeSet::new();
        if let Some(value) = trace_constant_value(func, defs, sv, &mut visited) {
            return Some(value);
        }
    }

    // The usual shape is `itab_value = LOAD(iface + 0)`. Recover the interface
    // storage location and find the most recent dominating store to that same
    // slot in this basic block. This covers stack materialisation and the
    // common register-temporary form emitted by lifters after copy propagation.
    let load_idx = find_def(insns, before, &itab_value)?;
    let load = insns.get(load_idx)?;
    if load.op != IrOp::Load {
        return None;
    }
    let load_addr = load_address(load)?;
    let (iface_base, tab_off) = resolve_offset(insns, load_idx, &load_addr)?;
    if tab_off != 0 {
        return None;
    }

    for sinsn in insns.iter().take(load_idx).rev() {
        if sinsn.op != IrOp::Store || sinsn.inputs.len() < 3 {
            continue;
        }
        let store_addr = sinsn.inputs[1];
        let (store_base, store_off) = match resolve_offset(insns, load_idx, &store_addr) {
            Some(v) => v,
            None => continue,
        };
        if store_base == iface_base && store_off == 0 {
            let value = sinsn.inputs[2];
            if value.space == SpaceId::Const {
                return Some(value.offset);
            }
            let sidx = insns.iter().position(|i| std::ptr::eq(i, sinsn))?;
            let &sv = func.var_map.get(&(bid, sidx, VarnodeSlot::Input(2)))?;
            let mut visited = BTreeSet::new();
            return trace_constant_value(func, defs, sv, &mut visited);
        }
    }

    None
}

fn trace_to_load(
    func: &SsaFunction,
    defs: &DefIndex,
    sv: SsaVarnode,
    visited: &mut BTreeSet<SsaVarnode>,
) -> Option<(BlockId, usize)> {
    if !visited.insert(sv) {
        return None;
    }
    let def = defs.lookup(sv)?;
    let insn = func.function.blocks.get(&def.0)?.insns.get(def.1)?;
    match insn.op {
        IrOp::Load => Some(def),
        IrOp::Copy => {
            let next = func.var_map.get(&(def.0, def.1, VarnodeSlot::Input(0)))?;
            trace_to_load(func, defs, *next, visited)
        }
        _ => None,
    }
}

fn trace_constant_value(
    func: &SsaFunction,
    defs: &DefIndex,
    sv: SsaVarnode,
    visited: &mut BTreeSet<SsaVarnode>,
) -> Option<u64> {
    if !visited.insert(sv) {
        return None;
    }
    let def = defs.lookup(sv)?;
    let insn = func.function.blocks.get(&def.0)?.insns.get(def.1)?;
    match insn.op {
        IrOp::Copy | IrOp::Cast => {
            let input = insn.inputs.first()?;
            if input.space == SpaceId::Const {
                return Some(input.offset);
            }
            let next = func.var_map.get(&(def.0, def.1, VarnodeSlot::Input(0)))?;
            trace_constant_value(func, defs, *next, visited)
        }
        IrOp::IntAdd => match (insn.inputs.first(), insn.inputs.get(1)) {
            (Some(a), Some(b)) if a.space == SpaceId::Const && b.space == SpaceId::Const => {
                Some(a.offset.wrapping_add(b.offset))
            }
            _ => None,
        },
        _ => None,
    }
}

fn load_address(load: &IrInsn) -> Option<Varnode> {
    match load.inputs.len() {
        1 => Some(load.inputs[0]),
        2.. => {
            if load.inputs[0].space == SpaceId::Const {
                Some(load.inputs[1])
            } else {
                Some(load.inputs[0])
            }
        }
        _ => None,
    }
}

fn resolve_offset(insns: &[IrInsn], before: usize, vn: &Varnode) -> Option<(Varnode, u64)> {
    if vn.space == SpaceId::Const {
        return None;
    }
    if let Some(def_idx) = find_def(insns, before, vn) {
        let def = &insns[def_idx];
        match def.op {
            IrOp::Copy | IrOp::Cast if def.inputs.len() == 1 => {
                return resolve_offset(insns, def_idx, &def.inputs[0]).or(Some((def.inputs[0], 0)));
            }
            IrOp::IntAdd if def.inputs.len() == 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                if b.space == SpaceId::Const && a.space != SpaceId::Const {
                    return Some((a, b.offset));
                }
                if a.space == SpaceId::Const && b.space != SpaceId::Const {
                    return Some((b, a.offset));
                }
            }
            IrOp::Ptradd if def.inputs.len() >= 2 => {
                let (base, idx) = (def.inputs[0], def.inputs[1]);
                if idx.space == SpaceId::Const && base.space != SpaceId::Const {
                    let elem_size =
                        if def.inputs.len() >= 3 && def.inputs[2].space == SpaceId::Const {
                            def.inputs[2].offset
                        } else {
                            DEFAULT_PTR_SIZE
                        };
                    return Some((base, idx.offset.saturating_mul(elem_size)));
                }
            }
            _ => {}
        }
    }
    Some((*vn, 0))
}

fn find_def(insns: &[IrInsn], before: usize, vn: &Varnode) -> Option<usize> {
    insns
        .iter()
        .enumerate()
        .take(before)
        .rev()
        .find_map(|(idx, insn)| (insn.output == Some(*vn)).then_some(idx))
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};

    fn sample_itabs() -> BTreeMap<u64, GoItab> {
        BTreeMap::from([(
            0x5000,
            GoItab {
                va: 0x5000,
                inter_type_va: 0x6000,
                concrete_type_va: 0x7000,
                hash: 0x1234,
                methods: vec![0x9000, 0x9010],
            },
        )])
    }

    #[test]
    fn t303_resolves_stack_iface_to_concrete_method() {
        let mut func = Function::new("go_iface", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let iface = Varnode::stack((-0x20i64) as u64, 8);
        let tab = Varnode::unique(0, 8);
        let method_addr = Varnode::unique(8, 8);
        let method = Varnode::unique(16, 8);

        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::constant(1, 8), iface, Varnode::constant(0x5000, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            tab,
            smallvec![Varnode::constant(1, 8), iface],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            method_addr,
            smallvec![
                tab,
                Varnode::constant(GO_ITAB_FUN_OFFSET + DEFAULT_PTR_SIZE, 8)
            ],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            method,
            smallvec![Varnode::constant(1, 8), method_addr],
            0x100c,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![method, Varnode::stack((-0x18i64) as u64, 8)],
            0x1010,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let itabs = sample_itabs();
        let pass = GoIfaceDevirtPass::new(&itabs);
        assert!(pass.run(&mut ssa).unwrap());

        assert_eq!(
            ssa.resolved_indirect_calls.get(&(BlockId(0), 4)),
            Some(&0x9010)
        );
        let calls = resolve_go_iface_calls(&ssa, &itabs);
        assert_eq!(calls.len(), 1);
        assert_eq!(calls[0].method_index, 1);
        assert_eq!(calls[0].itab_va, 0x5000);
    }

    #[test]
    fn t303_ignores_unknown_itab() {
        let mut func = Function::new("go_iface_unknown", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        let tab = Varnode::unique(0, 8);
        let method_addr = Varnode::unique(8, 8);
        let method = Varnode::unique(16, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            tab,
            smallvec![Varnode::constant(0xDEAD, 8)],
            0x2000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            method_addr,
            smallvec![tab, Varnode::constant(GO_ITAB_FUN_OFFSET, 8)],
            0x2004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            method,
            smallvec![Varnode::constant(1, 8), method_addr],
            0x2008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![method],
            0x200c,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        let itabs = sample_itabs();
        let pass = GoIfaceDevirtPass::new(&itabs);
        assert!(!pass.run(&mut ssa).unwrap());
        assert!(ssa.resolved_indirect_calls.is_empty());
    }
}
