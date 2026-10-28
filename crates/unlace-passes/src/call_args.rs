//! Direct-call argument recovery.
//!
//! The lifters model a `CALL` as an opaque control-flow operation whose first
//! input is the callee target. ABI arguments are usually just preceding writes
//! into register slots (`RDI`, `RSI`, ...), so ordinary DCE can drop them before
//! the C printer has a chance to show `puts("Hello")` rather than `puts()`.
//!
//! This helper runs before optimization: when a direct call resolves to a known
//! libc signature, it appends the visible ABI arguments to the call inputs.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CallingConvention, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId, Varnode};

use crate::libc_signatures::{LibcSignature, lookup_libc};

const RAX: u64 = 0;
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSP: u64 = 32;
const RBP: u64 = 40;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;
const RIP: u64 = 0x288;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

#[derive(Clone, Debug)]
struct RecoveredArg {
    operand: Varnode,
    ssa: Option<SsaVarnode>,
}

#[derive(Clone, Debug)]
struct CallUpdate {
    bid: BlockId,
    insn_idx: usize,
    args: Vec<RecoveredArg>,
}

type RegState = BTreeMap<u64, SsaVarnode>;

/// Append visible ABI arguments to direct calls with known libc signatures.
///
/// The resolver maps a constant call target address to its import/symbol name.
/// Returns the number of call sites that received at least one new argument.
pub fn recover_direct_call_args(
    func: &mut SsaFunction,
    callee_name_at_addr: &dyn Fn(u64) -> Option<&'static str>,
) -> usize {
    recover_direct_call_args_with_param_counts(func, callee_name_at_addr, &|_| None)
}

/// Append visible ABI arguments to direct calls and tail-call branches with
/// known libc signatures or caller-provided direct-call parameter counts.
///
/// The extra parameter-count resolver lets frontends feed source/debug or
/// whole-program signature knowledge into the same ABI register scan used for
/// libc calls. It is intentionally count-only; type refinement stays in the
/// later signature/type passes.
pub fn recover_direct_call_args_with_param_counts(
    func: &mut SsaFunction,
    callee_name_at_addr: &dyn Fn(u64) -> Option<&'static str>,
    callee_param_count_at_addr: &dyn Fn(u64) -> Option<usize>,
) -> usize {
    let def_map = build_def_map(func);
    let cc = calling_convention_for(func);
    let arg_regs = arg_regs_for(cc);
    if arg_regs.is_empty() {
        return 0;
    }

    let entry_states = compute_arg_reg_entry_states(func, arg_regs);

    let mut updates = Vec::new();
    for (&bid, block) in &func.function.blocks {
        let mut reg_state = entry_states.get(&bid).cloned().unwrap_or_default();
        apply_phi_arg_defs(func, bid, arg_regs, &mut reg_state);
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if matches!(insn.op, IrOp::Call | IrOp::Branch)
                && let Some(target) = insn.inputs.first()
                && target.space == SpaceId::Const
            {
                let callee_name = callee_name_at_addr(target.offset);
                let visible = visible_arg_count(arg_regs, &reg_state);
                let wanted = callee_name
                    .and_then(lookup_libc_normalized)
                    .map(|sig| wanted_arg_count(sig, arg_regs, &reg_state))
                    .or_else(|| {
                        callee_param_count_at_addr(target.offset).map(|n| n.min(arg_regs.len()))
                    })
                    .or_else(|| {
                        callee_name
                            .and_then(param_count_from_itanium_symbol)
                            .map(|n| n.min(arg_regs.len()))
                    })
                    .unwrap_or(0);
                let existing = insn.inputs.len().saturating_sub(1);
                if wanted > existing {
                    let mut args = Vec::new();
                    for &reg in arg_regs.iter().skip(existing).take(wanted - existing) {
                        let Some(&sv) = reg_state.get(&reg) else {
                            break;
                        };
                        args.push(recover_arg(func, sv, &def_map));
                    }
                    if !args.is_empty() {
                        trace_call_args(
                            insn.addr,
                            target.offset,
                            callee_name,
                            wanted,
                            existing,
                            visible,
                            args.len(),
                        );
                        updates.push(CallUpdate {
                            bid,
                            insn_idx,
                            args,
                        });
                    }
                }
            }

            record_arg_reg_inputs(func, bid, insn_idx, insn, arg_regs, &mut reg_state);
            if matches!(insn.op, IrOp::Call | IrOp::Callind | IrOp::Branch) {
                clear_caller_saved_arg_regs(&mut reg_state, arg_regs);
            }
            if let Some(out) = insn.output
                && out.space == SpaceId::Register
                && let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))
            {
                let reg = canonical_register_offset(out.offset);
                if arg_regs.contains(&reg) {
                    reg_state.insert(reg, sv);
                }
            }
        }
    }

    let changed_sites = updates.len();
    for update in updates {
        let Some(block) = func.function.blocks.get_mut(&update.bid) else {
            continue;
        };
        let Some(insn) = block.insns.get_mut(update.insn_idx) else {
            continue;
        };
        let start = insn.inputs.len();
        for (rel_idx, arg) in update.args.into_iter().enumerate() {
            let input_idx = start + rel_idx;
            insn.inputs.push(arg.operand);
            if let Some(sv) = arg.ssa {
                func.var_map.insert(
                    (update.bid, update.insn_idx, VarnodeSlot::Input(input_idx)),
                    sv,
                );
            }
        }
    }

    changed_sites
}

