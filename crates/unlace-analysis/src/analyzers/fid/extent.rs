//! The function-extent generator — the code units the FID hasher fingerprints.
//!
//! # What this is
//!
//! Ghidra's `FunctionExtentGenerator` returns the ordered list of code units that
//! make up a function's body. The concrete strategy FID uses is
//! `FunctionBodyFunctionExtentGenerator`: it walks `func.getBody()` (the address
//! set the FunctionManager recorded as the body) and collects the instructions in
//! ascending address order.
//!
//! unlace's Listing tracks function **entries**, not bodies (`listing/mod.rs` — the
//! `DiscoveredFunction` model is keyed by entry VMA; there is no per-function
//! body address set). So this generator reconstructs the body as the
//! **address-contiguous clip** `[entry, next_function_after(entry))` over the
//! flat, address-ordered instruction map — the exact idiom
//! [`crate::noreturn_disc`] already uses for its call-site / fall-through
//! reasoning.
//!
//! # LOSS (documented, §1 of `docs/history/fid-design.md`)
//!
//! This is **address-contiguous, not flow-reachable**: an interleaved or outlined
//! body (code from another function physically sitting between `entry` and the
//! next function entry, or this function's own code living after the next entry)
//! is mis-clipped. This is the same approximation `noreturn_disc` accepts and
//! the one place unlace's FID is *less* faithful than Ghidra's. For the common case
//! (the compiler lays a function down contiguously) it is exact.
//!
//! # Origin (upstream Ghidra, the tree unlace was ported from)
//!
//! - `Ghidra/Features/FunctionID/src/main/java/ghidra/feature/fid/hash/FunctionBodyFunctionExtentGenerator.java`
//!   — `calculateExtent(func)`: iterate `listing.getInstructions(body, true)`
//!   (ascending) and collect them. unlace substitutes the `[entry, next)` clip for
//!   `func.getBody()`.

use crate::listing::funcchunks::ChunkModel;
use crate::listing::{Insn, Listing};

/// Reconstruct the extent of the function entered at `entry`: the decoded
/// instructions in `[entry, next_function_after(entry))`, in ascending address
/// order.
///
/// Returns the instructions in body order — the input to
/// [`crate::fid::hash::FidHasher`] (PR4 turns each `&Insn` + its SLEIGH mask
/// into an [`crate::fid::hash::InsnFingerprint`]).
///
/// The hasher itself rejects extents below
/// [`SHORT_HASH_CODE_UNIT_LENGTH`](crate::fid::hash::SHORT_HASH_CODE_UNIT_LENGTH);
/// this generator returns whatever the clip contains (possibly empty).
pub fn calculate_extent<'a>(listing: &'a Listing, entry: u64) -> Vec<&'a Insn> {
    // The exclusive upper bound: the next function entry strictly after `entry`
    // (`mod.rs::next_function_after`). `None` ⇒ the clip runs to the end of the
    // instruction map.
    let next = listing.next_function_after(entry).map(|f| f.entry);
    clip_extent(listing.instructions_in_range(entry, next), entry, next)
}

/// The flow body of the function at `entry` under the chunk model: every
/// instruction of its main chunk and its tails, in ascending address order --
/// Ghidra's `func.getBody()` iteration, which the `[entry, next)` clip only
/// approximates.
pub fn chunk_extent<'a>(listing: &'a Listing, model: &ChunkModel, entry: u64) -> Vec<&'a Insn> {
    let mut chunks = model.chunks(entry).unwrap_or_default().to_vec();
    chunks.sort_unstable();
    chunks
        .iter()
        .flat_map(|&(s, e)| listing.instructions_in_range(s, Some(e)).map(|(_, i)| i))
        .collect()
}

/// The pure clip: given the address-ordered `(vma, insn)` stream, keep the
/// instructions in `[entry, next)` (with `next = None` meaning "to the end").
///
/// Split out from [`calculate_extent`] so the clip rule is unit-testable without
/// constructing a full [`Listing`] (which needs an `object::File` + the SLEIGH
/// decoder). The production path supplies the Listing's range-bounded iterator.
fn clip_extent<'a, I>(instructions: I, entry: u64, next: Option<u64>) -> Vec<&'a Insn>
where
    I: IntoIterator<Item = (&'a u64, &'a Insn)>,
{
    let mut extent: Vec<&Insn> = Vec::new();
    for (&vma, insn) in instructions {
        if vma < entry {
            // Before this function's entry — `getInstructions(body, true)` would
            // not include it (the body starts at `entry`).
            continue;
        }
        if matches!(next, Some(n) if vma >= n) {
            // Reached the next function's entry — the clip is exclusive of it.
            // The map is address-ordered, so everything past here is out of body.
            break;
        }
        extent.push(insn);
    }
    extent
}

#[cfg(test)]
mod tests;
