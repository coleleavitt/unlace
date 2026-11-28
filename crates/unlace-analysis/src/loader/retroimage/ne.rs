//! Win16 and OS/2 1.x New Executable (NE): an MZ stub whose e_lfanew names an
//! "NE" header, a segment table, per-segment relocation records, an entry
//! table, and resident, non-resident, module-reference and imported-name
//! tables.
//!
//! Windows gives every segment its own selector and patches each relocation
//! with the selector and offset of its target, an exported entry of the module
//! itself or of an imported module. The loader does the same under the
//! 16-bit protected-mode language, where a far address is selector * 0x10000
//! plus offset: segment n is placed at n * 0x10000 with selector n, so a near
//! branch stays in its segment and a far pointer reads as its address. Each
//! import gets a one-byte RETF slot in a segment after the module's own,
//! named after the import (MODULE_ordinal, or the imported name), and every
//! reference to the import is patched to its slot. The automatic data
//! segment's selector is DS's (and SS's) tracked value over the image.
//! Operating-system fixups (the floating-point emulator's) are not applied.

use std::collections::BTreeMap;

use object::SectionKind;
use unlace_base::error::UnlaceResult;

use super::{Bytes, MAX_MODULE, RetroImage, RetroSection, RetroSymbol, invalid, symbol_name};

const FORMAT: &str = "NE";
pub const LANGUAGE: &str = "x86:LE:16:Protected Mode:default";
/// The span one segment's selector addresses.
const SEGMENT_SPAN: u64 = 0x1_0000;
/// Bytes of one import slot.
const IMPORT_SLOT: u64 = 2;
/// Segments a module may have (the selector space the loader models).
const MAX_SEGMENTS: u64 = 0x400;

const SEG_DATA: u16 = 0x0001;
const SEG_RELOCINFO: u16 = 0x0100;

const RELOC_INTERNAL: u8 = 0;
const RELOC_IMPORT_ORDINAL: u8 = 1;
const RELOC_IMPORT_NAME: u8 = 2;
const RELOC_OS_FIXUP: u8 = 3;
const RELOC_ADDITIVE: u8 = 4;

const SRC_LOBYTE: u8 = 0;
const SRC_SEGMENT: u8 = 2;
const SRC_FAR_ADDR: u8 = 3;
const SRC_OFFSET: u8 = 5;
const SRC_FAR48: u8 = 11;
const SRC_OFFSET32: u8 = 13;

/// The NE header's file offset when `bytes` is an MZ stub in front of one.
fn header(bytes: &[u8]) -> Option<u64> {
    let file = Bytes {
        data: bytes,
        big: false,
    };
    if !matches!(bytes.get(..2)?, b"MZ" | b"ZM") {
        return None;
    }
    // e_lfanew is only a field when the MZ header reaches past it
    if file.u16(0x08)? < 4 {
        return None;
    }
    let at = u64::from(file.u32(0x3c)?);
    (at >= 0x40 && file.slice(at, 2)? == b"NE" && file.u16(at + 0x1c).is_some()).then_some(at)
}

/// An MZ stub whose e_lfanew names an NE header. Needs the bytes up to the
/// header, so a 32-byte probe prefix never claims one.
pub fn probe(bytes: &[u8]) -> bool {
    header(bytes).is_some()
}

/// A Pascal string (length byte, then the bytes) at `at`.
fn pascal<'a>(file: &Bytes<'a>, at: u64) -> Option<&'a [u8]> {
    let len = file.u8(at)?;
    file.slice(at + 1, u64::from(len))
}

/// The (ordinal, name) pairs of a resident or non-resident name table; the
/// first entry (the module name or description) is left out.
fn names(file: &Bytes, start: u64, end: u64) -> Vec<(u16, String)> {
    let mut out = Vec::new();
    let mut at = start;
    let mut first = true;
    while at < end {
        let Some(len) = file.u8(at) else { break };
        if len == 0 {
            break;
        }
        let (Some(raw), Some(ordinal)) = (pascal(file, at), file.u16(at + 1 + u64::from(len)))
        else {
            break;
        };
        if !first && let Some(name) = symbol_name(raw) {
            out.push((ordinal, name));
        }
        first = false;
        at += 3 + u64::from(len);
    }
    out
}

struct Segment {
    /// File offset and size of the stored bytes.
    stored: Option<(u64, u64)>,
    /// Bytes the segment occupies in memory.
    size: u64,
    flags: u16,
}

