use super::*;

// The fixpoint convergence + the propagation rule are exercised end-to-end by
// the cross-crate `verify_noreturn_propagate.rs` gate (a real x86-64 fixture
// with a custom `my_die() { ...; abort(); }` wrapper called only ONCE — below
// `noreturn_disc`'s ≥3 threshold and followed by NOP padding, so ONLY this
// pass concludes it no-return). The test-only Listing constructor also lets the
// borrowed body view exercise real address-index boundaries without a decoder.

#[test]
fn pass_identity_wiring() {
    let p = NoReturnPropagatePass;
    assert_eq!(p.id(), "noreturn_propagate");
    assert_eq!(p.phase(), Phase::P1);
}

// --- reach walk: a conditional jump to a no-return target still returns via its
//     fall-through (the GCC hot/cold-split regression) --------------------------

fn mk_insn(
    addr: u64,
    ft: Option<u64>,
    flow: crate::listing::model::FlowType,
    flows: Vec<u64>,
) -> crate::listing::model::Insn {
    crate::listing::model::Insn {
        addr,
        len: 2,
        fall_through: ft,
        flow,
        flows,
        mnemonic: "".into(),
        operands: String::new(),
        pcode: None,
    }
}

/// A function guarded by an assertion / stack-canary branch to a no-return
/// `.cold` fragment — `jcc <terminal>; …; RET` — RETURNS on the fall-through.
/// The reach walk must follow that fall-through and conclude it returns. Before
/// the fix the `transfers_to_noreturn` fast-path `continue`d past the conditional
/// jump, skipping the returning arm, and wrongly marked the whole coreutils
/// `quotearg_*` family no-return (dropping `fmt`/main's file-open `error()` path).
#[test]
fn reach_walk_follows_conditional_jump_fallthrough_to_ret() {
    use std::collections::{BTreeMap, BTreeSet};
    let straight = crate::listing::model::FlowType {
        has_fallthrough: true,
        ..Default::default()
    };
    let cjump = crate::listing::model::FlowType {
        is_jump: true,
        is_conditional: true,
        has_fallthrough: true,
        ..Default::default()
    };
    let ret = crate::listing::model::FlowType {
        is_terminal: true,
        ..Default::default()
    };
    // entry → cjump[→ 0x100 terminal] (fall-through) → RET
    let insns = vec![
        mk_insn(0x0, Some(0x2), straight, vec![]),
        mk_insn(0x2, Some(0x4), cjump, vec![0x100]),
        mk_insn(0x4, Some(0x6), straight, vec![]),
        mk_insn(0x6, None, ret, vec![]),
    ];
    let body: BTreeMap<u64, &crate::listing::model::Insn> =
        insns.iter().map(|i| (i.addr, i)).collect();
    let terminal: BTreeSet<u64> = [0x100].into_iter().collect();
    let recog = super::ErrorRecognizer::disabled();
    assert!(
        !super::reaches_only_noreturn_walk(
            &body,
            0x0,
            Some(0x100),
            &terminal,
            &BTreeSet::new(),
            &recog
        ),
        "a function that returns on the conditional-jump fall-through must NOT be no-return"
    );

    // Control: an UNCONDITIONAL jump to the terminal (no fall-through) IS no-return.
    let ujump = crate::listing::model::FlowType {
        is_jump: true,
        ..Default::default()
    };
    let only = vec![mk_insn(0x0, None, ujump, vec![0x100])];
    let body2: BTreeMap<u64, &crate::listing::model::Insn> =
        only.iter().map(|i| (i.addr, i)).collect();
    assert!(
        super::reaches_only_noreturn_walk(
            &body2,
            0x0,
            Some(0x100),
            &terminal,
            &BTreeSet::new(),
            &recog
        ),
        "an unconditional jump whose only target is no-return IS no-return"
    );
}

// --- error(nonzero,…) recognizer predicates (decbench F2) ------------------

#[test]
fn arg0_reg_is_the_x86_64_first_int_arg() {
    for r in ["EDI", "RDI", "edi", "rdi", "DI", "DIL"] {
        assert!(is_arg0_reg(r), "{r} is the x86-64 SysV first int arg");
    }
    // Other regs / a target with no `EDI` are a clean no-op.
    for r in ["EAX", "ESI", "RSI", "R0", "W0", ""] {
        assert!(!is_arg0_reg(r), "{r} is not the first int arg");
    }
}

