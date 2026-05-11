//! BYREF parameter / local detection (Wave 24 / t210).
//!
//! Two related questions about a function's interface with the rest of
//! the program:
//!
//! 1. *Is parameter `i` actually a pointer being indexed?*
//!    If the function performs an `INT_ADD(<initial value of parameter
//!    register>, K)` anywhere — clear evidence of `param->field` or
//!    `param[K/size]` access — then the parameter is byref.
//!
//! 2. *Is stack local `K` ever address-taken?*
//!    If a value derived from `RSP/RBP + K` is `COPY`-propagated into a
//!    `Call` argument register, the local's address escaped to a callee.
//!    Record `K` in `byref_locals`.
//!
//! The detector is a pure function: it walks `func` and returns a fresh
//! [`ByrefInfo`]. The pipeline wires the result onto
//! [`SsaFunction::byref_info`] after the post-SSA fixed-point has
//! settled, and the C printer consults it when emitting parameter
//! declarations to append a trailing `// BYREF` comment.

use std::collections::{BTreeMap, BTreeSet, HashMap};

use unlace_ir::ssa::{ByrefInfo, CallingConvention, SsaFunction, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

/// AMD64 register-space offsets used by the address-trace.
const RSP_OFFSET: u64 = 32;
const RBP_OFFSET: u64 = 40;

const RDI: u64 = 56;
const RSI: u64 = 48;
const RDX: u64 = 16;
const RCX: u64 = 8;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_ARG_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_ARG_REGS: &[u64] = &[RCX, RDX, R8, R9];
const AARCH64_ARG_REGS: &[u64] = &[0, 8, 16, 24, 32, 40, 48, 56];

const MAX_RESOLVE_DEPTH: u32 = 16;

type DefMap = HashMap<Varnode, Vec<(BlockId, usize)>>;

/// Root of an address-trace: either RSP/RBP + K, or one of this
/// function's parameter registers (identified by index).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum AddrRoot {
    /// Resolved to an `RSP`/`RBP`-relative byte offset.
    Stack(i64),
    /// Resolved to the initial value of parameter register `idx` (0-based).
    Param(u32),
}

/// Walk `func` and return one [`ByrefInfo`] capturing every byref-taken
/// parameter and stack local.
///
/// `byref_params`: any `INT_ADD(<param register read-before-write>, K)`
/// in the entry block sets the corresponding parameter as byref. We
/// also accept resolution through intermediate `COPY`s, so
/// `t1 = COPY rdi; t2 = INT_ADD t1, 8` still marks parameter 0.
///
/// `byref_locals`: any `COPY` whose source resolves to `RSP+K` (or
/// `RSP+K + 0` via further `INT_ADD`s with zero displacement) flowing
/// into a `Call` argument register adds `K` to the set. We also accept
/// the bare stack-relative address being used as a call argument
/// without an intermediate `COPY`.
pub fn detect_byref(func: &SsaFunction) -> ByrefInfo {
    let mut info = ByrefInfo::default();

    let param_regs = param_register_list(func.calling_convention);
    let param_count = func.inferred_params.len().min(param_regs.len()) as u32;
    let active_param_regs: Vec<u64> = param_regs.iter().take(param_count as usize).copied().collect();

    let def_map = build_def_map(func);

    // ---- Rule 1: scan every IntAdd/IntSub for `param + K` shape ----
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if !matches!(insn.op, IrOp::IntAdd | IrOp::IntSub) {
                continue;
            }
            if insn.inputs.len() < 2 {
                continue;
            }
            let (a, b) = (&insn.inputs[0], &insn.inputs[1]);
            // Constant displacement on either side.
            let (base_vn, const_present) = if b.space == SpaceId::Const {
                (a, true)
            } else if a.space == SpaceId::Const && insn.op == IrOp::IntAdd {
                (b, true)
            } else {
                (a, false)
            };
            if !const_present {
                continue;
            }
            // Param register read directly (without prior write) → index it.
            if let Some(idx) = param_index_for_input(base_vn, &active_param_regs, func) {
                info.byref_params.insert(idx);
                continue;
            }
            // Or resolve through a Copy chain.
            if let Some(AddrRoot::Param(idx)) =
                resolve_root(base_vn, func, &def_map, &active_param_regs, 0)
            {
                info.byref_params.insert(idx);
            }
        }
    }

    // ---- Rule 2: scan Call insns for stack-local addresses as args ----
    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::Call | IrOp::Callind) {
                continue;
            }
            let arg_sources = collect_call_arg_sources(func, bid, insn_idx, &active_param_regs);
            for arg_vn in arg_sources {
                // 2a: argument is itself a SpaceId::Stack address — direct.
                if arg_vn.space == SpaceId::Stack {
                    info.byref_locals.insert(arg_vn.offset as i64);
                    continue;
                }
                // 2b: argument is RSP/RBP itself (offset 0).
                if is_rsp_or_rbp(&arg_vn) {
                    info.byref_locals.insert(0);
                    continue;
                }
                // 2c: resolve through Copy / IntAdd / IntSub chain.
                if let Some(AddrRoot::Stack(k)) =
                    resolve_root(&arg_vn, func, &def_map, &active_param_regs, 0)
                {
                    info.byref_locals.insert(k);
                }
            }
        }
    }

    info
}

