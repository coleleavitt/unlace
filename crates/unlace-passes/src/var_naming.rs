//! t211 — Liveness-aware variable naming.
//!
//! Classifies each SSA varnode by its use pattern:
//!  * `LoopCounter` — phi node whose self-incrementing branch is `IntAdd(self, K)`.
//!  * `LoopBound` — operand of a compare against a `LoopCounter`.
//!  * `LoopArrayBase` — base pointer indexed by a `LoopCounter`.
//!  * `ThisPointer` — implicit receiver for recovered C++/thiscall methods.
//!  * `SavedRegister(reg_name)` — defined from a callee-saved physical register.
//!  * `Argument(idx)` — defined from a parameter-passing register at function entry.
//!  * `Temporary` — anything else.
//!
//! Then [`suggest_name`] turns a `(role, sequence_idx)` into a human-readable
//! C identifier like `this`, `i`, `j`, `k`, `buf`, `len`, `saved_rbx`, `a1`,
//! or `result`.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::lvar::LvarStorage;
use unlace_ir::ssa::{CallingConvention, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId};

use crate::licm::find_natural_loops;
use crate::pass::{Pass, PassError};

/// Caller-saved-vs-callee-saved classification per ABI. We special-case the
/// common SystemV / AArch64 callee-saved sets here; anything else falls
/// through to `Temporary`.
fn callee_saved_x86_64(reg_offset: u64) -> Option<&'static str> {
    match reg_offset {
        0x18 => Some("rbx"),
        0x28 => Some("rbp"),
        0x80 => Some("r12"),
        0x88 => Some("r13"),
        0x90 => Some("r14"),
        0x98 => Some("r15"),
        _ => None,
    }
}

