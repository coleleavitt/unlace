//! Rust async state-machine recovery.
//!
//! Rust lowers each `async fn` body to a state-machine type implementing
//! `core::future::Future::poll(self: Pin<&mut Self>, cx: &mut Context<'_>)`.
//! In stripped binaries that shape survives as a small set of machine-level
//! idioms: a state/discriminant byte loaded from the pinned future, comparisons
//! or switches over multiple state constants, calls through the poll path, and
//! stores of a new state before returning `Poll::Pending`/`Poll::Ready`.
//!
//! This pass deliberately records metadata rather than rewriting the frozen IR.
//! The printer can then surface the function as a recovered `async fn` wrapper
//! while keeping the original low-level body available for inspection.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{RustAsyncInfo, RustPollReturnKind, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Detects Rust `Future::poll` state machines produced by `async fn` lowering.
pub struct RustAsyncPass;

impl Pass for RustAsyncPass {
    fn name(&self) -> &str {
        "rust-async"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let Some(info) = detect_rust_async_state_machine(func) else {
            return Ok(false);
        };

        if func.rust_async.as_ref() == Some(&info) {
            return Ok(false);
        }

        func.rust_async = Some(info);
        Ok(true)
    }
}

/// Run the async-state-machine recognizer without mutating `func`.
pub fn detect_rust_async_state_machine(func: &SsaFunction) -> Option<RustAsyncInfo> {
    let loaded_states = find_state_loads(func);
    if loaded_states.is_empty() {
        return None;
    }

    let comparisons = find_state_comparisons(func);
    let stores = find_state_stores(func);

    let mut best: Option<RustAsyncInfo> = None;
    for load in loaded_states {
        let mut states = BTreeSet::new();
        let mut poll_calls = Vec::new();
        let mut poll_returns = BTreeSet::new();

        if let Some(cmp_consts) = comparisons.get(&load.load_sv) {
            states.extend(cmp_consts.iter().copied());
        }
        if let Some(store_consts) = stores.get(&(load.base, load.state_offset)) {
            states.extend(store_consts.iter().copied());
        }

        for (&bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                match insn.op {
                    IrOp::Call | IrOp::Callind => {
                        if is_poll_like_call(insn) {
                            poll_calls.push((bid, idx));
                        }
                    }
                    IrOp::Return => {
                        if let Some(kind) = classify_poll_return(insn) {
                            poll_returns.insert(kind);
                        }
                    }
                    _ => {}
                }
            }
        }

        let has_poll_call = !poll_calls.is_empty() || func.function.name.contains("poll");
        let has_two_states = states.len() >= 2;
        let has_state_update = stores.contains_key(&(load.base, load.state_offset));
        let has_poll_return = !poll_returns.is_empty();
        let is_pin_poll_symbol = looks_like_poll_symbol(&func.function.name);

        // Conservative acceptance: require a discriminator with at least two
        // observed states and either a real poll call, a poll-ish symbol name,
        // or a Poll::Ready/Pending shaped return. Require either state updates
        // or an explicit poll-loop call so plain enum matches don't match.
        if has_two_states
            && (has_poll_call || has_poll_return || is_pin_poll_symbol)
            && (has_state_update || has_poll_call || is_pin_poll_symbol)
        {
            let info = RustAsyncInfo {
                future_base: load.base,
                state_offset: load.state_offset,
                states: states.into_iter().collect(),
                poll_calls,
                poll_returns: poll_returns.into_iter().collect(),
            };

            let replace = best
                .as_ref()
                .is_none_or(|old| info.states.len() > old.states.len());
            if replace {
                best = Some(info);
            }
        }
    }

    best
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
struct StateLoad {
    load_sv: SsaVarnode,
    base: SsaVarnode,
    state_offset: u64,
}

fn find_state_loads(func: &SsaFunction) -> Vec<StateLoad> {
    let mut loads = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load || !matches!(insn.output, Some(out) if out.size <= 4) {
                continue;
            }
            let Some(addr) = load_address(insn) else {
                continue;
            };
            let Some((base_vn, offset)) =
                resolve_offset_in_block(block.insns.as_slice(), idx, &addr)
            else {
                continue;
            };
            // Rust generator discriminants are usually at a small in-object
            // offset. Keeping this bounded avoids matching arbitrary table
            // lookups while still allowing padding before the state byte.
            if offset > 0x100 {
                continue;
            }
            let Some(&load_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) else {
                continue;
            };
            let base = ssa_for_input(func, bid, idx, &base_vn).unwrap_or(SsaVarnode {
                base: base_vn,
                version: 0,
            });
            loads.push(StateLoad {
                load_sv,
                base,
                state_offset: offset,
            });
        }
    }

    loads.sort_by_key(|l| (l.base, l.state_offset, l.load_sv));
    loads.dedup();
    loads
}

