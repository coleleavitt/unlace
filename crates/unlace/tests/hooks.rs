//! `unlace::unstable`: a rule and phase callbacks registered on a `Decompiler`
//! reach its output, and inert ones leave it alone (needs the checkout's
//! `specs/`, as every workspace integration test does).

use std::cell::RefCell;
use std::rc::Rc;

use unlace::unstable::hooks::{
    ActionGroupList, DecompilerHooks, Funcdata, OpCode, OpId, Rule, RuleState, UnlacePhase,
    VarnodeId, rule_groups,
};
use unlace::{Decompiler, Error, Target};

/// `mix` at 0x1000: `mov eax, edi; or eax, esi; and edi, esi; add eax, edi; ret`,
/// which is `(a | b) + (a & b)`.
fn blob() -> Vec<u8> {
    let mut bytes = vec![0xcc; 0x10];
    bytes[..9].copy_from_slice(&[0x89, 0xf8, 0x09, 0xf0, 0x21, 0xf7, 0x01, 0xf8, 0xc3]);
    bytes
}

fn mix() -> Decompiler {
    let sysv = Target::new("x86:LE:64:default:gcc");
    Decompiler::from_raw(blob(), sysv, 0x1000, &[], &[0x1000])
        .unwrap()
        .with_function(0x1000, Some(0x1009), Some("mix"))
        .with_prototype(0x1000, "int mix(int a, int b)")
}

/// `(x | y) + (x & y)  =>  x + y`, a fold the default pools do not have.
struct OrAndSum;

impl OrAndSum {
    fn operands(data: &Funcdata, vn: VarnodeId, code: OpCode) -> Option<(VarnodeId, VarnodeId)> {
        let op = data.obank().get(data.vbank().get(vn)?.get_def()?)?;
        (op.code() == code).then_some((op.get_in(0)?, op.get_in(1)?))
    }
}

impl Rule for OrAndSum {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_ADD]
    }
    fn clone_rule(&self, groups: &ActionGroupList) -> Option<Box<dyn Rule>> {
        groups
            .contains("analysis")
            .then(|| Box::new(OrAndSum) as Box<dyn Rule>)
    }
    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> i32 {
        let Some(add) = data.obank().get(op) else {
            return 0;
        };
        let (Some(lhs), Some(rhs)) = (add.get_in(0), add.get_in(1)) else {
            return 0;
        };
        let pair = |first, second| {
            let or = Self::operands(data, first, OpCode::CPUI_INT_OR)?;
            let and = Self::operands(data, second, OpCode::CPUI_INT_AND)?;
            (or == and || or == (and.1, and.0)).then_some(or)
        };
        let Some((x, y)) = pair(lhs, rhs).or_else(|| pair(rhs, lhs)) else {
            return 0;
        };
        data.op_set_input(op, x, 0).expect("slot 0");
        data.op_set_input(op, y, 1).expect("slot 1");
        1
    }
}

/// `x >> (n & 0x3f)  =>  x >> n` for a 64-bit `x`: the processor masks the
/// count of a 64-bit shift itself.
struct ShiftMask;

impl Rule for ShiftMask {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_RIGHT]
    }
    fn clone_rule(&self, groups: &ActionGroupList) -> Option<Box<dyn Rule>> {
        groups
            .contains("analysis")
            .then(|| Box::new(ShiftMask) as Box<dyn Rule>)
    }
    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> i32 {
        let Some(shift) = data.obank().get(op) else {
            return 0;
        };
        let (Some(value), Some(count)) = (shift.get_in(0), shift.get_in(1)) else {
            return 0;
        };
        let Some((n, mask)) = OrAndSum::operands(data, count, OpCode::CPUI_INT_AND) else {
            return 0;
        };
        let size = |vn| data.vbank().get(vn).map(|vn| vn.get_size());
        let six_bits = data
            .vbank()
            .get(mask)
            .is_some_and(|mask| mask.is_constant() && mask.get_offset() == 0x3f);
        if size(value) != Some(8) || !six_bits {
            return 0;
        }
        data.op_set_input(op, n, 1).expect("slot 1");
        1
    }
}

#[test]
fn a_rule_fires_on_a_function_of_a_real_binary() {
    let fixture = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/../unlace-analysis/tests/fixtures/array_index_x86_64"
    );
    let mut plain = Decompiler::open(fixture).unwrap();
    let mut ruled = Decompiler::open(fixture)
        .unwrap()
        .with_rule(
            "analysis",
            RuleState::new("analysis", 0, "shiftmask"),
            ShiftMask,
        )
        .unwrap();
    // `right_context` shifts a 64-bit value right by a masked count.
    let before = plain.decompile_named("right_context").unwrap().c;
    assert!(
        before.contains("7L >> ((unsigned char)shift & 0x3f)"),
        "{before}"
    );
    let after = ruled.decompile_named("right_context").unwrap().c;
    assert!(after.contains("7L >> (signed char)shift"), "{after}");
    // `signed_context` shifts arithmetically, which the rule leaves alone.
    assert_eq!(
        plain.decompile_named("signed_context").unwrap().c,
        ruled.decompile_named("signed_context").unwrap().c
    );
}