fn callee_saved_aarch64(reg_offset: u64) -> Option<&'static str> {
    // x19..x28 — typical AArch64 register-file layout puts them at
    // 0x4000 + i*8 in unlace's AArch64 lifter (see register_file.rs in
    // unlace-lift-arm). We accept either that convention or bare i*8.
    let candidates: &[(u64, &'static str)] = &[
        (0x4098, "x19"),
        (0x40A0, "x20"),
        (0x40A8, "x21"),
        (0x40B0, "x22"),
        (0x40B8, "x23"),
        (0x40C0, "x24"),
        (0x40C8, "x25"),
        (0x40D0, "x26"),
        (0x40D8, "x27"),
        (0x40E0, "x28"),
    ];
    for (off, name) in candidates {
        if *off == reg_offset {
            return Some(*name);
        }
    }
    None
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VarRole {
    ThisPointer,
    LoopCounter,
    LoopBound,
    LoopArrayBase,
    SavedRegister(&'static str),
    Temporary,
    Argument(u32),
    /// The varnode written to the return register immediately before a
    /// Return instruction. Named `result` in the output.
    ReturnValue,
}

#[derive(Debug, Default)]
pub struct VarClassification {
    pub roles: BTreeMap<SsaVarnode, VarRole>,
    pub arg_indices: BTreeMap<SsaVarnode, u32>,
}

const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_ARG_REGS: &[(u64, u32)] = &[(RDI, 0), (RSI, 1), (RDX, 2), (RCX, 3), (R8, 4), (R9, 5)];
const MSX64_ARG_REGS: &[(u64, u32)] = &[(RCX, 0), (RDX, 1), (R8, 2), (R9, 3)];
const THISCALL_ARG_REGS: &[(u64, u32)] = &[(RCX, 0)];
const AARCH64_ARG_REGS: &[(u64, u32)] = &[
    (0, 0),
    (8, 1),
    (16, 2),
    (24, 3),
    (32, 4),
    (40, 5),
    (48, 6),
    (56, 7),
];

fn arg_regs_for_func(func: &SsaFunction) -> &'static [(u64, u32)] {
    match func.calling_convention {
        CallingConvention::SystemV => SYSV_ARG_REGS,
        CallingConvention::MicrosoftX64 => MSX64_ARG_REGS,
        CallingConvention::Thiscall => THISCALL_ARG_REGS,
        CallingConvention::AArch64 => AARCH64_ARG_REGS,
        CallingConvention::Cdecl | CallingConvention::Stdcall => &[],
        CallingConvention::Unknown => match func.arch {
            ArchId::X86_64 => SYSV_ARG_REGS,
            ArchId::AArch64 => AARCH64_ARG_REGS,
            _ => &[],
        },
    }
}

pub fn classify_variables(func: &SsaFunction) -> VarClassification {
    let mut roles: BTreeMap<SsaVarnode, VarRole> = BTreeMap::new();
    let mut arg_indices: BTreeMap<SsaVarnode, u32> = BTreeMap::new();
    let mut loop_counters: BTreeSet<SsaVarnode> = BTreeSet::new();
    let defs = collect_defs(func);
    let address_svs = collect_address_svs(func);

    // 1. Loop counters: phi outputs where the latch input feeds back via IntAdd(self, const).
    for natural_loop in find_natural_loops(func) {
        let header = natural_loop.header;
        let body = &natural_loop.body;
        let phis = match func.phi_map.get(&header) {
            Some(p) => p,
            None => continue,
        };
        for phi in phis {
            if phi.inputs.len() != 2 {
                continue;
            }
            let phi_out = phi.output;
            // Find which side is the back-edge.
            let mut back_sv = None;
            for (pred, sv) in &phi.inputs {
                if body.contains(pred) {
                    back_sv = Some(*sv);
                    break;
                }
            }
            let Some(back_sv) = back_sv else { continue };
            // Look up the def of back_sv; check it's IntAdd(phi_out, const).
            for ((bid, idx, slot), v) in &func.var_map {
                if !matches!(slot, VarnodeSlot::Output) || *v != back_sv {
                    continue;
                }
                let block = match func.function.blocks.get(bid) {
                    Some(b) => b,
                    None => continue,
                };
                let insn = match block.insns.get(*idx) {
                    Some(i) => i,
                    None => continue,
                };
                if insn.op != IrOp::IntAdd {
                    break;
                }
                if insn.inputs.len() != 2 {
                    break;
                }
                let in0_sv = input_sv(func, *bid, *idx, 0);
                let in1_sv = input_sv(func, *bid, *idx, 1);
                let lhs_const = insn.inputs[0].space == SpaceId::Const;
                let rhs_const = insn.inputs[1].space == SpaceId::Const;
                if (in0_sv == Some(phi_out) && rhs_const) || (in1_sv == Some(phi_out) && lhs_const)
                {
                    record_role(&mut roles, phi_out, VarRole::LoopCounter);
                    record_role(&mut roles, back_sv, VarRole::LoopCounter);
                    loop_counters.insert(phi_out);
                    loop_counters.insert(back_sv);
                }
                break;
            }
        }
    }

    // 1a. Loop bounds and buffer bases. These are intentionally exact and
    // local to natural-loop bodies: a compare against an induction value names
    // the other SSA value `len`, and address arithmetic using an induction
    // value names the non-counter pointer side `buf`.
    for natural_loop in find_natural_loops(func) {
        for &bid in &natural_loop.body {
            let Some(block) = func.function.blocks.get(&bid) else {
                continue;
            };
            for (idx, insn) in block.insns.iter().enumerate() {
                if is_compare_op(insn.op) && insn.inputs.len() >= 2 {
                    let lhs = input_sv(func, bid, idx, 0);
                    let rhs = input_sv(func, bid, idx, 1);
                    match (lhs, rhs) {
                        (Some(a), Some(b))
                            if traces_to_any_counter(a, &loop_counters, &defs)
                                && !traces_to_any_counter(b, &loop_counters, &defs) =>
                        {
                            record_role(&mut roles, b, VarRole::LoopBound);
                        }
                        (Some(a), Some(b))
                            if traces_to_any_counter(b, &loop_counters, &defs)
                                && !traces_to_any_counter(a, &loop_counters, &defs) =>
                        {
                            record_role(&mut roles, a, VarRole::LoopBound);
                        }
                        _ => {}
                    }
                }

                if is_indexed_address_op(insn.op, output_sv(func, bid, idx), &address_svs)
                    && insn.inputs.len() >= 2
                {
                    let lhs = input_sv(func, bid, idx, 0);
                    let rhs = input_sv(func, bid, idx, 1);
                    match (lhs, rhs) {
                        (Some(base), Some(idx_sv))
                            if traces_to_any_counter(idx_sv, &loop_counters, &defs)
                                && !traces_to_any_counter(base, &loop_counters, &defs) =>
                        {
                            record_role(&mut roles, base, VarRole::LoopArrayBase);
                        }
                        (Some(idx_sv), Some(base))
                            if traces_to_any_counter(idx_sv, &loop_counters, &defs)
                                && !traces_to_any_counter(base, &loop_counters, &defs) =>
                        {
                            record_role(&mut roles, base, VarRole::LoopArrayBase);
                        }
                        _ => {}
                    }
                }
            }
        }
    }

    // 2. Saved-register classification: scan first instruction of each block,
    //    identify any SSA def whose Copy source is a callee-saved physical reg.
    let arg_regs = arg_regs_for_func(func);
    for ((bid, idx, slot), sv) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        let block = match func.function.blocks.get(bid) {
            Some(b) => b,
            None => continue,
        };
        let insn = match block.insns.get(*idx) {
            Some(i) => i,
            None => continue,
        };
        if insn.op != IrOp::Copy {
            continue;
        }
        let src = match insn.inputs.first() {
            Some(s) => s,
            None => continue,
        };
        if src.space != SpaceId::Register {
            continue;
        }
        if let Some(name) = callee_saved_x86_64(src.offset) {
            record_role(&mut roles, *sv, VarRole::SavedRegister(name));
        } else if let Some(name) = callee_saved_aarch64(src.offset) {
            record_role(&mut roles, *sv, VarRole::SavedRegister(name));
        } else {
            // Argument: only mark if this Copy is in the entry block's first insns.
            if *bid == func.function.entry && *idx < 8 {
                for &(off, arg_idx) in arg_regs {
                    if src.offset == off {
                        arg_indices.insert(*sv, arg_idx);
                        record_role(&mut roles, *sv, argument_role_for_index(func, arg_idx));
                        break;
                    }
                }
            }
        }
    }

    // 2a. Optimized leaf functions often use an incoming argument register
    // directly instead of first copying it to a temporary. Give those live-in
    // input varnodes the same argument role so the body name matches the
    // printed prototype (`a1` rather than an unrelated fresh `vN`).
    if let Some(entry_block) = func.function.blocks.get(&func.function.entry) {
        let mut defined = std::collections::BTreeSet::new();
        for (idx, insn) in entry_block.insns.iter().enumerate() {
            for (input_idx, input) in insn.inputs.iter().enumerate() {
                if input.space != SpaceId::Register || defined.contains(&input.offset) {
                    continue;
                }
                let Some(sv) =
                    func.var_map
                        .get(&(func.function.entry, idx, VarnodeSlot::Input(input_idx)))
                else {
                    continue;
                };
                for &(off, arg_idx) in arg_regs {
                    if input.offset == off {
                        arg_indices.insert(*sv, arg_idx);
                        record_role(&mut roles, *sv, argument_role_for_index(func, arg_idx));
                        break;
                    }
                }
            }
            if let Some(output) = insn.output
                && output.space == SpaceId::Register
            {
                defined.insert(output.offset);
            }
        }
    }

    // 2b. Whole-function live-in argument fallback. Optimized code can push
    // the first use of an ABI argument into a successor block; give those SSA
    // inputs argument roles too so body names stay aligned with signatures.
    for (sv, arg_idx) in collect_live_in_argument_svs(func, arg_regs) {
        arg_indices.insert(sv, arg_idx);
        record_role(&mut roles, sv, argument_role_for_index(func, arg_idx));
    }

    // 2b. Return-value classification: find the last write to the return
    //     register (RAX on x86-64, X0 on AArch64) immediately before a
    //     Return instruction. The SSA varnode written there is the `result`.
    let return_reg_offset: Option<u64> = match func.calling_convention {
        unlace_ir::ssa::CallingConvention::SystemV
        | unlace_ir::ssa::CallingConvention::MicrosoftX64
        | unlace_ir::ssa::CallingConvention::Cdecl
        | unlace_ir::ssa::CallingConvention::Stdcall
        | unlace_ir::ssa::CallingConvention::Thiscall => Some(0), // RAX/EAX
        unlace_ir::ssa::CallingConvention::AArch64 => Some(0), // X0
        unlace_ir::ssa::CallingConvention::Unknown => Some(0), // assume RAX
    };
    if let Some(ret_off) = return_reg_offset {
        for (bid, block) in &func.function.blocks {
            for (idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Return {
                    continue;
                }
                // Walk backward from the Return to find the last write to
                // the return register in this block.
                for prev_idx in (0..idx).rev() {
                    let prev_insn = &block.insns[prev_idx];
                    let Some(out) = prev_insn.output else {
                        continue;
                    };
                    if out.space == SpaceId::Register && out.offset == ret_off {
                        if let Some(&sv) = func.var_map.get(&(*bid, prev_idx, VarnodeSlot::Output))
                        {
                            record_role(&mut roles, sv, VarRole::ReturnValue);
                        }
                        break;
                    }
                }
            }
        }
    }

    // 3. Everything else: Temporary.
    for sv in func.var_map.values() {
        roles.entry(*sv).or_insert(VarRole::Temporary);
    }

    VarClassification { roles, arg_indices }
}