/// Where an exported entry lives: (segment number, offset).
fn entries(file: &Bytes, start: u64, len: u64) -> BTreeMap<u16, (u16, u16)> {
    let mut out = BTreeMap::new();
    let end = start.saturating_add(len);
    let mut at = start;
    let mut ordinal: u32 = 1;
    while at + 2 <= end {
        let (Some(count), Some(indicator)) = (file.u8(at), file.u8(at + 1)) else {
            break;
        };
        at += 2;
        if count == 0 {
            break;
        }
        for _ in 0..count {
            let entry = match indicator {
                0 => None,
                0xff => {
                    let entry = (file.u8(at + 3), file.u16(at + 4));
                    at += 6;
                    match entry {
                        (Some(segment), Some(offset)) => Some((u16::from(segment), offset)),
                        _ => return out,
                    }
                }
                segment => {
                    let offset = file.u16(at + 1);
                    at += 3;
                    match offset {
                        Some(offset) => Some((u16::from(segment), offset)),
                        None => return out,
                    }
                }
            };
            if let (Some(entry), Ok(key)) = (entry, u16::try_from(ordinal)) {
                out.insert(key, entry);
            }
            ordinal += 1;
        }
    }
    out
}

pub fn parse(filename: &str, bytes: &[u8]) -> UnlaceResult<RetroImage> {
    let bad = |detail: &str| invalid(filename, FORMAT, detail);
    let truncated = || bad("truncated NE header");
    let file = Bytes {
        data: bytes,
        big: false,
    };
    let ne = header(bytes).ok_or_else(|| bad("no NE header behind the MZ stub"))?;
    let at = |off: u64| file.u16(ne + off).ok_or_else(truncated);
    let entry_table = ne + u64::from(at(0x04)?);
    let entry_len = u64::from(at(0x06)?);
    let flags = at(0x0c)?;
    let autodata = at(0x0e)?;
    let ip = at(0x14)?;
    let cs = at(0x16)?;
    let nsegments = u64::from(at(0x1c)?);
    let nmodules = u64::from(at(0x1e)?);
    let nonresident_len = u64::from(at(0x20)?);
    let segment_table = ne + u64::from(at(0x22)?);
    let resident_table = ne + u64::from(at(0x26)?);
    let module_table = ne + u64::from(at(0x28)?);
    let imported_names = ne + u64::from(at(0x2a)?);
    let nonresident_table = u64::from(file.u32(ne + 0x2c).ok_or_else(truncated)?);
    let shift = at(0x32)?;
    let shift = if shift == 0 { 9 } else { u32::from(shift) };
    if shift > 16 {
        return Err(bad("segment alignment shift above 16"));
    }
    if nsegments == 0 || nsegments > MAX_SEGMENTS {
        return Err(bad("segment count outside 1..=1024"));
    }

    let mut segments = Vec::new();
    for index in 0..nsegments {
        let row = segment_table + 8 * index;
        let (Some(sector), Some(length), Some(seg_flags), Some(minalloc)) = (
            file.u16(row),
            file.u16(row + 2),
            file.u16(row + 4),
            file.u16(row + 6),
        ) else {
            return Err(bad("segment table runs past the file"));
        };
        let length = if length == 0 && sector != 0 {
            0x1_0000
        } else {
            u64::from(length)
        };
        let minalloc = if minalloc == 0 {
            0x1_0000
        } else {
            u64::from(minalloc)
        };
        let stored = (sector != 0)
            .then(|| (u64::from(sector) << shift, length))
            .filter(|&(offset, size)| {
                offset
                    .checked_add(size)
                    .is_some_and(|end| end <= bytes.len() as u64)
            });
        segments.push(Segment {
            stored,
            size: minalloc.max(length),
            flags: seg_flags,
        });
    }

    // module n of the module-reference table names its imports
    let module_names: Vec<String> = (0..nmodules)
        .map(|index| {
            file.u16(module_table + 2 * index)
                .and_then(|offset| pascal(&file, imported_names + u64::from(offset)))
                .and_then(symbol_name)
                .unwrap_or_else(|| format!("MODULE{}", index + 1))
        })
        .collect();

    let base = SEGMENT_SPAN;
    let import_selector = nsegments + 1;
    let mut module = vec![0u8; (nsegments * SEGMENT_SPAN) as usize];
    for (index, segment) in segments.iter().enumerate() {
        if let Some((offset, size)) = segment.stored {
            let start = index as u64 * SEGMENT_SPAN;
            let data = file.slice(offset, size).ok_or_else(truncated)?;
            module[start as usize..(start + size) as usize].copy_from_slice(data);
        }
    }
    let exports = entries(&file, entry_table, entry_len);
    let linear = |segment: u16, offset: u16| -> Option<u64> {
        (1..=nsegments)
            .contains(&u64::from(segment))
            .then(|| u64::from(segment) * SEGMENT_SPAN + u64::from(offset))
    };

    let mut imports: BTreeMap<String, u64> = BTreeMap::new();
    let mut slot_count = 0u64;
    let mut import_slot = |name: String| -> (u16, u16) {
        let index = *imports.entry(name).or_insert_with(|| {
            slot_count += 1;
            slot_count - 1
        });
        (import_selector as u16, (index * IMPORT_SLOT) as u16)
    };

    let mut notes = Vec::new();
    let (mut skipped, mut os_fixups) = (0usize, 0usize);
    for (index, segment) in segments.iter().enumerate() {
        let Some((offset, size)) = segment.stored else {
            continue;
        };
        if segment.flags & SEG_RELOCINFO == 0 {
            continue;
        }
        let records = offset + size;
        let count = u64::from(file.u16(records).ok_or_else(truncated)?);
        let start = index as u64 * SEGMENT_SPAN;
        for record in 0..count {
            let row = records + 2 + 8 * record;
            let (Some(source), Some(kind), Some(site), Some(a), Some(b)) = (
                file.u8(row),
                file.u8(row + 1),
                file.u16(row + 2),
                file.u16(row + 4),
                file.u16(row + 6),
            ) else {
                skipped += (count - record) as usize;
                break;
            };
            let target = match kind & 3 {
                RELOC_INTERNAL => {
                    let (to_segment, to_offset) = if a & 0xff == 0xff {
                        match exports.get(&b) {
                            Some(&entry) => entry,
                            None => {
                                skipped += 1;
                                continue;
                            }
                        }
                    } else {
                        (a & 0xff, b)
                    };
                    if linear(to_segment, to_offset).is_none() {
                        skipped += 1;
                        continue;
                    }
                    (to_segment, to_offset)
                }
                RELOC_IMPORT_ORDINAL => {
                    let owner = module_names
                        .get(usize::from(a).wrapping_sub(1))
                        .cloned()
                        .unwrap_or_else(|| format!("MODULE{a}"));
                    import_slot(format!("{owner}_{b}"))
                }
                RELOC_IMPORT_NAME => {
                    let name = pascal(&file, imported_names + u64::from(b)).and_then(symbol_name);
                    match name {
                        Some(name) => import_slot(name),
                        None => {
                            skipped += 1;
                            continue;
                        }
                    }
                }
                _ => {
                    debug_assert_eq!(kind & 3, RELOC_OS_FIXUP);
                    os_fixups += 1;
                    continue;
                }
            };
            let additive = kind & RELOC_ADDITIVE != 0;
            let width = match source {
                SRC_LOBYTE => 1,
                SRC_SEGMENT | SRC_OFFSET => 2,
                SRC_FAR_ADDR | SRC_OFFSET32 => 4,
                SRC_FAR48 => 6,
                _ => {
                    skipped += 1;
                    continue;
                }
            };
            // a non-additive record heads a chain: each patched word holds the
            // offset of the next site, 0xFFFF ending it
            let mut site = u64::from(site);
            for _ in 0..=size {
                if site + width > size {
                    skipped += 1;
                    break;
                }
                let at = (start + site) as usize;
                let link =
                    u16::from_le_bytes([module[at], module.get(at + 1).copied().unwrap_or(0)]);
                patch(
                    &mut module[at..at + width as usize],
                    source,
                    target,
                    additive,
                );
                if additive || link == 0xffff {
                    break;
                }
                site = u64::from(link);
            }
        }
    }
    if skipped != 0 {
        notes.push(format!(
            "{skipped} relocation(s) name a target the module does not have or a site outside \
             their segment and were not applied"
        ));
    }
    if os_fixups != 0 {
        notes.push(format!(
            "{os_fixups} operating-system (floating-point emulator) fixup(s) were not applied"
        ));
    }

    let mut sections: Vec<RetroSection> = segments
        .iter()
        .enumerate()
        .filter(|(_, segment)| segment.size != 0)
        .map(|(index, segment)| RetroSection {
            name: format!("seg{}", index + 1),
            offset: index as u64 * SEGMENT_SPAN,
            size: segment.size,
            kind: if segment.flags & SEG_DATA != 0 {
                SectionKind::Data
            } else {
                SectionKind::Text
            },
            file_range: segment.stored,
        })
        .collect();
    let mut symbols = Vec::new();
    if !imports.is_empty() {
        let slots = (imports.len() as u64) * IMPORT_SLOT;
        if slots > SEGMENT_SPAN {
            return Err(bad("more imports than one selector's slots hold"));
        }
        let start = nsegments * SEGMENT_SPAN;
        module.resize((start + slots) as usize, 0);
        for (name, index) in &imports {
            let offset = start + index * IMPORT_SLOT;
            module[offset as usize] = 0xcb; // retf
            symbols.push(RetroSymbol {
                offset,
                name: name.clone(),
                code: true,
            });
        }
        sections.push(RetroSection {
            name: "imports".into(),
            offset: start,
            size: slots,
            kind: SectionKind::Text,
            file_range: None,
        });
    }
    if module.len() as u64 > MAX_MODULE {
        return Err(bad("segments exceed the image size limit"));
    }

    let mut named: BTreeMap<u16, String> = names(&file, resident_table, module_table)
        .into_iter()
        .collect();
    if nonresident_table != 0 {
        named.extend(names(
            &file,
            nonresident_table,
            nonresident_table + nonresident_len,
        ));
    }
    for (ordinal, &(segment, offset)) in &exports {
        let Some(address) = linear(segment, offset) else {
            continue;
        };
        let code = segments
            .get(usize::from(segment) - 1)
            .is_some_and(|segment| segment.flags & SEG_DATA == 0);
        let name = named
            .get(ordinal)
            .cloned()
            .unwrap_or_else(|| format!("entry_{ordinal}"));
        symbols.push(RetroSymbol {
            offset: address - base,
            name,
            code,
        });
    }

    let module_end = base + module.len() as u64;
    let entry = linear(cs, ip)
        .filter(|&entry| entry < module_end)
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
        .ok_or_else(|| bad("no entry point and no code segment"))?;
    if flags & 0x8000 != 0 && linear(cs, ip).is_none() {
        notes.push("a library without an entry point: the first export is the entry".into());
    }
    let mut tracked = Vec::new();
    if linear(autodata, 0).is_some() {
        tracked.push(("DS", u64::from(autodata)));
        tracked.push(("SS", u64::from(autodata)));
    }
    Ok(RetroImage {
        format: FORMAT,
        language: LANGUAGE,
        base,
        module,
        entry,
        sections,
        symbols,
        tracked,
        notes,
    })
}

