//! Keep the matched constant prefix of an accepted SPARC32 SAVE candidate.
use super::{FlowKind, GapDecoder, Listing};
use std::collections::BTreeSet;

pub(super) fn prefix(
    decoder: &mut GapDecoder,
    listing: &Listing,
    claimed: &BTreeSet<u64>,
    entry: u64,
) -> Option<u64> {
    if entry & 3 != 0 || !decoder.translate.is_big_endian() {
        return None;
    }
    let save = decoder.probe(entry)?;
    if save.len != 4
        || save.mnemonic.as_ref() != "save"
        || decoder.translate.get_register("g1").ok()?.size != 4
    {
        return None;
    }
    let start = entry.checked_sub(8)?;
    let end = entry.checked_add(4)?;
    if !decoder
        .exec_ranges
        .iter()
        .any(|&(lo, hi)| lo <= start && end <= hi)
        || !listing.is_undefined(start)
        || !listing.is_undefined(start + 4)
        || claimed.contains(&start)
        || claimed.contains(&(start + 4))
        || listing.function_at(start).is_some()
        || listing.function_at(start + 4).is_some()
    {
        return None;
    }
    let sethi = decoder.probe(start)?;
    let or = decoder.probe(start + 4)?;
    if sethi.len != 4
        || or.len != 4
        || sethi.kind != FlowKind::Fallthrough
        || or.kind != FlowKind::Fallthrough
        || sethi.mnemonic.as_ref() != "sethi"
        || or.mnemonic.as_ref() != "or"
        || sethi.fall_through != Some(start + 4)
        || or.fall_through != Some(entry)
    {
        return None;
    }
    matches(&sethi.operands, &or.operands, &save.operands).then_some(start)
}

fn operands<const N: usize>(text: &str) -> Option<[&str; N]> {
    let mut parts = text.split(',').map(str::trim);
    let mut result = [""; N];
    for part in &mut result {
        *part = parts.next()?;
    }
    parts.next().is_none().then_some(result)
}

fn hex(text: &str) -> Option<u32> {
    u32::from_str_radix(text.strip_prefix("0x")?, 16).ok()
}

fn matches(sethi: &str, or: &str, save: &str) -> bool {
    let Some([sp, reg, dest]) = operands(save) else {
        return false;
    };
    let Some([high, setreg]) = operands(sethi) else {
        return false;
    };
    let Some([source, low, orreg]) = operands(or) else {
        return false;
    };
    if sp != "sp"
        || dest != "sp"
        || reg == "g0"
        || reg == "sp"
        || setreg != reg
        || source != reg
        || orreg != reg
    {
        return false;
    }
    let Some(high) = high
        .strip_prefix("%hi(")
        .and_then(|s| s.strip_suffix(')'))
        .and_then(hex)
    else {
        return false;
    };
    let Some(low) = hex(low) else { return false };
    let frame = (high | low) as i32;
    high & 0x3ff == 0 && low < 0x400 && frame < -4096 && frame & 7 == 0
}

#[cfg(test)]
mod tests;