pub fn suggest_name(role: VarRole, idx: usize) -> String {
    match role {
        VarRole::ThisPointer => "this".into(),
        VarRole::LoopCounter => match idx {
            0 => "i".into(),
            1 => "j".into(),
            2 => "k".into(),
            n => format!("i{}", n),
        },
        VarRole::LoopBound => {
            if idx == 0 {
                "len".into()
            } else {
                format!("len{}", idx)
            }
        }
        VarRole::LoopArrayBase => {
            if idx == 0 {
                "buf".into()
            } else {
                format!("buf{}", idx)
            }
        }
        VarRole::SavedRegister(name) => format!("saved_{}", name),
        VarRole::Argument(i) => format!("a{}", i + 1),
        VarRole::ReturnValue => "result".into(),
        VarRole::Temporary => format!("v{}", idx),
    }
}

fn argument_role_for_index(func: &SsaFunction, arg_idx: u32) -> VarRole {
    if arg_idx == 0
        && (func.cpp_kind.is_some()
            || matches!(func.calling_convention, CallingConvention::Thiscall))
    {
        VarRole::ThisPointer
    } else {
        VarRole::Argument(arg_idx)
    }
}

fn role_priority(role: VarRole) -> u8 {
    match role {
        VarRole::ThisPointer => 0,
        VarRole::LoopCounter => 10,
        VarRole::LoopArrayBase => 20,
        VarRole::LoopBound => 30,
        VarRole::ReturnValue => 40,
        VarRole::SavedRegister(_) => 50,
        VarRole::Argument(_) => 60,
        VarRole::Temporary => 100,
    }
}