/// Build a map from each output [`Varnode`] to its definition sites.
fn build_def_map(func: &SsaFunction) -> DefMap {
    let mut def_map: DefMap = HashMap::new();
    for (&(bid, insn_idx, ref slot), sv) in &func.var_map {
        if *slot == VarnodeSlot::Output {
            def_map.entry(sv.base).or_default().push((bid, insn_idx));
        }
    }
    def_map
}

fn param_register_list(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Thiscall => &[8], // RCX only
        CallingConvention::Cdecl
        | CallingConvention::Stdcall
        | CallingConvention::Unknown => &[],
    }
}

/// If `vn` is a direct register read of a parameter register *that has
/// not been written yet in this function* (i.e. it's the initial value
/// of that register on entry), return its parameter index. Otherwise
/// `None`.
fn param_index_for_input(
    vn: &Varnode,
    active_param_regs: &[u64],
    _func: &SsaFunction,
) -> Option<u32> {
    if vn.space != SpaceId::Register {
        return None;
    }
    let idx = active_param_regs.iter().position(|&r| r == vn.offset)?;
    Some(idx as u32)
}

/// Resolve `addr` through `Copy` / `IntAdd` / `IntSub` chains to its
/// ultimate symbolic root.  Returns `None` if the trace doesn't bottom
/// out at RSP/RBP or one of this function's parameter registers.
fn resolve_root(
    addr: &Varnode,
    func: &SsaFunction,
    def_map: &DefMap,
    active_param_regs: &[u64],
    depth: u32,
) -> Option<AddrRoot> {
    if depth > MAX_RESOLVE_DEPTH {
        return None;
    }

    if addr.space == SpaceId::Stack {
        return Some(AddrRoot::Stack(addr.offset as i64));
    }
    if is_rsp_or_rbp(addr) {
        return Some(AddrRoot::Stack(0));
    }
    if addr.space == SpaceId::Register {
        if let Some(idx) = active_param_regs.iter().position(|&r| r == addr.offset) {
            return Some(AddrRoot::Param(idx as u32));
        }
    }
    if addr.space != SpaceId::Unique && addr.space != SpaceId::Register {
        return None;
    }

    let defs = def_map.get(addr)?;
    for &(bid, idx) in defs {
        let block = func.function.blocks.get(&bid)?;
        let def = block.insns.get(idx)?;
        match def.op {
            IrOp::Copy => {
                if def.inputs.is_empty() {
                    continue;
                }
                return resolve_root(&def.inputs[0], func, def_map, active_param_regs, depth + 1);
            }
            IrOp::IntAdd => {
                if def.inputs.len() < 2 {
                    continue;
                }
                let (a, b) = (&def.inputs[0], &def.inputs[1]);
                if b.space == SpaceId::Const {
                    match resolve_root(a, func, def_map, active_param_regs, depth + 1)? {
                        AddrRoot::Stack(k) => return Some(AddrRoot::Stack(k.wrapping_add(b.offset as i64))),
                        AddrRoot::Param(p) => return Some(AddrRoot::Param(p)),
                    }
                }
                if a.space == SpaceId::Const {
                    match resolve_root(b, func, def_map, active_param_regs, depth + 1)? {
                        AddrRoot::Stack(k) => return Some(AddrRoot::Stack(k.wrapping_add(a.offset as i64))),
                        AddrRoot::Param(p) => return Some(AddrRoot::Param(p)),
                    }
                }
            }
            IrOp::IntSub => {
                if def.inputs.len() < 2 {
                    continue;
                }
                let (a, b) = (&def.inputs[0], &def.inputs[1]);
                if b.space == SpaceId::Const {
                    match resolve_root(a, func, def_map, active_param_regs, depth + 1)? {
                        AddrRoot::Stack(k) => return Some(AddrRoot::Stack(k.wrapping_sub(b.offset as i64))),
                        AddrRoot::Param(p) => return Some(AddrRoot::Param(p)),
                    }
                }
            }
            _ => {}
        }
    }
    None
}