/// A rule that looks at every op and changes none.
struct Inert;

impl Rule for Inert {
    fn clone_rule(&self, groups: &ActionGroupList) -> Option<Box<dyn Rule>> {
        groups
            .contains("cleanup")
            .then(|| Box::new(Inert) as Box<dyn Rule>)
    }
    fn apply_op(&mut self, _op: OpId, _data: &mut Funcdata) -> i32 {
        0
    }
}

fn or_and_sum(decompiler: Decompiler) -> Decompiler {
    decompiler
        .with_rule(
            "analysis",
            RuleState::new("analysis", 0, "orandsum"),
            OrAndSum,
        )
        .unwrap()
}

#[test]
fn a_registered_rule_rewrites_the_function() {
    let plain = mix().decompile(0x1000).unwrap().c;
    assert!(plain.contains("(a | b) + (a & b)"), "{plain}");

    let mut hooked = or_and_sum(mix());
    let folded = hooked.decompile(0x1000).unwrap().c;
    assert!(folded.contains("return a + b;"), "{folded}");

    // A later builder call loads again, and the rule is registered on that load too.
    let mut reloaded = hooked.with_option("ctypes", "on");
    let again = reloaded.decompile(0x1000).unwrap().c;
    assert!(again.contains("a + b") && !again.contains('|'), "{again}");
}

#[test]
fn a_phase_callback_sees_the_function_at_each_boundary() {
    let seen = Rc::new(RefCell::new(Vec::new()));
    let mut decompiler = mix();
    // Registered out of order: the schedule decides when each one runs.
    for phase in [
        UnlacePhase::P8,
        UnlacePhase::P3,
        UnlacePhase::P2,
        UnlacePhase::P6,
        UnlacePhase::P5,
        UnlacePhase::P7,
        UnlacePhase::P4,
    ] {
        let seen = Rc::clone(&seen);
        decompiler = decompiler
            .with_phase_hook(phase, move |data| {
                seen.borrow_mut().push((
                    phase,
                    data.get_name().to_string(),
                    data.maturity().name(),
                    data.is_high_on(),
                ));
            })
            .unwrap();
    }
    decompiler.decompile(0x1000).unwrap();
    let mix = |phase, maturity, highs| (phase, "mix".to_string(), maturity, highs);
    assert_eq!(
        *seen.borrow(),
        [
            mix(UnlacePhase::P2, "lifted", false),
            mix(UnlacePhase::P3, "band-b", false),
            mix(UnlacePhase::P4, "band-b", false),
            mix(UnlacePhase::P5, "band-b", false),
            mix(UnlacePhase::P6, "merged", true),
            mix(UnlacePhase::P7, "structured", true),
            mix(UnlacePhase::P8, "casts", true),
        ]
    );
}

#[test]
fn an_edit_before_ssa_goes_through_the_whole_pipeline() {
    let flip = |from: OpCode, to: OpCode| {
        move |data: &mut Funcdata| {
            let ops: Vec<OpId> = data.obank().iter_alive().collect();
            for op in ops {
                if data.obank().get(op).is_some_and(|o| o.code() == from) {
                    data.op_set_opcode_code(op, to);
                }
            }
        }
    };
    let mut flipped = mix()
        .with_phase_hook(
            UnlacePhase::P2,
            flip(OpCode::CPUI_INT_OR, OpCode::CPUI_INT_XOR),
        )
        .unwrap();
    let c = flipped.decompile(0x1000).unwrap().c;
    assert!(c.contains("return (a ^ b) + (a & b);"), "{c}");

    // A zero in place of the 32-bit AND's second input: the pools fold the rest away.
    let mut zeroed = mix()
        .with_phase_hook(UnlacePhase::P2, |data| {
            let ops: Vec<OpId> = data.obank().iter_alive().collect();
            for op in ops {
                let wide_and = data.obank().get(op).is_some_and(|o| {
                    o.code() == OpCode::CPUI_INT_AND
                        && o.get_out()
                            .and_then(|out| data.vbank().get(out))
                            .is_some_and(|out| out.get_size() == 4)
                });
                if wide_and {
                    let zero = data.new_constant(4, 0);
                    data.op_set_input(op, zero, 1).expect("slot 1");
                }
            }
        })
        .unwrap();
    let c = zeroed.decompile(0x1000).unwrap().c;
    assert!(c.contains("return a | b;"), "{c}");
}