fn record_role(roles: &mut BTreeMap<SsaVarnode, VarRole>, sv: SsaVarnode, role: VarRole) {
    roles
        .entry(sv)
        .and_modify(|existing| {
            if role_priority(role) < role_priority(*existing) {
                *existing = role;
            }
        })
        .or_insert(role);
}

fn input_sv(func: &SsaFunction, bid: BlockId, idx: usize, input_idx: usize) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
        .copied()
}

fn output_sv(func: &SsaFunction, bid: BlockId, idx: usize) -> Option<SsaVarnode> {
    func.var_map.get(&(bid, idx, VarnodeSlot::Output)).copied()
}

#[derive(Clone, Debug)]
struct DefInfo {
    op: IrOp,
    input_svs: Vec<Option<SsaVarnode>>,
    input_is_const: Vec<bool>,
}

fn collect_defs(func: &SsaFunction) -> BTreeMap<SsaVarnode, DefInfo> {
    let mut defs = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if let Some(sv) = output_sv(func, bid, idx) {
                defs.insert(
                    sv,
                    DefInfo {
                        op: insn.op,
                        input_svs: (0..insn.inputs.len())
                            .map(|input_idx| input_sv(func, bid, idx, input_idx))
                            .collect(),
                        input_is_const: insn
                            .inputs
                            .iter()
                            .map(|input| input.space == SpaceId::Const)
                            .collect(),
                    },
                );
            }
        }
    }
    defs
}

fn collect_live_in_argument_svs(
    func: &SsaFunction,
    arg_regs: &[(u64, u32)],
) -> BTreeMap<SsaVarnode, u32> {
    let mut out = BTreeMap::new();
    if arg_regs.is_empty() {
        return out;
    }
    let arg_by_offset: BTreeMap<u64, u32> = arg_regs.iter().copied().collect();
    for (&bid, block) in &func.function.blocks {
        let mut defined = BTreeSet::new();
        if let Some(phis) = func.phi_map.get(&bid) {
            for phi in phis {
                if phi.output.base.space == SpaceId::Register {
                    defined.insert(phi.output.base.offset);
                }
            }
        }
        for (idx, insn) in block.insns.iter().enumerate() {
            for input_idx in 0..insn.inputs.len() {
                let Some(sv) = input_sv(func, bid, idx, input_idx) else {
                    continue;
                };
                if sv.base.space != SpaceId::Register || defined.contains(&sv.base.offset) {
                    continue;
                }
                if let Some(&arg_idx) = arg_by_offset.get(&sv.base.offset) {
                    out.entry(sv).or_insert(arg_idx);
                }
            }
            if let Some(out) = insn.output
                && out.space == SpaceId::Register
            {
                defined.insert(out.offset);
            }
        }
    }
    out
}

