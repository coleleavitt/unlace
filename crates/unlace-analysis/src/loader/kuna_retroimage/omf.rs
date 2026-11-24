//! Relocatable Object Module Format (OMF: Intel, Microsoft, Borland, Watcom) objects
//! and the libraries that bundle them: a stream of typed records (THEADR,
//! LNAMES, SEGDEF, GRPDEF, EXTDEF, PUBDEF, LEDATA/LIDATA, FIXUPP, MODEND), and
//! for a library a page-aligned run of modules between a header and an end
//! record.
//!
//! The loader links the way a linker lays out one program: every segment of
//! every module one after another (aligned to at least a paragraph) from
//! [`BASE16`] for 16-bit code under the real-mode language, or [`BASE32`] for
//! USE32 code under the flat 32-bit language; communal variables after them;
//! and one slot per external no module defines, named after it (an external a
//! module of the same library defines resolves to that definition). Every
//! fixup is then applied: an offset relative to its frame (the segment's or
//! group's paragraph in 16-bit code; zero in flat 32-bit code), a
//! self-relative displacement, a segment base as a paragraph. A 16-bit image
//! with a DGROUP group fixes DS at its paragraph. COMDAT records, fixups of
//! iterated data and import definitions are not mapped.

use std::collections::{BTreeMap, HashMap};

use object::SectionKind;
use unlace_base::error::KunaResult;

use super::{MAX_MODULE, RetroImage, RetroSection, RetroSymbol, invalid, symbol_name};

const FORMAT: &str = "OMF";
pub const LANGUAGE16: &str = "x86:LE:16:Real Mode:default";
pub const LANGUAGE32: &str = "x86:LE:32:default:windows";
/// Address of the first segment of a 16-bit image (paragraph 0x1000).
pub const BASE16: u64 = 0x1_0000;
/// Address of the first segment of a 32-bit image.
pub const BASE32: u64 = 0x40_0000;
/// Records a file may hold.
const MAX_RECORDS: usize = 1 << 20;
/// Bytes of one external's slot (a paragraph, so a far pointer to it is :0000).
const SLOT16: u64 = 0x10;
const SLOT32: u64 = 0x4;

const THEADR: u8 = 0x80;
const LHEADR: u8 = 0x82;
const COMENT: u8 = 0x88;
const MODEND: u8 = 0x8a;
const EXTDEF: u8 = 0x8c;
const PUBDEF: u8 = 0x90;
const LNAMES: u8 = 0x96;
const SEGDEF: u8 = 0x98;
const GRPDEF: u8 = 0x9a;
const FIXUPP: u8 = 0x9c;
const LEDATA: u8 = 0xa0;
const LIDATA: u8 = 0xa2;
const COMDEF: u8 = 0xb0;
const LEXTDEF: u8 = 0xb4;
const LPUBDEF: u8 = 0xb6;
const LCOMDEF: u8 = 0xb8;
const CEXTDEF: u8 = 0xbc;
const COMDAT: u8 = 0xc2;
const LLNAMES: u8 = 0xca;
const LIBHDR: u8 = 0xf0;
const LIBEND: u8 = 0xf1;

/// A first record that opens an OMF object (THEADR or LHEADR whose name fits
/// the record) or library (a header record whose page size is a power of two).
pub fn probe(prefix: &[u8]) -> bool {
    let (Some(&kind), Some(&lo), Some(&hi)) = (prefix.first(), prefix.get(1), prefix.get(2)) else {
        return false;
    };
    let len = usize::from(u16::from_le_bytes([lo, hi]));
    match kind {
        THEADR | LHEADR => {
            let Some(&name) = prefix.get(3) else {
                return false;
            };
            len >= 2
                && usize::from(name) + 2 == len
                && prefix
                    .get(4..(4 + usize::from(name)).min(prefix.len()))
                    .is_some_and(|name| name.iter().all(|byte| (0x20..0x7f).contains(byte)))
        }
        LIBHDR => {
            // dictionary offset, block count, flags (0 or 1), then zero padding to
            // the page; a page that fits the prefix must start with THEADR
            let page = len + 3;
            page.is_power_of_two()
                && (16..=32768).contains(&page)
                && prefix.get(9).is_some_and(|&flags| flags <= 1)
                && prefix
                    .get(10..page.min(prefix.len()))
                    .is_some_and(|padding| padding.iter().all(|&byte| byte == 0))
                && prefix
                    .get(page)
                    .is_none_or(|&first| matches!(first, THEADR | LHEADR))
        }
        _ => false,
    }
}

