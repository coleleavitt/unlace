//! (unlace) The string **inventory** query behind `unlace strings` — the reporting
//! face of the [`StringLiteralPass`](super::StringLiteralPass) that already runs
//! at load.
//!
//! # Why this is not a second scanner
//!
//! The analyzer tier's job is to *mark up* strings: it emits a
//! [`StringFact`](crate::pass::StringFact) per literal so the commit seam can plant a typelocked
//! `char[N]`, and the printer renders `puts("Username: ")`. It deliberately keeps
//! nothing an analyst would ask for — no text, no section, no encoding — because
//! nothing downstream of the commit needed it.
//!
//! So this module answers those questions **over the pass's own matcher**:
//! [`super::scan_runs`] over the pass's own sections (and, on an image with no
//! sections, over its PT_LOAD segments). What is added is presentation — reading
//! the bytes back as text, attributing each to its section — plus the two things
//! the pass documents as out of scope:
//!
//! # Termination
//!
//! The pass is [`Termination::Nul`] because it plants a `char[N]`, and under that
//! policy every row here is a fact the engine also marked up. An *inventory* is a
//! different question: a length-prefixed name table
//! (`\x0cout.js\x06std\x12_0x8ec6b3`, the shape a bundled JS or bytecode payload
//! carries) holds no NUL at all, so require-NUL-end reports zero strings for a
//! region an analyst can read straight out of a hex dump. [`Termination::Any`] is
//! `strings(1)`'s rule over the same address set, and every row says which ending
//! it had ([`FoundString::nul_terminated`]) so a C literal is still
//! distinguishable from a printable fragment.
//!
//! # UTF-16
//!
//! [`super::StringLiteralPass`] is the 1-byte (`allCharWidths = false`) arm of
//! Ghidra's `StringsAnalyzer` and says so: "UTF-16/32 is a documented seam,
//! skipped". Read as ASCII, a UTF-16LE literal is a one-character string — the
//! `L"ntdll.dll"` argument of `LoadLibraryW` stops at the NUL after `n`. So
//! [`scan_utf16_run`](super::widestrings::scan_utf16_run) is the missing
//! width, mirroring the 1-byte matcher exactly:
//! the same [`super::is_string_char`] recognizer, the same require-NUL-end rule,
//! the same minimum length — over 2-byte units instead of bytes. It is a widened
//! matcher, not a different one, and it is reported as its own `encoding` so a
//! consumer always knows which width found a row.
//!
//! Scope: UTF-16**LE** whose code units are all in the 1-byte recognizer's
//! charset (the Windows-API case). A big-endian or non-Latin UTF-16 literal is
//! not recovered.
//!
//! # UTF-8
//!
//! [`super::is_string_char`] is the ASCII recognizer, so every byte `>= 0x80`
//! ends a run and a literal that opens with a non-ASCII character is reported
//! starting after its last multi-byte sequence — an address nothing in the image
//! refers to, which is why such a row also arrives with no references and no
//! owning function. [`scan_utf8_runs`](super::utf8strings::scan_utf8_runs)
//! is the same 1-byte matcher with well-formed UTF-8 sequences admitted as
//! characters, and it is a strict superset of the ASCII one: no accepted
//! sequence can swallow a byte the ASCII matcher would have taken. So the two
//! never run together — [`Query::utf8`] chooses which reading answers the 1-byte
//! width — and each row is labelled by what its bytes actually hold, so a row
//! with no multi-byte content is reported as [`Encoding::Ascii`] either way and
//! a pure-ASCII image reads identically under both.

use object::read::{Object, ObjectSection, ObjectSegment};

use super::utf8strings::scan_utf8_runs;
use super::widestrings::scan_utf16_runs;
use super::{Run, is_loaded_initialized, scan_runs};

pub use super::Termination;