fn visible_arg_count(arg_regs: &[u64], state: &RegState) -> usize {
    arg_regs
        .iter()
        .take_while(|reg| state.contains_key(reg))
        .count()
}

fn trace_call_args(
    call_addr: u64,
    target_addr: u64,
    callee_name: Option<&str>,
    wanted: usize,
    existing: usize,
    visible: usize,
    added: usize,
) {
    tracing::debug!(
        target: "unlace::call_args",
        "call=0x{call_addr:x} target=0x{target_addr:x} name={} wanted={wanted} existing={existing} visible={visible} added={added}",
        callee_name.unwrap_or("<unknown>")
    );
}

fn compute_arg_reg_entry_states(
    func: &SsaFunction,
    arg_regs: &[u64],
) -> BTreeMap<BlockId, RegState> {
    let reachable = reachable_blocks(func);
    let mut predecessors: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        if !reachable.contains(&bid) {
            continue;
        }
        for &succ in &block.successors {
            if reachable.contains(&succ) {
                predecessors.entry(succ).or_default().push(bid);
            }
        }
    }

    let entry_seed = collect_live_in_arg_regs(func, arg_regs);
    let mut in_states: BTreeMap<BlockId, RegState> = BTreeMap::new();
    let mut out_states: BTreeMap<BlockId, RegState> = BTreeMap::new();

    let max_iters = func.function.blocks.len().saturating_mul(2).max(1);
    for _ in 0..max_iters {
        let mut changed = false;
        for &bid in func.function.blocks.keys() {
            if !reachable.contains(&bid) {
                continue;
            }
            let mut state = if bid == func.function.entry {
                entry_seed.clone()
            } else {
                meet_predecessor_states(predecessors.get(&bid), &out_states, arg_regs)
            };
            apply_phi_arg_defs(func, bid, arg_regs, &mut state);

            if in_states.get(&bid) != Some(&state) {
                in_states.insert(bid, state.clone());
                changed = true;
            }

            let out = transfer_arg_reg_state(func, bid, arg_regs, state);
            if out_states.get(&bid) != Some(&out) {
                out_states.insert(bid, out);
                changed = true;
            }
        }
        if !changed {
            break;
        }
    }

    in_states
}

fn reachable_blocks(func: &SsaFunction) -> BTreeSet<BlockId> {
    let mut reachable = BTreeSet::new();
    let mut stack = vec![func.function.entry];
    while let Some(bid) = stack.pop() {
        if !reachable.insert(bid) {
            continue;
        }
        let Some(block) = func.function.blocks.get(&bid) else {
            continue;
        };
        for &succ in &block.successors {
            stack.push(succ);
        }
    }
    reachable
}

fn collect_live_in_arg_regs(func: &SsaFunction, arg_regs: &[u64]) -> RegState {
    let mut state = RegState::new();
    for (&(_bid, _insn_idx, ref slot), &sv) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Input(_)) || sv.version != 0 {
            continue;
        }
        if sv.base.space != SpaceId::Register {
            continue;
        }
        let reg = canonical_register_offset(sv.base.offset);
        if arg_regs.contains(&reg) {
            state.entry(reg).or_insert(sv);
        }
    }
    state
}

fn meet_predecessor_states(
    predecessors: Option<&Vec<BlockId>>,
    out_states: &BTreeMap<BlockId, RegState>,
    arg_regs: &[u64],
) -> RegState {
    let Some(preds) = predecessors.filter(|preds| !preds.is_empty()) else {
        return RegState::new();
    };

    let mut state = RegState::new();
    for &reg in arg_regs {
        let Some(first) = preds
            .first()
            .and_then(|pred| out_states.get(pred))
            .and_then(|state| state.get(&reg))
            .copied()
        else {
            continue;
        };
        if preds.iter().skip(1).all(|pred| {
            out_states
                .get(pred)
                .and_then(|state| state.get(&reg))
                .copied()
                == Some(first)
        }) {
            state.insert(reg, first);
        }
    }
    state
}

