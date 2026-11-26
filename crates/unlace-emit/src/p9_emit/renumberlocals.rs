//! Hex-Rays-style renumbering of synthetic locals (`option renumberlocals`).
//!
//! The naming pass spells an unnamed local `v<N>`. With `renumberlocals on` the
//! printer renumbers those spellings from `v1` in the order the locals are met,
//! so a function's synthetic locals read `v1, v2, ...` with no gaps. A spelling
//! another identifier of the function already holds is skipped. Names that are
//! not of the `v<N>` form (parameters, recovered names, stack names) are left alone.

use std::collections::{BTreeMap, BTreeSet};

use unlace_base::error::UnlaceResult;

use crate::options::on_or_off;

/// Whether `name` is a synthetic local spelling: `v` followed by decimal digits.
pub fn is_synthetic_local_name(name: &str) -> bool {
    name.strip_prefix('v')
        .is_some_and(|digits| !digits.is_empty() && digits.bytes().all(|b| b.is_ascii_digit()))
}

/// The renumbered spelling of each synthetic name in `names`, numbered in the order
/// names are first met. `reserved` holds identifiers the new spellings must avoid,
/// and `taken` reports identifiers owned outside the function, such as globals.
pub fn renumber_synthetic_locals<'a>(
    names: impl IntoIterator<Item = &'a str>,
    reserved: &BTreeSet<String>,
    taken: &dyn Fn(&str) -> bool,
) -> BTreeMap<String, String> {
    let mut mapping = BTreeMap::new();
    let mut next: u64 = 1;
    for name in names {
        if !is_synthetic_local_name(name) || mapping.contains_key(name) {
            continue;
        }
        let fresh = loop {
            let candidate = format!("v{next}");
            next += 1;
            if !reserved.contains(&candidate) && !taken(&candidate) {
                break candidate;
            }
        };
        mapping.insert(name.to_owned(), fresh);
    }
    mapping
}

/// (unlace) The `renumberlocals on|off` option.
#[derive(Debug, Clone, Copy, Default)]
pub struct OptionRenumberLocals;

impl OptionRenumberLocals {
    /// The option name.
    pub const NAME: &'static str = "renumberlocals";

    /// Parse + validate the `on`/`off` value and return the resolved flag plus the
    /// confirmation message.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(bool, String)> {
        let val = on_or_off(p1)?;
        let prop = if val { "on" } else { "off" };
        Ok((val, format!("Synthetic local renumbering turned {prop}")))
    }
}

/// The registered `renumberlocals` flag, off by default.
#[derive(Clone, Debug, PartialEq)]
pub struct RenumberLocals(pub bool);

impl crate::optionset::UnlaceOption for RenumberLocals {
    const NAME: &'static str = "renumberlocals";
    crate::unlace_option_id!();

    fn unset() -> Self {
        RenumberLocals(false)
    }

    fn shipped() -> Self {
        RenumberLocals(false)
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        let (v, msg) = crate::renumberlocals::OptionRenumberLocals.apply(value)?;
        Ok((RenumberLocals(v), msg))
    }
}

#[cfg(test)]
mod tests;
