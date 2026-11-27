//! (unlace) Which analysis warnings the printer writes: `option warnlevel
//! caveats|all`. No upstream Ghidra equivalent.
//!
//! A warning is either a caveat, telling the reader something the C does not show
//! (a call that never returns, an indirect jump whose targets were not recovered,
//! an inlined body), or narration of a rewrite made for readability (an if/else
//! whose arms were swapped, a jump printed as a tail call, a duplicated return, the
//! P8 passes' header counts), after which the C means the same as before. `all`
//! (the default) writes every warning. `caveats` leaves out the narration and two
//! caveats the statement already makes: `no-return` on a call to a known no-return function (`exit`, `abort`,
//! `__assert_fail`, the list `noreturn_known` reads), and `jump-as-call` on a jump
//! through one fixed slot or to a named function (a PLT stub's `jmp *slot`), which
//! cannot be a jump table whose cases went missing.
//!
//! The choice applies in both `warnstyle` forms. A warning left out is not written,
//! so the `--json` `warnings` list, which records what the render wrote, leaves it
//! out too.

use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_num::opcodes::OpCode;

use crate::fspec::FuncCallSpecs;
use crate::funcdata::Funcdata;
use crate::functionwarnings::Warning;

/// Warning kinds that narrate a readability rewrite.
const NARRATION: [&str; 9] = [
    "branch-flip",
    "tail-call",
    "return-dupe",
    "crossjump-dupe",
    "early-return",
    "switch-return",
    "ite-dedupe",
    "ternary",
    "else-flattened",
];

/// (unlace) Choose which warnings print: `warnlevel caveats|all`.
#[derive(Debug, Clone, Copy, Default)]
pub struct OptionWarnLevel;

impl OptionWarnLevel {
    /// The option name.
    pub const NAME: &'static str = "warnlevel";

    /// Parse the value: `true` when only caveats print. The caller writes the
    /// printer flag ([`crate::printc::PrintCOptions::warn_caveats`]).
    pub fn apply(&self, p1: &str) -> UnlaceResult<(bool, String)> {
        let caveats = match p1 {
            "caveats" => true,
            "all" => false,
            other => {
                return Err(UnlaceError::parse(format!(
                    "Unknown warnlevel value: {other} (expected caveats|all)"
                )));
            }
        };
        Ok((caveats, format!("Warning level set to {p1}")))
    }
}

/// Does a `caveats` render leave out the warning `text` recorded at `addr`?
/// `header` marks a function-header warning, which describes the whole function
/// rather than the call at its entry.
pub fn elided(fd: &Funcdata, text: &str, addr: &Address, header: bool) -> bool {
    let kind = Warning::new(Some(addr.get_offset()), text).kind();
    if is_narration(&kind) {
        return true;
    }
    if header {
        return false;
    }
    match kind.as_str() {
        "no-return" => call_at(fd, addr)
            .is_some_and(|fc| crate::noreturn_externmatch::is_known_noreturn_name(fc.get_name())),
        "jump-as-call" => call_at(fd, addr).is_some_and(|fc| fixed_target(fd, fc)),
        _ => false,
    }
}

/// Is `kind` (a [`Warning::kind`]) narration of a readability rewrite?
pub fn is_narration(kind: &str) -> bool {
    NARRATION.contains(&kind)
}

/// The live call at `addr`, which a call-site warning was recorded against.
fn call_at<'a>(fd: &'a Funcdata, addr: &Address) -> Option<&'a FuncCallSpecs> {
    (0..fd.num_calls())
        .map(|i| fd.get_call_specs(i))
        .find(|fc| {
            fd.obank()
                .get(fc.get_op())
                .is_some_and(|op| !op.is_dead() && op.get_addr() == addr)
        })
}

/// Does the call go to one target fixed by the code: a named or direct callee, a
/// constant, a global slot it reads, or a load from a constant address?
fn fixed_target(fd: &Funcdata, fc: &FuncCallSpecs) -> bool {
    if !fc.get_name().is_empty() {
        return true;
    }
    let Some(op) = fd.obank().get(fc.get_op()) else {
        return false;
    };
    if op.code() == OpCode::CPUI_CALL {
        return true;
    }
    let Some(target) = op.get_in(0).and_then(|vn| fd.vbank().get(vn)) else {
        return false;
    };
    if target.is_constant() {
        return true;
    }
    match target.get_def().and_then(|def| fd.obank().get(def)) {
        Some(def) => {
            def.code() == OpCode::CPUI_LOAD
                && def
                    .get_in(1)
                    .and_then(|ptr| fd.vbank().get(ptr))
                    .is_some_and(|ptr| ptr.is_constant())
        }
        None => target.is_persist(),
    }
}

#[cfg(test)]
#[path = "warnlevel/tests.rs"]
mod tests;
