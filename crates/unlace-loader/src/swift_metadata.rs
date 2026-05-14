//! Swift 5+ runtime metadata extraction from Mach-O `__TEXT` sections.
//!
//! Modern Swift binaries advertise their type system through several
//! `__TEXT` sections, most carrying *32-bit relative offsets* (Swift's
//! one-pass equivalent of RVAs):
//!
//! * `__swift5_types`   — `i32` offset → [`TypeContextDescriptor`].
//! * `__swift5_protos`  — `i32` offset → protocol descriptor.
//! * `__swift5_builtin` — async-function records pointing at async entry points.
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
//! * Builtin async-function records: target function VA + symbol name, if any.
//! * Conformance descriptors: the descriptor VA only.
//! * Conformance descriptors: the descriptor VA only.
//! * Conformance descriptors: descriptor VA plus resolved type/protocol names
//!   and witness-table accessor VA when present.
//!
//! Field/generic-parameter/method-vtable walking is deliberately out
//! of scope — adding those is a follow-up task once a consumer needs
//! them.
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

/// One entry parsed from `__swift5_builtin`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwiftBuiltinAsyncFunction {
    /// VA of the async-function pointer record.
    pub record_va: u64,
    /// Target function VA named by the record's first relative pointer.
    pub function_va: u64,
    /// Demangled-or-raw symbol name for the function, if a matching
    /// symbol table entry exists at [`Self::function_va`].
    pub function_name: Option<String>,
}

/// One entry parsed from `__swift5_proto`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SwiftConformance {
    /// VA of the conformance descriptor.
    pub descriptor_va: u64,
    /// Resolved protocol descriptor VA, when the first relative reference
    /// in the conformance descriptor points at a mapped protocol descriptor.
    pub protocol_descriptor_va: Option<u64>,
    /// Best-effort decoded protocol name.
    pub protocol_name: Option<String>,
    /// Resolved nominal-type descriptor VA for the conforming type when the
    /// second relative reference points at a mapped type descriptor.
    pub type_descriptor_va: Option<u64>,
    /// Best-effort decoded conforming type name.
    pub type_name: Option<String>,
    /// Resolved protocol descriptor VA from the conformance's protocol
    /// relative reference.
    pub protocol_va: Option<u64>,
    /// Protocol name when the referenced descriptor is mapped and readable.
    pub protocol_name: Option<String>,
    /// Resolved nominal type descriptor VA for the conforming type when the
    /// descriptor encodes a direct type-reference.
    pub type_va: Option<u64>,
    /// Conforming type name when the type descriptor is mapped and readable.
    pub type_name: Option<String>,
    /// Resolved witness-table/accessor function VA when the conformance
    /// descriptor carries a non-zero relative method slot.
    pub witness_table_va: Option<u64>,
    /// Raw conformance flags word (offset 12).
    pub flags: u32,
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
    /// Swift async function records recovered from `__swift5_builtin`.
    ///
    /// The Swift concurrency runtime uses this section to point at
    /// async entry points. Recovering these records gives the decompiler
    /// a concrete binary-side signal that a function should eventually
    /// surface as `func foo() async` rather than an ordinary function.
    pub async_functions: Vec<SwiftBuiltinAsyncFunction>,
    pub conformances: Vec<SwiftConformance>,
}

impl SwiftInfo {
    /// True when no descriptors of any kind were recovered. Callers
    /// can use this to decide whether to store `Some(info)` or just
    /// `None` on the image.
    pub fn is_empty(&self) -> bool {
        self.types.is_empty()
            && self.protocols.is_empty()
            && self.async_functions.is_empty()
            && self.conformances.is_empty()
    }
}

