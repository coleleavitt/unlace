//! The inventory-time function extent — the `size` every whole-binary surface
//! reports per entry.
//!
//! # What this is
//!
//! unlace's model of a function is its **entry**: the Listing is keyed by entry
//! VMA and [`ConsoleProgram::function_entries_canonical`] yields one record per
//! entry address. Nothing in that model carries a body, so an inventory record
//! had no extent at all and a caller could not tell a PLT thunk from `main`
//! without decompiling the whole binary (`docs/re-needs/functions-json-size.md`).
//!
//! This module supplies the extent as the **address-contiguous clip**
//! `[entry, min(next_entry, end_of_containing_code_section))` — the same
//! reconstruction `unlace_analysis`'s FID extent generator
//! (`analyzers/fid/extent.rs`) and `noreturn_disc` already use where they need a
//! body from an entry-keyed model. It reuses the entry list and the loader's
//! section table, both already in hand, so the cheap inventory call stays cheap:
//! no decode, no Listing, no per-function work beyond a binary search.
//!
//! # What the number means
//!
//! An **upper bound** on the function's byte extent, not its exact body. The
//! clip runs to the next entry, so inter-function alignment padding is counted
//! in. Measured against ELF `st_size` over the 41 symbolized fixtures in
//! `unlace-analysis/tests/fixtures` (1428 functions with ground truth): never
//! short, exact for 231, median overshoot +8 bytes, worst +52 — i.e. padding.
//! That is the right shape for what the field is for (ordering an inventory by
//! weight); a caller needing the exact body must still decompile.
//!
//! An entry outside every CODE section reports `0` — an import pointer slot or
//! an undefined external is an address, not a body, and `0` is the established
//! "no extent recovered" answer on the decompile path.
//!
//! That sentinel only means what it says while a section table exists. An image
//! carrying none — a sectionless ELF, or one whose section headers are corrupt
//! enough that the loader continues from the program headers — publishes no CODE
//! span anywhere, so *every* entry took the sentinel and the whole binary
//! reported `0` (`docs/re-needs/zero-function-sizes-make.md`: size-based triage
//! then discards all of it, `--min-size 1` answering count 0 of total 12 with no
//! error). When the section table yields no CODE span at all, [`spans`] clips
//! against the executable load segments instead — coarser, but the same kind of
//! answer, since the number was always an upper bound clipped at the next entry.
//! The fallback is whole-table, never per-entry: an entry that misses the CODE
//! spans an image *does* publish is the import pointer slot the sentinel exists
//! for, and widening it there would hand a body to exactly those.
//!
//! # Where the code range holds data too
//!
//! An MS-DOS executable or a `--raw-image` x86 real-mode program has no section
//! table: its one CODE range is the whole load module, DGROUP and far data
//! segments included, so the clip ran a function that data follows on to the
//! next entry. There the raw discovery measures where each entry's flow ends
//! (`unlace_analysis::listing::rawextent`) and [`bound_by_flow`] cuts the
//! clip there; an address past its function's flow has no extent.
//!
//! # LOSS
//!
//! Address-contiguous, not flow-reachable: an outlined or interleaved body (a
//! `.part.0` cold half living past the next entry) is clipped at the neighbour,
//! and code physically between two entries is attributed to the first. This is
//! the approximation the FID generator documents and accepts for the same
//! reason — the compiler lays a function down contiguously in the common case.

/// One CODE section as `(vma, end)`, ascending by `vma`.
type CodeSpan = (u64, u64);

/// The extent of the function entered at `entry`.
///
/// `next` is the next entry address strictly after `entry` (`None` for the last
/// one), and `code` the ascending `(vma, end)` CODE spans. Returns `0` when
/// `entry` lies in no CODE section.
///
/// Split out from the bulk pass so the clip rule is unit-testable without a
/// loaded [`crate::engine::ConsoleProgram`] — the shape `analyzers/fid/extent.rs`
/// uses for the same reason.
fn clip(entry: u64, next: Option<u64>, code: &[CodeSpan]) -> u64 {
    let Some(&(_, end)) = code.iter().find(|&&(vma, end)| vma <= entry && entry < end) else {
        return 0;
    };
    // The neighbour only tightens the bound when it really is ahead of this
    // entry and inside the same section; a duplicate or out-of-section next
    // entry leaves the section end as the stop.
    let stop = match next {
        Some(n) if n > entry && n < end => n,
        _ => end,
    };
    stop - entry
}

/// The ascending `(vma, end)` CODE spans of a loader section table
/// (`ConsoleProgram::sections`, `(vma, size, flags)`).
///
/// Zero-length and non-CODE sections are dropped; a section whose `vma + size`
/// wraps is dropped rather than clamped, so a malformed table yields `0` extents
/// instead of nonsense ones.
pub(crate) fn code_spans(sections: &[(u64, u64, u32)]) -> Vec<CodeSpan> {
    let mut spans: Vec<CodeSpan> = sections
        .iter()
        .filter(|(_, _, flags)| flags & unlace_sleigh::loadimage::section_flags::CODE != 0)
        .filter_map(|&(vma, size, _)| vma.checked_add(size).map(|end| (vma, end)))
        .filter(|&(vma, end)| end > vma)
        .collect();
    spans.sort_unstable();
    spans
}

/// The CODE spans to clip against: the section table's, or the executable load
/// segments' when the table publishes none.
///
/// Both arguments are `(vma, size, flags)` in the loader's own vocabulary
/// (`ConsoleProgram::sections` and `ConsoleProgram::segments`), which is why one
/// filter reads both — a segment's CODE bit is its execute permission.
pub(crate) fn spans(sections: &[(u64, u64, u32)], segments: &[(u64, u64, u32)]) -> Vec<CodeSpan> {
    let from_sections = code_spans(sections);
    if !from_sections.is_empty() {
        return from_sections;
    }
    code_spans(segments)
}

/// The extent of a single address against an ascending entry list — the
/// single-target paths (`--addr` on an address the enumeration does not know),
/// where there is no bulk pass to piggyback on.
pub(crate) fn extent_at(entry: u64, ascending_entries: &[u64], code: &[CodeSpan]) -> u64 {
    let next = ascending_entries.iter().copied().find(|&e| e > entry);
    clip(entry, next, code)
}

/// (unlace #1288) The extent of `vma` on an image that measured its functions'
/// flow ends (`unlace_analysis::listing::rawextent`): `clip` cut at the end
/// of the flow of `owner`, the greatest entry at or below `vma`.
///
/// An owner whose flow was not measured keeps the clip. An address past its
/// owner's flow, or below every entry, is in no function's body and has no
/// extent (`0`), which is what keeps a data address from being listed as the
/// tail of the function in front of it.
pub(crate) fn bound_by_flow(
    vma: u64,
    clip: u64,
    owner: Option<u64>,
    ends: &std::collections::BTreeMap<u64, u64>,
) -> u64 {
    let Some(owner) = owner else { return 0 };
    match ends.get(&owner) {
        Some(&end) => clip.min(end.saturating_sub(vma)),
        None => clip,
    }
}

/// Fill each entry's extent in one pass over an **address-ascending** entry list
/// (what `function_entries_canonical` builds from its `BTreeMap`).
pub(crate) fn assign_extents(entries: &mut [crate::engine::FunctionEntry], code: &[CodeSpan]) {
    for i in 0..entries.len() {
        let entry = entries[i].addr.get_offset();
        let next = entries.get(i + 1).map(|e| e.addr.get_offset());
        entries[i].size = clip(entry, next, code);
    }
}

#[cfg(test)]
mod tests;