/// Bounds-checked reads over one record's contents.
struct Cursor<'a> {
    data: &'a [u8],
    at: usize,
    wide: bool,
}

impl<'a> Cursor<'a> {
    fn u8(&mut self) -> Option<u8> {
        let value = *self.data.get(self.at)?;
        self.at += 1;
        Some(value)
    }
    fn u16(&mut self) -> Option<u16> {
        let raw = self.data.get(self.at..self.at + 2)?;
        self.at += 2;
        Some(u16::from_le_bytes([raw[0], raw[1]]))
    }
    fn u24(&mut self) -> Option<u32> {
        let raw = self.data.get(self.at..self.at + 3)?;
        self.at += 3;
        Some(u32::from_le_bytes([raw[0], raw[1], raw[2], 0]))
    }
    fn u32(&mut self) -> Option<u32> {
        let raw = self.data.get(self.at..self.at + 4)?;
        self.at += 4;
        Some(u32::from_le_bytes([raw[0], raw[1], raw[2], raw[3]]))
    }
    /// A 16-bit field, or 32-bit in the odd (32-bit) record variant.
    fn word(&mut self) -> Option<u64> {
        if self.wide {
            self.u32().map(u64::from)
        } else {
            self.u16().map(u64::from)
        }
    }
    fn index(&mut self) -> Option<usize> {
        let first = self.u8()?;
        if first & 0x80 == 0 {
            return Some(usize::from(first));
        }
        Some(usize::from(first & 0x7f) << 8 | usize::from(self.u8()?))
    }
    fn bytes(&mut self, len: usize) -> Option<&'a [u8]> {
        let raw = self.data.get(self.at..self.at.checked_add(len)?)?;
        self.at += len;
        Some(raw)
    }
    fn name(&mut self) -> Option<&'a [u8]> {
        let len = usize::from(self.u8()?);
        self.bytes(len)
    }
    fn done(&self) -> bool {
        self.at >= self.data.len()
    }
}

struct Segment {
    name: String,
    class: String,
    size: u64,
    align: u64,
    use32: bool,
    data: Vec<u8>,
    /// Module offset once laid out.
    offset: u64,
}

impl Segment {
    fn code(&self) -> bool {
        let class = self.class.to_ascii_uppercase();
        let name = self.name.to_ascii_uppercase();
        class.ends_with("CODE") || name.ends_with("TEXT") || name.ends_with("CODE")
    }
}

struct Group {
    name: String,
    members: Vec<usize>,
}

/// Where an external lands: a public it names, a communal variable, or a slot.
#[derive(Clone)]
struct External {
    name: String,
    /// Bytes a communal (COMDEF) definition asks for.
    communal: Option<u64>,
}

#[derive(Clone, Copy, PartialEq, Eq)]
enum Ref {
    Segment(usize),
    Group(usize),
    External(usize),
    /// An absolute paragraph number.
    Frame(u64),
    /// The segment holding the fixup (frame method F4).
    Location,
    /// The target's own frame (F5) or no frame (F6).
    Target,
}

struct Fixup {
    segment: usize,
    offset: u64,
    location: u8,
    relative: bool,
    frame: Ref,
    target: Ref,
    displacement: i64,
}

struct Public {
    segment: usize,
    offset: u64,
    name: String,
}

/// Everything the records state, with module-local indices already global.
#[derive(Default)]
struct Parsed {
    segments: Vec<Segment>,
    groups: Vec<Group>,
    externals: Vec<External>,
    publics: Vec<Public>,
    fixups: Vec<Fixup>,
    /// The first main module's start address.
    start: Option<(Ref, i64)>,
    notes: Vec<String>,
    modules: usize,
}

