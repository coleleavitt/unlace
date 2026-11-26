//! Add a rule and two phase callbacks to the default pipeline.
//!
//! ```sh
//! cargo run -p unlace --example custom_pass
//! ```
//!
//! The blob holds one function, `mix`, which computes `(a | b) + (a & b)`.
//! That is `a + b`, and no default rule knows it. The example decompiles the
//! function as it is, then with a rule that does the fold and two callbacks
//! that report what they see. `unlace::unstable::hooks` documents the
//! contract the rule and the callbacks run under.

use unlace::unstable::hooks::{
    ActionGroupList, Funcdata, OpCode, OpId, Rule, RuleState, UnlacePhase, VarnodeId,
};
use unlace::{Decompiler, Target};

/// `mov eax, edi; or eax, esi; and edi, esi; add eax, edi; ret`, padding.
const BLOB: [u8; 0x10] = [
    0x89, 0xf8, 0x09, 0xf0, 0x21, 0xf7, 0x01, 0xf8, 0xc3, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
];

/// `(x | y) + (x & y)  =>  x + y`.
struct OrAndSum;

impl OrAndSum {
    /// The two inputs of the op that writes `vn`, when its opcode is `code`.
    fn operands(data: &Funcdata, vn: VarnodeId, code: OpCode) -> Option<(VarnodeId, VarnodeId)> {
        let op = data.obank().get(data.vbank().get(vn)?.get_def()?)?;
        (op.code() == code).then_some((op.get_in(0)?, op.get_in(1)?))
    }
}

impl Rule for OrAndSum {
    /// The pool offers the rule these ops only.
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_ADD]
    }

    /// A pipeline variant keeps the rule when it runs the `analysis` group.
    fn clone_rule(&self, groups: &ActionGroupList) -> Option<Box<dyn Rule>> {
        groups
            .contains("analysis")
            .then(|| Box::new(OrAndSum) as Box<dyn Rule>)
    }

    /// Returns 1 after a rewrite and 0 when the op is not the pattern.
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
        // The OR and the AND lose their reader here; the main loop's dead-code
        // pass removes them.
        data.op_set_input(op, x, 0).expect("an INT_ADD has slot 0");
        data.op_set_input(op, y, 1).expect("an INT_ADD has slot 1");
        1
    }
}

fn mix() -> Result<Decompiler, unlace::Error> {
    let sysv = Target::new("x86:LE:64:default:gcc");
    Ok(Decompiler::from_raw(BLOB, sysv, 0x1000, &[], &[0x1000])?
        .with_function(0x1000, Some(0x1009), Some("mix"))
        .with_prototype(0x1000, "int mix(int a, int b)"))
}

fn main() -> Result<(), unlace::Error> {
    println!("// default pipeline\n{}\n", mix()?.decompile(0x1000)?.c);

    let mut decompiler = mix()?
        .with_rule(
            "analysis",
            RuleState::new("analysis", 0, "orandsum"),
            OrAndSum,
        )?
        .with_phase_hook(UnlacePhase::P2, |function| {
            let ops = function.obank().iter_alive().count();
            eprintln!("P2 {}: {ops} ops lifted", function.get_name());
        })?
        .with_phase_hook(UnlacePhase::P8, |function| {
            let ops = function.obank().iter_alive().count();
            eprintln!("P8 {}: {ops} ops left", function.get_name());
        })?;
    println!(
        "// with the orandsum rule\n{}",
        decompiler.decompile(0x1000)?.c
    );
    Ok(())
}
