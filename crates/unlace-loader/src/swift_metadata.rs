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
//! Beyond the MVP name/flag extraction, this parser also understands the
//! optional generic-context trailer chained off a type/protocol context
//! descriptor. Swift 5.7+ uses that trailer to describe generic
//! parameter counts and requirement headers, so we now surface the
//! descriptor-chain shape even when we do not yet decode every trailing
//! record payload.
//!
//! Parsing is best-effort: a malformed offset, a name pointing outside
//! any mapped section, or a truncated descriptor causes that *entry* to
//! be skipped, never the whole section. Sections that don't exist on
//! the image simply produce an empty vector; that's how non-Swift
//! Mach-O binaries (and every ELF/PE binary) end up with
//! `BinaryImage::swift_info == None`.

use crate::image::{BinaryImage, Section};

/// Header common to any context descriptor with a generic-context
/// trailer.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwiftGenericContext {
    /// Number of generic parameters described by the trailer.
    pub parameter_count: u16,
    /// Number of requirement records that follow the parameter list.
    pub requirement_count: u16,
    /// Number of key arguments encoded by the descriptor chain.
    pub key_argument_count: u16,
    /// Whether the extra argument is present.
    pub has_extra_argument: bool,
    /// Number of bytes occupied by the generic parameter descriptor
    /// records.
    pub parameter_descriptor_bytes: u32,
    /// VA of the generic metadata-pattern field/slot when present.
    pub metadata_pattern_va: Option<u64>,
}

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
    /// Parsed generic-context trailer, if the descriptor advertises one.
    pub generic_context: Option<SwiftGenericContext>,
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
    /// Parsed generic-context trailer, if the descriptor advertises one.
    pub generic_context: Option<SwiftGenericContext>,
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

