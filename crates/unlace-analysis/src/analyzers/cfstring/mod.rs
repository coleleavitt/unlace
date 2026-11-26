//! Mach-O Core Foundation constant strings (`__cfstring`) — render a `CFSTR("x")`
//! constant as the string literal it holds instead of `dat_<addr>`.
//!
//! # What a `__cfstring` entry is
//!
//! A `CFSTR("launch-report")` in source compiles to a 4-word `CFString` struct
//! in the `__cfstring` section (`__DATA_CONST,__cfstring` on a modern toolchain,
//! `__DATA,__cfstring` historically):
//!
//! ```text
//!   +0   isa      -> ___CFConstantStringClassReference  (a bind/rebase)
//!   +8   flags    (info word; bit 0x10 set => UTF-16 char storage, else 8-bit)
//!   +16  data     -> the char bytes, in __cstring (8-bit) or __ustring (UTF-16)
//!   +24  length   character count (NOT byte count)
//! ```
//!
//! Code references the *struct* address, not the char bytes, so the printer's
//! constant-string route (which reads the bytes at the referenced address) sees
//! the struct and renders `dat_<addr>`. This pass resolves each entry's `data`
//! pointer (through the chained-fixup overlay on an arm64(e) image, a raw word on
//! a classic `LC_DYLD_INFO` image), reads the string, and emits a [`CFStringFact`].
//! The commit seam types the entry an opaque `struct __CFString`, whose pointer
//! is `CFStringRef`, and pre-seeds the `StringManager` at the entry address with
//! the resolved bytes, so a reference renders the literal.
//!
//! # Gating & faithfulness
//!
//! Registered only for a Mach-O target (`passes.rs`), default-on (`--option
//! cfstrings`), output-changing. The whole pass output is dropped at commit when
//! the gate is off, so `cfstrings off` renders each entry as before. A non-Mach-O
//! image, an image with no `__cfstring`, or an unreadable entry yields nothing —
//! additive, never wrong.
//!
//! # Bounds
//!
//! The walk stops at the end of the file, not the section header, and the string
//! bytes read over all entries are capped at the file's length. Entries are 32
//! bytes but each may point at the same 64 KiB run, so without that cap a crafted
//! section would make every entry an owned copy of the run (twice, once more in
//! the `StringManager`), about 4096x the file. Each entry's reads scan the image's
//! section spans, so the walk is entries x sections, both sized by the file; a
//! budget of span checks ends it long before a real image would reach it.

use object::read::{Object, ObjectSection};

use crate::loader::format::macho::resolve_chained_fixups;
use crate::objc::sections::{MachoImage, sections_named};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, CFStringFact, Phase};

/// The `__cfstring` section short name (`object` exposes the bare section name).
const SEC_CFSTRING: &str = "__cfstring";

/// CFString `flags` bit that marks UTF-16 (2-byte) char storage; clear is 8-bit.
const CFSTRING_UNICODE: u32 = 0x10;

/// Upper bound on one constant string's byte length, so a corrupt `length` field
/// cannot drive an unbounded read/allocation.
const MAX_CFSTRING_BYTES: u64 = 1 << 16;

/// Span checks the walk may spend: an entry makes four reads, and each read scans
/// the image's section spans in turn.
const MAX_SPAN_CHECKS: u64 = 1 << 30;

/// The `__cfstring` constant-string recovery pass.
pub struct CFStringPass;

impl AnalysisPass for CFStringPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "cfstrings"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        collect(ctx.file, ctx.bytes)
    }
}