fn find_state_comparisons(func: &SsaFunction) -> BTreeMap<SsaVarnode, BTreeSet<u64>> {
    let mut out: BTreeMap<SsaVarnode, BTreeSet<u64>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::IntEqual
                | IrOp::IntNotequal
                | IrOp::IntLess
                | IrOp::IntLessequal
                | IrOp::IntSless
                | IrOp::IntSlessequal => {
                    if insn.inputs.len() != 2 {
                        continue;
                    }
                    if let Some((slot, c)) = const_cmp_operand(insn) {
                        if c <= 0xff {
                            if let Some(&sv) =
                                func.var_map.get(&(bid, idx, VarnodeSlot::Input(slot)))
                            {
                                out.entry(sv).or_default().insert(c);
                            }
                        }
                    }
                }
                IrOp::Branchind => {
                    // A lowered switch over the state often reaches BRANCHIND
                    // through one level of COPY/INT_ADD; recover constants
                    // only indirectly via stores/comparisons for now.
                }
                _ => {}
            }
        }
    }

    out
}

fn find_state_stores(func: &SsaFunction) -> BTreeMap<(SsaVarnode, u64), BTreeSet<u64>> {
    let mut out: BTreeMap<(SsaVarnode, u64), BTreeSet<u64>> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Store || insn.inputs.len() < 3 {
                continue;
            }
            let addr = if insn.inputs[0].space == SpaceId::Const {
                insn.inputs[1]
            } else {
                insn.inputs[0]
            };
            let value = if insn.inputs[0].space == SpaceId::Const {
                insn.inputs[2]
            } else {
                insn.inputs[1]
            };
            if value.space != SpaceId::Const || value.offset > 0xff {
                continue;
            }
            let Some((base_vn, offset)) =
                resolve_offset_in_block(block.insns.as_slice(), idx, &addr)
            else {
                continue;
            };
            if offset > 0x100 {
                continue;
            }
            let base = ssa_for_input(func, bid, idx, &base_vn).unwrap_or(SsaVarnode {
                base: base_vn,
                version: 0,
            });
            out.entry((base, offset)).or_default().insert(value.offset);
        }
    }

    out
}

fn const_cmp_operand(insn: &IrInsn) -> Option<(usize, u64)> {
    let a = insn.inputs[0];
    let b = insn.inputs[1];
    match (a.space == SpaceId::Const, b.space == SpaceId::Const) {
        (false, true) => Some((0, b.offset)),
        (true, false) => Some((1, a.offset)),
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

fn resolve_offset_in_block(
    insns: &[IrInsn],
    before: usize,
    vn: &Varnode,
) -> Option<(Varnode, u64)> {
    if vn.space == SpaceId::Const {
        return None;
    }

    if let Some(def_idx) = find_def(insns, before, vn) {
        let def = &insns[def_idx];
        match def.op {
            IrOp::IntAdd if def.inputs.len() == 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                if a.space != SpaceId::Const && b.space == SpaceId::Const {
                    return Some((a, b.offset));
                }
                if a.space == SpaceId::Const && b.space != SpaceId::Const {
                    return Some((b, a.offset));
                }
            }
            IrOp::Ptradd if def.inputs.len() >= 2 => {
                let base = def.inputs[0];
                let idx = def.inputs[1];
                let elem_size = def
                    .inputs
                    .get(2)
                    .filter(|v| v.space == SpaceId::Const)
                    .map_or(1, |v| v.offset);
                if base.space != SpaceId::Const && idx.space == SpaceId::Const {
                    return Some((base, idx.offset.saturating_mul(elem_size)));
                }
            }
            IrOp::Copy if def.inputs.len() == 1 => {
                return resolve_offset_in_block(insns, def_idx, &def.inputs[0]);
            }
            _ => {}
        }
    }

    Some((*vn, 0))
}

fn find_def(insns: &[IrInsn], before: usize, target: &Varnode) -> Option<usize> {
    for idx in (0..before).rev() {
        if insns[idx].output == Some(*target) {
            return Some(idx);
        }
    }
    None
}

fn ssa_for_input(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    target: &Varnode,
) -> Option<SsaVarnode> {
    for (slot, input) in func
        .function
        .blocks
        .get(&bid)?
        .insns
        .get(insn_idx)?
        .inputs
        .iter()
        .enumerate()
    {
        if input == target {
            return func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(slot)))
                .copied();
        }
    }
    None
}