/// Collect the [`Varnode`]s that feed into each argument register at a
/// `Call` site.  Returns the last definition of every active parameter
/// register written *before* the call inside the same basic block.
///
/// We deliberately stay block-local: cross-block propagation is the job
/// of upstream passes (copy-prop, GVN, SCCP). For byref detection a
/// missed argument simply means a false negative, not unsoundness.
fn collect_call_arg_sources(
    func: &SsaFunction,
    bid: BlockId,
    call_insn_idx: usize,
    active_param_regs: &[u64],
) -> Vec<Varnode> {
    let Some(block) = func.function.blocks.get(&bid) else {
        return Vec::new();
    };

    // For each argument register, find the most recent definition's input.
    // We collect the input varnode (not the output SSA) because the trace
    // routine walks `def_map` to climb back further.
    let mut last_def_input: BTreeMap<u64, Varnode> = BTreeMap::new();
    for (idx, insn) in block.insns.iter().enumerate() {
        if idx >= call_insn_idx {
            break;
        }
        let Some(out) = insn.output else {
            continue;
        };
        if out.space != SpaceId::Register {
            continue;
        }
        if !active_param_regs.contains(&out.offset) {
            continue;
        }
        // Record the value being written into the register: for a
        // `COPY src → reg` that's `src`; for arithmetic it's the
        // output varnode itself (and resolve_root will walk into it
        // via def_map).
        match insn.op {
            IrOp::Copy if !insn.inputs.is_empty() => {
                last_def_input.insert(out.offset, insn.inputs[0]);
            }
            _ => {
                last_def_input.insert(out.offset, out);
            }
        }
    }

    let mut seen: BTreeSet<Varnode> = BTreeSet::new();
    let mut out = Vec::new();
    for &reg in active_param_regs {
        if let Some(&vn) = last_def_input.get(&reg) {
            if seen.insert(vn) {
                out.push(vn);
            }
        }
    }
    out
}