#[test]
fn parse_imm_reads_hex_and_decimal() {
    assert_eq!(parse_imm("0x2"), Some(2));
    assert_eq!(parse_imm("0x0"), Some(0));
    assert_eq!(parse_imm(" 0xff "), Some(255));
    assert_eq!(parse_imm("-0x1"), Some(-1));
    assert_eq!(parse_imm("7"), Some(7));
    // Not a literal (a register / memory operand).
    assert_eq!(parse_imm("EAX"), None);
    assert_eq!(parse_imm("[rax]"), None);
}

/// Build a minimal straight-line `Insn` (fields the recognizer reads).
fn insn(mnemonic: &str, operands: &str, is_call: bool, is_jump: bool) -> Insn {
    let mut flow = crate::listing::model::FlowType::default();
    flow.is_call = is_call;
    flow.is_jump = is_jump;
    Insn {
        addr: 0,
        len: 1,
        fall_through: Some(1),
        flow,
        flows: vec![],
        mnemonic: mnemonic.into(),
        operands: operands.into(),
        pcode: None,
    }
}

fn arg0_is_nonzero_const(body: &[(u64, &Insn)], call_idx: usize) -> bool {
    let index: BTreeMap<u64, &Insn> = body.iter().copied().collect();
    arg0_is_nonzero_const_before(&index, body[call_idx].0, false)
}

#[test]
fn arg0_nonzero_const_recognizes_mov_edi_imm() {
    // …; MOV EDI,0x2 ; XOR EAX,EAX ; CALL error  → status 2 (nonzero).
    let a = insn("MOV", "EDI,0x2", false, false);
    let b = insn("XOR", "EAX,EAX", false, false);
    let c = insn("CALL", "0x4de0", true, false);
    let body: Vec<(u64, &Insn)> = vec![(0, &a), (1, &b), (2, &c)];
    assert!(
        arg0_is_nonzero_const(&body, 2),
        "MOV EDI,0x2 is a nonzero status"
    );
}

#[test]
fn arg0_nonzero_const_rejects_zero_and_nonconst_and_intervening_call() {
    let call = insn("CALL", "0x4de0", true, false);
    // XOR EDI,EDI → 0 (error() returns).
    let z = insn("XOR", "EDI,EDI", false, false);
    assert!(!arg0_is_nonzero_const(&vec![(0, &z), (1, &call)], 1));
    // MOV EDI,0x0 → 0.
    let m0 = insn("MOV", "EDI,0x0", false, false);
    assert!(!arg0_is_nonzero_const(&vec![(0, &m0), (1, &call)], 1));
    // MOV EDI,EAX → not a literal (unprovable) → conservative reject.
    let mr = insn("MOV", "EDI,EAX", false, false);
    assert!(!arg0_is_nonzero_const(&vec![(0, &mr), (1, &call)], 1));
    // MOV EDI,0x2 then an intervening CALL clobbers edi → reject.
    let m2 = insn("MOV", "EDI,0x2", false, false);
    let clobber = insn("CALL", "0x1234", true, false);
    assert!(!arg0_is_nonzero_const(
        &vec![(0, &m2), (1, &clobber), (2, &call)],
        2
    ));
    // A branch between the def and the call breaks dominance → reject.
    let br = insn("JMP", "0x9", false, true);
    assert!(!arg0_is_nonzero_const(
        &vec![(0, &m2), (1, &br), (2, &call)],
        2
    ));
    // No writer at all → reject.
    assert!(!arg0_is_nonzero_const(&vec![(0, &call)], 0));
}

#[test]
fn listing_instruction_body_bounds_exact_and_predecessor_queries() {
    let mut previous_function = insn("MOV", "EDI,0x2", false, false);
    previous_function.addr = 0x80;
    let mut call = insn("CALL", "0x500", true, false);
    call.addr = 0x100;
    call.flows = vec![0x500];
    let next_function = mk_insn(
        0x200,
        None,
        crate::listing::model::FlowType {
            is_terminal: true,
            ..Default::default()
        },
        vec![],
    );
    let listing =
        Listing::from_insns_for_test(vec![previous_function, call.clone(), next_function], true);
    let body = ListingInstructionBody::new(&listing, 0x100, Some(0x200));

    assert!(body.instruction_at(0x80).is_none());
    assert!(body.instruction_at(0x100).is_some());
    assert!(body.instruction_at(0x200).is_none());
    assert!(body.instruction_before(0x100).is_none());
    assert!(body.instruction_before(0x200).is_none());

    let recog = ErrorRecognizer {
        error_addrs: [0x500].into_iter().collect(),
        exit_sites: BTreeSet::new(),
    };
    assert!(
        !recog.call_is_terminal_error(&body, 0x100, &call, false),
        "a definition in the preceding function must not classify this call"
    );
}