fn is_poll_like_call(insn: &IrInsn) -> bool {
    // Direct symbols are resolved elsewhere; at the IR level the robust shape
    // is an indirect call through a vtable/waker/future poll function.
    insn.op == IrOp::Callind
}

fn classify_poll_return(insn: &IrInsn) -> Option<RustPollReturnKind> {
    // Rust's Poll enum commonly lowers to small discriminants. Treat a direct
    // constant return of 0/1 as a weak Ready/Pending signal. It is only used in
    // combination with state-machine evidence above.
    let value = insn
        .inputs
        .iter()
        .rev()
        .find(|v| v.space == SpaceId::Const)?;
    match value.offset {
        0 => Some(RustPollReturnKind::Ready),
        1 => Some(RustPollReturnKind::Pending),
        _ => None,
    }
}

fn looks_like_poll_symbol(name: &str) -> bool {
    let lower = name.to_ascii_lowercase();
    lower.contains("future") && lower.contains("poll")
        || lower.contains("{{closure}}") && lower.contains("poll")
        || lower.ends_with("::poll")
        || lower.contains("_poll")
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::{VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, Function};

    fn add_return(bb: &mut BasicBlock, value: u64) {
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(value, 8)],
            0x2000,
        ));
    }

    fn make_async_like_ssa() -> SsaFunction {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let future = Varnode::reg(0, 8);
        let state_addr = Varnode::unique(0x10, 8);
        let state = Varnode::unique(0x20, 1);
        let cmp0 = Varnode::unique(0x30, 1);
        let cmp1 = Varnode::unique(0x38, 1);
        let poll_target = Varnode::unique(0x40, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            state_addr,
            smallvec![future, Varnode::constant(1, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            state,
            smallvec![Varnode::constant(SpaceId::Ram as u64, 8), state_addr],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp0,
            smallvec![state, Varnode::constant(0, 1)],
            0x1008,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp1,
            smallvec![state, Varnode::constant(1, 1)],
            0x100c,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![
                Varnode::constant(SpaceId::Ram as u64, 8),
                state_addr,
                Varnode::constant(2, 1)
            ],
            0x1010,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![poll_target, future],
            0x1014,
        ));
        add_return(&mut bb, 1);

        let mut func = Function::new("example::{{closure}}::poll", bid, 0x1000);
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn detects_async_poll_state_machine() {
        let ssa = make_async_like_ssa();
        let info = detect_rust_async_state_machine(&ssa).expect("async state machine detected");
        assert_eq!(info.state_offset, 1);
        assert_eq!(info.states, vec![0, 1, 2]);
        assert_eq!(info.poll_calls, vec![(BlockId(0), 5)]);
        assert_eq!(info.poll_returns, vec![RustPollReturnKind::Pending]);
    }

    #[test]
    fn pass_records_metadata_once() {
        let mut ssa = make_async_like_ssa();
        assert!(RustAsyncPass.run(&mut ssa).expect("pass runs"));
        assert!(ssa.rust_async.is_some());
        assert!(!RustAsyncPass.run(&mut ssa).expect("second pass is stable"));
    }

    #[test]
    fn plain_enum_match_without_poll_evidence_is_ignored() {
        let bid = BlockId(0);
        let mut bb = BasicBlock::new(bid);
        let base = Varnode::reg(0, 8);
        let state = Varnode::unique(0x20, 1);
        let cmp0 = Varnode::unique(0x30, 1);
        let cmp1 = Varnode::unique(0x38, 1);
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            state,
            smallvec![Varnode::constant(SpaceId::Ram as u64, 8), base],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp0,
            smallvec![state, Varnode::constant(0, 1)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            cmp1,
            smallvec![state, Varnode::constant(1, 1)],
            0x1008,
        ));
        add_return(&mut bb, 99);

        let mut func = Function::new("not_async", bid, 0x1000);
        func.insert_block(bb);
        let ssa = build_ssa(func);
        assert!(detect_rust_async_state_machine(&ssa).is_none());
    }

    #[test]
    fn ssa_input_lookup_uses_var_map_versions() {
        let ssa = make_async_like_ssa();
        let info = detect_rust_async_state_machine(&ssa).unwrap();
        let state_addr_sv = ssa.var_map[&(BlockId(0), 0, VarnodeSlot::Input(0))];
        assert_eq!(info.future_base, state_addr_sv);
    }
}
