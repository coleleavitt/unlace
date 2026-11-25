//! Cap the variable merge on very large functions (option `coalescecap`).
//! `Merge::merge_linear` (`merge.cc:272-292`) matches every gathered high against
//! the accepted stack of its type group, so one pass is quadratic in the number of
//! HighVariables. With the option on, a function whose gathered highs exceed
//! [`MAX_COALESCIBLE_HIGHS`] skips the type-group and stable-name merges and every
//! high keeps its own variable, the fallback the original unlace cross-base
//! coalescing took (`variable_merge.rs`, `max_coalescible_vars`).

use unlace_base::error::UnlaceResult;

/// Gathered highs above which `coalescecap on` skips the merge for a function.
pub const MAX_COALESCIBLE_HIGHS: usize = 5_000;

/// Does a function with `gathered` highs exceed the cap?
pub fn exceeds_cap(gathered: usize) -> bool {
    gathered > MAX_COALESCIBLE_HIGHS
}

/// (unlace) Option `coalescecap`: skip `merge_by_datatype` on a very large
/// function (default off).
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct CoalesceCap(pub bool);

impl crate::optionset::UnlaceOption for CoalesceCap {
    const NAME: &'static str = "coalescecap";
    crate::unlace_option_id!();

    fn unset() -> Self {
        CoalesceCap(false)
    }

    fn shipped() -> Self {
        CoalesceCap(false)
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        let on = crate::options::on_or_off(value)?;
        let state = if on { "on" } else { "off" };
        Ok((
            CoalesceCap(on),
            format!("Large-function variable merge cap turned {state}"),
        ))
    }
}

#[cfg(test)]
mod tests;