/// `OrAndSum` as a whole-function pass; `sweep` removes the OR and the AND
/// once nothing reads them.
fn fold_sums(data: &mut Funcdata, sweep: bool) {
    let ops: Vec<OpId> = data.obank().iter_alive().collect();
    for op in ops {
        let inputs = data
            .obank()
            .get(op)
            .filter(|add| add.code() == OpCode::CPUI_INT_ADD)
            .map(|add| (add.get_in(0), add.get_in(1)));
        if OrAndSum.apply_op(op, data) == 0 || !sweep {
            continue;
        }
        let Some((Some(lhs), Some(rhs))) = inputs else {
            continue;
        };
        for orphan in [lhs, rhs] {
            let def = data
                .vbank()
                .get(orphan)
                .filter(|vn| vn.has_no_descend())
                .and_then(|vn| vn.get_def());
            if let Some(def) = def {
                data.op_destroy(def);
            }
        }
    }
}

#[test]
fn a_change_after_the_main_loop_is_final() {
    let mut swept = mix()
        .with_phase_hook(UnlacePhase::P5, |data| fold_sums(data, true))
        .unwrap();
    let c = swept.decompile(0x1000).unwrap().c;
    assert!(c.contains("return a + b;") && !c.contains('|'), "{c}");

    // Nothing removes the unread OR and AND after the main loop: they print.
    let mut unswept = mix()
        .with_phase_hook(UnlacePhase::P5, |data| fold_sums(data, false))
        .unwrap();
    let c = unswept.decompile(0x1000).unwrap().c;
    assert!(c.contains("return a + b;"), "{c}");
    assert!(c.contains("= a | b;") && c.contains("= a & b;"), "{c}");
}

/// `caller` at 0x1000 (`mov rax, 0x1020; call rax; ret`) and `callee` at
/// 0x1020 (`mov eax, edi; ret`). Declared no-return, the callee makes the
/// pipeline restart on the caller once the indirect call is resolved to it.
fn restarting() -> Decompiler {
    let mut bytes = vec![0xcc; 0x30];
    bytes[..10].copy_from_slice(&[0x48, 0xc7, 0xc0, 0x20, 0x10, 0x00, 0x00, 0xff, 0xd0, 0xc3]);
    bytes[0x20..0x23].copy_from_slice(&[0x89, 0xf8, 0xc3]);
    let sysv = Target::new("x86:LE:64:default:gcc");
    Decompiler::from_raw(bytes, sysv, 0x1000, &[], &[0x1000, 0x1020])
        .unwrap()
        .with_function(0x1000, Some(0x100a), Some("caller"))
        .with_function(0x1020, Some(0x1023), Some("callee"))
        .with_noreturn(0x1020)
}

#[test]
fn a_restart_runs_the_callbacks_again_on_the_rebuilt_function() {
    let seen = Rc::new(RefCell::new(Vec::new()));
    let mut decompiler = restarting();
    for phase in [UnlacePhase::P2, UnlacePhase::P5, UnlacePhase::P8] {
        let seen = Rc::clone(&seen);
        decompiler = decompiler
            .with_phase_hook(phase, move |data| {
                let count = |code| {
                    data.obank()
                        .iter_alive()
                        .filter(|op| data.obank().get(*op).is_some_and(|o| o.code() == code))
                        .count()
                };
                seen.borrow_mut().push((
                    phase,
                    count(OpCode::CPUI_CALLIND),
                    count(OpCode::CPUI_CALL),
                ));
            })
            .unwrap();
    }
    decompiler.decompile(0x1000).unwrap();
    // The first pass lifts the indirect call and resolves it; the restart
    // follows flow again and lifts a direct one.
    assert_eq!(
        *seen.borrow(),
        [
            (UnlacePhase::P2, 1, 0),
            (UnlacePhase::P5, 0, 1),
            (UnlacePhase::P8, 0, 1),
            (UnlacePhase::P2, 0, 1),
            (UnlacePhase::P5, 0, 1),
            (UnlacePhase::P8, 0, 1),
        ]
    );
}

#[test]
fn inert_hooks_leave_the_document_unchanged() {
    let plain = mix().decompile(0x1000).unwrap();
    let mut decompiler = mix()
        .with_rule("cleanup", RuleState::new("cleanup", 0, "inert"), Inert)
        .unwrap();
    for phase in [
        UnlacePhase::P2,
        UnlacePhase::P3,
        UnlacePhase::P4,
        UnlacePhase::P5,
        UnlacePhase::P6,
        UnlacePhase::P7,
        UnlacePhase::P8,
    ] {
        decompiler = decompiler.with_phase_hook(phase, |_| ()).unwrap();
    }
    let hooked = decompiler.decompile(0x1000).unwrap();
    assert_eq!(plain.c, hooked.c);
    assert_eq!(plain.json["functions"], hooked.json["functions"]);
}