/// Per-module state while its records are read.
#[derive(Default)]
struct Module {
    names: Vec<String>,
    segments: Vec<usize>,
    groups: Vec<usize>,
    externals: Vec<usize>,
    /// (segment, offset) of the last LEDATA; None after LIDATA.
    data: Option<(usize, u64)>,
    after_lidata: bool,
    frame_threads: [Option<Ref>; 4],
    target_threads: [Option<Ref>; 4],
}

impl Module {
    fn name(&self, index: usize) -> String {
        index
            .checked_sub(1)
            .and_then(|i| self.names.get(i))
            .cloned()
            .unwrap_or_default()
    }
    fn segment(&self, index: usize) -> Option<usize> {
        self.segments.get(index.checked_sub(1)?).copied()
    }
    fn group(&self, index: usize) -> Option<usize> {
        self.groups.get(index.checked_sub(1)?).copied()
    }
    fn external(&self, index: usize) -> Option<usize> {
        self.externals.get(index.checked_sub(1)?).copied()
    }
    /// A frame or target datum for `method` (0 segment, 1 group, 2 external, 3 frame number).
    fn datum(&self, cursor: &mut Cursor, method: u8) -> Option<Ref> {
        match method & 3 {
            0 => self.segment(cursor.index()?).map(Ref::Segment),
            1 => self.group(cursor.index()?).map(Ref::Group),
            2 => self.external(cursor.index()?).map(Ref::External),
            _ => cursor.u16().map(|frame| Ref::Frame(u64::from(frame))),
        }
    }
    fn frame(&self, cursor: &mut Cursor, method: u8) -> Option<Ref> {
        match method {
            0..=3 => self.datum(cursor, method),
            4 => Some(Ref::Location),
            _ => Some(Ref::Target),
        }
    }
}

/// The length of a communal variable as COMDEF encodes it.
fn communal_length(cursor: &mut Cursor) -> Option<u64> {
    match cursor.u8()? {
        n @ 0..=0x80 => Some(u64::from(n)),
        0x81 => cursor.u16().map(u64::from),
        0x84 => cursor.u24().map(u64::from),
        0x88 => cursor.u32().map(u64::from),
        _ => None,
    }
}

/// Expand one LIDATA iterated block, bounded by `limit` bytes.
fn iterated(cursor: &mut Cursor, depth: u32, limit: u64) -> Option<Vec<u8>> {
    if depth > 16 {
        return None;
    }
    let repeat = cursor.word()?;
    let blocks = cursor.u16()?;
    let mut content = Vec::new();
    if blocks == 0 {
        let len = usize::from(cursor.u8()?);
        content.extend_from_slice(cursor.bytes(len)?);
    } else {
        for _ in 0..blocks {
            content.extend(iterated(cursor, depth + 1, limit)?);
            if content.len() as u64 > limit {
                return None;
            }
        }
    }
    if (content.len() as u64).checked_mul(repeat)? > limit {
        return None;
    }
    Some(content.repeat(repeat as usize))
}