/// The pass body over a parsed image and its raw bytes. The walk is bounded by
/// the file, not the section header. `flags` (the 32-bit info word at the start
/// of the second slot) and `length` are scalars, so
/// `read_ptr`'s fixup overlay misses and returns the raw word, while `data` is the
/// rebase the overlay resolves on an arm64(e) chained image (a raw pointer on a
/// classic `LC_DYLD_INFO` one). 8-bit data is kept only when it is UTF-8 (the
/// printer would cut an invalid one short), and a string holding a NUL is skipped
/// because a C literal stops there, trailing NULs included. Every string read is
/// charged to a budget of the file's length. Each entry is marked read-only: a CFString
/// constant is immutable, and the printer's constant-string route needs that on the
/// historical writable `__DATA,__cfstring` layout.
fn collect(file: &object::File, bytes: &[u8]) -> AnalysisOutput {
    collect_bounded(file, bytes, MAX_SPAN_CHECKS)
}

/// [`collect`] with an explicit budget of section-span checks.
fn collect_bounded(file: &object::File, bytes: &[u8], max_span_checks: u64) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    if file.format() != object::BinaryFormat::MachO {
        return out;
    }
    let sections: Vec<_> = sections_named(file, SEC_CFSTRING).collect();
    if sections.is_empty() {
        return out;
    }
    let fixups = resolve_chained_fixups(file, bytes);
    let img = MachoImage::with_fixups(file, fixups);
    let ps = img.ptr_size();
    let stride = ps.saturating_mul(4);
    if stride == 0 {
        return out;
    }

    let max_entries = max_span_checks / (4 * file.sections().count().max(1) as u64);
    let mut budget = bytes.len() as u64;
    let mut walked: u64 = 0;
    for sec in sections {
        let base = sec.address();
        let size = sec.size().min(bytes.len() as u64);
        let mut off: u64 = 0;
        while off.saturating_add(stride) <= size && walked < max_entries {
            walked += 1;
            let entry = base.wrapping_add(off);
            off += stride;
            let (Some(flags), Some(data), Some(length)) = (
                img.read_u32(entry.wrapping_add(ps)),
                img.read_ptr(entry.wrapping_add(ps.wrapping_mul(2))),
                img.read_ptr(entry.wrapping_add(ps.wrapping_mul(3))),
            ) else {
                continue;
            };
            if data == 0 || length == 0 {
                continue;
            }
            let unicode = flags & CFSTRING_UNICODE != 0;
            let Some(byte_len) = (if unicode {
                length.checked_mul(2)
            } else {
                Some(length)
            }) else {
                continue;
            };
            if byte_len == 0 || byte_len > MAX_CFSTRING_BYTES || byte_len > budget {
                continue;
            }
            let Some(raw) = img.read(data, byte_len as usize) else {
                continue;
            };
            budget -= byte_len;
            let text = if unicode {
                match decode_utf16(raw, file.is_little_endian()) {
                    Some(b) => b,
                    None => continue,
                }
            } else {
                match std::str::from_utf8(raw) {
                    Ok(_) => raw.to_vec(),
                    Err(_) => continue,
                }
            };
            if nul_inside(&text) {
                continue;
            }
            out.cfstrings.push(CFStringFact {
                addr: entry,
                bytes: text,
                size: stride as u32,
            });
            out.readonly.push((entry, entry.wrapping_add(stride)));
        }
    }
    out
}

/// Does `text` hold a NUL? The printed literal would end there, so even a
/// trailing one (`CFSTR("a\0\0")`, length 3) would print as a shorter string.
fn nul_inside(text: &[u8]) -> bool {
    text.contains(&0)
}

/// Decode a UTF-16 char buffer to UTF-8 bytes. `None` on an odd length or an
/// invalid code-unit sequence (the entry is then skipped, never mis-rendered).
fn decode_utf16(raw: &[u8], little_endian: bool) -> Option<Vec<u8>> {
    if raw.len() % 2 != 0 {
        return None;
    }
    let units: Vec<u16> = raw
        .chunks_exact(2)
        .map(|c| {
            if little_endian {
                u16::from_le_bytes([c[0], c[1]])
            } else {
                u16::from_be_bytes([c[0], c[1]])
            }
        })
        .collect();
    String::from_utf16(&units).ok().map(String::into_bytes)
}

#[cfg(test)]
mod tests;
