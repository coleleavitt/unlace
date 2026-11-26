//! (unlace) `jumptablework`: a bound on the jump-table recovery one function's
//! flow may do.
//!
//! Each indirect jump the flow meets is recovered by a partial decompile of
//! everything flowed so far, so a function whose recovered tables lead into
//! more code with more dispatches pays for every instruction again at each
//! one. An obfuscated arm64e image that dispatches every branch through a
//! shared table of signed pointers (`braa` on an entry indexed by
//! `(cond * k) ^ c`) flows a 972-byte function past 20,000 instructions this
//! way and never finishes. The work of one recovery is the number of
//! instructions flowed when it starts; once the sum passes the limit, the
//! remaining indirect jumps of the function are not recovered and print as
//! computed calls, with one warning.

use unlace_base::error::{UnlaceError, UnlaceResult};

/// The default bound, in instructions summed over the recoveries.
pub const DEFAULT_LIMIT: u64 = 250_000;

/// The `jumptablework` setting: the recovery work bound, or none.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct JumpTableWork(pub Option<u64>);

impl crate::optionset::UnlaceOption for JumpTableWork {
    const NAME: &'static str = "jumptablework";
    crate::unlace_option_id!();

    fn unset() -> Self {
        JumpTableWork(None)
    }

    fn shipped() -> Self {
        JumpTableWork(Some(DEFAULT_LIMIT))
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        OptionJumpTableWork
            .apply(value)
            .map(|(v, msg)| (JumpTableWork(v), msg))
    }
}

/// The `jumptablework off|<n>` option (the registered option `JumpTableWork`).
pub struct OptionJumpTableWork;

impl OptionJumpTableWork {
    /// The option name.
    pub const NAME: &'static str = "jumptablework";

    /// Resolve the bound (`None` for `off`) and its confirmation message.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(Option<u64>, String)> {
        let field = p1.trim();
        if field == "off" {
            return Ok((
                None,
                "Jump-table recovery work bound turned off".to_string(),
            ));
        }
        let n = field
            .parse::<u64>()
            .ok()
            .filter(|_| !field.is_empty() && field.bytes().all(|b| b.is_ascii_digit()))
            .ok_or_else(|| UnlaceError::parse("Must specify off or a decimal instruction count"))?;
        Ok((
            Some(n),
            format!("Jump-table recovery stops after {n} instructions of work"),
        ))
    }
}

/// Is `spent` past `limit` (the resolved option)?
pub fn exhausted(limit: Option<u64>, spent: u64) -> bool {
    limit.is_some_and(|limit| spent > limit)
}

#[cfg(test)]
mod tests;