/// Read a 16-bit little-endian word at `offset` within `data`, or
/// `None` if it would run off the end.
fn read_u16_le(data: &[u8], offset: usize) -> Option<u16> {
    let end = offset.checked_add(2)?;
    if end > data.len() {
        return None;
    }
    let bytes: [u8; 2] = data[offset..end].try_into().ok()?;
    Some(u16::from_le_bytes(bytes))
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

fn descriptor_has_generic_context(flags: u32) -> bool {
    (flags & (1 << 7)) != 0
}

fn base_descriptor_size(flags: u32) -> usize {
    match flags & 0x1f {
        // module, extension, anonymous, protocol, opaque-type, class,
        // struct, enum all share the 5-word prefix we already read.
        0..=31 => 20,
        _ => 20,
    }
}

fn parse_generic_context(
    image: &BinaryImage,
    desc_va: u64,
    desc_flags: u32,
) -> Option<SwiftGenericContext> {
    if !descriptor_has_generic_context(desc_flags) {
        return None;
    }
    let generic_header_va = desc_va.wrapping_add(base_descriptor_size(desc_flags) as u64);
    let (hdr_off, hdr_bytes) = locate(image, generic_header_va)?;

    let parameter_count = read_u16_le(hdr_bytes, hdr_off)?;
    let requirement_count = read_u16_le(hdr_bytes, hdr_off + 2)?;
    let key_argument_count_and_flags = read_u16_le(hdr_bytes, hdr_off + 4)?;
    let parameter_descriptor_bytes = read_u32_le(hdr_bytes, hdr_off + 8)?;

    let metadata_pattern_rel = read_i32_le(hdr_bytes, hdr_off + 12)?;
    let metadata_pattern_va = if metadata_pattern_rel == 0 {
        None
    } else {
        Some(resolve_relative(generic_header_va.wrapping_add(12), metadata_pattern_rel))
    };

    Some(SwiftGenericContext {
        parameter_count,
        requirement_count,
        key_argument_count: key_argument_count_and_flags & 0x7fff,
        has_extra_argument: (key_argument_count_and_flags & 0x8000) != 0,
        parameter_descriptor_bytes,
        metadata_pattern_va,
    })
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
        let generic_context = parse_generic_context(image, desc_va, flags);
        out.push(SwiftTypeDescriptor {
            descriptor_va: desc_va,
            flags,
            name,
            generic_context,
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
        let generic_context = parse_generic_context(image, desc_va, flags);
        out.push(SwiftProtocolDescriptor {
            descriptor_va: desc_va,
            flags,
            name,
            generic_context,
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
            auth_ptr_slots: Vec::new(),
        }
    }

    #[test]
    fn parses_two_type_descriptors_from_swift5_types() {
        let names_va: u64 = 0x4000;
        let descs_va: u64 = 0x5000;
        let table_va: u64 = 0x6000;

        let mut names = Vec::new();
        names.extend_from_slice(b"Cat\0Dog\0");

        let name_a_va = names_va;
        let name_b_va = names_va + 4;

        let mut descs = Vec::new();
        let desc_a_va = descs_va;
        let flags_a: u32 = 0x0000_0011;
        descs.extend_from_slice(&flags_a.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let name_a_rel = (name_a_va as i64 - (desc_a_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_a_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let desc_b_va = descs_va + 20;
        let flags_b: u32 = 0x0000_0012;
        descs.extend_from_slice(&flags_b.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let name_b_rel = (name_b_va as i64 - (desc_b_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_b_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

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
        assert!(info.types[0].generic_context.is_none());
        assert_eq!(info.types[1].name.as_deref(), Some("Dog"));
        assert_eq!(info.types[1].flags, flags_b);
        assert_eq!(info.types[1].descriptor_va, desc_b_va);
        assert!(info.types[1].generic_context.is_none());
        assert!(info.protocols.is_empty());
        assert!(info.conformances.is_empty());
    }

    #[test]
    fn parses_generic_context_descriptor_chain_for_type() {
        let names_va: u64 = 0x4000;
        let descs_va: u64 = 0x5000;
        let table_va: u64 = 0x6000;
        let metadata_pattern_va: u64 = 0x7000;

        let names = b"Box\0".to_vec();
        let name_va = names_va;

        let mut descs = Vec::new();
        let desc_va = descs_va;
        let flags: u32 = 0x0000_0081;
        descs.extend_from_slice(&flags.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let name_rel = (name_va as i64 - (desc_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let generic_va = desc_va + 20;
        descs.extend_from_slice(&1u16.to_le_bytes());
        descs.extend_from_slice(&2u16.to_le_bytes());
        descs.extend_from_slice(&0x8003u16.to_le_bytes());
        descs.extend_from_slice(&0u16.to_le_bytes());
        descs.extend_from_slice(&12u32.to_le_bytes());
        let metadata_rel = (metadata_pattern_va as i64 - (generic_va as i64 + 12)) as i32;
        descs.extend_from_slice(&metadata_rel.to_le_bytes());

        let mut table = Vec::new();
        let delta = (desc_va as i64 - table_va as i64) as i32;
        table.extend_from_slice(&delta.to_le_bytes());

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
        img.sections.push(Section {
            name: "__const_meta".to_string(),
            vaddr: metadata_pattern_va,
            size: 4,
            data: vec![0, 0, 0, 0],
            flags: SectionFlags::READ,
        });

        let info = scan_swift_metadata(&img).expect("section present → Some(_)");
        let ty = &info.types[0];
        let gc = ty.generic_context.as_ref().expect("generic context parsed");
        assert_eq!(ty.name.as_deref(), Some("Box"));
        assert_eq!(gc.parameter_count, 1);
        assert_eq!(gc.requirement_count, 2);
        assert_eq!(gc.key_argument_count, 3);
        assert!(gc.has_extra_argument);
        assert_eq!(gc.parameter_descriptor_bytes, 12);
        assert_eq!(gc.metadata_pattern_va, Some(metadata_pattern_va));
    }

    #[test]
    fn parses_generic_context_descriptor_chain_for_protocol() {
        let names_va: u64 = 0x4100;
        let descs_va: u64 = 0x5100;
        let table_va: u64 = 0x6100;

        let names = b"Storage\0".to_vec();
        let name_va = names_va;

        let mut descs = Vec::new();
        let desc_va = descs_va;
        let flags: u32 = 0x0000_0082;
        descs.extend_from_slice(&flags.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let name_rel = (name_va as i64 - (desc_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        descs.extend_from_slice(&2u16.to_le_bytes());
        descs.extend_from_slice(&1u16.to_le_bytes());
        descs.extend_from_slice(&4u16.to_le_bytes());
        descs.extend_from_slice(&0u16.to_le_bytes());
        descs.extend_from_slice(&8u32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let mut table = Vec::new();
        let delta = (desc_va as i64 - table_va as i64) as i32;
        table.extend_from_slice(&delta.to_le_bytes());

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
            name: "__swift5_protos".to_string(),
            vaddr: table_va,
            size: table.len() as u64,
            data: table,
            flags: SectionFlags::READ,
        });

        let info = scan_swift_metadata(&img).expect("section present → Some(_)");
        let proto = &info.protocols[0];
        let gc = proto
            .generic_context
            .as_ref()
            .expect("protocol generic context parsed");
        assert_eq!(proto.name.as_deref(), Some("Storage"));
        assert_eq!(gc.parameter_count, 2);
        assert_eq!(gc.requirement_count, 1);
        assert_eq!(gc.key_argument_count, 4);
        assert!(!gc.has_extra_argument);
        assert_eq!(gc.parameter_descriptor_bytes, 8);
        assert_eq!(gc.metadata_pattern_va, None);
    }

    #[test]
    fn truncated_generic_context_is_ignored_without_dropping_descriptor() {
        let names_va: u64 = 0x4200;
        let descs_va: u64 = 0x5200;
        let table_va: u64 = 0x6200;

        let names = b"Maybe\0".to_vec();
        let name_va = names_va;

        let mut descs = Vec::new();
        let desc_va = descs_va;
        let flags: u32 = 0x0000_0084;
        descs.extend_from_slice(&flags.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let name_rel = (name_va as i64 - (desc_va as i64 + 8)) as i32;
        descs.extend_from_slice(&name_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&1u16.to_le_bytes());
        descs.extend_from_slice(&2u16.to_le_bytes());

        let mut table = Vec::new();
        let delta = (desc_va as i64 - table_va as i64) as i32;
        table.extend_from_slice(&delta.to_le_bytes());

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
        assert_eq!(info.types.len(), 1);
        assert_eq!(info.types[0].name.as_deref(), Some("Maybe"));
        assert!(info.types[0].generic_context.is_none());
    }

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