fn read(filename: &str, bytes: &[u8]) -> KunaResult<Parsed> {
    let bad = |detail: &str| invalid(filename, FORMAT, detail);
    let mut parsed = Parsed::default();
    let mut module = Module::default();
    let mut page = 0usize;
    let mut at = 0usize;
    let (mut comdats, mut lidata_fixups, mut impdefs) = (0usize, 0usize, 0usize);
    for _ in 0..MAX_RECORDS {
        if at + 3 > bytes.len() {
            break;
        }
        let kind = bytes[at];
        let len = usize::from(u16::from_le_bytes([bytes[at + 1], bytes[at + 2]]));
        let body = bytes
            .get(at + 3..at + 3 + len)
            .ok_or_else(|| bad("a record runs past the file"))?;
        // the contents leave out the checksum byte
        let contents = &body[..len.saturating_sub(1)];
        let mut cursor = Cursor {
            data: contents,
            at: 0,
            wide: kind & 1 == 1,
        };
        at += 3 + len;
        let truncated = || bad(&format!("truncated record {kind:#04x}"));
        if kind == LIBHDR {
            page = len + 3;
            at = page;
            continue;
        }
        if kind == LIBEND {
            break;
        }
        match kind & !1 {
            THEADR | LHEADR => module = Module::default(),
            LNAMES | LLNAMES => {
                while !cursor.done() {
                    let name = cursor.name().ok_or_else(truncated)?;
                    module
                        .names
                        .push(String::from_utf8_lossy(name).into_owned());
                }
            }
            SEGDEF => {
                let acbp = cursor.u8().ok_or_else(truncated)?;
                let align = match acbp >> 5 {
                    0 => {
                        cursor.u16().ok_or_else(truncated)?;
                        cursor.u8().ok_or_else(truncated)?;
                        16
                    }
                    1 => 1,
                    2 => 2,
                    4 => 256,
                    5 => 4,
                    6 => 4096,
                    _ => 16,
                };
                let length = cursor.word().ok_or_else(truncated)?;
                let big = acbp & 2 != 0;
                let size = match (big, cursor.wide) {
                    (true, false) => 0x1_0000,
                    (true, true) => return Err(bad("a 4 GiB segment")),
                    _ => length,
                };
                if size > MAX_MODULE {
                    return Err(bad("a segment exceeds the image size limit"));
                }
                let name = module.name(cursor.index().ok_or_else(truncated)?);
                let class = module.name(cursor.index().ok_or_else(truncated)?);
                parsed.segments.push(Segment {
                    name,
                    class,
                    size,
                    align,
                    use32: acbp & 1 != 0,
                    data: vec![0; size as usize],
                    offset: 0,
                });
                module.segments.push(parsed.segments.len() - 1);
            }
            GRPDEF => {
                let name = module.name(cursor.index().ok_or_else(truncated)?);
                let mut members = Vec::new();
                while !cursor.done() {
                    if cursor.u8().ok_or_else(truncated)? != 0xff {
                        break;
                    }
                    if let Some(segment) = module.segment(cursor.index().ok_or_else(truncated)?) {
                        members.push(segment);
                    }
                }
                parsed.groups.push(Group { name, members });
                module.groups.push(parsed.groups.len() - 1);
            }
            EXTDEF | LEXTDEF => {
                while !cursor.done() {
                    let name = cursor.name().ok_or_else(truncated)?;
                    cursor.index().ok_or_else(truncated)?;
                    parsed.externals.push(External {
                        name: String::from_utf8_lossy(name).into_owned(),
                        communal: None,
                    });
                    module.externals.push(parsed.externals.len() - 1);
                }
            }
            CEXTDEF => {
                while !cursor.done() {
                    let name = module.name(cursor.index().ok_or_else(truncated)?);
                    cursor.index().ok_or_else(truncated)?;
                    parsed.externals.push(External {
                        name,
                        communal: None,
                    });
                    module.externals.push(parsed.externals.len() - 1);
                }
            }
            COMDEF | LCOMDEF => {
                while !cursor.done() {
                    let name = cursor.name().ok_or_else(truncated)?;
                    cursor.index().ok_or_else(truncated)?;
                    let size = match cursor.u8().ok_or_else(truncated)? {
                        0x61 => {
                            let count = communal_length(&mut cursor).ok_or_else(truncated)?;
                            let each = communal_length(&mut cursor).ok_or_else(truncated)?;
                            count.saturating_mul(each)
                        }
                        _ => communal_length(&mut cursor).ok_or_else(truncated)?,
                    };
                    if size > MAX_MODULE {
                        return Err(bad("a communal variable exceeds the image size limit"));
                    }
                    parsed.externals.push(External {
                        name: String::from_utf8_lossy(name).into_owned(),
                        communal: Some(size),
                    });
                    module.externals.push(parsed.externals.len() - 1);
                }
            }
            PUBDEF | LPUBDEF => {
                let _group = cursor.index().ok_or_else(truncated)?;
                let segment = cursor.index().ok_or_else(truncated)?;
                if segment == 0 {
                    cursor.u16().ok_or_else(truncated)?;
                }
                let segment = module.segment(segment);
                while !cursor.done() {
                    let name = cursor.name().ok_or_else(truncated)?;
                    let offset = cursor.word().ok_or_else(truncated)?;
                    cursor.index().ok_or_else(truncated)?;
                    if let Some(segment) = segment {
                        parsed.publics.push(Public {
                            segment,
                            offset,
                            name: String::from_utf8_lossy(name).into_owned(),
                        });
                    }
                }
            }
            LEDATA => {
                let index = cursor.index().ok_or_else(truncated)?;
                let offset = cursor.word().ok_or_else(truncated)?;
                let segment = module
                    .segment(index)
                    .ok_or_else(|| bad("LEDATA names no segment"))?;
                let data = &contents[cursor.at..];
                let buffer = &mut parsed.segments[segment].data;
                let end = (offset as usize).saturating_add(data.len());
                if end > buffer.len() {
                    return Err(bad("LEDATA runs past its segment"));
                }
                buffer[offset as usize..end].copy_from_slice(data);
                module.data = Some((segment, offset));
                module.after_lidata = false;
            }
            LIDATA => {
                let index = cursor.index().ok_or_else(truncated)?;
                let offset = cursor.word().ok_or_else(truncated)?;
                let segment = module
                    .segment(index)
                    .ok_or_else(|| bad("LIDATA names no segment"))?;
                let room = (parsed.segments[segment].data.len() as u64)
                    .checked_sub(offset)
                    .ok_or_else(|| bad("LIDATA starts past its segment"))?;
                let mut out = Vec::new();
                while !cursor.done() {
                    let block = iterated(&mut cursor, 0, room)
                        .ok_or_else(|| bad("malformed or oversized LIDATA"))?;
                    out.extend(block);
                    if out.len() as u64 > room {
                        return Err(bad("LIDATA runs past its segment"));
                    }
                }
                let buffer = &mut parsed.segments[segment].data;
                buffer[offset as usize..offset as usize + out.len()].copy_from_slice(&out);
                module.data = None;
                module.after_lidata = true;
            }
            FIXUPP => {
                while !cursor.done() {
                    let first = cursor.u8().ok_or_else(truncated)?;
                    if first & 0x80 == 0 {
                        // THREAD: D bit 6, method bits 4..2, thread bits 1..0
                        let method = (first >> 2) & 7;
                        let thread = usize::from(first & 3);
                        if first & 0x40 != 0 {
                            module.frame_threads[thread] = module.frame(&mut cursor, method);
                        } else {
                            module.target_threads[thread] = module.datum(&mut cursor, method);
                        }
                        continue;
                    }
                    let second = cursor.u8().ok_or_else(truncated)?;
                    let relative = first & 0x40 == 0;
                    let location = (first >> 2) & 0xf;
                    let record_offset = u64::from(first & 3) << 8 | u64::from(second);
                    let fixdata = cursor.u8().ok_or_else(truncated)?;
                    let frame = if fixdata & 0x80 != 0 {
                        module.frame_threads[usize::from((fixdata >> 4) & 3)]
                    } else {
                        module.frame(&mut cursor, (fixdata >> 4) & 7)
                    };
                    let target = if fixdata & 0x08 != 0 {
                        module.target_threads[usize::from(fixdata & 3)]
                    } else {
                        module.datum(&mut cursor, fixdata & 3)
                    };
                    let displacement = if fixdata & 0x04 == 0 {
                        cursor.word().ok_or_else(truncated)? as i64
                    } else {
                        0
                    };
                    if module.after_lidata {
                        lidata_fixups += 1;
                        continue;
                    }
                    let (Some((segment, base)), Some(frame), Some(target)) =
                        (module.data, frame, target)
                    else {
                        parsed.notes.push(format!(
                            "a fixup in record at {:#x} names no data, frame or target",
                            at
                        ));
                        continue;
                    };
                    parsed.fixups.push(Fixup {
                        segment,
                        offset: base + record_offset,
                        location,
                        relative,
                        frame,
                        target,
                        displacement,
                    });
                }
            }
            MODEND => {
                parsed.modules += 1;
                let kind_byte = cursor.u8().unwrap_or(0);
                if kind_byte & 0xc0 == 0xc0 && parsed.start.is_none() {
                    let fixdata = cursor.u8().ok_or_else(truncated)?;
                    let _frame = module.frame(&mut cursor, (fixdata >> 4) & 7);
                    let target = module.datum(&mut cursor, fixdata & 3);
                    let displacement = if fixdata & 0x04 == 0 {
                        cursor.word().unwrap_or(0) as i64
                    } else {
                        0
                    };
                    parsed.start = target.map(|target| (target, displacement));
                }
                if page != 0 {
                    at = at.next_multiple_of(page);
                }
            }
            COMDAT => comdats += 1,
            COMENT => {
                if contents.get(1..3) == Some(&[0xa0, 0x01]) {
                    impdefs += 1;
                }
            }
            _ => {}
        }
    }
    if comdats != 0 {
        parsed
            .notes
            .push(format!("{comdats} COMDAT record(s) were not mapped"));
    }
    if lidata_fixups != 0 {
        parsed.notes.push(format!(
            "{lidata_fixups} fixup(s) of iterated (LIDATA) data were not applied"
        ));
    }
    if impdefs != 0 {
        parsed.notes.push(format!(
            "{impdefs} import definition(s) of an import library were not mapped"
        ));
    }
    if parsed.segments.is_empty() {
        return Err(bad("no segment definitions"));
    }
    Ok(parsed)
}