/// The character width a row was found at.
#[derive(Clone, Copy, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum Encoding {
    /// 1-byte characters — [`super::StringLiteralPass`]'s own width.
    Ascii,
    /// 1-byte characters plus multi-byte UTF-8 sequences
    /// (`utf8strings::scan_utf8_runs`). Only a row that actually holds a
    /// multi-byte sequence is reported at this width; a pure-ASCII row found by
    /// the same scan is [`Encoding::Ascii`].
    Utf8,
    /// 2-byte little-endian code units (`widestrings::scan_utf16_run`).
    Utf16,
}

impl Encoding {
    /// The wire name (`encoding` in the JSON surface).
    pub fn as_str(self) -> &'static str {
        match self {
            Encoding::Ascii => "ascii",
            Encoding::Utf8 => "utf8",
            Encoding::Utf16 => "utf16",
        }
    }
}

/// One recovered string literal, at the address it is mapped to.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct FoundString {
    /// VMA of the first character byte.
    pub addr: u64,
    /// The decoded text, terminator excluded.
    pub text: String,
    /// Visible character count (`text.chars().count()`, so a UTF-16 row counts
    /// code units, not the bytes they occupy).
    pub char_len: usize,
    /// Bytes occupied including the terminator — the extent an xref can land in.
    /// An unterminated run occupies exactly its visible bytes.
    pub byte_len: u32,
    /// The run ended at a NUL, so it is a C string and not merely printable text.
    /// Always true under [`Termination::Nul`].
    pub nul_terminated: bool,
    /// Which width found it.
    pub encoding: Encoding,
    /// The section it lives in, or `None` on an image scanned by segment.
    pub section: Option<String>,
}

/// What to look for.
pub struct Query {
    /// Minimum visible length, in characters (`StringsAnalyzer.minStringLength`;
    /// the pass default is 5).
    pub min_len: usize,
    /// Scan at 1-byte width (the pass itself).
    pub ascii: bool,
    /// Read the 1-byte width as UTF-8 rather than as ASCII, so a multi-byte
    /// sequence is a character instead of a terminator. Superset of [`ascii`]
    /// and only meaningful with it: the two readings never both run.
    ///
    /// [`ascii`]: Query::ascii
    pub utf8: bool,
    /// Scan at 2-byte little-endian width.
    pub utf16: bool,
    /// Restrict to this section, by name (a leading `.` is optional).
    pub section: Option<String>,
    /// Which run endings count as a string.
    pub termination: Termination,
}

/// The answer: the rows, plus enough about the scan for a caller to explain an
/// empty one.
pub struct Inventory {
    /// Every match, ordered by address then encoding.
    pub strings: Vec<FoundString>,
    /// The names of the regions that were scannable at all, in image order — the
    /// candidate set a `--section` filter picks from.
    pub regions: Vec<String>,
    /// The image had no loaded+initialized *section*, so the scan fell back to
    /// its PT_LOAD segments (a UPX-packed or section-header-stripped image).
    pub from_segments: bool,
}

/// A contiguous run of mapped, initialized bytes: a section, or — when the image
/// has no usable section table — a loadable segment.
struct Region<'d> {
    name: Option<String>,
    vma: u64,
    data: &'d [u8],
}

impl Region<'_> {
    /// The bytes of `[addr, addr+len)`, if that range lies inside this region.
    fn slice(&self, addr: u64, len: usize) -> Option<&[u8]> {
        let off = addr.checked_sub(self.vma)? as usize;
        self.data.get(off..off.checked_add(len)?)
    }
}

/// The loaded+initialized sections, using the pass's own membership test so the
/// scanned address set is exactly the one the analyzer marks up.
fn section_regions<'d>(file: &'d object::File<'d>) -> Vec<Region<'d>> {
    let mut out = Vec::new();
    for sec in file.sections() {
        if !is_loaded_initialized(&sec) {
            continue;
        }
        let data = match sec.data() {
            Ok(d) if !d.is_empty() => d,
            _ => continue,
        };
        let name = sec
            .name()
            .ok()
            .filter(|n| !n.is_empty())
            .map(str::to_string);
        out.push(Region {
            name,
            vma: sec.address(),
            data,
        });
    }
    out
}