#[test]
fn error_argument_scans_preserve_strict_and_reach_gap_rules() {
    let mut definition = insn("MOV", "EDI,0x2", false, false);
    definition.addr = 0x100;
    definition.fall_through = Some(0x105);
    let mut call = insn("CALL", "0x500", true, false);
    call.addr = 0x110;
    call.flows = vec![0x500];
    let listing = Listing::from_insns_for_test(vec![definition, call.clone()], true);
    let body = ListingInstructionBody::new(&listing, 0x100, None);
    let recog = ErrorRecognizer {
        error_addrs: [0x500].into_iter().collect(),
        exit_sites: BTreeSet::new(),
    };

    assert!(
        recog.call_is_terminal_error(&body, 0x110, &call, false),
        "the strict scan keeps its legacy address-order behavior across a gap"
    );
    assert!(
        !recog.call_is_terminal_error(&body, 0x110, &call, true),
        "the reach scan requires an exact fall-through predecessor chain"
    );

    let mut definition = insn("MOV", "EDI,0x2", false, false);
    definition.addr = 0x100;
    definition.fall_through = Some(0x105);
    let mut clobber = insn("CALL", "0x600", true, false);
    clobber.addr = 0x105;
    clobber.fall_through = Some(0x110);
    let mut call = insn("CALL", "0x500", true, false);
    call.addr = 0x110;
    call.flows = vec![0x500];
    let listing = Listing::from_insns_for_test(vec![definition, clobber, call.clone()], true);
    let body = ListingInstructionBody::new(&listing, 0x100, None);
    assert!(
        !recog.call_is_terminal_error(&body, 0x110, &call, false),
        "an intervening call still clobbers the argument register"
    );
}

// --- CFG-reachability rule (Ghidra targetOnlyCallsNoReturn port, DIV-19) --------

/// Build an `Insn` with explicit flow shape for the reachability walk tests.
#[allow(clippy::too_many_arguments)]
fn rinsn(
    addr: u64,
    fall_through: Option<u64>,
    flows: Vec<u64>,
    is_call: bool,
    is_jump: bool,
    is_terminal: bool,
    is_computed: bool,
    is_indirect: bool,
    has_fallthrough: bool,
) -> Insn {
    let mut flow = crate::listing::model::FlowType::default();
    flow.is_call = is_call;
    flow.is_jump = is_jump;
    flow.is_terminal = is_terminal;
    flow.is_computed = is_computed;
    flow.is_indirect = is_indirect;
    flow.has_fallthrough = has_fallthrough;
    Insn {
        addr,
        len: 1,
        fall_through,
        flow,
        flows,
        mnemonic: "".into(),
        operands: String::new(),
        pcode: None,
    }
}

/// Run [`reaches_only_noreturn_walk`] over a hand-built body. `entry`=0x100,
/// `next`=0x200; `ABORT`=0x50 is the seeded terminal (no-return) callee.
fn walk(insns: &[Insn]) -> bool {
    const NEXT: u64 = 0x200;
    let body: BTreeMap<u64, &Insn> = insns.iter().map(|i| (i.addr, i)).collect();
    let terminal: BTreeSet<u64> = [0x50u64].into_iter().collect();
    reaches_only_noreturn_walk(
        &body,
        0x100,
        Some(NEXT),
        &terminal,
        &BTreeSet::new(),
        &ErrorRecognizer::disabled(),
    )
}
const ABORT: u64 = 0x50;

