//! t261 — instruction-level oddity annotations.
//!
//! Surfaces semantic hints discovered by the SSA / loop / type pipeline
//! as `// hint: ...` comments attached to specific
//! `(BlockId, insn_index)` locations. The C printer emits them above
//! the rendered statement so a reader can quickly spot:
//!
//!   * **non-null param** — the parameter is dereferenced (Load/Store
//!     address operand) inside the function's entry block, before any
//!     conditional, so every path that reaches the function body has
//!     already required it to be non-null.
//!   * **loop counter** — the SSA varnode at this instruction's output
//!     is a loop counter (recognized by
//!     [`unlace_passes::var_naming::classify_variables`]). Annotated at
//!     the counter's defining `IntAdd` (the `i = i + 1` step).
//!   * **buffer size in bytes** — the value flows into the `n`
//!     argument slot of a recognized libc copy / clear call
//!     (`memcpy`/`memset` family — see
//!     [`unlace_passes::libc_idioms`]).  Annotated at the call site.
//!
//! Each annotation is a `(BlockId, insn_idx, comment_text)` triple. The
//! comment string does NOT include the leading `// ` — the printer adds
//! its own framing so the comments compose with existing scaffolding.
//!
//! ## Why a side-channel?
//!
//! The C printer is already a 16k-line file and the patterns surfaced
//! here are advisory. Keeping them in a dedicated module lets passes /
//! callers consume them without touching the printer, and lets the
//! printer apply them with a single map lookup per instruction.

use std::collections::BTreeSet;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};
use unlace_passes::var_naming::{VarRole, classify_variables};

/// Walk `func`'s SSA form and return advisory `(BlockId, insn_idx,
/// comment_text)` annotations describing detected oddities.
///
/// Output is sorted by (block, insn_idx) for deterministic test
/// behaviour. Multiple annotations at the same location are returned
/// as separate entries so a printer can stack them.
pub fn collect_function_annotations(func: &SsaFunction) -> Vec<(BlockId, usize, String)> {
    let mut out: Vec<(BlockId, usize, String)> = Vec::new();

    collect_non_null_param_hints(func, &mut out);
    collect_loop_counter_hints(func, &mut out);
    collect_buffer_size_hints(func, &mut out);

    // Stable order: by (block, insn_idx, comment).
    out.sort();
    out.dedup();
    out
}

/// Detect parameters that are dereferenced unconditionally on entry.
///
/// The heuristic is intentionally conservative: walk the entry block's
/// instructions in order; if we see a `Load` / `Store` whose address
/// operand is an SSA value that traces back to one of the function's
/// inferred register-passed parameters *before* any `Cbranch` has been
/// seen, emit a hint there.
///
/// This matches the contract a C compiler can rely on when a parameter
/// is dereferenced in the function prologue: the caller must have
/// supplied a non-null pointer, or behaviour is UB. We surface that as
/// a comment so a reader can immediately see "yes, this param is
/// promised non-null" rather than chase null-check passes.
fn collect_non_null_param_hints(
    func: &SsaFunction,
    out: &mut Vec<(BlockId, usize, String)>,
) {
    let entry = func.function.entry;
    let Some(block) = func.function.blocks.get(&entry) else {
        return;
    };

    // Build the set of SSA varnodes that are "param values" — version-0
    // SSA values whose underlying register matches a known
    // argument-passing slot.
    let param_svs: BTreeSet<SsaVarnode> = param_ssa_values(func);
    if param_svs.is_empty() {
        return;
    }

    // Track which SSA values are derived from a param (we follow
    // `Copy` chains so a `mov rdi, rax`-style prologue doesn't hide
    // the param). Conservative — we only follow within the entry
    // block, since beyond that branches complicate flow.
    let mut tainted = param_svs.clone();
    let mut already_reported: BTreeSet<SsaVarnode> = BTreeSet::new();

    for (idx, insn) in block.insns.iter().enumerate() {
        // Stop at the first conditional branch — once control flow
        // forks, "unconditionally reached" no longer holds for
        // anything later.
        if matches!(insn.op, IrOp::Cbranch | IrOp::Branchind) {
            break;
        }

        match insn.op {
            IrOp::Load => {
                // inputs[1] is the address.
                if let Some(addr_sv) = ssa_for_input(func, entry, idx, 1)
                    && let Some(name) = matching_param_name(func, &tainted, addr_sv)
                    && already_reported.insert(addr_sv)
                {
                    out.push((
                        entry,
                        idx,
                        format!("fastpath: {} is non-null on entry", name),
                    ));
                }
            }
            IrOp::Store => {
                // inputs[1] is the address.
                if let Some(addr_sv) = ssa_for_input(func, entry, idx, 1)
                    && let Some(name) = matching_param_name(func, &tainted, addr_sv)
                    && already_reported.insert(addr_sv)
                {
                    out.push((
                        entry,
                        idx,
                        format!("fastpath: {} is non-null on entry", name),
                    ));
                }
            }
            IrOp::Copy => {
                // Propagate taint: if the source is a param-derived SV,
                // the output is too.
                if let Some(out_sv) =
                    func.var_map.get(&(entry, idx, VarnodeSlot::Output)).copied()
                    && let Some(src_sv) = ssa_for_input(func, entry, idx, 0)
                    && tainted.contains(&src_sv)
                {
                    tainted.insert(out_sv);
                }
            }
            _ => {}
        }
    }
}