#[test]
fn a_bad_registration_is_a_request_error() {
    let unknown = mix().with_rule(
        "nosuchgroup",
        RuleState::new("analysis", 0, "orandsum"),
        OrAndSum,
    );
    assert!(
        matches!(&unknown, Err(Error::Request(message)) if message.contains("nosuchgroup")),
        "{:?}",
        unknown.err()
    );
    // `OrAndSum` clones for `analysis` only, so it cannot be a `cleanup` rule.
    let foreign = mix().with_rule(
        "analysis",
        RuleState::new("cleanup", 0, "orandsum"),
        OrAndSum,
    );
    assert!(
        matches!(&foreign, Err(Error::Request(message)) if message.contains("orandsum")),
        "{:?}",
        foreign.err()
    );
    // A rule is addressed by its name: a built-in rule's is taken, and so is
    // the name of a rule added before.
    let builtin = mix().with_rule("cleanup", RuleState::new("cleanup", 0, "andmask"), Inert);
    assert!(
        matches!(&builtin, Err(Error::Request(message)) if message.contains("andmask")),
        "{:?}",
        builtin.err()
    );
    let twice = mix()
        .with_rule("cleanup", RuleState::new("cleanup", 0, "inert"), Inert)
        .unwrap()
        .with_rule("cleanup", RuleState::new("cleanup", 0, "inert"), Inert);
    assert!(
        matches!(&twice, Err(Error::Request(message)) if message.contains("inert")),
        "{:?}",
        twice.err()
    );
    for phase in [
        UnlacePhase::Infra,
        UnlacePhase::P0,
        UnlacePhase::P1,
        UnlacePhase::P9,
    ] {
        let refused = mix().with_phase_hook(phase, |_| ());
        assert!(matches!(refused, Err(Error::Request(_))), "{phase:?}");
    }
}

/// A rule that cannot handle the first INT_ADD it is offered.
struct Panics;

impl Rule for Panics {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_ADD]
    }
    fn clone_rule(&self, groups: &ActionGroupList) -> Option<Box<dyn Rule>> {
        groups
            .contains("analysis")
            .then(|| Box::new(Panics) as Box<dyn Rule>)
    }
    fn apply_op(&mut self, _op: OpId, _data: &mut Funcdata) -> i32 {
        panic!("no INT_ADD today")
    }
}

#[test]
fn a_panic_in_a_rule_or_a_callback_fails_the_function_it_ran_on() {
    let failed = |decompiler: &mut Decompiler, message: &str| {
        let error = decompiler.decompile(0x1000).unwrap_err();
        assert!(
            matches!(&error, Error::Decompile { name, reason, .. }
                if name == "mix" && reason.contains(message)),
            "{error}"
        );
    };
    let mut ruled = mix()
        .with_rule("analysis", RuleState::new("analysis", 0, "panics"), Panics)
        .unwrap();
    failed(&mut ruled, "no INT_ADD today");
    // The load is kept: the inventory still answers, and the function fails the same way.
    assert_eq!(ruled.functions().unwrap().len(), 1);
    failed(&mut ruled, "no INT_ADD today");

    let mut hooked = mix()
        .with_phase_hook(UnlacePhase::P5, |_| panic!("not at P5"))
        .unwrap();
    failed(&mut hooked, "not at P5");
}

/// The table in the module docs of `unlace::unstable::hooks`.
const DOCUMENTED_GROUPS: [(&str, &[&str]); 3] = [
    (
        "oppool1",
        &[
            "deadcode",
            "analysis",
            "nodejoin",
            "canonicalcompare",
            "subvar",
            "conditionalexe",
            "floatprecision",
            "typerecovery",
            "segment",
            "protorecovery",
            "doubleload",
            "doubleprecis",
        ],
    ),
    ("oppool2", &["stackvars"]),
    (
        "cleanup",
        &[
            "cleanup",
            "splitcopy",
            "splitpointer",
            "constsequence",
            "bitfields",
        ],
    ),
];

#[test]
fn every_documented_group_takes_a_rule() {
    let groups = rule_groups();
    let documented: Vec<(&str, String)> = DOCUMENTED_GROUPS
        .iter()
        .flat_map(|(pool, groups)| groups.iter().map(|group| (*pool, group.to_string())))
        .collect();
    assert_eq!(groups, documented);
    for (_, group) in &groups {
        mix()
            .with_rule(group, RuleState::new("cleanup", 0, "inert"), Inert)
            .unwrap_or_else(|error| panic!("{group}: {error}"));
    }
}
