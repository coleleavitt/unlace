//! Swift 5+ runtime metadata extraction from Mach-O `__TEXT` sections.
//!
//! Modern Swift binaries advertise their type system through three
//! `__TEXT` sections, each carrying *32-bit relative offsets* (Swift's
//! one-pass equivalent of RVAs):
//!
//! * `__swift5_types`   — `i32` offset → [`TypeContextDescriptor`].
//! * `__swift5_protos`  — `i32` offset → protocol descriptor.
//! * `__swift5_proto`   — `i32` offset → protocol-conformance descriptor.
//!
//! On ARM64e the offset's high bits may carry pointer-authentication
//! signing tags, but for these `int32` reference slots the runtime
//! emits a plain signed delta. We treat every entry as a signed
//! `(slot_va, slot_value)` pair: the *target* VA is
//! `slot_va.wrapping_add(slot_value as i64 as u64)`.
//!
//! For the MVP we extract only:
//!
//! * Type descriptors: `name` (UTF-8) and `flags` (u32).
//! * Protocol descriptors: the descriptor VA and (if reachable) its
//!   name.
//! * Conformance descriptors: the descriptor VA only.
//!
//! Field/generic-parameter/method-vtable walking is deliberately out
//! of scope — adding those is a follow-up task once a consumer needs
//! them.
//!
//! Parsing is best-effort: a malformed offset, a name pointing outside
//! any mapped section, or a truncated descriptor causes that *entry* to
//! be skipped, never the whole section. Sections that don't exist on
//! the image simply produce an empty vector; that's how non-Swift
//! Mach-O binaries (and every ELF/PE binary) end up with
//! `BinaryImage::swift_info == None`.

use crate::image::{BinaryImage, Section};

/// One entry parsed from `__swift5_types`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwiftTypeDescriptor {
    /// VA of the resolved `TypeContextDescriptor` record.
    pub descriptor_va: u64,
    /// `flags` field (first `u32` of the descriptor). Encodes the kind
    /// (class/struct/enum) plus modifier bits.
    pub flags: u32,
    /// Decoded name, if the embedded relative offset points at a
    /// readable NUL-terminated UTF-8 string in any mapped section.
    pub name: Option<String>,
}

/// One entry parsed from `__swift5_protos`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwiftProtocolDescriptor {
    /// VA of the resolved protocol descriptor.
    pub descriptor_va: u64,
    /// `flags` field (first `u32`).
    pub flags: u32,
    /// Protocol name, if reachable. Protocol descriptors share the
    /// same `(flags, parent, name, …)` prefix layout as type
    /// descriptors for the fields we read.
    pub name: Option<String>,
}

/// One entry parsed from `__swift5_proto`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwiftConformance {
    /// VA of the conformance descriptor.
    pub descriptor_va: u64,
}

/// Aggregate Swift runtime metadata recovered from a Mach-O image.
///
/// `None` on [`BinaryImage::swift_info`] indicates we didn't find any
/// of the three sections, which is the normal state for non-Swift
/// binaries.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SwiftInfo {
    pub types: Vec<SwiftTypeDescriptor>,
    pub protocols: Vec<SwiftProtocolDescriptor>,
    pub conformances: Vec<SwiftConformance>,
}

impl SwiftInfo {
    /// True when no descriptors of any kind were recovered. Callers
    /// can use this to decide whether to store `Some(info)` or just
    /// `None` on the image.
    pub fn is_empty(&self) -> bool {
        self.types.is_empty() && self.protocols.is_empty() && self.conformances.is_empty()
    }
}