fn transfer_arg_reg_state(
    func: &SsaFunction,
    bid: BlockId,
    arg_regs: &[u64],
    mut state: RegState,
) -> RegState {
    let Some(block) = func.function.blocks.get(&bid) else {
        return state;
    };
    for (insn_idx, insn) in block.insns.iter().enumerate() {
        record_arg_reg_inputs(func, bid, insn_idx, insn, arg_regs, &mut state);
        if matches!(insn.op, IrOp::Call | IrOp::Callind) {
            clear_caller_saved_arg_regs(&mut state, arg_regs);
        }
        if let Some(out) = insn.output
            && out.space == SpaceId::Register
            && let Some(&sv) = func.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))
        {
            let reg = canonical_register_offset(out.offset);
            if arg_regs.contains(&reg) {
                state.insert(reg, sv);
            }
        }
    }
    state
}

fn clear_caller_saved_arg_regs(state: &mut RegState, arg_regs: &[u64]) {
    for &reg in arg_regs {
        state.remove(&reg);
    }
}

fn apply_phi_arg_defs(func: &SsaFunction, bid: BlockId, arg_regs: &[u64], state: &mut RegState) {
    let Some(phis) = func.phi_map.get(&bid) else {
        return;
    };
    for phi in phis {
        if phi.output.base.space != SpaceId::Register {
            continue;
        }
        let reg = canonical_register_offset(phi.output.base.offset);
        if arg_regs.contains(&reg) {
            state.insert(reg, phi.output);
        }
    }
}

fn record_arg_reg_inputs(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    arg_regs: &[u64],
    state: &mut RegState,
) {
    for (input_idx, input) in insn.inputs.iter().enumerate() {
        if input.space != SpaceId::Register {
            continue;
        }
        let reg = canonical_register_offset(input.offset);
        if !arg_regs.contains(&reg) {
            continue;
        }
        if let Some(&sv) = func
            .var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        {
            state.insert(reg, sv);
        }
    }
}

pub(crate) fn calling_convention_for(func: &SsaFunction) -> CallingConvention {
    if func.calling_convention != CallingConvention::Unknown {
        return func.calling_convention;
    }
    match func.arch {
        ArchId::AArch64 => CallingConvention::AArch64,
        ArchId::X86_64 => CallingConvention::SystemV,
        _ => CallingConvention::Unknown,
    }
}

pub(crate) fn arg_regs_for(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Thiscall => &[RCX],
        CallingConvention::Cdecl | CallingConvention::Stdcall | CallingConvention::Unknown => &[],
    }
}

fn wanted_arg_count(
    sig: &LibcSignature,
    arg_regs: &[u64],
    last_reg_def: &BTreeMap<u64, SsaVarnode>,
) -> usize {
    let max_args = arg_regs.len();
    let fixed = sig.param_count.min(max_args);
    if !sig.variadic {
        return fixed;
    }

    let mut visible = 0usize;
    for &reg in arg_regs {
        if last_reg_def.contains_key(&reg) {
            visible += 1;
        } else {
            break;
        }
    }
    fixed.max(visible).min(max_args)
}

fn lookup_libc_normalized(name: &str) -> Option<&'static LibcSignature> {
    lookup_libc(name)
        .or_else(|| name.find('@').and_then(|idx| lookup_libc(&name[..idx])))
        .or_else(|| {
            name.strip_prefix("__libc_")
                .and_then(lookup_libc)
                .or_else(|| name.strip_prefix("__isoc99_").and_then(lookup_libc))
                .or_else(|| name.strip_prefix("__isoc23_").and_then(lookup_libc))
        })
        .or_else(|| name.strip_prefix('_').and_then(lookup_libc))
}

fn param_count_from_itanium_symbol(raw_name: &str) -> Option<usize> {
    let demangled = crate::itanium_demangle::demangle_itanium(raw_name)?;
    let open = demangled.find('(')?;
    let close = demangled.rfind(')')?;
    if close < open {
        return None;
    }
    let params = demangled[open + 1..close].trim();
    if params.is_empty() || params == "void" {
        return Some(0);
    }
    Some(params.split(',').count())
}