/// Annotate `IntAdd` instructions whose output is a loop counter (per
/// [`classify_variables`]). The IDA convention is to write `i++` so we
/// match on the increment-by-constant shape; the comment goes on the
/// counter's defining instruction.
fn collect_loop_counter_hints(
    func: &SsaFunction,
    out: &mut Vec<(BlockId, usize, String)>,
) {
    let classification = classify_variables(func);
    let counters: BTreeSet<SsaVarnode> = classification
        .roles
        .iter()
        .filter_map(|(sv, role)| match role {
            VarRole::LoopCounter => Some(*sv),
            _ => None,
        })
        .collect();
    if counters.is_empty() {
        return;
    }

    // Each counter is a phi output; annotate the latch's IntAdd (where
    // `i = i + 1` lives). Walk every block; for each IntAdd whose
    // output feeds a counter-phi back-edge, emit `loop counter`.
    for ((bid, idx, slot), sv) in &func.var_map {
        if *slot != VarnodeSlot::Output {
            continue;
        }
        let Some(block) = func.function.blocks.get(bid) else {
            continue;
        };
        let Some(insn) = block.insns.get(*idx) else {
            continue;
        };
        if insn.op != IrOp::IntAdd {
            continue;
        }
        if is_counter_step(func, &counters, *sv) {
            out.push((*bid, *idx, "loop counter".to_string()));
        }
    }
}

/// Detect call sites where the third argument is the byte count of a
/// memory copy / clear. Uses `libc_call_annotations` (populated by
/// [`unlace_passes::libc_idioms::annotate_libc_calls`]).
fn collect_buffer_size_hints(
    func: &SsaFunction,
    out: &mut Vec<(BlockId, usize, String)>,
) {
    for ((bid, idx), canonical) in &func.libc_call_annotations {
        let is_sized_copy = matches!(canonical.as_str(), "memcpy" | "memset" | "memcmp");
        if !is_sized_copy {
            continue;
        }
        out.push((
            *bid,
            *idx,
            format!("buffer size in bytes (arg 3 of {})", canonical),
        ));
    }
}

/// Build the set of SSA values that represent the function's inferred
/// parameters. We use a permissive heuristic: any version-0 SSA value
/// whose base register lives in the standard arg-register slots for
/// x86-64 / aarch64.
fn param_ssa_values(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut out: BTreeSet<SsaVarnode> = BTreeSet::new();

    // Standard arg-register byte offsets (matches `arg_regs_x86_64` in
    // `unlace_passes::var_naming`). We include the common spellings;
    // unknown slots are simply not tagged.
    const X86_ARG_OFFSETS: &[u64] = &[0x38, 0x30, 0x10, 0x08, 0x80, 0x88]; // RDI/RSI/RDX/RCX/R8/R9
    const AARCH64_ARG_OFFSETS: &[u64] = &[
        0x4000, 0x4008, 0x4010, 0x4018, 0x4020, 0x4028, 0x4030, 0x4038,
    ];

    for sv in func.var_map.values() {
        if sv.version != 0 {
            continue;
        }
        if sv.base.space != SpaceId::Register {
            continue;
        }
        if X86_ARG_OFFSETS.contains(&sv.base.offset)
            || AARCH64_ARG_OFFSETS.contains(&sv.base.offset)
        {
            out.insert(*sv);
        }
    }
    out
}

/// Resolve an instruction's `Input(slot)` operand to the SSA value
/// flowing into that slot, if recorded.
fn ssa_for_input(
    func: &SsaFunction,
    bid: BlockId,
    idx: usize,
    slot: usize,
) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, idx, VarnodeSlot::Input(slot)))
        .copied()
}

/// If `sv` is in the tainted (param-derived) set, return a readable
/// label for the corresponding original parameter — preferring
/// `inferred_params` / `var_role_names` over the raw register name.
fn matching_param_name(
    func: &SsaFunction,
    tainted: &BTreeSet<SsaVarnode>,
    sv: SsaVarnode,
) -> Option<String> {
    if !tainted.contains(&sv) {
        return None;
    }
    // Prefer the role-name registry if the pass populated it.
    if let Some(name) = func.var_role_names.get(&sv) {
        return Some(name.clone());
    }
    // Else: try `inferred_params`. Match by base-register offset
    // against the same arg-register layout used to build the param SV
    // set; the inferred params list is in arg order.
    let arg_offsets: &[u64] = &[0x38, 0x30, 0x10, 0x08, 0x80, 0x88];
    if let Some(arg_idx) = arg_offsets.iter().position(|&o| o == sv.base.offset)
        && let Some((pname, _)) = func.inferred_params.get(arg_idx)
    {
        return Some(pname.clone());
    }
    // Last resort: generic.
    Some("param".to_string())
}