/// Write `target` (selector, offset) into a relocation site of the given
/// source type; an additive record adds the target to the stored value.
fn patch(site: &mut [u8], source: u8, (selector, offset): (u16, u16), additive: bool) {
    let put16 = |slot: &mut [u8], value: u16| {
        let old = u16::from_le_bytes([slot[0], slot[1]]);
        let value = if additive {
            old.wrapping_add(value)
        } else {
            value
        };
        slot[..2].copy_from_slice(&value.to_le_bytes());
    };
    match source {
        SRC_LOBYTE => {
            site[0] = if additive {
                site[0].wrapping_add(offset as u8)
            } else {
                offset as u8
            }
        }
        SRC_SEGMENT => put16(site, selector),
        SRC_OFFSET => put16(site, offset),
        SRC_FAR_ADDR => {
            put16(&mut site[..2], offset);
            site[2..4].copy_from_slice(&selector.to_le_bytes());
        }
        SRC_OFFSET32 => {
            let old = u32::from_le_bytes([site[0], site[1], site[2], site[3]]);
            let value = if additive {
                old.wrapping_add(u32::from(offset))
            } else {
                u32::from(offset)
            };
            site[..4].copy_from_slice(&value.to_le_bytes());
        }
        SRC_FAR48 => {
            let old = u32::from_le_bytes([site[0], site[1], site[2], site[3]]);
            let value = if additive {
                old.wrapping_add(u32::from(offset))
            } else {
                u32::from(offset)
            };
            site[..4].copy_from_slice(&value.to_le_bytes());
            site[4..6].copy_from_slice(&selector.to_le_bytes());
        }
        _ => {}
    }
}