fn canonical_register_offset(offset: u64) -> u64 {
    match offset {
        // x86-64 register families share the same offset for 8/4/2/1-byte
        // low-register views. Keep the helper explicit so future register
        // files can extend it without changing the scan logic.
        RAX | RCX | RDX | RSI | RDI | R8 | R9 => offset,
        _ => offset,
    }
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<SsaVarnode, (BlockId, usize)> {
    let mut defs = BTreeMap::new();
    for (&(bid, insn_idx, ref slot), &sv) in &func.var_map {
        if matches!(slot, VarnodeSlot::Output) {
            defs.insert(sv, (bid, insn_idx));
        }
    }
    defs
}

fn recover_arg(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
) -> RecoveredArg {
    if let Some(arg) = recover_stack_reload_arg(func, sv, def_map, 0) {
        return arg;
    }

    match resolve_const_from_ssa(func, sv, def_map, 0) {
        Some(operand) => RecoveredArg { operand, ssa: None },
        None => RecoveredArg {
            operand: sv.base,
            ssa: Some(sv),
        },
    }
}

fn recover_stack_reload_arg(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<RecoveredArg> {
    if depth > 8 {
        return None;
    }

    let &(bid, insn_idx) = def_map.get(&sv)?;
    let insn = func.function.blocks.get(&bid)?.insns.get(insn_idx)?;
    match insn.op {
        IrOp::Copy => {
            let src = *insn.inputs.first()?;
            if src.space == SpaceId::Const {
                return None;
            }
            let src_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            recover_stack_reload_arg(func, src_sv, def_map, depth + 1)
        }
        IrOp::Load => recover_same_block_stack_store(func, bid, insn_idx, insn, def_map),
        _ => None,
    }
}

#[derive(Clone, Debug, Eq, PartialEq, Ord, PartialOrd)]
enum StackAddrKey {
    Offset(i64),
    Expr(StackAddrExpr),
}

#[derive(Clone, Debug, Eq, PartialEq, Ord, PartialOrd)]
enum StackAddrExpr {
    StackReg(u64),
    Add(Box<StackAddrExpr>, i64),
}

fn recover_same_block_stack_store(
    func: &SsaFunction,
    bid: BlockId,
    load_idx: usize,
    load: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
) -> Option<RecoveredArg> {
    let load_addr_idx = memory_addr_input_idx(load)?;
    let load_space = memory_space_input(load);
    let load_addr = *load.inputs.get(load_addr_idx)?;
    let load_key = stack_addr_key(func, bid, load_idx, load_addr_idx, load_addr, def_map)?;

    let block = func.function.blocks.get(&bid)?;
    for store_idx in (0..load_idx).rev() {
        let store = block.insns.get(store_idx)?;
        if store.op != IrOp::Store {
            if writes_stack_pointer(store) {
                break;
            }
            continue;
        }
        if memory_space_input(store) != load_space {
            continue;
        }

        let store_addr_idx = memory_addr_input_idx(store)?;
        let store_addr = *store.inputs.get(store_addr_idx)?;
        let Some(store_key) =
            stack_addr_key(func, bid, store_idx, store_addr_idx, store_addr, def_map)
        else {
            continue;
        };
        if store_key != load_key {
            continue;
        }

        let value_idx = store_value_input_idx(store)?;
        let value = *store.inputs.get(value_idx)?;
        if value.space == SpaceId::Const {
            return Some(RecoveredArg {
                operand: value,
                ssa: None,
            });
        }

        let value_sv = func
            .var_map
            .get(&(bid, store_idx, VarnodeSlot::Input(value_idx)))
            .copied()?;
        if let Some(operand) = resolve_const_from_ssa(func, value_sv, def_map, 0) {
            return Some(RecoveredArg { operand, ssa: None });
        }

        return Some(RecoveredArg {
            operand: value_sv.base,
            ssa: Some(value_sv),
        });
    }

    None
}

fn writes_stack_pointer(insn: &unlace_ir::IrInsn) -> bool {
    insn.output
        .is_some_and(|out| out.space == SpaceId::Register && matches!(out.offset, RSP | RBP))
}

fn memory_addr_input_idx(insn: &unlace_ir::IrInsn) -> Option<usize> {
    match insn.op {
        IrOp::Load | IrOp::Store if insn.inputs.len() >= 2 => Some(1),
        IrOp::Load | IrOp::Store if insn.inputs.len() == 1 => Some(0),
        _ => None,
    }
}

fn memory_space_input(insn: &unlace_ir::IrInsn) -> Option<Varnode> {
    (insn.inputs.len() >= 2).then_some(insn.inputs[0])
}

fn store_value_input_idx(insn: &unlace_ir::IrInsn) -> Option<usize> {
    match insn.inputs.len() {
        3.. => Some(2),
        2 => Some(1),
        _ => None,
    }
}

fn stack_addr_key(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    raw: Varnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
) -> Option<StackAddrKey> {
    stack_expr_from_input(func, bid, insn_idx, input_idx, raw, def_map, 0)
        .map(StackAddrKey::Expr)
        .or_else(|| {
            stack_offset_from_input(func, bid, insn_idx, input_idx, raw, def_map, 0)
                .map(StackAddrKey::Offset)
        })
}

fn stack_expr_from_input(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    raw: Varnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<StackAddrExpr> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
        .and_then(|sv| stack_expr_from_ssa(func, sv, def_map, depth + 1))
        .or_else(|| stack_expr_from_raw(raw))
}

fn stack_expr_from_ssa(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<StackAddrExpr> {
    if depth > 16 {
        return None;
    }
    if let Some(expr) = stack_expr_from_raw(sv.base) {
        return Some(expr);
    }

    let &(bid, insn_idx) = def_map.get(&sv)?;
    let insn = func.function.blocks.get(&bid)?.insns.get(insn_idx)?;
    match insn.op {
        IrOp::Copy => {
            let raw = *insn.inputs.first()?;
            stack_expr_from_input(func, bid, insn_idx, 0, raw, def_map, depth + 1)
        }
        IrOp::IntAdd => stack_expr_add(func, bid, insn_idx, insn, def_map, depth),
        IrOp::IntSub => stack_expr_sub(func, bid, insn_idx, insn, def_map, depth),
        _ => None,
    }
}

fn stack_expr_add(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<StackAddrExpr> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    let lhs_expr = stack_expr_from_input(func, bid, insn_idx, 0, lhs, def_map, depth + 1);
    let rhs_expr = stack_expr_from_input(func, bid, insn_idx, 1, rhs, def_map, depth + 1);
    let lhs_const = const_i64_from_input(func, bid, insn_idx, 0, lhs, def_map, depth + 1);
    let rhs_const = const_i64_from_input(func, bid, insn_idx, 1, rhs, def_map, depth + 1);

    match (lhs_expr, rhs_expr, lhs_const, rhs_const) {
        (Some(base), None, _, Some(disp)) => Some(add_stack_disp(base, disp)),
        (None, Some(base), Some(disp), _) => Some(add_stack_disp(base, disp)),
        _ => None,
    }
}

fn stack_expr_sub(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<StackAddrExpr> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    let lhs_expr = stack_expr_from_input(func, bid, insn_idx, 0, lhs, def_map, depth + 1)?;
    let rhs_const = const_i64_from_input(func, bid, insn_idx, 1, rhs, def_map, depth + 1)?;
    Some(add_stack_disp(lhs_expr, rhs_const.wrapping_neg()))
}

fn add_stack_disp(expr: StackAddrExpr, disp: i64) -> StackAddrExpr {
    match expr {
        StackAddrExpr::Add(base, old) => StackAddrExpr::Add(base, old.wrapping_add(disp)),
        other if disp == 0 => other,
        other => StackAddrExpr::Add(Box::new(other), disp),
    }
}

fn stack_expr_from_raw(vn: Varnode) -> Option<StackAddrExpr> {
    if vn.space == SpaceId::Register && matches!(vn.offset, RSP | RBP) {
        Some(StackAddrExpr::StackReg(vn.offset))
    } else {
        None
    }
}

fn stack_offset_from_input(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    raw: Varnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<i64> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
        .and_then(|sv| stack_offset_from_ssa(func, sv, def_map, depth + 1))
        .or_else(|| stack_offset_from_raw(raw))
}

fn stack_offset_from_ssa(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<i64> {
    if depth > 16 {
        return None;
    }
    if let Some(offset) = stack_offset_from_raw(sv.base) {
        return Some(offset);
    }

    let Some(&(bid, insn_idx)) = def_map.get(&sv) else {
        return stack_offset_from_raw(sv.base);
    };
    let insn = func.function.blocks.get(&bid)?.insns.get(insn_idx)?;
    match insn.op {
        IrOp::Copy => {
            let raw = *insn.inputs.first()?;
            stack_offset_from_input(func, bid, insn_idx, 0, raw, def_map, depth + 1)
        }
        IrOp::IntAdd => stack_offset_add(func, bid, insn_idx, insn, def_map, depth),
        IrOp::IntSub => stack_offset_sub(func, bid, insn_idx, insn, def_map, depth),
        _ => stack_offset_from_raw(sv.base),
    }
}

fn stack_offset_add(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<i64> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    let lhs_stack = stack_offset_from_input(func, bid, insn_idx, 0, lhs, def_map, depth + 1);
    let rhs_stack = stack_offset_from_input(func, bid, insn_idx, 1, rhs, def_map, depth + 1);
    let lhs_const = const_i64_from_input(func, bid, insn_idx, 0, lhs, def_map, depth + 1);
    let rhs_const = const_i64_from_input(func, bid, insn_idx, 1, rhs, def_map, depth + 1);

    match (lhs_stack, rhs_stack, lhs_const, rhs_const) {
        (Some(base), None, _, Some(disp)) => Some(base.wrapping_add(disp)),
        (None, Some(base), Some(disp), _) => Some(base.wrapping_add(disp)),
        _ => None,
    }
}

fn stack_offset_sub(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<i64> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    let lhs_stack = stack_offset_from_input(func, bid, insn_idx, 0, lhs, def_map, depth + 1)?;
    let rhs_const = const_i64_from_input(func, bid, insn_idx, 1, rhs, def_map, depth + 1)?;
    Some(lhs_stack.wrapping_sub(rhs_const))
}

fn const_i64_from_input(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    raw: Varnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<i64> {
    const_operand(raw).map(|vn| vn.offset as i64).or_else(|| {
        func.var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
            .copied()
            .and_then(|sv| resolve_const_from_ssa(func, sv, def_map, depth + 1))
            .map(|vn| vn.offset as i64)
    })
}

fn stack_offset_from_raw(vn: Varnode) -> Option<i64> {
    (vn.space == SpaceId::Register && matches!(vn.offset, RSP | RBP)).then_some(0)
}

pub(crate) fn resolve_const_from_ssa(
    func: &SsaFunction,
    sv: SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<Varnode> {
    if depth > 8 {
        return None;
    }
    if sv.base.space == SpaceId::Const {
        return Some(sv.base);
    }

    let &(bid, insn_idx) = def_map.get(&sv)?;
    let insn = func.function.blocks.get(&bid)?.insns.get(insn_idx)?;
    match insn.op {
        IrOp::Copy => {
            let src = *insn.inputs.first()?;
            if src.space == SpaceId::Const {
                return Some(src);
            }
            let src_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            resolve_const_from_ssa(func, src_sv, def_map, depth + 1)
        }
        IrOp::IntAdd => resolve_const_add(func, bid, insn_idx, insn, def_map, depth),
        IrOp::IntSub => resolve_const_sub(func, bid, insn_idx, insn, def_map, depth),
        _ => None,
    }
}

fn resolve_const_add(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<Varnode> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    match (const_operand(lhs), const_operand(rhs)) {
        (Some(a), Some(b)) => Some(Varnode::constant(a.offset.wrapping_add(b.offset), a.size)),
        (Some(c), None) if is_rip_register(rhs) => Some(c),
        (None, Some(c)) if is_rip_register(lhs) => Some(c),
        (Some(c), None) => {
            let rhs_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
                .copied()?;
            let rhs_c = resolve_const_from_ssa(func, rhs_sv, def_map, depth + 1)?;
            Some(Varnode::constant(
                c.offset.wrapping_add(rhs_c.offset),
                c.size,
            ))
        }
        (None, Some(c)) => {
            let lhs_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            let lhs_c = resolve_const_from_ssa(func, lhs_sv, def_map, depth + 1)?;
            Some(Varnode::constant(
                lhs_c.offset.wrapping_add(c.offset),
                c.size,
            ))
        }
        (None, None) => None,
    }
}

fn resolve_const_sub(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &unlace_ir::IrInsn,
    def_map: &BTreeMap<SsaVarnode, (BlockId, usize)>,
    depth: usize,
) -> Option<Varnode> {
    let lhs = *insn.inputs.first()?;
    let rhs = *insn.inputs.get(1)?;
    match (const_operand(lhs), const_operand(rhs)) {
        (Some(a), Some(b)) => Some(Varnode::constant(a.offset.wrapping_sub(b.offset), a.size)),
        (None, Some(c)) => {
            let lhs_sv = func
                .var_map
                .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
                .copied()?;
            let lhs_c = resolve_const_from_ssa(func, lhs_sv, def_map, depth + 1)?;
            Some(Varnode::constant(
                lhs_c.offset.wrapping_sub(c.offset),
                lhs_c.size,
            ))
        }
        _ => None,
    }
}

fn const_operand(vn: Varnode) -> Option<Varnode> {
    (vn.space == SpaceId::Const).then_some(vn)
}

fn is_rip_register(vn: Varnode) -> bool {
    vn.space == SpaceId::Register && vn.offset == RIP
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    use super::*;

    #[test]
    fn recovers_puts_string_from_rip_relative_rdi() {
        let mut func = Function::new("main", BlockId(0), 0x1060);
        let mut bb = BasicBlock::new(BlockId(0));
        let tmp = Varnode::unique(0x10000, 8);
        let rip = Varnode::reg(RIP, 8);
        let rdi = Varnode::reg(RDI, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            tmp,
            smallvec![rip, Varnode::constant(0x2004, 8)],
            0x1068,
        ));
        bb.insns
            .push(IrInsn::with_output(IrOp::Copy, rdi, smallvec![tmp], 0x1068));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x1050, 8)],
            0x106f,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args(&mut ssa, &|addr| {
            if addr == 0x1050 { Some("puts") } else { None }
        });

        assert_eq!(changed, 1);
        let call = &ssa.function.blocks[&BlockId(0)].insns[2];
        assert_eq!(call.inputs.len(), 2);
        assert_eq!(call.inputs[1], Varnode::constant(0x2004, 8));
        assert!(
            !ssa.var_map
                .contains_key(&(BlockId(0), 2, VarnodeSlot::Input(1))),
            "constant recovered args should not keep the register copy live",
        );
    }

    #[test]
    fn recovers_tail_branch_arg_from_param_count() {
        let mut func = Function::new("main", BlockId(0), 0x1250);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(RDI, 4);

        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![Varnode::constant(0xffff_ffff, 4)],
            0x1254,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x1360, 8)],
            0x1259,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args_with_param_counts(&mut ssa, &|_| None, &|addr| {
            (addr == 0x1360).then_some(1)
        });

        assert_eq!(changed, 1);
        let branch = &ssa.function.blocks[&BlockId(0)].insns[1];
        assert_eq!(branch.inputs.len(), 2);
        assert_eq!(branch.inputs[1], Varnode::constant(0xffff_ffff, 4));
    }

    #[test]
    fn recovers_tail_branch_arg_from_itanium_symbol_signature() {
        let mut func = Function::new("main", BlockId(0), 0x1250);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(RDI, 4);

        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![Varnode::constant(0xffff_ffff, 4)],
            0x1254,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Branch,
            smallvec![Varnode::constant(0x1360, 8)],
            0x1259,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args_with_param_counts(
            &mut ssa,
            &|addr| (addr == 0x1360).then_some("_Z9safe_calli"),
            &|_| None,
        );

        assert_eq!(changed, 1);
        let branch = &ssa.function.blocks[&BlockId(0)].insns[1];
        assert_eq!(branch.inputs.len(), 2);
        assert_eq!(branch.inputs[1], Varnode::constant(0xffff_ffff, 4));
    }

    #[test]
    fn recovers_dynamic_cast_live_in_this_and_typeinfo_args() {
        let mut func = Function::new("identify", BlockId(0), 0x1230);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(RDI, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            Varnode::unique(0x12000, 1),
            smallvec![rdi, Varnode::constant(0, 8)],
            0x1234,
        ));
        let call_idx = push_dynamic_cast_setup(&mut bb, 0x1241, 0x3d40, 0x3d50);
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args(&mut ssa, &dynamic_cast_name);

        assert_eq!(changed, 1);
        let call = &ssa.function.blocks[&BlockId(0)].insns[call_idx];
        assert_eq!(call.inputs.len(), 5);
        assert_eq!(call.inputs[1], rdi);
        assert_eq!(call.inputs[2], Varnode::constant(0x3d40, 8));
        assert_eq!(call.inputs[3], Varnode::constant(0x3d50, 8));
        assert_eq!(call.inputs[4], Varnode::constant(0, 8));
        assert!(
            ssa.var_map
                .contains_key(&(BlockId(0), call_idx, VarnodeSlot::Input(1))),
            "live-in object pointers must keep their SSA input attached",
        );
    }

    #[test]
    fn recovers_dynamic_cast_this_arg_from_predecessor_state() {
        let mut func = Function::new("identify", BlockId(0), 0x1230);
        let mut entry = BasicBlock::new(BlockId(0));
        let mut dead = BasicBlock::new(BlockId(2));
        let rdi = Varnode::reg(RDI, 8);

        entry.insns.push(IrInsn::with_output(
            IrOp::IntEqual,
            Varnode::unique(0x13000, 1),
            smallvec![rdi, Varnode::constant(0, 8)],
            0x1234,
        ));
        entry
            .insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1238));
        entry.successors.push(BlockId(1));
        dead.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1220));
        dead.successors.push(BlockId(1));

        let mut cast_block = BasicBlock::new(BlockId(1));
        let call_idx = push_dynamic_cast_setup(&mut cast_block, 0x1241, 0x3d40, 0x3d50);

        func.insert_block(entry);
        func.insert_block(cast_block);
        func.insert_block(dead);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args(&mut ssa, &dynamic_cast_name);

        assert_eq!(changed, 1);
        let call = &ssa.function.blocks[&BlockId(1)].insns[call_idx];
        assert_eq!(call.inputs.len(), 5);
        assert_eq!(call.inputs[1], rdi);
        assert_eq!(call.inputs[2], Varnode::constant(0x3d40, 8));
        assert_eq!(call.inputs[3], Varnode::constant(0x3d50, 8));
        assert_eq!(call.inputs[4], Varnode::constant(0, 8));
    }

    #[test]
    fn recovers_dynamic_cast_this_arg_from_stack_save_reload() {
        let mut func = Function::new("identify", BlockId(0), 0x1230);
        let mut bb = BasicBlock::new(BlockId(0));
        let ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let rsp = Varnode::reg(RSP, 8);
        let rdi = Varnode::reg(RDI, 8);
        let sp_after = Varnode::unique(0x13ff8, 8);
        let slot = Varnode::unique(0x14000, 8);
        let slot_reload = Varnode::unique(0x14004, 8);
        let loaded = Varnode::unique(0x14008, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            sp_after,
            smallvec![rsp, Varnode::constant(0x18, 8)],
            0x1248,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsp,
            smallvec![sp_after],
            0x1249,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            slot,
            smallvec![rsp, Varnode::constant(8, 8)],
            0x1250,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, slot, rdi],
            0x1251,
        ));
        let _first_call_idx = push_dynamic_cast_setup(&mut bb, 0x1260, 0x3d40, 0x3d50);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            slot_reload,
            smallvec![rsp, Varnode::constant(8, 8)],
            0x126f,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram, slot_reload],
            0x1270,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![loaded],
            0x1271,
        ));
        let second_call_idx = push_dynamic_cast_setup(&mut bb, 0x1280, 0x3d40, 0x3d68);
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args(&mut ssa, &dynamic_cast_name);

        assert_eq!(changed, 2);
        let call = &ssa.function.blocks[&BlockId(0)].insns[second_call_idx];
        assert_eq!(call.inputs.len(), 5);
        assert_eq!(call.inputs[1], rdi);
        assert_eq!(call.inputs[2], Varnode::constant(0x3d40, 8));
        assert_eq!(call.inputs[3], Varnode::constant(0x3d68, 8));
        assert_eq!(call.inputs[4], Varnode::constant(0, 8));

        let arg_ssa = ssa
            .var_map
            .get(&(BlockId(0), second_call_idx, VarnodeSlot::Input(1)))
            .copied()
            .expect("reloaded stack arg should keep the original saved SSA");
        assert_eq!(arg_ssa.base, rdi);
        assert_eq!(arg_ssa.version, 0);
    }

    #[test]
    fn recovers_dynamic_cast_this_arg_from_stack_reload_in_predecessor() {
        let mut func = Function::new("identify", BlockId(0), 0x1230);
        let mut entry = BasicBlock::new(BlockId(0));
        let ram = Varnode::constant(SpaceId::Ram as u64, 8);
        let rsp = Varnode::reg(RSP, 8);
        let rdi = Varnode::reg(RDI, 8);
        let sp_after = Varnode::unique(0x15000, 8);
        let slot = Varnode::unique(0x15008, 8);
        let slot_reload = Varnode::unique(0x15010, 8);
        let loaded = Varnode::unique(0x15018, 8);

        entry.insns.push(IrInsn::with_output(
            IrOp::IntSub,
            sp_after,
            smallvec![rsp, Varnode::constant(0x18, 8)],
            0x1248,
        ));
        entry.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsp,
            smallvec![sp_after],
            0x1249,
        ));
        entry.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            slot,
            smallvec![rsp, Varnode::constant(8, 8)],
            0x1250,
        ));
        entry.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![ram, slot, rdi],
            0x1251,
        ));
        let _first_call_idx = push_dynamic_cast_setup(&mut entry, 0x1260, 0x3d40, 0x3d50);
        entry.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            slot_reload,
            smallvec![rsp, Varnode::constant(8, 8)],
            0x126f,
        ));
        entry.insns.push(IrInsn::with_output(
            IrOp::Load,
            loaded,
            smallvec![ram, slot_reload],
            0x1270,
        ));
        entry.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![loaded],
            0x1271,
        ));
        entry
            .insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1272));
        entry.successors.push(BlockId(1));

        let mut cast_block = BasicBlock::new(BlockId(1));
        let second_call_idx = push_dynamic_cast_setup(&mut cast_block, 0x1280, 0x3d40, 0x3d68);

        func.insert_block(entry);
        func.insert_block(cast_block);

        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;

        let changed = recover_direct_call_args(&mut ssa, &dynamic_cast_name);

        assert_eq!(changed, 2);
        let call = &ssa.function.blocks[&BlockId(1)].insns[second_call_idx];
        assert_eq!(call.inputs.len(), 5);
        assert_eq!(call.inputs[1], rdi);
        assert_eq!(call.inputs[2], Varnode::constant(0x3d40, 8));
        assert_eq!(call.inputs[3], Varnode::constant(0x3d68, 8));
        assert_eq!(call.inputs[4], Varnode::constant(0, 8));

        let arg_ssa = ssa
            .var_map
            .get(&(BlockId(1), second_call_idx, VarnodeSlot::Input(1)))
            .copied()
            .expect("successor call arg should keep the original saved SSA");
        assert_eq!(arg_ssa.base, rdi);
        assert_eq!(arg_ssa.version, 0);
    }

    fn push_dynamic_cast_setup(
        bb: &mut BasicBlock,
        addr: u64,
        src_typeinfo: u64,
        dst_typeinfo: u64,
    ) -> usize {
        let rip = Varnode::reg(RIP, 8);
        let rcx = Varnode::reg(RCX, 8);
        let rdx = Varnode::reg(RDX, 8);
        let rsi = Varnode::reg(RSI, 8);
        let dst_tmp = Varnode::unique(0x20000 + addr, 8);
        let src_tmp = Varnode::unique(0x30000 + addr, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rcx,
            smallvec![Varnode::constant(0, 8)],
            addr,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            dst_tmp,
            smallvec![rip, Varnode::constant(dst_typeinfo, 8)],
            addr + 1,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdx,
            smallvec![dst_tmp],
            addr + 2,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            src_tmp,
            smallvec![rip, Varnode::constant(src_typeinfo, 8)],
            addr + 3,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsi,
            smallvec![src_tmp],
            addr + 4,
        ));

        let call_idx = bb.insns.len();
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x10b0, 8)],
            addr + 5,
        ));
        call_idx
    }

    fn dynamic_cast_name(addr: u64) -> Option<&'static str> {
        (addr == 0x10b0).then_some("__dynamic_cast")
    }
}