/// Scan an already-loaded [`BinaryImage`] for Swift 5 metadata.
///
/// Returns `None` if none of the Swift metadata sections exist (the common
/// non-Swift case). Returns `Some(info)` whenever *any* of them
/// sections is present, even if all parsed entries turned out to be
/// invalid; that way downstream code can distinguish "didn't look"
/// from "looked, found nothing".
pub fn scan_swift_metadata(image: &BinaryImage) -> Option<SwiftInfo> {
    let types_sec = find_section(image, "__swift5_types");
    let protos_sec = find_section(image, "__swift5_protos");
    let builtin_sec = find_section(image, "__swift5_builtin");
    let proto_sec = find_section(image, "__swift5_proto");

    if types_sec.is_none() && protos_sec.is_none() && builtin_sec.is_none() && proto_sec.is_none() {
        return None;
    }

    let mut info = SwiftInfo::default();
    if let Some(sec) = types_sec {
        info.types = parse_type_table(image, sec);
    }
    if let Some(sec) = protos_sec {
        info.protocols = parse_protocol_table(image, sec);
    }
    if let Some(sec) = builtin_sec {
        info.async_functions = parse_builtin_async_table(image, sec);
    }
    if let Some(sec) = proto_sec {
        info.conformances = parse_conformance_table(image, sec);
    }
    Some(info)
}

/// Section lookup tolerant of both bare (`__swift5_types`) and
/// segment-qualified (`__TEXT,__swift5_types`) names — Mach-O loaders
/// in this crate emit the bare form, but external tools sometimes
/// concatenate the segment.
fn find_section<'a>(image: &'a BinaryImage, name: &str) -> Option<&'a Section> {
    image
        .sections
        .iter()
        .find(|s| s.name == name || s.name.ends_with(name) || s.name.ends_with(&format!(",{name}")))
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
    image.sections.iter().find(|s| {
        s.name == name || s.name.ends_with(name) || s.name.ends_with(&format!(",{name}"))
    })
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

/// Parse `__swift5_builtin` looking for async function records.
///
/// Apple uses this section to describe compiler-known builtin metadata.
/// For async/await recovery we exploit the simplest stable signal: each
/// 4-byte slot names a target function by relative pointer. We resolve
/// the pointed-to VA and, when a symbol table entry exists at that VA,
/// preserve its demangled-or-raw name so later pipeline stages can mark
/// the function as Swift `async`.
fn parse_builtin_async_table(image: &BinaryImage, sec: &Section) -> Vec<SwiftBuiltinAsyncFunction> {
    let mut out = Vec::new();
    let mut off = 0usize;
    while off + 4 <= sec.data.len() {
        let record_va = sec.vaddr.wrapping_add(off as u64);
        let raw = match read_i32_le(&sec.data, off) {
            Some(v) => v,
            None => break,
        };
        off += 4;
        if raw == 0 {
            continue;
        }
        let function_va = resolve_relative(record_va, raw);
        let function_name = image.symbols.get(&function_va).map(|sym| {
            crate::demangle_swift::try_demangle_swift(&sym.name).unwrap_or_else(|| sym.name.clone())
        });
        let function_name = image
            .symbols
            .get(&function_va)
            .map(|sym| crate::demangle_swift::try_demangle_swift(&sym.name).unwrap_or_else(|| sym.name.clone()));
        out.push(SwiftBuiltinAsyncFunction {
            record_va,
            function_va,
            function_name,
        });
    }
    out
}