/// The PT_LOAD segments — the fallback address set for an image whose section
/// headers are gone (a UPX-packed ELF keeps its program headers and nothing
/// else), which is precisely when an analyst reaches for a string dump.
fn segment_regions<'d>(file: &'d object::File<'d>) -> Vec<Region<'d>> {
    let mut out = Vec::new();
    for seg in file.segments() {
        let data = match seg.data() {
            Ok(d) if !d.is_empty() => d,
            _ => continue,
        };
        out.push(Region {
            name: None,
            vma: seg.address(),
            data,
        });
    }
    out
}

/// Keep the regions wholly inside one of `ranges`. Sorted by start, with the
/// furthest end any range up to it reaches, one binary search answers a region.
fn retain_within(regions: &mut Vec<Region<'_>>, ranges: &[(u64, u64)]) {
    let mut sorted = ranges.to_vec();
    sorted.sort_unstable();
    let reach: Vec<u64> = sorted
        .iter()
        .scan(0, |far, &(_, hi)| {
            *far = hi.max(*far);
            Some(*far)
        })
        .collect();
    regions.retain(|r| {
        let Some(end) = r.vma.checked_add(r.data.len() as u64) else {
            return false;
        };
        let n = sorted.partition_point(|&(lo, _)| lo <= r.vma);
        n > 0 && end <= reach[n - 1]
    });
}

/// The regions' `(start, index)` pairs sorted by start, when no two regions
/// overlap: then the first region holding an address is the only one, and
/// [`region_of`] can binary-search for it instead of scanning.
fn disjoint_index(regions: &[Region<'_>]) -> Option<Vec<(u64, usize)>> {
    let mut starts: Vec<(u64, usize)> = regions
        .iter()
        .enumerate()
        .map(|(i, r)| (r.vma, i))
        .collect();
    starts.sort_unstable();
    let end = |i: usize| u128::from(regions[i].vma) + regions[i].data.len() as u128;
    starts
        .windows(2)
        .all(|w| end(w[0].1) <= u128::from(w[1].0))
        .then_some(starts)
}

/// The first region, in image order, holding `addr`, if any.
fn region_of<'a, 'd>(
    regions: &'a [Region<'d>],
    index: Option<&[(u64, usize)]>,
    addr: u64,
) -> Option<&'a Region<'d>> {
    let holds = |r: &Region<'_>| addr >= r.vma && addr - r.vma < r.data.len() as u64;
    match index {
        Some(starts) => {
            let n = starts.partition_point(|&(vma, _)| vma <= addr);
            let region = &regions[starts[n.checked_sub(1)?].1];
            holds(region).then_some(region)
        }
        None => regions.iter().find(|r| holds(r)),
    }
}

/// Does `name` (a region's own name) satisfy a `--section` operand? The leading
/// `.` is optional, so `--section rdata` finds `.rdata`.
fn section_matches(name: Option<&str>, want: &str) -> bool {
    let want = want.trim();
    match name {
        Some(n) => n == want || n.strip_prefix('.') == Some(want),
        None => false,
    }
}

/// Read a 1-byte fact back as text. Every byte is in the recognizer's charset,
/// so the decode cannot fail.
fn ascii_text(bytes: &[u8]) -> String {
    bytes.iter().map(|&b| b as char).collect()
}

/// Read a UTF-8 run back as text. Every character was validated by
/// [`scan_utf8_runs`], so the decode cannot fail; the lossy form is the
/// no-panic spelling of that, not a second policy.
fn utf8_text(bytes: &[u8]) -> String {
    String::from_utf8_lossy(bytes).into_owned()
}

/// Read a 2-byte fact back as text (low bytes only — the units are all in the
/// 1-byte charset by construction).
fn utf16_text(bytes: &[u8]) -> String {
    bytes.chunks_exact(2).map(|u| u[0] as char).collect()
}