/// Scan an already-loaded [`BinaryImage`] for Swift 5 metadata.
///
/// Returns `None` if none of the three sections exist (the common
/// non-Swift case). Returns `Some(info)` whenever *any* of the three
/// sections is present, even if all parsed entries turned out to be
/// invalid; that way downstream code can distinguish "didn't look"
/// from "looked, found nothing".
pub fn scan_swift_metadata(image: &BinaryImage) -> Option<SwiftInfo> {
    let types_sec = find_section(image, "__swift5_types");
    let protos_sec = find_section(image, "__swift5_protos");
    let proto_sec = find_section(image, "__swift5_proto");

    if types_sec.is_none() && protos_sec.is_none() && proto_sec.is_none() {
        return None;
    }

    let mut info = SwiftInfo::default();
    if let Some(sec) = types_sec {
        info.types = parse_type_table(image, sec);
    }
    if let Some(sec) = protos_sec {
        info.protocols = parse_protocol_table(image, sec);
    }
    if let Some(sec) = proto_sec {
        info.conformances = parse_conformance_table(sec);
    }
    Some(info)
}

/// Section lookup tolerant of both bare (`__swift5_types`) and
/// segment-qualified (`__TEXT,__swift5_types`) names — Mach-O loaders
/// in this crate emit the bare form, but external tools sometimes
/// concatenate the segment.
fn find_section<'a>(image: &'a BinaryImage, name: &str) -> Option<&'a Section> {
    image.sections.iter().find(|s| {
        s.name == name || s.name.ends_with(name) || s.name.ends_with(&format!(",{name}"))
    })
}

/// Read a 32-bit little-endian word at `offset` within `data`, or
/// `None` if it would run off the end.
fn read_i32_le(data: &[u8], offset: usize) -> Option<i32> {
    let end = offset.checked_add(4)?;
    if end > data.len() {
        return None;
    }
    let bytes: [u8; 4] = data[offset..end].try_into().ok()?;
    Some(i32::from_le_bytes(bytes))
}

fn read_u32_le(data: &[u8], offset: usize) -> Option<u32> {
    read_i32_le(data, offset).map(|v| v as u32)
}

/// Resolve a `slot_va + slot_value` relative reference to a target
/// VA. `slot_value` is treated as a signed `i32` — that's the Swift
/// runtime convention.
fn resolve_relative(slot_va: u64, slot_value: i32) -> u64 {
    slot_va.wrapping_add(slot_value as i64 as u64)
}

/// Find the section that contains `va` and return a `(byte_offset,
/// bytes)` view rooted at `va`. Returns `None` if `va` falls outside
/// every mapped section (or inside a section with no backing bytes).
fn locate<'a>(image: &'a BinaryImage, va: u64) -> Option<(usize, &'a [u8])> {
    for sec in &image.sections {
        let end = sec.vaddr.saturating_add(sec.size);
        if va >= sec.vaddr && va < end {
            let offset = (va - sec.vaddr) as usize;
            if offset >= sec.data.len() {
                return None;
            }
            return Some((offset, &sec.data));
        }
    }
    None
}

/// Read a NUL-terminated UTF-8 string starting at `va`, capped at
/// `max_len` bytes so a missing terminator can't blow up the scan.
fn read_cstr(image: &BinaryImage, va: u64) -> Option<String> {
    const MAX_LEN: usize = 4096;
    let (offset, bytes) = locate(image, va)?;
    let tail = &bytes[offset..];
    let end = tail
        .iter()
        .take(MAX_LEN)
        .position(|&b| b == 0)
        .unwrap_or(tail.len().min(MAX_LEN));
    std::str::from_utf8(&tail[..end]).ok().map(str::to_owned)
}

/// Parse `__swift5_types`: each 4-byte slot is a signed offset to a
/// `TypeContextDescriptor`. The descriptor's first 20 bytes are
/// `(flags, parent, name, accessFunction, fields)`, all `i32`.
fn parse_type_table(image: &BinaryImage, sec: &Section) -> Vec<SwiftTypeDescriptor> {
    let mut out = Vec::new();
    let mut off = 0usize;
    while off + 4 <= sec.data.len() {
        let slot_va = sec.vaddr.wrapping_add(off as u64);
        let raw = match read_i32_le(&sec.data, off) {
            Some(v) => v,
            None => break,
        };
        off += 4;
        if raw == 0 {
            // A literal-zero slot is malformed; skip but keep scanning.
            continue;
        }
        let desc_va = resolve_relative(slot_va, raw);
        let Some((desc_off, desc_bytes)) = locate(image, desc_va) else {
            continue;
        };
        let Some(flags) = read_u32_le(desc_bytes, desc_off) else {
            continue;
        };
        // Skip parent (i32 at desc_off + 4).
        let name_slot_va = desc_va.wrapping_add(8);
        let name = read_i32_le(desc_bytes, desc_off + 8)
            .map(|rel| resolve_relative(name_slot_va, rel))
            .and_then(|name_va| read_cstr(image, name_va));
        out.push(SwiftTypeDescriptor {
            descriptor_va: desc_va,
            flags,
            name,
        });
    }
    out
}