/// Parse `__swift5_proto`. Conformance descriptors have a richer
/// layout (protocol ref, type ref, witness table accessor, …) but for
/// the MVP we just surface the descriptor VA so consumers can
/// cross-reference symbols.
/// Parse `__swift5_proto`. Conformance descriptors have a richer
/// layout (protocol ref, type ref, witness table accessor, …) but for
/// the MVP we just surface the descriptor VA so consumers can
/// cross-reference symbols.
fn parse_conformance_table(sec: &Section) -> Vec<SwiftConformance> {
fn parse_descriptor_name(image: &BinaryImage, desc_va: u64) -> Option<(u32, Option<String>)> {
    let (desc_off, desc_bytes) = locate(image, desc_va)?;
    let flags = read_u32_le(desc_bytes, desc_off)?;
    let name_slot_va = desc_va.wrapping_add(8);
    let name = read_i32_le(desc_bytes, desc_off + 8)
        .map(|rel| resolve_relative(name_slot_va, rel))
        .and_then(|name_va| read_cstr(image, name_va));
    Some((flags, name))
}

/// Decode the direct nominal-type-reference form used by Swift protocol
/// conformance descriptors.  The low two bits are a kind tag; kind zero is a
/// direct relative reference to a nominal type descriptor.  Other forms
/// (indirect, Objective-C class name, metadata accessor) are intentionally
/// reported as unknown until a later task needs them.
fn resolve_direct_type_reference(slot_va: u64, raw: i32) -> Option<u64> {
    let raw_u = raw as u32;
    if raw_u & 0b11 == 0 {
        Some(resolve_relative(slot_va, raw))
    } else {
        None
    }
}

/// Parse `__swift5_proto`. Each section entry is a relative pointer to a
/// TargetProtocolConformanceDescriptor.  The prefix is:
///
/// ```text
/// protocol:        RelativeProtocolDescriptorPointer  (i32)
/// nominalType:     RelativeDirectPointer/TypeRef      (i32)
/// witnessTable:    RelativeDirectPointer              (i32)
/// flags:           ConformanceFlags                   (u32)
/// ```
///
/// Surfacing the protocol/type pair lets the C printer render source-style
/// breadcrumbs such as `protocol Equatable conformance: Widget` instead of
/// an opaque conformance descriptor address.
fn parse_conformance_table(image: &BinaryImage, sec: &Section) -> Vec<SwiftConformance> {
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
            out.push(SwiftConformance {
                descriptor_va: desc_va,
                protocol_descriptor_va: None,
                protocol_name: None,
                type_descriptor_va: None,
                type_name: None,
            });
            continue;
        };

        let protocol_slot_va = desc_va;
        let (protocol_descriptor_va, protocol_name) = read_i32_le(desc_bytes, desc_off)
            .map(|rel| resolve_relative(protocol_slot_va, rel))
            .map(|proto_va| {
                let name = locate(image, proto_va).and_then(|(proto_off, proto_bytes)| {
                    let name_slot_va = proto_va.wrapping_add(8);
                    read_i32_le(proto_bytes, proto_off + 8)
                        .map(|name_rel| resolve_relative(name_slot_va, name_rel))
                        .and_then(|name_va| read_cstr(image, name_va))
                });
                (Some(proto_va), name)
            })
            .unwrap_or((None, None));

        let type_slot_va = desc_va.wrapping_add(4);
        let (type_descriptor_va, type_name) = read_i32_le(desc_bytes, desc_off + 4)
            .map(|rel| resolve_relative(type_slot_va, rel))
            .map(|type_va| {
                let name = locate(image, type_va).and_then(|(type_off, type_bytes)| {
                    let name_slot_va = type_va.wrapping_add(8);
                    read_i32_le(type_bytes, type_off + 8)
                        .map(|name_rel| resolve_relative(name_slot_va, name_rel))
                        .and_then(|name_va| read_cstr(image, name_va))
                });
                (Some(type_va), name)
            })
            .unwrap_or((None, None));
                protocol_va: None,
                protocol_name: None,
                type_va: None,
                type_name: None,
                witness_table_va: None,
                flags: 0,
            });
            continue;
        };

        let protocol_slot_va = desc_va;
        let protocol_va = read_i32_le(desc_bytes, desc_off)
            .filter(|rel| *rel != 0)
            .map(|rel| resolve_relative(protocol_slot_va, rel));
        let protocol_name = protocol_va
            .and_then(|va| parse_descriptor_name(image, va))
            .and_then(|(_, name)| name);

        let type_slot_va = desc_va.wrapping_add(4);
        let type_va = read_i32_le(desc_bytes, desc_off + 4)
            .filter(|rel| *rel != 0)
            .and_then(|rel| resolve_direct_type_reference(type_slot_va, rel));
        let type_name = type_va
            .and_then(|va| parse_descriptor_name(image, va))
            .and_then(|(_, name)| name);

        let witness_slot_va = desc_va.wrapping_add(8);
        let witness_table_va = read_i32_le(desc_bytes, desc_off + 8)
            .filter(|rel| *rel != 0)
            .map(|rel| resolve_relative(witness_slot_va, rel));
        let flags = read_u32_le(desc_bytes, desc_off + 12).unwrap_or(0);

        out.push(SwiftConformance {
            descriptor_va: desc_va,
            protocol_descriptor_va,
            protocol_name,
            type_descriptor_va,
            type_name,
            protocol_va,
            protocol_name,
            type_va,
            type_name,
            witness_table_va,
            flags,
        });
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Endian, Section, SectionFlags};
    use std::collections::BTreeMap;

    fn push_symbol(img: &mut BinaryImage, va: u64, name: &str) {
        img.symbols.insert(
            va,
            crate::image::Symbol {
                name: name.to_string(),
                addr: va,
                size: 0,
                kind: crate::image::SymbolKind::Function,
            },
        );
    }

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
            pdb_info: None,
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: BTreeMap::new(),
            go_types: BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
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
    fn parses_swift_async_builtin_record_and_symbol_name() {
        let builtin_va: u64 = 0x7100;
        let func_va: u64 = 0x8000;
        let mut img = empty_image();
        push_symbol(&mut img, func_va, "$s4main5fetchyyYaF");

        let rel = (func_va as i64 - builtin_va as i64) as i32;
        img.sections.push(Section {
            name: "__swift5_builtin".to_string(),
            vaddr: builtin_va,
            size: 4,
            data: rel.to_le_bytes().to_vec(),
            flags: SectionFlags::READ,
        });

        let info = scan_swift_metadata(&img).expect("section present → Some(_)");
        assert!(info.types.is_empty());
        assert!(info.protocols.is_empty());
        assert_eq!(info.async_functions.len(), 1);
        assert_eq!(info.async_functions[0].record_va, builtin_va);
        assert_eq!(info.async_functions[0].function_va, func_va);
        assert_eq!(
            info.async_functions[0].function_name.as_deref(),
            Some("main.fetch")
        );
        assert!(info.conformances.is_empty());
    fn parses_swift_protocol_conformance_names() {
        let names_va: u64 = 0x4000;
        let descs_va: u64 = 0x5000;
        let protos_va: u64 = 0x6000;
        let proto_table_va: u64 = 0x7000;

        let mut names = Vec::new();
        names.extend_from_slice(b"Cat Pettable ");
        let cat_name_va = names_va;
        let proto_name_va = names_va + 4;

        let mut descs = Vec::new();
        let type_desc_va = descs_va;
        descs.extend_from_slice(&0x11u32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let cat_name_rel = (cat_name_va as i64 - (type_desc_va as i64 + 8)) as i32;
        descs.extend_from_slice(&cat_name_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let proto_desc_va = descs_va + 20;
        descs.extend_from_slice(&0x22u32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        let proto_name_rel = (proto_name_va as i64 - (proto_desc_va as i64 + 8)) as i32;
        descs.extend_from_slice(&proto_name_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let conf_desc_va = descs_va + 40;
        let proto_rel = (proto_desc_va as i64 - conf_desc_va as i64) as i32;
        descs.extend_from_slice(&proto_rel.to_le_bytes());
        let type_rel = (type_desc_va as i64 - (conf_desc_va as i64 + 4)) as i32;
        descs.extend_from_slice(&type_rel.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let mut protos = Vec::new();
        let proto_slot_va = protos_va;
        let proto_delta = (proto_desc_va as i64 - proto_slot_va as i64) as i32;
        protos.extend_from_slice(&proto_delta.to_le_bytes());

        let mut proto_table = Vec::new();
        let conf_slot_va = proto_table_va;
        let conf_delta = (conf_desc_va as i64 - conf_slot_va as i64) as i32;
        proto_table.extend_from_slice(&conf_delta.to_le_bytes());

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
            vaddr: protos_va,
            size: protos.len() as u64,
            data: protos,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: "__swift5_proto".to_string(),
            vaddr: proto_table_va,
            size: proto_table.len() as u64,
            data: proto_table,
            flags: SectionFlags::READ,
        });

        let info = scan_swift_metadata(&img).expect("Swift sections present");
        assert_eq!(info.protocols.len(), 1);
        assert_eq!(info.protocols[0].name.as_deref(), Some("Pettable"));
        assert_eq!(info.conformances.len(), 1);
        let conf = &info.conformances[0];
        assert_eq!(conf.protocol_descriptor_va, Some(proto_desc_va));
        assert_eq!(conf.protocol_name.as_deref(), Some("Pettable"));
        assert_eq!(conf.type_descriptor_va, Some(type_desc_va));
        assert_eq!(conf.type_name.as_deref(), Some("Cat"));
    fn parses_protocol_conformance_type_protocol_and_witness() {
        let names_va: u64 = 0x4000;
        let descs_va: u64 = 0x5000;
        let conf_va: u64 = 0x6000;
        let table_va: u64 = 0x7000;
        let witness_va: u64 = 0x8000;

        let mut names = Vec::new();
        names.extend_from_slice(b"Widget\0Drawable\0");
        let type_name_va = names_va;
        let proto_name_va = names_va + 7;

        let type_desc_va = descs_va;
        let proto_desc_va = descs_va + 20;
        let mut descs = Vec::new();
        descs.extend_from_slice(&0x51u32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(
            &((type_name_va as i64 - (type_desc_va as i64 + 8)) as i32).to_le_bytes(),
        );
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0x52u32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(
            &((proto_name_va as i64 - (proto_desc_va as i64 + 8)) as i32).to_le_bytes(),
        );
        descs.extend_from_slice(&0i32.to_le_bytes());
        descs.extend_from_slice(&0i32.to_le_bytes());

        let mut conf = Vec::new();
        conf.extend_from_slice(&((proto_desc_va as i64 - conf_va as i64) as i32).to_le_bytes());
        conf.extend_from_slice(
            &((type_desc_va as i64 - (conf_va as i64 + 4)) as i32).to_le_bytes(),
        );
        conf.extend_from_slice(&((witness_va as i64 - (conf_va as i64 + 8)) as i32).to_le_bytes());
        conf.extend_from_slice(&0x1234u32.to_le_bytes());

        let mut table = Vec::new();
        table.extend_from_slice(&((conf_va as i64 - table_va as i64) as i32).to_le_bytes());

        let mut img = empty_image();
        img.sections.push(Section {
            name: "__cstring".into(),
            vaddr: names_va,
            size: names.len() as u64,
            data: names,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: "__const".into(),
            vaddr: descs_va,
            size: descs.len() as u64,
            data: descs,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: "__swift5_proto_desc".into(),
            vaddr: conf_va,
            size: conf.len() as u64,
            data: conf,
            flags: SectionFlags::READ,
        });
        img.sections.push(Section {
            name: "__swift5_proto".into(),
            vaddr: table_va,
            size: table.len() as u64,
            data: table,
            flags: SectionFlags::READ,
        });

        let info = scan_swift_metadata(&img).expect("swift section present");
        assert_eq!(info.conformances.len(), 1);
        let c = &info.conformances[0];
        assert_eq!(c.descriptor_va, conf_va);
        assert_eq!(c.protocol_va, Some(proto_desc_va));
        assert_eq!(c.protocol_name.as_deref(), Some("Drawable"));
        assert_eq!(c.type_va, Some(type_desc_va));
        assert_eq!(c.type_name.as_deref(), Some("Widget"));
        assert_eq!(c.witness_table_va, Some(witness_va));
        assert_eq!(c.flags, 0x1234);
    }

    /// An empty `__swift5_protos` (section exists but its data is
    /// zero-length) must produce `Some(SwiftInfo)` with an empty
    /// `protocols` vec, not a parse error and not `None`.
    /// An empty `__swift5_protos` (section exists but its data is
    /// zero-length) must produce `Some(SwiftInfo)` with an empty
    /// `protocols` vec, not a parse error and not `None`.
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
        assert!(info.async_functions.is_empty());
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