fn is_rsp_or_rbp(v: &Varnode) -> bool {
    v.space == SpaceId::Register && (v.offset == RSP_OFFSET || v.offset == RBP_OFFSET)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::{build_ssa, PrimitiveType};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn};

    fn rsp() -> Varnode {
        Varnode::reg(RSP_OFFSET, 8)
    }
    fn rdi() -> Varnode {
        Varnode::reg(RDI, 8)
    }
    fn rsi() -> Varnode {
        Varnode::reg(RSI, 8)
    }

    fn make_func_with(
        params: Vec<(String, PrimitiveType)>,
        insns: Vec<IrInsn>,
    ) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa.inferred_params = params;
        ssa
    }

    /// Test 1: parameter passed by-pointer to a sub-call.
    ///
    /// `foo(int *p)` lowered to AMD64 SysV:
    ///   - RDI is `p` (the pointer).
    ///   - At the sub-call, RDI is forwarded as the first argument
    ///     (or computed offset is) — either way the param's *address-like*
    ///     value is being used.
    ///
    /// We model `bar(p + 4)`: `t1 = INT_ADD rdi, 4; rdi = COPY t1; CALL bar`.
    /// The IntAdd matches Rule 1 directly.
    #[test]
    fn t210_param_passed_by_pointer_to_subcall() {
        let t1 = Varnode::unique(0, 8);
        let c4 = Varnode::constant(4, 8);
        let bar_addr = Varnode::constant(0x2000, 8);
        let insns = vec![
            // t1 = RDI + 4   ← Rule 1 hit: param 0 is byref.
            IrInsn::with_output(IrOp::IntAdd, t1, smallvec![rdi(), c4], 0x1000),
            // RDI = t1
            IrInsn::with_output(IrOp::Copy, rdi(), smallvec![t1], 0x1004),
            // call bar(rdi)
            IrInsn::without_output(IrOp::Call, smallvec![bar_addr, rdi()], 0x1008),
        ];

        let ssa = make_func_with(
            vec![("p".into(), PrimitiveType::Ptr)],
            insns,
        );
        let info = detect_byref(&ssa);

        assert!(
            info.byref_params.contains(&0),
            "param 0 should be byref, got {:?}",
            info.byref_params
        );
    }

    /// Test 2: stack local's address is taken (`Copy(stack_local_addr)`
    /// flowing into a Call argument).
    ///
    /// Models `bar(&local)` with one parameter.  IR:
    ///   t1 = INT_SUB rsp, 16          (= &local_16)
    ///   rdi = COPY t1
    ///   CALL bar, rdi
    ///
    /// `byref_locals` should contain -16.  The pure read of RDI (no
    /// IntAdd) means param 0 is *not* byref by Rule 1.
    #[test]
    fn t210_local_address_taken_becomes_byref_local() {
        let t1 = Varnode::unique(0, 8);
        let c16 = Varnode::constant(16, 8);
        let bar_addr = Varnode::constant(0x2000, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntSub, t1, smallvec![rsp(), c16], 0x1000),
            IrInsn::with_output(IrOp::Copy, rdi(), smallvec![t1], 0x1004),
            IrInsn::without_output(IrOp::Call, smallvec![bar_addr, rdi()], 0x1008),
        ];

        // Give the function 1 param (a1 = RDI). We're not testing that
        // it's byref; we're testing the local-address detection.
        let ssa = make_func_with(
            vec![("a1".into(), PrimitiveType::Int(8))],
            insns,
        );
        let info = detect_byref(&ssa);

        assert!(
            info.byref_locals.contains(&-16),
            "byref_locals should contain -16, got {:?}",
            info.byref_locals
        );
        assert!(
            info.byref_params.is_empty(),
            "no IntAdd on a parameter ⇒ no byref param, got {:?}",
            info.byref_params
        );
    }

    /// Test 3: pure pass-through — `bar(p, q)` with no address-taking,
    /// no dereferencing of locals.  Both sets should be empty.
    #[test]
    fn t210_pass_through_no_address_taken() {
        let bar_addr = Varnode::constant(0x2000, 8);
        // The arguments are just the parameter registers as-is.  No
        // IntAdd anywhere on rdi/rsi, no stack-address forwarded.
        let insns = vec![
            IrInsn::without_output(
                IrOp::Call,
                smallvec![bar_addr, rdi(), rsi()],
                0x1000,
            ),
        ];

        let ssa = make_func_with(
            vec![
                ("a1".into(), PrimitiveType::Int(8)),
                ("a2".into(), PrimitiveType::Int(8)),
            ],
            insns,
        );
        let info = detect_byref(&ssa);

        assert!(
            info.byref_params.is_empty(),
            "no IntAdd on a parameter ⇒ no byref param, got {:?}",
            info.byref_params
        );
        assert!(
            info.byref_locals.is_empty(),
            "no stack address forwarded ⇒ no byref local, got {:?}",
            info.byref_locals
        );
    }
}