/// Parse `__swift5_protos`. Protocol descriptors share the
/// `(flags, parent, name, …)` prefix we care about, so the body
/// mirrors [`parse_type_table`] but emits [`SwiftProtocolDescriptor`].
fn parse_protocol_table(image: &BinaryImage, sec: &Section) -> Vec<SwiftProtocolDescriptor> {
    let mut out = Vec::new();
    let mut off = 0usize;
    while off + 4 <= sec.data.len() {
        let slot_va = sec.vaddr.wrapping_add(off as u64);
        let raw = match read_i32_le(&sec.data, off) {
            Some(v) => v,
            None => break,
        };
        off += 4;
        if raw == 0 {
            continue;
        }
        let desc_va = resolve_relative(slot_va, raw);
        let Some((desc_off, desc_bytes)) = locate(image, desc_va) else {
            continue;
        };
        let Some(flags) = read_u32_le(desc_bytes, desc_off) else {
            continue;
        };
        let name_slot_va = desc_va.wrapping_add(8);
        let name = read_i32_le(desc_bytes, desc_off + 8)
            .map(|rel| resolve_relative(name_slot_va, rel))
            .and_then(|name_va| read_cstr(image, name_va));
        out.push(SwiftProtocolDescriptor {
            descriptor_va: desc_va,
            flags,
            name,
        });
    }
    out
}