fn collect_address_svs(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut out = BTreeSet::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            match insn.op {
                IrOp::Load => {
                    let addr_idx = if insn
                        .inputs
                        .first()
                        .is_some_and(|v| v.space == SpaceId::Const)
                    {
                        1
                    } else {
                        0
                    };
                    if let Some(sv) = input_sv(func, bid, idx, addr_idx) {
                        out.insert(sv);
                    }
                }
                IrOp::Store => {
                    let addr_idx = if insn
                        .inputs
                        .first()
                        .is_some_and(|v| v.space == SpaceId::Const)
                    {
                        1
                    } else {
                        0
                    };
                    if let Some(sv) = input_sv(func, bid, idx, addr_idx) {
                        out.insert(sv);
                    }
                }
                _ => {}
            }
        }
    }
    out
}

fn is_compare_op(op: IrOp) -> bool {
    matches!(
        op,
        IrOp::IntEqual
            | IrOp::IntNotequal
            | IrOp::IntLess
            | IrOp::IntSless
            | IrOp::IntLessequal
            | IrOp::IntSlessequal
            | IrOp::FloatEqual
            | IrOp::FloatNotequal
            | IrOp::FloatLess
            | IrOp::FloatLessequal
    )
}

fn is_indexed_address_op(
    op: IrOp,
    output: Option<SsaVarnode>,
    address_svs: &BTreeSet<SsaVarnode>,
) -> bool {
    if op == IrOp::Ptradd {
        return true;
    }
    if op != IrOp::IntAdd {
        return false;
    }
    output.is_some_and(|out| address_svs.contains(&out))
}

fn traces_to_any_counter(
    sv: SsaVarnode,
    counters: &BTreeSet<SsaVarnode>,
    defs: &BTreeMap<SsaVarnode, DefInfo>,
) -> bool {
    traces_to_any_counter_inner(sv, counters, defs, 0)
}

fn traces_to_any_counter_inner(
    sv: SsaVarnode,
    counters: &BTreeSet<SsaVarnode>,
    defs: &BTreeMap<SsaVarnode, DefInfo>,
    depth: usize,
) -> bool {
    if counters.contains(&sv) {
        return true;
    }
    if depth >= 4 {
        return false;
    }
    let Some(def) = defs.get(&sv) else {
        return false;
    };
    match def.op {
        IrOp::Copy | IrOp::Cast | IrOp::IntZext | IrOp::IntSext | IrOp::Subpiece => def
            .input_svs
            .iter()
            .flatten()
            .any(|input| traces_to_any_counter_inner(*input, counters, defs, depth + 1)),
        IrOp::IntAdd | IrOp::IntSub => {
            let has_const = def.input_is_const.iter().any(|is_const| *is_const);
            has_const
                && def
                    .input_svs
                    .iter()
                    .flatten()
                    .any(|input| traces_to_any_counter_inner(*input, counters, defs, depth + 1))
        }
        _ => false,
    }
}

/// Late-pipeline pass that classifies every SSA varnode via
/// [`classify_variables`] and writes a human-meaningful name into
/// [`SsaFunction::var_role_names`] for every non-`Temporary` value
/// (t227 wiring).
///
/// Role-sequence is per-role: the *N*th `LoopCounter` becomes
/// `i`/`j`/`k`/…, the *N*th `LoopArrayBase` becomes `buf`/`buf1`/…, the
/// *N*th `LoopBound` becomes `len`/`len1`/…, the implicit C++ receiver
/// becomes `this`, the
/// *N*th `SavedRegister(rN)` becomes `saved_rN`, …, while `Argument(k)`
/// uses the *register-position* index `k` as `a{k+1}` so two functions
/// with three arguments both produce `a1`/`a2`/`a3` regardless of
/// classification order.
///
/// The pass is idempotent: re-running it overwrites the existing
/// `var_role_names` map (after clearing it first) so a single
/// `VarNamingPass.run()` invocation always reflects the current SSA
/// shape — no stale entries from a prior IR snapshot.
///
/// Returns `Ok(false)` because the pass writes to side-map state, not
/// to the IR proper; the fixed-point runner has no reason to re-iterate
/// once it has been called.
pub struct VarNamingPass;