/// True when `add_out` is the back-edge value of a phi whose output is
/// a known loop counter.
fn is_counter_step(
    func: &SsaFunction,
    counters: &BTreeSet<SsaVarnode>,
    add_out: SsaVarnode,
) -> bool {
    for phis in func.phi_map.values() {
        for phi in phis {
            if !counters.contains(&phi.output) {
                continue;
            }
            for (_pred, sv) in &phi.inputs {
                if *sv == add_out {
                    return true;
                }
            }
        }
    }
    false
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::collect_function_annotations;

    fn def_insn(out: Varnode, ins: &[Varnode], addr: u64) -> IrInsn {
        IrInsn {
            op: IrOp::IntAdd,
            output: Some(out),
            inputs: ins.iter().copied().collect(),
            addr,
            guard: None,
        }
    }

    fn load_insn(out: Varnode, addr_in: Varnode, addr: u64) -> IrInsn {
        // PCode LOAD: inputs are (space_id, address); output is the loaded value.
        let space = Varnode::constant(0, 4);
        IrInsn {
            op: IrOp::Load,
            output: Some(out),
            inputs: smallvec![space, addr_in],
            addr,
            guard: None,
        }
    }

    fn ctrl_insn(op: IrOp, addr: u64) -> IrInsn {
        IrInsn {
            op,
            output: None,
            inputs: smallvec![],
            addr,
            guard: None,
        }
    }

    /// t261 — a parameter (RDI = reg-offset 0x38) is loaded through in
    /// the entry block before any conditional. The annotator should
    /// flag the LOAD as `fastpath: <name> is non-null on entry`.
    #[test]
    fn t261_non_null_param_detected() {
        let rdi = Varnode::reg(0x38, 8); // x86-64 first arg
        let rax = Varnode::reg(0x00, 8);
        let mut func = Function::new("deref_first_arg", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // *rdi → rax;
        bb0.insns.push(load_insn(rax, rdi, 0x1000));
        bb0.insns.push(ctrl_insn(IrOp::Return, 0x1004));
        func.insert_block(bb0);
        let ssa = build_ssa(func);
        let annotations = collect_function_annotations(&ssa);
        assert!(
            annotations
                .iter()
                .any(|(_, _, c)| c.starts_with("fastpath:") && c.contains("non-null on entry")),
            "expected non-null param annotation, got: {:?}",
            annotations
        );
        // The annotation must be on the LOAD instruction (insn 0).
        let on_load = annotations
            .iter()
            .find(|(_, _, c)| c.starts_with("fastpath:"))
            .expect("expected at least one fastpath annotation");
        assert_eq!(on_load.0, BlockId(0));
        assert_eq!(on_load.1, 0);
    }

    /// t261 — a classic counted loop (`i = 0; while (i < n) i++;`) has
    /// the `IntAdd(i, 1)` step inside the latch block. The annotator
    /// should mark that instruction `loop counter`. CFG shape matches
    /// the working `t211_single_loop_counter_named_i` test in
    /// `unlace-passes` — bb1 is a single self-looping latch.
    #[test]
    fn t261_loop_counter_detected() {
        let r_i = Varnode::reg(0x10, 8);
        let c0 = Varnode::constant(0, 8);
        let c1 = Varnode::constant(1, 8);

        // bb0: preheader — r_i = 0, fall through to bb1.
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn {
            op: IrOp::Copy,
            output: Some(r_i),
            inputs: smallvec![c0],
            addr: 0x3000,
            guard: None,
        });
        bb0.successors = smallvec![BlockId(1)];

        // bb1: loop body — r_i = r_i + 1; Cbranch -> bb1 or bb2.
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(def_insn(r_i, &[r_i, c1], 0x3010));
        bb1.insns.push(IrInsn {
            op: IrOp::Cbranch,
            output: None,
            inputs: smallvec![Varnode::constant(0x3010, 8), r_i],
            addr: 0x3014,
            guard: None,
        });
        bb1.successors = smallvec![BlockId(1), BlockId(2)];

        // bb2: exit.
        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns.push(ctrl_insn(IrOp::Return, 0x3020));

        let mut func = Function::new("counted_loop", BlockId(0), 0x3000);
        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = build_ssa(func);
        let annotations = collect_function_annotations(&ssa);

        assert!(
            annotations.iter().any(|(_, _, c)| c == "loop counter"),
            "expected loop counter annotation, got: {:?}",
            annotations
        );
        // The annotation must be on bb1 insn 0 (the IntAdd step).
        let on_step = annotations
            .iter()
            .find(|(_, _, c)| c == "loop counter")
            .unwrap();
        assert_eq!(on_step.0, BlockId(1));
        assert_eq!(on_step.1, 0);
    }
}