pub fn parse(filename: &str, bytes: &[u8]) -> KunaResult<RetroImage> {
    let bad = |detail: &str| invalid(filename, FORMAT, detail);
    let mut parsed = read(filename, bytes)?;
    let mut notes = std::mem::take(&mut parsed.notes);
    let code32: u64 = parsed
        .segments
        .iter()
        .filter(|s| s.code() && s.use32)
        .map(|s| s.size)
        .sum();
    let code16: u64 = parsed
        .segments
        .iter()
        .filter(|s| s.code() && !s.use32)
        .map(|s| s.size)
        .sum();
    let wide = code32 > code16;
    if code32 != 0 && code16 != 0 {
        notes.push(format!(
            "both USE16 and USE32 code; decoded as {}-bit",
            if wide { 32 } else { 16 }
        ));
    }
    let (base, language, slot) = if wide {
        (BASE32, LANGUAGE32, SLOT32)
    } else {
        (BASE16, LANGUAGE16, SLOT16)
    };

    // lay the segments out, then the communal variables, then the slots
    let mut end = 0u64;
    for segment in &mut parsed.segments {
        segment.offset = end.next_multiple_of(segment.align.max(16));
        end = segment.offset + segment.size;
    }
    let publics: HashMap<&str, u64> = parsed
        .publics
        .iter()
        .map(|public| {
            (
                public.name.as_str(),
                parsed.segments[public.segment].offset + public.offset,
            )
        })
        .collect();
    let communal_start = end.next_multiple_of(16);
    let mut communal_end = communal_start;
    let mut addresses = Vec::with_capacity(parsed.externals.len());
    let mut slot_names = BTreeMap::new();
    let mut communals = Vec::new();
    for external in &parsed.externals {
        if let Some(&offset) = publics.get(external.name.as_str()) {
            addresses.push(offset);
        } else if let Some(size) = external.communal {
            addresses.push(communal_end);
            communals.push((communal_end, external.name.clone()));
            communal_end = (communal_end + size.max(1)).next_multiple_of(2);
        } else {
            addresses.push(u64::MAX);
        }
    }
    let slots_start = communal_end.next_multiple_of(16);
    let mut slots_end = slots_start;
    for (index, external) in parsed.externals.iter().enumerate() {
        if addresses[index] != u64::MAX {
            continue;
        }
        let offset = *slot_names.entry(external.name.clone()).or_insert_with(|| {
            let offset = slots_end;
            slots_end += slot;
            offset
        });
        addresses[index] = offset;
    }
    if slots_end > MAX_MODULE {
        return Err(bad("segments exceed the image size limit"));
    }
    let mut module = vec![0u8; slots_end as usize];
    for segment in &parsed.segments {
        let at = segment.offset as usize;
        module[at..at + segment.data.len()].copy_from_slice(&segment.data);
    }
    for &offset in slot_names.values() {
        module[offset as usize] = 0xc3; // ret, or retf where a far pointer names it
    }

    let group_base = |group: usize| -> u64 {
        let group = &parsed.groups[group];
        if wide || group.name.eq_ignore_ascii_case("FLAT") {
            return 0;
        }
        group
            .members
            .iter()
            .map(|&segment| base + parsed.segments[segment].offset)
            .min()
            .unwrap_or(base)
    };
    // the linear address a reference names, and the frame it is relative to
    let target_address = |target: Ref| -> Option<u64> {
        match target {
            Ref::Segment(segment) => Some(base + parsed.segments[segment].offset),
            Ref::Group(group) => Some(group_base(group)),
            Ref::External(external) => Some(base + addresses[external]),
            Ref::Frame(frame) => Some(frame * 16),
            Ref::Location | Ref::Target => None,
        }
    };
    // an external's frame: the segment that defines it, else its own paragraph
    let containing = |address: u64| -> u64 {
        parsed
            .segments
            .iter()
            .map(|segment| (base + segment.offset, base + segment.offset + segment.size))
            .find(|&(start, end)| (start..end).contains(&address))
            .map_or(address & !0xf, |(start, _)| start)
    };
    let frame_of_target = |target: Ref| -> Option<u64> {
        match target {
            Ref::External(external) => Some(containing(base + addresses[external])),
            other => target_address(other),
        }
    };

    let (mut skipped, mut far_selectors) = (0usize, 0usize);
    let mut far_slots = Vec::new();
    for fixup in &parsed.fixups {
        let segment = &parsed.segments[fixup.segment];
        let site = segment.offset + fixup.offset;
        let Some(target) = target_address(fixup.target) else {
            skipped += 1;
            continue;
        };
        let target = target.wrapping_add_signed(fixup.displacement);
        let frame = if wide {
            0
        } else {
            match fixup.frame {
                Ref::Location => base + segment.offset,
                Ref::Target => frame_of_target(fixup.target).unwrap_or(target),
                other => frame_of_target(other).unwrap_or(target),
            }
        };
        let width: u64 = match fixup.location {
            0 | 4 => 1,
            1 | 2 | 5 => 2,
            3 | 9 | 13 => 4,
            11 => 6,
            _ => {
                skipped += 1;
                continue;
            }
        };
        if fixup.offset + width > segment.size {
            skipped += 1;
            continue;
        }
        let at = site as usize;
        let offset_value = if fixup.relative {
            target.wrapping_sub(base + site + width)
        } else {
            target.wrapping_sub(frame)
        };
        let paragraph = (frame / 16) as u16;
        let slot = &mut module[at..at + width as usize];
        let add16 = |slot: &mut [u8], value: u64| {
            let old = u16::from_le_bytes([slot[0], slot[1]]);
            slot[..2].copy_from_slice(&old.wrapping_add(value as u16).to_le_bytes());
        };
        let add32 = |slot: &mut [u8], value: u64| {
            let old = u32::from_le_bytes([slot[0], slot[1], slot[2], slot[3]]);
            slot[..4].copy_from_slice(&old.wrapping_add(value as u32).to_le_bytes());
        };
        match fixup.location {
            0 => slot[0] = slot[0].wrapping_add(offset_value as u8),
            4 => slot[0] = slot[0].wrapping_add((offset_value >> 8) as u8),
            1 | 5 => add16(slot, offset_value),
            9 | 13 => add32(slot, offset_value),
            2 if !wide => {
                add16(slot, u64::from(paragraph));
                if let Ref::External(external) = fixup.target {
                    far_slots.push(addresses[external]);
                }
            }
            3 if !wide => {
                add16(&mut slot[..2], offset_value);
                add16(&mut slot[2..4], u64::from(paragraph));
                if let Ref::External(external) = fixup.target {
                    far_slots.push(addresses[external]);
                }
            }
            11 => {
                add32(&mut slot[..4], offset_value);
                far_selectors += 1;
            }
            _ => far_selectors += 1,
        }
    }
    for offset in far_slots {
        if slot_names.values().any(|&slot| slot == offset) {
            module[offset as usize] = 0xcb;
        }
    }
    if skipped != 0 {
        notes.push(format!(
            "{skipped} fixup(s) with an unsupported location or a site outside their segment were not applied"
        ));
    }
    if far_selectors != 0 {
        notes.push(format!(
            "{far_selectors} segment selector(s) in 32-bit code were left as stored"
        ));
    }

    let mut sections: Vec<RetroSection> = parsed
        .segments
        .iter()
        .filter(|segment| segment.size != 0)
        .map(|segment| RetroSection {
            name: segment.name.clone(),
            offset: segment.offset,
            size: segment.size,
            kind: if segment.code() {
                SectionKind::Text
            } else {
                SectionKind::Data
            },
            file_range: None,
        })
        .collect();
    if communal_end > communal_start {
        sections.push(RetroSection {
            name: "COMDEF".into(),
            offset: communal_start,
            size: communal_end - communal_start,
            kind: SectionKind::UninitializedData,
            file_range: None,
        });
    }
    if slots_end > slots_start {
        sections.push(RetroSection {
            name: "EXTERN".into(),
            offset: slots_start,
            size: slots_end - slots_start,
            kind: SectionKind::Text,
            file_range: None,
        });
    }
    let mut symbols = Vec::new();
    for public in &parsed.publics {
        let segment = &parsed.segments[public.segment];
        if public.offset >= segment.size.max(1) {
            continue;
        }
        if let Some(name) = symbol_name(public.name.as_bytes()) {
            symbols.push(RetroSymbol {
                offset: segment.offset + public.offset,
                name,
                code: segment.code(),
            });
        }
    }
    for (offset, name) in communals {
        if let Some(name) = symbol_name(name.as_bytes()) {
            symbols.push(RetroSymbol {
                offset,
                name,
                code: false,
            });
        }
    }
    for (name, &offset) in &slot_names {
        if let Some(name) = symbol_name(name.as_bytes()) {
            symbols.push(RetroSymbol {
                offset,
                name,
                code: true,
            });
        }
    }

    let module_end = base + module.len() as u64;
    let entry = parsed
        .start
        .and_then(|(target, displacement)| {
            target_address(target).map(|at| at.wrapping_add_signed(displacement))
        })
        .filter(|&entry| entry >= base && entry < module_end)
        .or_else(|| {
            symbols
                .iter()
                .find(|symbol| symbol.code)
                .map(|symbol| base + symbol.offset)
        })
        .or_else(|| {
            sections
                .iter()
                .find(|section| section.kind == SectionKind::Text)
                .map(|section| base + section.offset)
        })
        .ok_or_else(|| bad("no code segment"))?;
    let mut tracked = Vec::new();
    if !wide {
        if let Some(index) = parsed
            .groups
            .iter()
            .position(|group| group.name.eq_ignore_ascii_case("DGROUP"))
        {
            tracked.push(("DS", group_base(index) / 16));
        }
    }
    if parsed.modules > 1 {
        notes.push(format!("{} modules laid out as one image", parsed.modules));
    }
    Ok(RetroImage {
        format: FORMAT,
        language,
        base,
        module,
        entry,
        sections,
        symbols,
        tracked,
        notes,
    })
}