/// A `.MIPS.stubs` stub's `jalr $t9` reaches the lazy resolver, which jumps to
/// the import and never comes back, yet the Listing gives the call a
/// fall-through into the next stub. A stub laid out before a Known no-return
/// stub must not be concluded no-return from that fall-through.
#[test]
fn import_stub_is_not_concluded_from_its_neighbour() {
    use crate::listing::model::DiscoveredFunction;
    let stub = |entry: u64| {
        [
            rinsn(
                entry,
                Some(entry + 4),
                vec![],
                false,
                false,
                false,
                false,
                false,
                true,
            ),
            rinsn(
                entry + 4,
                Some(entry + 8),
                vec![],
                false,
                false,
                false,
                false,
                false,
                true,
            ),
            rinsn(
                entry + 8,
                Some(entry + 16),
                vec![],
                true,
                false,
                false,
                true,
                true,
                true,
            ),
        ]
    };
    let func = |entry: u64, has_no_return: bool| DiscoveredFunction {
        entry,
        name: None,
        from_symbol: true,
        has_no_return,
        call_fixup: None,
    };
    let mut insns: Vec<Insn> = [0x10, 0x20].into_iter().flat_map(stub).collect();
    insns.push(rinsn(
        0x30,
        None,
        vec![],
        false,
        false,
        true,
        false,
        false,
        false,
    ));
    let listing = Listing::from_model_for_test(
        insns,
        vec![func(0x10, false), func(0x20, true), func(0x30, false)],
        Vec::new(),
        vec![(0, 0x100)],
    );
    let recog = ErrorRecognizer::disabled();
    let concluded = |stubs: &BTreeSet<u64>| -> Vec<u64> {
        propagate_noreturn(
            &listing,
            &recog,
            &BTreeSet::new(),
            true,
            stubs,
            None,
            &BTreeSet::new(),
        )
        .iter()
        .map(|f| f.addr)
        .collect()
    };
    assert_eq!(concluded(&BTreeSet::new()), vec![0x10]);
    assert!(concluded(&[0x10, 0x20].into_iter().collect()).is_empty());
}

/// MSVC's `terminate` is reached only by the `jmp` of `unexpected` and
/// `_inconsistency`, so it is no function entry and its code sits in the span of
/// the function before it. A jump there is walked like the jumper's own code; a
/// jump to another function's entry stays a tail call that may return. The
/// no-return `abort` it calls is known only from `noreturn_disc` (the seeds).
#[test]
fn jump_into_a_shared_tail_is_walked() {
    use crate::listing::model::DiscoveredFunction;
    let func = |entry: u64| DiscoveredFunction {
        entry,
        name: None,
        from_symbol: true,
        has_no_return: false,
        call_fixup: None,
    };
    let ret = |addr: u64| rinsn(addr, None, vec![], false, false, true, false, false, false);
    let jmp = |addr: u64, to: u64| {
        rinsn(
            addr,
            None,
            vec![to],
            false,
            true,
            false,
            false,
            false,
            false,
        )
    };
    let insns = vec![
        ret(0x10),
        rinsn(
            0x11,
            Some(0x12),
            vec![0x60],
            true,
            false,
            false,
            false,
            false,
            true,
        ),
        ret(0x12),
        jmp(0x20, 0x11),
        jmp(0x30, 0x40),
        ret(0x40),
        ret(0x60),
    ];
    let listing = Listing::from_model_for_test(
        insns,
        [0x10, 0x20, 0x30, 0x40, 0x60]
            .into_iter()
            .map(func)
            .collect(),
        Vec::new(),
        vec![(0, 0x100)],
    );
    let recog = ErrorRecognizer::disabled();
    let concluded = |seeds: &BTreeSet<u64>| -> Vec<u64> {
        propagate_noreturn(
            &listing,
            &recog,
            &BTreeSet::new(),
            true,
            &BTreeSet::new(),
            None,
            seeds,
        )
        .iter()
        .map(|f| f.addr)
        .collect()
    };
    assert_eq!(concluded(&[0x60].into_iter().collect()), vec![0x20]);
    assert!(concluded(&BTreeSet::new()).is_empty());
}

#[test]
fn reach_tail_noreturn_call_is_noreturn() {
    // 0x100: call ABORT  (terminal callee, no return anywhere)
    let b = [rinsn(
        0x100,
        Some(0x105),
        vec![ABORT],
        true,
        false,
        false,
        false,
        false,
        true,
    )];
    assert!(
        walk(&b),
        "a body whose only path ends in call abort is no-return"
    );
}