impl Pass for VarNamingPass {
    fn name(&self) -> &str {
        "VarNamingPass"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let preserved_names = func.var_role_names.clone();
        let cls = classify_variables(func);

        // Sequence counters per role family. We key each family by a
        // discriminant tag so distinct `SavedRegister("rbx")` /
        // `SavedRegister("r12")` instances don't collide in the same
        // counter — IDA-style "first counter is i, first save is
        // saved_rbx" naming.
        #[derive(PartialEq, Eq, Hash, PartialOrd, Ord)]
        enum Family {
            ThisPointer,
            LoopCounter,
            LoopBound,
            LoopArrayBase,
            SavedRegister(&'static str),
            Argument(u32),
            ReturnValue,
        }
        let mut counters: std::collections::BTreeMap<Family, usize> =
            std::collections::BTreeMap::new();

        let mut names: BTreeMap<SsaVarnode, String> = BTreeMap::new();

        // Iterate `roles` in `SsaVarnode` order (BTreeMap iteration) so
        // the per-role sequence is deterministic across runs.
        for (sv, role) in &cls.roles {
            let family = match role {
                VarRole::Temporary => continue,
                VarRole::ThisPointer => Family::ThisPointer,
                VarRole::LoopCounter => Family::LoopCounter,
                VarRole::LoopBound => Family::LoopBound,
                VarRole::LoopArrayBase => Family::LoopArrayBase,
                VarRole::SavedRegister(reg) => Family::SavedRegister(reg),
                VarRole::Argument(k) => Family::Argument(*k),
                VarRole::ReturnValue => Family::ReturnValue,
            };
            let counter = counters.entry(family).or_insert(0);
            let idx = *counter;
            *counter += 1;

            names.insert(*sv, suggest_name(*role, idx));
        }

        for (sv, name) in preserved_names {
            if is_preserved_role_name(&name) {
                names.entry(sv).or_insert(name);
            }
        }

        propagate_cluster_role_names(func, &mut names);
        rename_params_from_roles(func, &names, &cls.arg_indices);
        sync_lvar_names_from_roles(func, &names);
        func.var_role_names = names;
        Ok(false)
    }
}

fn is_preserved_role_name(name: &str) -> bool {
    matches!(name, "this")
}

fn is_number_suffix(s: &str) -> bool {
    !s.is_empty() && s.bytes().all(|b| b.is_ascii_digit())
}

fn is_generic_lvar_name(name: &str) -> bool {
    name.strip_prefix('v')
        .or_else(|| name.strip_prefix('c'))
        .is_some_and(is_number_suffix)
}

fn semantic_name_priority(name: &str) -> u8 {
    if name == "this" {
        0
    } else if matches!(name, "i" | "j" | "k")
        || name
            .strip_prefix('i')
            .is_some_and(|rest| rest != "f" && is_number_suffix(rest))
    {
        10
    } else if name == "buf" || name.strip_prefix("buf").is_some_and(is_number_suffix) {
        20
    } else if name == "len" || name.strip_prefix("len").is_some_and(is_number_suffix) {
        30
    } else if name == "result" || name.strip_prefix("result").is_some_and(is_number_suffix) {
        40
    } else if name.starts_with("saved_") {
        50
    } else if is_argument_name(name) {
        60
    } else {
        70
    }
}

fn propagate_cluster_role_names(func: &SsaFunction, names: &mut BTreeMap<SsaVarnode, String>) {
    let mut best_by_cluster: BTreeMap<String, (u8, String)> = BTreeMap::new();
    for (sv, name) in names.iter() {
        let Some(cluster) = func.merged_names.get(sv) else {
            continue;
        };
        if !is_generic_lvar_name(cluster) {
            continue;
        }
        let candidate = (semantic_name_priority(name), name.clone());
        best_by_cluster
            .entry(cluster.clone())
            .and_modify(|best| {
                if candidate < *best {
                    *best = candidate.clone();
                }
            })
            .or_insert(candidate);
    }

    for (sv, cluster) in &func.merged_names {
        if !is_generic_lvar_name(cluster) || names.contains_key(sv) {
            continue;
        }
        if let Some((_priority, name)) = best_by_cluster.get(cluster) {
            names.insert(*sv, name.clone());
        }
    }
}

fn is_argument_name(name: &str) -> bool {
    name.strip_prefix('a').is_some_and(is_number_suffix)
}

fn is_param_role_name(name: &str) -> bool {
    !is_argument_name(name)
        && !is_generic_lvar_name(name)
        && !name.starts_with("saved_")
        && !matches!(name, "result")
}

fn rename_params_from_roles(
    func: &mut SsaFunction,
    names: &BTreeMap<SsaVarnode, String>,
    arg_indices: &BTreeMap<SsaVarnode, u32>,
) {
    let mut best_by_arg: BTreeMap<u32, (u8, String)> = BTreeMap::new();
    for (sv, arg_idx) in arg_indices {
        let Some(name) = names.get(sv).filter(|name| is_param_role_name(name)) else {
            continue;
        };
        let candidate = (semantic_name_priority(name), name.clone());
        best_by_arg
            .entry(*arg_idx)
            .and_modify(|best| {
                if candidate < *best {
                    *best = candidate.clone();
                }
            })
            .or_insert(candidate);
    }

    for (arg_idx, (_priority, name)) in best_by_arg {
        if let Some(param) = func.inferred_params.get_mut(arg_idx as usize) {
            param.0 = name.clone();
        }
        if let Some(sig) = func.finalized_signature.as_mut()
            && let Some(param) = sig.params.get_mut(arg_idx as usize)
        {
            param.0 = name;
        }
    }
}

fn lvar_name_can_be_overridden(name: Option<&str>) -> bool {
    match name {
        None | Some("") => true,
        Some(name) => is_generic_lvar_name(name) || is_argument_name(name),
    }
}

fn sync_lvar_names_from_roles(func: &mut SsaFunction, names: &BTreeMap<SsaVarnode, String>) {
    let inferred_params = &func.inferred_params;
    for lv in &mut func.lvars {
        match &lv.storage {
            LvarStorage::Param { idx } => {
                let Some((name, _ty)) = inferred_params.get(*idx as usize) else {
                    continue;
                };
                if !name.is_empty() && lvar_name_can_be_overridden(lv.name.as_deref()) {
                    lv.name = Some(name.clone());
                }
            }
            LvarStorage::Temp { ssa_var } => {
                let Some(name) = names.get(ssa_var).filter(|name| is_param_role_name(name)) else {
                    continue;
                };
                if lvar_name_can_be_overridden(lv.name.as_deref()) {
                    lv.name = Some(name.clone());
                }
            }
            LvarStorage::Return => {
                if lvar_name_can_be_overridden(lv.name.as_deref()) {
                    lv.name = Some("result".to_string());
                }
            }
            LvarStorage::Stack { .. } | LvarStorage::Reg { .. } | LvarStorage::Spill { .. } => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::lvar_collect::LvarCollectPass;
    use smallvec::smallvec;
    use unlace_ir::lvar::LvarStorage;
    use unlace_ir::ssa::{CppKind, PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    fn reg(off: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Register,
            offset: off,
            size,
        }
    }
    fn con(v: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Const,
            offset: v,
            size,
        }
    }

    fn build_func(blocks: Vec<BasicBlock>) -> SsaFunction {
        let entry = blocks[0].id;
        let mut function = Function::new("f", entry, 0x1000);
        for b in blocks {
            function.insert_block(b);
        }
        build_ssa(function)
    }

    /// `for (i = 0; i < 4; i++) { ... }` — single loop counter classified
    /// as `LoopCounter` and `suggest_name → "i"`.
    #[test]
    fn t211_single_loop_counter_named_i() {
        let r_i = reg(0x10, 8);
        let r_i_inc = reg(0x10, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r_i,
            smallvec![con(0, 8)],
            0x1000,
        ));
        bb0.successors.push(BlockId(1));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r_i_inc,
            smallvec![r_i, con(1, 8)],
            0x1010,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![con(0x1010, 8), r_i_inc],
            0x1014,
        ));
        bb1.successors.push(BlockId(1));
        bb1.successors.push(BlockId(2));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1020));

        let func = build_func(vec![bb0, bb1, bb2]);
        let cls = classify_variables(&func);
        let counters: Vec<_> = cls
            .roles
            .iter()
            .filter(|(_, r)| matches!(r, VarRole::LoopCounter))
            .collect();
        assert!(
            !counters.is_empty(),
            "expected at least one LoopCounter, got roles: {:?}",
            cls.roles
        );
        assert_eq!(suggest_name(VarRole::LoopCounter, 0), "i");
        assert_eq!(suggest_name(VarRole::LoopCounter, 1), "j");
        assert_eq!(suggest_name(VarRole::LoopCounter, 2), "k");
    }

    /// `suggest_name` for SavedRegister and Argument paths.
    #[test]
    fn t211_suggest_name_covers_all_roles() {
        assert_eq!(suggest_name(VarRole::ThisPointer, 0), "this");
        assert_eq!(suggest_name(VarRole::LoopCounter, 0), "i");
        assert_eq!(suggest_name(VarRole::LoopBound, 0), "len");
        assert_eq!(suggest_name(VarRole::LoopBound, 1), "len1");
        assert_eq!(suggest_name(VarRole::LoopArrayBase, 0), "buf");
        assert_eq!(suggest_name(VarRole::LoopArrayBase, 1), "buf1");
        assert_eq!(suggest_name(VarRole::SavedRegister("rbx"), 0), "saved_rbx");
        assert_eq!(suggest_name(VarRole::Argument(0), 0), "a1");
        assert_eq!(suggest_name(VarRole::Argument(1), 0), "a2");
        assert_eq!(suggest_name(VarRole::Temporary, 3), "v3");
    }

    /// Callee-saved RBX use is classified as `SavedRegister("rbx")`.
    #[test]
    fn t211_callee_saved_rbx_classified() {
        // Block 0: t = rbx (Copy from RBX = offset 0x18 in our convention)
        let rbx = reg(0x18, 8);
        let t = reg(0x100, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, t, smallvec![rbx], 0x1000));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let func = build_func(vec![bb0]);
        let cls = classify_variables(&func);
        let saved = cls
            .roles
            .iter()
            .find(|(_, r)| matches!(r, VarRole::SavedRegister("rbx")));
        assert!(
            saved.is_some(),
            "expected SavedRegister(\"rbx\"), got {:?}",
            cls.roles
        );
    }

    /// A pure single-use temporary stays `Temporary`.
    #[test]
    fn t211_pure_temp_classified() {
        // Block 0: t = const 42; return
        let t = reg(0x200, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            t,
            smallvec![con(42, 8)],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let func = build_func(vec![bb0]);
        let cls = classify_variables(&func);
        let temp_count = cls
            .roles
            .values()
            .filter(|r| matches!(r, VarRole::Temporary))
            .count();
        assert!(
            temp_count > 0,
            "expected at least one Temporary, got {:?}",
            cls.roles
        );
    }

    #[test]
    fn loop_bound_and_array_base_get_len_and_buf_names() {
        let r_i = reg(0x100, 8);
        let r_i_inc = reg(0x100, 8);
        let r_len = reg(0x108, 8);
        let r_buf = reg(0x110, 8);
        let r_cond = reg(0x118, 1);
        let r_addr = reg(0x120, 8);
        let r_val = reg(0x128, 1);

        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r_i,
            smallvec![con(0, 8)],
            0x1000,
        ));
        bb0.successors.push(BlockId(1));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntLess,
            r_cond,
            smallvec![r_i, r_len],
            0x1010,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::Ptradd,
            r_addr,
            smallvec![r_buf, r_i, con(1, 8)],
            0x1014,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::Load,
            r_val,
            smallvec![con(1, 4), r_addr],
            0x1018,
        ));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r_i_inc,
            smallvec![r_i, con(1, 8)],
            0x101c,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![con(0x1010, 8), r_cond],
            0x1020,
        ));
        bb1.successors.push(BlockId(1));
        bb1.successors.push(BlockId(2));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1030));

        let mut func = build_func(vec![bb0, bb1, bb2]);
        VarNamingPass.run(&mut func).expect("var naming");

        let names: BTreeSet<&str> = func.var_role_names.values().map(String::as_str).collect();
        assert!(names.contains("i"), "missing loop counter name: {names:?}");
        assert!(names.contains("len"), "missing loop bound name: {names:?}");
        assert!(names.contains("buf"), "missing loop buffer name: {names:?}");
    }

    #[test]
    fn cpp_method_first_argument_is_this_and_renames_param() {
        let this_reg = reg(RDI, 8);
        let out = reg(0x200, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![this_reg, con(8, 8)],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));

        let mut func = build_func(vec![bb0]);
        func.calling_convention = CallingConvention::SystemV;
        func.cpp_kind = Some(CppKind::RegularMethod);
        func.inferred_params = vec![("a1".to_string(), PrimitiveType::Ptr)];
        LvarCollectPass.run(&mut func).expect("lvar collect");

        VarNamingPass.run(&mut func).expect("var naming");

        assert!(
            func.var_role_names.values().any(|name| name == "this"),
            "expected body role name `this`, got {:?}",
            func.var_role_names
        );
        assert_eq!(func.inferred_params[0].0, "this");
        assert!(
            func.lvars.iter().any(|lv| matches!(
                (&lv.storage, lv.name.as_deref()),
                (LvarStorage::Param { idx: 0 }, Some("this"))
            )),
            "expected collected param lvar to be renamed to `this`: {:?}",
            func.lvars
        );
    }

    #[test]
    fn cdecl_does_not_invent_register_argument_names() {
        let rdi = reg(RDI, 8);
        let out = reg(0x200, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![rdi, con(1, 8)],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![out], 0x1004));

        let mut func = build_func(vec![bb0]);
        func.calling_convention = CallingConvention::Cdecl;

        let cls = classify_variables(&func);
        assert!(
            cls.arg_indices.is_empty(),
            "cdecl should not assign register argument indices: {:?}",
            cls.arg_indices
        );
        assert!(
            !cls.roles
                .values()
                .any(|role| matches!(role, VarRole::Argument(_))),
            "cdecl should not classify register values as arguments: {:?}",
            cls.roles
        );
    }
}