/// Enumerate the image's string literals.
///
/// The ASCII half is [`super::StringLiteralPass`]'s own matcher and the UTF-16
/// half the widened one, both over the pass's own address set, so under
/// [`Termination::Nul`] every row is a fact the engine also marked up. Nothing is
/// committed either way: this is a read-only query over the parsed object, so no
/// invocation of the engine can change because of it.
pub fn inventory(file: &object::File, q: &Query) -> Inventory {
    inventory_with_ranges(file, q, None)
}

/// Scan only regions wholly contained in the loader's mapped image.
pub fn inventory_in_image(file: &object::File, q: &Query, ranges: &[(u64, u64)]) -> Inventory {
    inventory_with_ranges(file, q, Some(ranges))
}

fn inventory_with_ranges(
    file: &object::File,
    q: &Query,
    ranges: Option<&[(u64, u64)]>,
) -> Inventory {
    let sections = section_regions(file);
    let from_segments = sections.is_empty();
    let mut regions = if from_segments {
        segment_regions(file)
    } else {
        sections
    };
    if let Some(ranges) = ranges {
        retain_within(&mut regions, ranges);
    }

    let mut runs: Vec<(Run, Encoding)> = Vec::new();
    // One reading answers the 1-byte width. The UTF-8 one is a superset of the
    // ASCII one — every ASCII run is a subrange of a UTF-8 run — so running both
    // would report the same text twice, once at a truncated address.
    if q.ascii && q.utf8 {
        runs.extend(
            regions
                .iter()
                .flat_map(|r| scan_utf8_runs(r.data, r.vma, q.min_len, q.termination))
                .map(|r| (r, Encoding::Utf8)),
        );
    } else if q.ascii {
        runs.extend(
            regions
                .iter()
                .flat_map(|r| scan_runs(r.data, r.vma, q.min_len, q.termination))
                .map(|r| (r, Encoding::Ascii)),
        );
    }
    if q.utf16 {
        runs.extend(
            regions
                .iter()
                .flat_map(|r| scan_utf16_runs(r.data, r.vma, q.min_len, q.termination))
                .map(|r| (r, Encoding::Utf16)),
        );
    }

    let index = disjoint_index(&regions);
    let mut strings: Vec<FoundString> = Vec::new();
    for (run, encoding) in runs {
        let Some(region) = region_of(&regions, index.as_deref(), run.addr) else {
            continue;
        };
        if let Some(want) = &q.section {
            if !section_matches(region.name.as_deref(), want) {
                continue;
            }
        }
        let Some(bytes) = region.slice(run.addr, run.visible_len) else {
            continue;
        };
        let text = match encoding {
            Encoding::Ascii => ascii_text(bytes),
            Encoding::Utf8 => utf8_text(bytes),
            Encoding::Utf16 => utf16_text(bytes),
        };
        // A UTF-8 run that holds no multi-byte sequence is a row the ASCII
        // reading found too, so it is reported at that width and the label keeps
        // meaning "what is in these bytes".
        let encoding = match encoding {
            Encoding::Utf8 if bytes.is_ascii() => Encoding::Ascii,
            other => other,
        };
        // The extent an xref may land in stops at the last visible byte when
        // nothing terminated the run.
        let terminator = match (run.nul_terminated, encoding) {
            (false, _) => 0,
            (true, Encoding::Ascii | Encoding::Utf8) => 1,
            (true, Encoding::Utf16) => 2,
        };
        strings.push(FoundString {
            addr: run.addr,
            char_len: text.chars().count(),
            text,
            byte_len: (run.visible_len + terminator) as u32,
            nul_terminated: run.nul_terminated,
            encoding,
            section: region.name.clone(),
        });
    }
    strings.sort_by(|a, b| (a.addr, a.encoding).cmp(&(b.addr, b.encoding)));

    let names = regions.iter().filter_map(|r| r.name.clone()).collect();
    Inventory {
        strings,
        regions: names,
        from_segments,
    }
}

#[cfg(test)]
mod tests;