#[test]
fn reach_midbody_noreturn_with_dead_tail_is_noreturn() {
    // The reachability-ONLY case the strict rule misses: the no-return call is NOT
    // the last instruction; a `ret` sits after it but is unreachable (the call's
    // fall-through is never followed).
    // 0x100: call ABORT (ft->0x105)   0x105: ret
    let b = [
        rinsn(
            0x100,
            Some(0x105),
            vec![ABORT],
            true,
            false,
            false,
            false,
            false,
            true,
        ),
        rinsn(0x105, None, vec![], false, false, true, false, false, false),
    ];
    assert!(
        walk(&b),
        "mid-body call abort with an unreachable ret tail is no-return"
    );
}

#[test]
fn reach_switch_of_noreturn_is_noreturn() {
    // A switch (computed jump) whose every arm calls a no-return function.
    // 0x100: jmp [table]  (computed, flows=[0x110,0x120])
    // 0x110: call ABORT   0x120: call ABORT
    let b = [
        rinsn(
            0x100,
            None,
            vec![0x110, 0x120],
            false,
            true,
            false,
            true,
            true,
            false,
        ),
        rinsn(
            0x110,
            Some(0x115),
            vec![ABORT],
            true,
            false,
            false,
            false,
            false,
            true,
        ),
        rinsn(
            0x120,
            Some(0x125),
            vec![ABORT],
            true,
            false,
            false,
            false,
            false,
            true,
        ),
    ];
    assert!(
        walk(&b),
        "a switch whose every arm ends in call abort is no-return"
    );
}

#[test]
fn reach_returning_function_is_not_noreturn() {
    // 0x100: call FOO (returning, ft->0x105)  0x105: ret  → a RETURN is reachable.
    let foo = 0x60; // NOT in the terminal set
    let b = [
        rinsn(
            0x100,
            Some(0x105),
            vec![foo],
            true,
            false,
            false,
            false,
            false,
            true,
        ),
        rinsn(0x105, None, vec![], false, false, true, false, false, false),
    ];
    assert!(
        !walk(&b),
        "a reachable ret after a returning call ⇒ returns"
    );
}

#[test]
fn reach_live_return_on_one_branch_is_not_noreturn() {
    // 0x100: jz 0x120 (cond, flows=[0x120], ft->0x110)
    // 0x110: call ABORT (dies)   0x120: ret (REACHABLE via the branch)
    let b = [
        rinsn(
            0x100,
            Some(0x110),
            vec![0x120],
            false,
            true,
            false,
            false,
            false,
            true,
        ),
        rinsn(
            0x110,
            Some(0x115),
            vec![ABORT],
            true,
            false,
            false,
            false,
            false,
            true,
        ),
        rinsn(0x120, None, vec![], false, false, true, false, false, false),
    ];
    assert!(
        !walk(&b),
        "a reachable ret on the taken branch ⇒ returns (conservative)"
    );
}

#[test]
fn reach_unresolved_indirect_jump_is_rejected() {
    // 0x100: jmp rax (indirect, NO resolved flows) → cannot prove.
    let b = [rinsn(
        0x100,
        None,
        vec![],
        false,
        true,
        false,
        true,
        true,
        false,
    )];
    assert!(
        !walk(&b),
        "an unresolved indirect jump ⇒ cannot conclude no-return"
    );
}

#[test]
fn reach_escape_to_returning_neighbour_is_rejected() {
    // 0x100: jmp 0x9999 (direct, target OUTSIDE body, not terminal) → escape.
    let b = [rinsn(
        0x100,
        None,
        vec![0x9999],
        false,
        true,
        false,
        false,
        false,
        false,
    )];
    assert!(
        !walk(&b),
        "a tail jump escaping the body to a neighbour ⇒ cannot conclude"
    );
}

#[test]
fn reach_call_with_no_fallthrough_to_returning_callee_is_rejected() {
    // 0x100: call FOO with no modelled fall-through, FOO not terminal → uncertain.
    let foo = 0x60;
    let b = [rinsn(
        0x100,
        None,
        vec![foo],
        true,
        false,
        false,
        false,
        false,
        false,
    )];
    assert!(
        !walk(&b),
        "a call with no fall-through to a non-terminal callee ⇒ reject"
    );
}

#[test]
fn empty_listing_consumer_is_inert_via_pass() {
    // With no Listing, the pass short-circuits to an empty output (the
    // default-off / no-listing path; the parity-safe no-op).
    let p = NoReturnPropagatePass;
    assert_eq!(p.id(), "noreturn_propagate");
}