/// Parse `__swift5_proto`. Conformance descriptors have a richer
/// layout (protocol ref, type ref, witness table accessor, …) but for
/// the MVP we just surface the descriptor VA so consumers can
/// cross-reference symbols.
fn parse_conformance_table(sec: &Section) -> Vec<SwiftConformance> {
    let mut out = Vec::new();
    let mut off = 0usize;
    while off + 4 <= sec.data.len() {
        let slot_va = sec.vaddr.wrapping_add(off as u64);
        let raw = match read_i32_le(&sec.data, off) {
            Some(v) => v,
            None => break,
        };
        off += 4;
        if raw == 0 {
            continue;
        }
        let desc_va = resolve_relative(slot_va, raw);
        out.push(SwiftConformance {
            descriptor_va: desc_va,
        });
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Endian, Section, SectionFlags};
    use std::collections::BTreeMap;

    fn empty_image() -> BinaryImage {
        BinaryImage {
            arch: ArchId::AArch64,
            endian: Endian::Little,
            entry: 0,
            sections: Vec::new(),
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            function_starts: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
        }
    }

    /// Lay out two `TypeContextDescriptor` records in a single
    /// `__TEXT` section, then a `__swift5_types` section holding the
    /// signed `i32` deltas that reach them, plus a `__cstring`-like
    /// section carrying the names. Verify both type names + flags
    /// round-trip out of the parser.
    #[test]
    fn parses_two_type_descriptors_from_swift5_types() {
        // ── Layout (all VAs are arbitrary, just spread across pages) ──
        //   names  @ 0x4000 : "Cat\0Dog\0"
        //   descs  @ 0x5000 : desc_A (20 bytes) at +0
        //                     desc_B (20 bytes) at +20
        //   table  @ 0x6000 : 2 × i32 → desc_A, desc_B
        let names_va: u64 = 0x4000;
        let descs_va: u64 = 0x5000;
        let table_va: u64 = 0x6000;

        let mut names = Vec::new();
        names.extend_from_slice(b"Cat\0Dog\0");

        let name_a_va = names_va; // "Cat"
        let name_b_va = names_va + 4; // "Dog"

        // Build desc_A and desc_B: flags, parent=0, name(relative), accessFn=0, fields=0.
        let mut descs = Vec::new();
        // desc_A at descs_va + 0
        let desc_a_va = descs_va;
        let flags_a: u32 = 0x0000_0011; // arbitrary "class" flags
        descs.extend_from_slice(&flags_a.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes()); // parent
        // name slot lives at desc_a_va + 8; delta = name_a_va - (desc_a_va + 8)
        let name_a_rel = (name_a_va as i64 - (desc_a_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_a_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes()); // accessFunction
        descs.extend_from_slice(&0i32.to_le_bytes()); // fields

        // desc_B at descs_va + 20
        let desc_b_va = descs_va + 20;
        let flags_b: u32 = 0x0000_0012;
        descs.extend_from_slice(&flags_b.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let name_b_rel = (name_b_va as i64 - (desc_b_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_b_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        // Build the table: i32 deltas from each slot's own VA to the
        // descriptor it references.
        let mut table = Vec::new();
        let slot0_va = table_va;
        let delta0 = (desc_a_va as i64 - slot0_va as i64) as i32;
        table.extend_from_slice(&delta0.to_le_bytes());
        let slot1_va = table_va + 4;
        let delta1 = (desc_b_va as i64 - slot1_va as i64) as i32;
        table.extend_from_slice(&delta1.to_le_bytes());

        let mut img = empty_image();
        img.sections.push(Section {
            name: "__cstring".to_string(),
            vaddr: names_va,
            size: names.len() as u64,
            data: names,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: "__const".to_string(),
            vaddr: descs_va,
            size: descs.len() as u64,
            data: descs,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: "__swift5_types".to_string(),
            vaddr: table_va,
            size: table.len() as u64,
            data: table,
            flags: SectionFlags::READ,
        });

        let info = scan_swift_metadata(&img).expect("section present → Some(_)");
        assert_eq!(info.types.len(), 2, "both descriptors recovered");
        assert_eq!(info.types[0].name.as_deref(), Some("Cat"));
        assert_eq!(info.types[0].flags, flags_a);
        assert_eq!(info.types[0].descriptor_va, desc_a_va);
        assert_eq!(info.types[1].name.as_deref(), Some("Dog"));
        assert_eq!(info.types[1].flags, flags_b);
        assert_eq!(info.types[1].descriptor_va, desc_b_va);
        // Other tables weren't present → stayed empty.
        assert!(info.protocols.is_empty());
        assert!(info.conformances.is_empty());
    }

    /// An empty `__swift5_protos` (section exists but its data is
    /// zero-length) must produce `Some(SwiftInfo)` with an empty
    /// `protocols` vec, not a parse error and not `None`.
    #[test]
    fn empty_swift5_protos_handled_gracefully() {
        let mut img = empty_image();
        img.sections.push(Section {
            name: "__swift5_protos".to_string(),
            vaddr: 0x7000,
            size: 0,
            data: Vec::new(),
            flags: SectionFlags::READ,
        });
        let info =
            scan_swift_metadata(&img).expect("presence of section forces Some(_) even if empty");
        assert!(info.types.is_empty());
        assert!(info.protocols.is_empty());
        assert!(info.conformances.is_empty());
        assert!(info.is_empty());
    }

    /// A binary with zero Swift sections must produce `None` so the
    /// printer can short-circuit without allocating an empty struct.
    #[test]
    fn no_swift_sections_returns_none() {
        let mut img = empty_image();
        img.sections.push(Section {
            name: "__text".to_string(),
            vaddr: 0x1000,
            size: 4,
            data: vec![0xC3, 0x00, 0x00, 0x00],
            flags: SectionFlags::READ | SectionFlags::EXEC,
        });
        assert!(scan_swift_metadata(&img).is_none());
    }
}
