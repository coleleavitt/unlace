//! (unlace) `pdatainterior` — never start a function inside another function's
//! `.pdata` `RUNTIME_FUNCTION` body (P1 code/data partition).
//!
//! The PE half of [`super::fdeinterior`], and it exists for the same reason:
//! a unlace `FunctionSymbol` is an entry address with no extent, so the commit
//! boundary cannot answer "is this candidate already inside a known function?"
//! and every discovery oracle is free to plant a `sub_<addr>` in the middle of a
//! body it cannot see. On ELF `.eh_frame` supplies the missing extent; on PE the
//! exception directory does, and nothing was reading it for this.
//!
//! An x64 PE's `.pdata` is an array of `RUNTIME_FUNCTION` records, each carrying
//! `[BeginAddress, EndAddress)` — the image's own statement that the range is one
//! function's body. A discovered entry strictly inside such a range is therefore
//! not a function; it is a point inside one.
//!
//! ## What this costs when it is wrong the other way
//!
//! An obfuscated x64 crackme (`nikos_crack_me.exe`) declares one 43,152-byte body
//! at `[0x140023350, 0x14002dbe0)`. Its dispatcher is unreachable by recursive
//! descent, so `aif`'s gap walk decodes the leftovers and mints `sub_140023e34`,
//! `sub_14002b324` and `sub_14002b6a8` inside it — plus four mid-instruction
//! starts elsewhere in the image (`sub_14002de9f`, `sub_14002df16`,
//! `sub_14002e07a`, `sub_14002ec63`). `funcboundflow` then truncates the real
//! function's flow when it falls through into one of them, so the function the
//! image describes decompiles as a fragment.
//!
//! ## What makes a range eligible
//!
//! The same three-part test `fdeinterior` uses, minus the one that has no PE
//! analogue (import thunks live in their own `.pdata`-less section):
//!
//! 1. no already-named function start lies strictly inside it, and
//! 2. no other `RUNTIME_FUNCTION`'s `BeginAddress` lies strictly inside it, and
//! 3. it does not overlap the range kept before it.
//!
//! A record whose `UNWIND_INFO` chains to another one is kept: a separated code
//! chunk is still one function's body, so an address inside it is still a label.
//!
//! ## Scope
//!
//! x86/x64 PE only. The 8-byte ARM/ARM64 `RUNTIME_FUNCTION` carries no
//! `EndAddress`, and a PE32 without an exception directory describes no bodies at
//! all, so the pass abstains on both — the same "vouches for nothing" stance
//! [`super::pereloccode`] takes.

use object::pe::{IMAGE_FILE_MACHINE_AMD64, IMAGE_FILE_MACHINE_I386};
use object::read::Object;
use object::read::pe::{ImageNtHeaders, PeFile, PeFile32, PeFile64};
use object::{FileKind, LittleEndian as LE};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

use super::existing_function_addrs;

/// (unlace) The `.pdata`-interior entry-suppression pass (`pdatainterior`).
///
/// Reports the `RUNTIME_FUNCTION` bodies that describe exactly one function in
/// [`AnalysisOutput::fde_bodies`], the same channel `fdeinterior` reports its FDE
/// bodies on; the commit boundary applies both with
/// [`super::fdeinterior::suppress_interior_entries`].
pub struct PdataInteriorPass;

impl AnalysisPass for PdataInteriorPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "pdatainterior"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            fde_bodies: eligible_pdata_bodies(ctx.bytes),
            ..AnalysisOutput::default()
        }
    }
}

/// The `RUNTIME_FUNCTION` bodies that describe exactly one function — the ranges
/// whose interior may be used to reject a discovered entry. Sorted, disjoint and
/// ascending, which is the invariant
/// [`super::fdeinterior::is_interior`]'s binary search reads.
///
/// Empty on anything that is not an x86/x64 PE with a readable exception
/// directory.
pub fn eligible_pdata_bodies(bytes: &[u8]) -> Vec<(u64, u64)> {
    match FileKind::parse(bytes) {
        Ok(FileKind::Pe64) => match PeFile64::parse(bytes) {
            Ok(pe) => bodies_typed::<object::pe::ImageNtHeaders64>(&pe, bytes),
            Err(_) => Vec::new(),
        },
        Ok(FileKind::Pe32) => match PeFile32::parse(bytes) {
            Ok(pe) => bodies_typed::<object::pe::ImageNtHeaders32>(&pe, bytes),
            Err(_) => Vec::new(),
        },
        _ => Vec::new(),
    }
}

/// Read the exception directory of a typed PE and apply the eligibility test.
fn bodies_typed<Pe: ImageNtHeaders>(pe: &PeFile<Pe>, bytes: &[u8]) -> Vec<(u64, u64)> {
    // Only the 12-byte x86/x64 `RUNTIME_FUNCTION` carries an `EndAddress`.
    match pe.nt_headers().file_header().machine.get(LE) {
        IMAGE_FILE_MACHINE_I386 | IMAGE_FILE_MACHINE_AMD64 => {}
        _ => return Vec::new(),
    }
    let dir = match pe
        .data_directories()
        .get(object::pe::IMAGE_DIRECTORY_ENTRY_EXCEPTION)
    {
        Some(d) if d.size.get(LE) != 0 => d,
        _ => return Vec::new(),
    };
    let data = match dir.data(bytes, &pe.section_table()) {
        Ok(d) => d,
        Err(_) => return Vec::new(),
    };
    let image_base = pe.relative_address_base();
    let mut all: Vec<(u64, u64)> = Vec::new();
    for rec in data.as_chunks::<12>().0 {
        let begin = u32::from_le_bytes([rec[0], rec[1], rec[2], rec[3]]) as u64;
        let end = u32::from_le_bytes([rec[4], rec[5], rec[6], rec[7]]) as u64;
        if begin == 0 || end <= begin {
            continue;
        }
        all.push((image_base.wrapping_add(begin), image_base.wrapping_add(end)));
    }
    all.sort_unstable();
    all.dedup();
    let named = match object::File::parse(bytes) {
        Ok(file) => existing_function_addrs(&file, bytes),
        Err(_) => Vec::new(),
    };
    eligible(&all, &named)
}

/// Keep the ranges that describe exactly one function: nothing named strictly
/// inside, no other record starting strictly inside, and no overlap with the
/// range kept before it (so the result stays disjoint for the binary search).
///
/// `all` is sorted ascending; `named` is sorted ascending. Shared with
/// [`crate::pdb::pdbinterior`], whose procedure extents pass the same test.
pub(crate) fn eligible(all: &[(u64, u64)], named: &[u64]) -> Vec<(u64, u64)> {
    let starts: Vec<u64> = all.iter().map(|&(b, _)| b).collect();
    let mut out: Vec<(u64, u64)> = Vec::with_capacity(all.len());
    for &(begin, end) in all {
        if contains_strictly(named, begin, end) || contains_strictly(&starts, begin, end) {
            continue;
        }
        match out.last() {
            Some(&(_, prev_end)) if begin < prev_end => continue,
            _ => out.push((begin, end)),
        }
    }
    out
}

/// Does the sorted `addrs` hold any value strictly between `start` and `end`?
/// (`super::fdeinterior`'s test, kept private there.)
fn contains_strictly(addrs: &[u64], start: u64, end: u64) -> bool {
    addrs.partition_point(|&a| a <= start) < addrs.partition_point(|&a| a < end)
}

#[cfg(test)]
mod tests;
