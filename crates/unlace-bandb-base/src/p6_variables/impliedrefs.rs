//! (unlace) `impliedrefs` / `termdup` — the two thresholds that decide whether a
//! computed value gets its own declared local or is inlined into every use.
//!
//! `ActionMarkExplicit` (`coreaction.cc:3340`, ported in
//! [`coreaction_cleanup`](crate::coreaction_cleanup)) asks two
//! numeric questions about every non-free Varnode:
//!
//! * `baseExplicit` counts the value's descendants and forces it explicit once
//!   the count exceeds `Architecture::max_implied_ref`, so a value read more
//!   times than that bound becomes a declared variable rather than a repeated
//!   sub-expression.
//! * `processMultiplier` walks the expression behind a value that survived with
//!   more than one descendant and forces it explicit once the number of terminal
//!   terms that would be duplicated at each use exceeds
//!   `Architecture::max_term_duplication`.
//!
//! Both bounds ship at 2, the value upstream's own comments call "best, in
//! specific cases a higher number might be good" and "2 and 3 (4) are
//! reasonable", and until now neither was reachable from a command. These two
//! options expose them as integers so a caller can trade declaration count
//! against expression depth per run.
//!
//! `max_implied_ref` is a program-wide tunable, not a private constant of the
//! explicit-marking pass: `BlockBasic::isComplex`
//! ([`Funcdata::bb_is_complex`](crate::funcdata_block)) and
//! [`unlace_condfold`](crate::condfold) read the same field to
//! decide how many printed statements a condition block may carry. Raising
//! `impliedrefs` therefore also loosens those two structure tests, exactly as it
//! does upstream when the field is edited by hand.

use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::types::int4;

/// The largest bound either option accepts.
///
/// `baseExplicit` already uses 1,000,000 as its "never explicit" sentinel for a
/// spacebase PTRSUB, so nothing above it can mean anything new; refusing the
/// rest keeps a typo (`option impliedrefs 200000000`) from silently asking for a
/// budget the pass cannot distinguish from infinity.
pub const MAX_BOUND: int4 = 1_000_000;

/// Parse the shared integer parameter of `impliedrefs` / `termdup`.
///
/// Strict on purpose: unlike the upstream `istringstream >> int` helper the
/// other numeric options use, a field that is not wholly decimal digits is an
/// error rather than a silent zero, so `option impliedrefs wide` is reported
/// instead of quietly asking for "declare everything".
fn parse_bound(p1: &str, what: &str) -> UnlaceResult<int4> {
    let field = p1.trim();
    if field.is_empty() {
        return Err(UnlaceError::parse(format!("Must specify {what}")));
    }
    let val = match field.parse::<int4>() {
        Ok(v) if field.bytes().all(|b| b.is_ascii_digit()) => v,
        _ => {
            return Err(UnlaceError::parse(format!(
                "Bad {what}: {p1:?} is not a decimal count"
            )));
        }
    };
    if val > MAX_BOUND {
        return Err(UnlaceError::parse(format!(
            "Bad {what}: {val} exceeds the {MAX_BOUND} ceiling"
        )));
    }
    Ok(val)
}

/// The `impliedrefs <n>` ArchOption: how many times a computed value may be read
/// and still be inlined at each use (C++ `Architecture::max_implied_ref`).
pub struct OptionImpliedRefs;

impl OptionImpliedRefs {
    /// The option name.
    pub const NAME: &'static str = "impliedrefs";

    /// Parse the descendant bound into the value written to
    /// `Architecture::max_implied_ref`, plus a confirmation message.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(int4, String)> {
        let val = parse_bound(p1, "implied-reference bound")?;
        Ok((val, format!("Implied-reference bound set to {val}")))
    }
}

/// The `termdup <n>` ArchOption: how many terminal terms one expression may
/// duplicate at each use before the value is declared instead (C++
/// `Architecture::max_term_duplication`).
pub struct OptionTermDup;

impl OptionTermDup {
    /// The option name.
    pub const NAME: &'static str = "termdup";

    /// Parse the term-duplication bound into the value written to
    /// `Architecture::max_term_duplication`, plus a confirmation message.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(int4, String)> {
        let val = parse_bound(p1, "term-duplication bound")?;
        Ok((val, format!("Term-duplication bound set to {val}")))
    }
}

#[cfg(test)]
mod tests;
