//! `.gcc_except_table` LSDA (Language-Specific Data Area) parser for C++
//! exception handling region extraction.
//!
//! The `.gcc_except_table` section contains one LSDA per function that uses
//! try/catch. Each LSDA describes which PC ranges are protected (call sites),
//! what landing pads handle exceptions, and which type filters (typeinfo
//! pointers) select caught exception types.
//!
//! LSDA layout (from libcxxabi `cxa_personality.cpp`):
//!
//! ```text
//! Header:
//!   lpStartEncoding  (1 byte)
//!   lpStart          (encoded, optional)
//!   ttypeEncoding    (1 byte)
//!   classInfoOffset  (ULEB128, only if ttypeEncoding != DW_EH_PE_omit)
//!   callSiteEncoding (1 byte)
//!   callSiteLength   (ULEB128)
//!
//! Call Site Table:
//!   [start, length, landingPad, actionEntry]  × N
//!
//! Action Table:
//!   [ttypeIndex (SLEB128), actionOffset (SLEB128)]  × M
//!
//! Type Table (reverse-indexed from classInfo pointer):
//!   typeinfo pointer per index
//! ```

use std::collections::BTreeMap;
use std::ops::Range;

use crate::eh_frame::LsdaEntry;
use crate::error::LoadError;
use crate::image::{BinaryImage, Endian};
use unlace_ir::ArchId;

/// A contiguous PC range protected by an exception handler.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TryRegion {
    /// PC range covered by the try region (absolute VAs).
    pub pc_range: Range<u64>,
    /// Landing pad VA, or `None` for cleanup-only entries.
    pub landing_pad: Option<u64>,
    /// Type filter indices from the action chain. Positive values index into
    /// the type table; 0 means cleanup; negative values are exception spec
    /// filters.
    pub type_filters: Vec<i64>,
    /// Resolved catch typeinfo addresses for this region, in action-chain
    /// order. A zero entry is the Itanium ABI catch-all sentinel
    /// (`catch (...)`). Exception-spec filters are not included here.
    pub caught_typeinfo_addrs: Vec<u64>,
}

/// Parsed LSDA for a single function.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FunctionLsda {
    /// Function start VA (from the FDE).
    pub function_start: u64,
    /// Try regions extracted from the call site table.
    pub try_regions: Vec<TryRegion>,
    /// Absolute addresses of caught typeinfo objects (resolved from the type
    /// table, deduplicated).
    pub caught_typeinfo_addrs: Vec<u64>,
}

/// All LSDA data parsed from `.gcc_except_table`.
#[derive(Debug, Clone)]
pub struct GccExceptTableInfo {
    /// Per-function LSDA records, keyed by function start address.
    pub functions: BTreeMap<u64, FunctionLsda>,
}

impl GccExceptTableInfo {
    pub fn empty() -> Self {
        Self {
            functions: BTreeMap::new(),
        }
    }

    pub fn is_empty(&self) -> bool {
        self.functions.is_empty()
    }
}

// ---------------------------------------------------------------------------
// DW_EH_PE encoding constants
// ---------------------------------------------------------------------------

const DW_EH_PE_OMIT: u8 = 0xFF;
const DW_EH_PE_ABSPTR: u8 = 0x00;

// Low 4 bits: value format
const DW_EH_PE_ULEB128: u8 = 0x01;
const DW_EH_PE_UDATA2: u8 = 0x02;
const DW_EH_PE_UDATA4: u8 = 0x03;
const DW_EH_PE_UDATA8: u8 = 0x04;
const DW_EH_PE_SLEB128: u8 = 0x09;
const DW_EH_PE_SDATA2: u8 = 0x0A;
const DW_EH_PE_SDATA4: u8 = 0x0B;
const DW_EH_PE_SDATA8: u8 = 0x0C;

// High 4 bits: base-relative
const DW_EH_PE_PCREL: u8 = 0x10;
const DW_EH_PE_INDIRECT: u8 = 0x80;

// ---------------------------------------------------------------------------
// Cursor — lightweight byte reader
// ---------------------------------------------------------------------------

struct Cursor<'a> {
    data: &'a [u8],
    pos: usize,
    /// Section virtual address, for pc-relative calculations.
    section_va: u64,
    image: Option<&'a BinaryImage>,
}

impl<'a> Cursor<'a> {
    fn new(data: &'a [u8], section_va: u64) -> Self {
        Self {
            data,
            pos: 0,
            section_va,
            image: None,
        }
    }

    fn with_image(data: &'a [u8], section_va: u64, image: &'a BinaryImage) -> Self {
        Self {
            data,
            pos: 0,
            section_va,
            image: Some(image),
        }
    }

    fn current_va(&self) -> u64 {
        self.section_va + self.pos as u64
    }

    fn read_u8(&mut self) -> Option<u8> {
        if self.pos < self.data.len() {
            let v = self.data[self.pos];
            self.pos += 1;
            Some(v)
        } else {
            None
        }
    }

    fn read_u16_le(&mut self) -> Option<u16> {
        if self.pos + 2 <= self.data.len() {
            let v = u16::from_le_bytes([self.data[self.pos], self.data[self.pos + 1]]);
            self.pos += 2;
            Some(v)
        } else {
            None
        }
    }

    fn read_u32_le(&mut self) -> Option<u32> {
        if self.pos + 4 <= self.data.len() {
            let v = u32::from_le_bytes(self.data[self.pos..self.pos + 4].try_into().ok()?);
            self.pos += 4;
            Some(v)
        } else {
            None
        }
    }

    fn read_u64_le(&mut self) -> Option<u64> {
        if self.pos + 8 <= self.data.len() {
            let v = u64::from_le_bytes(self.data[self.pos..self.pos + 8].try_into().ok()?);
            self.pos += 8;
            Some(v)
        } else {
            None
        }
    }

    fn read_i16_le(&mut self) -> Option<i16> {
        self.read_u16_le().map(|v| v as i16)
    }

    fn read_i32_le(&mut self) -> Option<i32> {
        self.read_u32_le().map(|v| v as i32)
    }

    fn read_i64_le(&mut self) -> Option<i64> {
        self.read_u64_le().map(|v| v as i64)
    }

    fn read_uleb128(&mut self) -> Option<u64> {
        let mut result: u64 = 0;
        let mut shift: u32 = 0;
        loop {
            let byte = self.read_u8()?;
            result |= ((byte & 0x7F) as u64) << shift;
            if byte & 0x80 == 0 {
                return Some(result);
            }
            shift += 7;
            if shift >= 64 {
                return None;
            }
        }
    }

    fn read_sleb128(&mut self) -> Option<i64> {
        let mut result: i64 = 0;
        let mut shift: u32 = 0;
        let mut byte;
        loop {
            byte = self.read_u8()?;
            result |= ((byte & 0x7F) as i64) << shift;
            shift += 7;
            if byte & 0x80 == 0 {
                break;
            }
            if shift >= 64 {
                return None;
            }
        }
        // Sign extend if the high bit of the last byte was set.
        if shift < 64 && (byte & 0x40) != 0 {
            result |= -(1i64 << shift);
        }
        Some(result)
    }

    /// Read a DWARF-encoded pointer value.
    fn read_encoded(&mut self, encoding: u8) -> Option<u64> {
        if encoding == DW_EH_PE_OMIT {
            return None;
        }

        let pc = self.current_va();
        let base_enc = encoding & 0x70;
        let val_enc = encoding & 0x0F;

        let raw = match val_enc {
            DW_EH_PE_ABSPTR => self.read_u64_le()?,
            DW_EH_PE_ULEB128 => self.read_uleb128()?,
            DW_EH_PE_UDATA2 => self.read_u16_le()? as u64,
            DW_EH_PE_UDATA4 => self.read_u32_le()? as u64,
            DW_EH_PE_UDATA8 => self.read_u64_le()?,
            DW_EH_PE_SLEB128 => self.read_sleb128()? as u64,
            DW_EH_PE_SDATA2 => self.read_i16_le()? as i64 as u64,
            DW_EH_PE_SDATA4 => self.read_i32_le()? as i64 as u64,
            DW_EH_PE_SDATA8 => self.read_i64_le()? as u64,
            _ => return None,
        };

        let result = match base_enc {
            0x00 => raw,
            DW_EH_PE_PCREL => pc.wrapping_add(raw),
            _ => raw,
        };

        if encoding & DW_EH_PE_INDIRECT != 0 {
            // Indirect encoding: the encoded value points at the real pointer.
            // When the containing image is available, dereference it so LSDA
            // type-table entries resolve to `_ZTI*` objects instead of GOT
            // slots. Fall back to the address for synthetic tests / partial
            // images where the pointee bytes are not mapped.
            self.image
                .and_then(|image| read_pointer_at_va(image, result))
                .or(Some(result))
        } else {
            Some(result)
        }
    }

    /// Size in bytes of a single encoded value (fixed-size formats only).
    fn encoded_size(encoding: u8) -> Option<usize> {
        if encoding == DW_EH_PE_OMIT {
            return None;
        }
        match encoding & 0x0F {
            DW_EH_PE_ABSPTR => Some(8), // 64-bit
            DW_EH_PE_UDATA2 | DW_EH_PE_SDATA2 => Some(2),
            DW_EH_PE_UDATA4 | DW_EH_PE_SDATA4 => Some(4),
            DW_EH_PE_UDATA8 | DW_EH_PE_SDATA8 => Some(8),
            _ => None, // LEB128 is variable-length
        }
    }
}

fn pointer_size_for_arch(arch: ArchId) -> usize {
    match arch {
        ArchId::X86
        | ArchId::Arm
        | ArchId::Mips
        | ArchId::Ppc
        | ArchId::V850
        | ArchId::Arc
        | ArchId::TriCore
        | ArchId::Stm8
        | ArchId::Z80
        | ArchId::RxRenesas
        | ArchId::Sparc
        | ArchId::M68k
        | ArchId::SuperH
        | ArchId::Xtensa
        | ArchId::Mos6502
        | ArchId::I8051
        | ArchId::Pic16 => 4,
        ArchId::Avr | ArchId::Msp430 => 2,
        _ => 8,
    }
}

fn read_pointer_at_va(image: &BinaryImage, va: u64) -> Option<u64> {
    let ptr_size = pointer_size_for_arch(image.arch);
    for section in &image.sections {
        let section_end = section.vaddr.checked_add(section.size)?;
        if va < section.vaddr || va >= section_end {
            continue;
        }
        let offset = va.checked_sub(section.vaddr)? as usize;
        if offset.checked_add(ptr_size)? > section.data.len() {
            return None;
        }
        let bytes = &section.data[offset..offset + ptr_size];
        return Some(match (ptr_size, image.endian) {
            (2, Endian::Little) => u16::from_le_bytes(bytes.try_into().ok()?) as u64,
            (2, Endian::Big) => u16::from_be_bytes(bytes.try_into().ok()?) as u64,
            (4, Endian::Little) => u32::from_le_bytes(bytes.try_into().ok()?) as u64,
            (4, Endian::Big) => u32::from_be_bytes(bytes.try_into().ok()?) as u64,
            (8, Endian::Little) => u64::from_le_bytes(bytes.try_into().ok()?),
            (8, Endian::Big) => u64::from_be_bytes(bytes.try_into().ok()?),
            _ => return None,
        });
    }
    None
}

fn read_action_record(cursor: &mut Cursor<'_>, action_pos: usize) -> Option<(i64, i64, usize)> {
    if action_pos >= cursor.data.len() {
        return None;
    }
    let saved_pos = cursor.pos;
    cursor.pos = action_pos;
    let ttype_index = cursor.read_sleb128()?;
    let action_offset_field_pos = cursor.pos;
    let action_offset = cursor.read_sleb128()?;
    cursor.pos = saved_pos;
    Some((ttype_index, action_offset, action_offset_field_pos))
}

fn resolve_typeinfo_addr(
    cursor: &Cursor<'_>,
    class_info_offset: Option<(u64, u8)>,
    ttype_index: i64,
) -> Option<u64> {
    if ttype_index <= 0 {
        return None;
    }
    let (class_info_base, tte) = class_info_offset?;
    let entry_size = Cursor::encoded_size(tte).unwrap_or(4);
    let table_pos = class_info_base as usize;

    // Type table is reverse-indexed: index 1 is at classInfo[-entry_size],
    // index 2 at classInfo[-2*entry_size], etc.
    let offset = (ttype_index as usize).checked_mul(entry_size)?;
    if table_pos < offset {
        return None;
    }

    let addr_pos = table_pos - offset;
    if addr_pos.checked_add(entry_size)? > cursor.data.len() {
        return None;
    }

    let mut sub = match cursor.image {
        Some(image) => Cursor::with_image(cursor.data, cursor.section_va, image),
        None => Cursor::new(cursor.data, cursor.section_va),
    };
    sub.pos = addr_pos;
    sub.read_encoded(tte)
}

// ---------------------------------------------------------------------------
// Single LSDA parser
// ---------------------------------------------------------------------------

fn parse_single_lsda(cursor: &mut Cursor<'_>, function_start: u64) -> Option<FunctionLsda> {
    // -- Header --
    let lp_start_encoding = cursor.read_u8()?;
    let lp_start = if lp_start_encoding != DW_EH_PE_OMIT {
        cursor.read_encoded(lp_start_encoding)?
    } else {
        function_start
    };

    let ttype_encoding = cursor.read_u8()?;
    let class_info_offset = if ttype_encoding != DW_EH_PE_OMIT {
        let off = cursor.read_uleb128()?;
        Some((cursor.pos as u64 + off, ttype_encoding))
    } else {
        None
    };

    let call_site_encoding = cursor.read_u8()?;
    let call_site_length = cursor.read_uleb128()? as usize;

    let call_site_start = cursor.pos;
    let call_site_end = call_site_start + call_site_length;

    if call_site_end > cursor.data.len() {
        return None;
    }

    // -- Call Site Table --
    let mut call_sites = Vec::new();
    while cursor.pos < call_site_end {
        let cs_start = cursor.read_encoded(call_site_encoding)?;
        let cs_length = cursor.read_encoded(call_site_encoding)?;
        let cs_lpad = cursor.read_encoded(call_site_encoding)?;
        let cs_action = cursor.read_uleb128()?;

        let pc_begin = lp_start.wrapping_add(cs_start);
        let pc_end = pc_begin.wrapping_add(cs_length);
        let landing_pad = if cs_lpad != 0 {
            Some(lp_start.wrapping_add(cs_lpad))
        } else {
            None
        };

        call_sites.push((pc_begin, pc_end, landing_pad, cs_action));
    }

    // Action table starts right after the call site table.
    let action_table_start = call_site_end;

    // -- Resolve action chains and build TryRegions --
    let mut try_regions = Vec::new();
    let mut all_typeinfo_addrs = Vec::new();

    for (pc_begin, pc_end, landing_pad, action_entry) in &call_sites {
        let mut type_filters = Vec::new();
        let mut region_typeinfo_addrs = Vec::new();

        if *action_entry != 0 {
            // Walk the action chain.
            let mut action_pos = action_table_start + (*action_entry as usize) - 1;
            let mut seen = 0u32;
            loop {
                if action_pos >= cursor.data.len() || seen > 100 {
                    break;
                }

                let (ttype_index, action_offset, action_offset_field_pos) =
                    read_action_record(cursor, action_pos)?;

                type_filters.push(ttype_index);

                if ttype_index == 0 {
                    // Itanium catch-all sentinel (`catch (...)`).
                    region_typeinfo_addrs.push(0);
                } else if ttype_index > 0
                    && let Some(typeinfo_addr) =
                        resolve_typeinfo_addr(cursor, class_info_offset, ttype_index)
                {
                    region_typeinfo_addrs.push(typeinfo_addr);
                    if typeinfo_addr != 0 {
                        all_typeinfo_addrs.push(typeinfo_addr);
                    }
                }

                if action_offset == 0 {
                    break;
                }

                // libcxxabi advances from the address of the `actionOffset`
                // field, not from the beginning/end of the record:
                //   action = action_offset_field + actionOffset
                let next_action = (action_offset_field_pos as i64).checked_add(action_offset)?;
                if next_action < 0 {
                    break;
                }
                action_pos = next_action as usize;
                seen += 1;
            }
        }

        let mut seen_region_addrs = std::collections::BTreeSet::new();
        let caught_typeinfo_addrs = region_typeinfo_addrs
            .into_iter()
            .filter(|a| seen_region_addrs.insert(*a))
            .collect();

        try_regions.push(TryRegion {
            pc_range: *pc_begin..*pc_end,
            landing_pad: *landing_pad,
            type_filters,
            caught_typeinfo_addrs,
        });
    }

    // Deduplicate typeinfo addresses while preserving order.
    let mut seen_addrs = std::collections::BTreeSet::new();
    let caught_typeinfo_addrs: Vec<u64> = all_typeinfo_addrs
        .into_iter()
        .filter(|a| seen_addrs.insert(*a))
        .collect();

    Some(FunctionLsda {
        function_start,
        try_regions,
        caught_typeinfo_addrs,
    })
}

// ---------------------------------------------------------------------------
// Public API
// ---------------------------------------------------------------------------

/// Parse all LSDAs referenced by the given [`LsdaEntry`] list.
///
/// Each entry supplies the LSDA address and owning function start. The LSDA
/// bytes are read from the `.gcc_except_table` section of `image`.
pub fn parse_gcc_except_table(
    image: &BinaryImage,
    lsda_entries: &[LsdaEntry],
) -> Result<GccExceptTableInfo, LoadError> {
    let section = match image.section_by_name(".gcc_except_table") {
        Some(s) => s,
        None => return Ok(GccExceptTableInfo::empty()),
    };

    if section.data.is_empty() || lsda_entries.is_empty() {
        return Ok(GccExceptTableInfo::empty());
    }

    let section_va = section.vaddr;
    let mut functions = BTreeMap::new();

    for entry in lsda_entries {
        let offset_in_section = entry.lsda_addr.checked_sub(section_va);
        let offset = match offset_in_section {
            Some(o) if (o as usize) < section.data.len() => o as usize,
            _ => continue,
        };

        let mut cursor = Cursor::with_image(&section.data, section_va, image);
        cursor.pos = offset;

        if let Some(lsda) = parse_single_lsda(&mut cursor, entry.function_start) {
            functions.insert(entry.function_start, lsda);
        }
    }

    Ok(GccExceptTableInfo { functions })
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use crate::eh_frame::parse_eh_frame;
    use crate::{ElfLoader, Loader};

    fn load_fixture(name: &str) -> BinaryImage {
        let path = format!("../../fixtures/{name}");
        let data = std::fs::read(&path).unwrap_or_else(|e| panic!("fixture {name}: {e}"));
        ElfLoader::load(&data).unwrap_or_else(|e| panic!("parse {name}: {e}"))
    }

    #[test]
    fn test_parse_lsda_from_cpp_exceptions() {
        let img = load_fixture("cpp_exceptions.elf");
        let eh = parse_eh_frame(&img).expect("eh_frame");

        assert!(
            !eh.lsda_entries.is_empty(),
            "cpp_exceptions.elf should have LSDA entries",
        );

        let info = parse_gcc_except_table(&img, &eh.lsda_entries).expect("gcc_except_table parse");

        assert!(
            !info.is_empty(),
            "should parse at least one LSDA from cpp_exceptions.elf",
        );

        let total_regions: usize = info.functions.values().map(|l| l.try_regions.len()).sum();

        assert!(
            total_regions > 0,
            "should find at least one try region across all functions",
        );
    }

    #[test]
    fn test_lsda_try_regions_have_valid_ranges() {
        let img = load_fixture("cpp_exceptions.elf");
        let eh = parse_eh_frame(&img).expect("eh_frame");
        let info = parse_gcc_except_table(&img, &eh.lsda_entries).expect("gcc_except_table parse");

        for lsda in info.functions.values() {
            for region in &lsda.try_regions {
                assert!(
                    region.pc_range.start <= region.pc_range.end,
                    "try region should have valid range: {:?}",
                    region.pc_range,
                );
            }
        }
    }

    #[test]
    fn test_lsda_landing_pads_present() {
        let img = load_fixture("cpp_exceptions.elf");
        let eh = parse_eh_frame(&img).expect("eh_frame");
        let info = parse_gcc_except_table(&img, &eh.lsda_entries).expect("gcc_except_table parse");

        let total_lpads: usize = info
            .functions
            .values()
            .flat_map(|l| &l.try_regions)
            .filter(|r| r.landing_pad.is_some())
            .count();

        assert!(
            total_lpads > 0,
            "should find at least one landing pad in cpp_exceptions.elf",
        );
    }

    #[test]
    fn test_no_gcc_except_table_returns_empty() {
        let img = load_fixture("hello_world.elf");
        let eh = parse_eh_frame(&img).expect("eh_frame");
        // hello_world.elf is pure C — no LSDA entries expected from eh_frame.
        let info = parse_gcc_except_table(&img, &eh.lsda_entries).expect("gcc_except_table parse");
        assert!(info.is_empty());
    }

    #[test]
    fn test_empty_lsda_entries_returns_empty() {
        let img = load_fixture("cpp_exceptions.elf");
        let info = parse_gcc_except_table(&img, &[]).expect("gcc_except_table parse");
        assert!(info.is_empty());
    }

    // ---------------------------------------------------------------------
    // Synthetic LSDA byte-sequence tests
    //
    // These bypass any real ELF and craft a minimal `.gcc_except_table`
    // section directly so the parser logic is exercised in isolation,
    // independent of compiler/version drift in the fixtures.
    // ---------------------------------------------------------------------

    /// Build a `BinaryImage` containing only a `.gcc_except_table` section
    /// at `lsda_section_va` with the given raw bytes.
    fn make_lsda_image(lsda_section_va: u64, bytes: Vec<u8>) -> BinaryImage {
        BinaryImage {
            arch: crate::image::ArchId::X86_64,
            endian: crate::image::Endian::Little,
            entry: 0,
            sections: vec![crate::image::Section {
                name: ".gcc_except_table".to_string(),
                vaddr: lsda_section_va,
                size: bytes.len() as u64,
                data: bytes,
                flags: crate::image::SectionFlags::READ,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: vec![],
            string_table: BTreeMap::new(),
            tls_callbacks: vec![],
            function_starts: vec![],
            debug_records: vec![],
            load_config: None,
            pe_mitigations: None,
            runtime_functions: vec![],
            resources: vec![],
            bound_imports: vec![],
            delay_imports: Vec::new(),
            forwarded_exports: Vec::new(),
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: vec![],
            rpaths: vec![],
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
            go_types: std::collections::BTreeMap::new(),
            swift_info: None,
            auth_pointers: Vec::new(),
            auth_ptr_slots: Vec::new(),
            wasm_component: None,
        }
    }

    #[test]
    fn test_synthetic_lsda_single_call_site() {
        // Header:
        //   lpStartEncoding   = 0xFF (DW_EH_PE_omit) → lpStart defaults to function_start
        //   ttypeEncoding     = 0xFF (DW_EH_PE_omit) → no type table
        //   callSiteEncoding  = 0x03 (DW_EH_PE_udata4) → 4-byte fields
        //   callSiteLength    = ULEB128(13)            → 13-byte call-site table
        // Call site (4+4+4+1 = 13 bytes):
        //   start  = 0x0010 (u32 LE)
        //   length = 0x0020 (u32 LE)
        //   lpad   = 0x0040 (u32 LE)
        //   action = 0      (uleb128 single byte)
        #[rustfmt::skip]
        let bytes = vec![
            0xFF,                        // lpStartEncoding
            0xFF,                        // ttypeEncoding
            0x03,                        // callSiteEncoding
            0x0D,                        // callSiteLength = 13
            0x10, 0x00, 0x00, 0x00,      // cs_start
            0x20, 0x00, 0x00, 0x00,      // cs_length
            0x40, 0x00, 0x00, 0x00,      // cs_lpad
            0x00,                        // cs_action
        ];

        let lsda_va: u64 = 0x4000;
        let function_start: u64 = 0x1000;
        let img = make_lsda_image(lsda_va, bytes);

        let info = parse_gcc_except_table(
            &img,
            &[LsdaEntry {
                lsda_addr: lsda_va,
                function_start,
            }],
        )
        .expect("parse");

        let lsda = info
            .functions
            .get(&function_start)
            .expect("LSDA for function should be present");
        assert_eq!(lsda.try_regions.len(), 1, "expected one call-site region");

        let region = &lsda.try_regions[0];
        assert_eq!(region.pc_range, 0x1010..0x1030, "pc range mismatch");
        assert_eq!(
            region.landing_pad,
            Some(0x1040),
            "landing pad should be lpStart + cs_lpad",
        );
        assert!(
            region.type_filters.is_empty(),
            "action == 0 ⇒ no type filters, got {:?}",
            region.type_filters,
        );
        assert!(
            region.caught_typeinfo_addrs.is_empty(),
            "action == 0 ⇒ no catch typeinfo addrs, got {:?}",
            region.caught_typeinfo_addrs,
        );
    }

    #[test]
    fn test_synthetic_lsda_cleanup_only_call_site() {
        // Same encoding as above but cs_lpad == 0 ⇒ no landing pad
        // (the call site is unprotected — exception just propagates).
        #[rustfmt::skip]
        let bytes = vec![
            0xFF, 0xFF, 0x03, 0x0D,
            0x10, 0x00, 0x00, 0x00,      // cs_start
            0x20, 0x00, 0x00, 0x00,      // cs_length
            0x00, 0x00, 0x00, 0x00,      // cs_lpad = 0
            0x00,                        // cs_action
        ];

        let lsda_va: u64 = 0x4000;
        let function_start: u64 = 0x1000;
        let img = make_lsda_image(lsda_va, bytes);
        let info = parse_gcc_except_table(
            &img,
            &[LsdaEntry {
                lsda_addr: lsda_va,
                function_start,
            }],
        )
        .expect("parse");

        let lsda = info.functions.get(&function_start).expect("LSDA present");
        assert_eq!(lsda.try_regions.len(), 1);
        assert_eq!(
            lsda.try_regions[0].landing_pad, None,
            "lpad == 0 ⇒ no landing pad",
        );
    }

    #[test]
    fn test_synthetic_lsda_two_call_sites() {
        // Two adjacent call sites with distinct pc ranges and landing pads.
        // callSiteLength = 26 (two 13-byte entries).
        #[rustfmt::skip]
        let bytes = vec![
            0xFF, 0xFF, 0x03, 0x1A,      // header, cs_table_len = 26
            // -- call site #1 --
            0x10, 0x00, 0x00, 0x00,      // cs_start  = 0x10
            0x20, 0x00, 0x00, 0x00,      // cs_length = 0x20
            0x80, 0x00, 0x00, 0x00,      // cs_lpad   = 0x80
            0x00,                        // cs_action = 0
            // -- call site #2 --
            0x40, 0x00, 0x00, 0x00,      // cs_start  = 0x40
            0x10, 0x00, 0x00, 0x00,      // cs_length = 0x10
            0x90, 0x00, 0x00, 0x00,      // cs_lpad   = 0x90
            0x00,                        // cs_action = 0
        ];

        let lsda_va: u64 = 0x4000;
        let function_start: u64 = 0x1000;
        let img = make_lsda_image(lsda_va, bytes);
        let info = parse_gcc_except_table(
            &img,
            &[LsdaEntry {
                lsda_addr: lsda_va,
                function_start,
            }],
        )
        .expect("parse");

        let lsda = info.functions.get(&function_start).expect("LSDA present");
        assert_eq!(lsda.try_regions.len(), 2);

        assert_eq!(lsda.try_regions[0].pc_range, 0x1010..0x1030);
        assert_eq!(lsda.try_regions[0].landing_pad, Some(0x1080));

        assert_eq!(lsda.try_regions[1].pc_range, 0x1040..0x1050);
        assert_eq!(lsda.try_regions[1].landing_pad, Some(0x1090));
    }

    #[test]
    fn test_synthetic_lsda_action_chain_resolves_region_typeinfo() {
        // One call site points at an action chain:
        //   action #1: ttypeIndex=1, next=+1
        //   action #2: ttypeIndex=0, next=0      (catch-all)
        //
        // The +1 offset is relative to the address of action #1's
        // actionOffset field, matching libcxxabi/GCC unwinder semantics.
        // A previous parser approximation advanced from the record start and
        // skipped the second action.
        #[rustfmt::skip]
        let bytes = vec![
            0xFF,                        // lpStartEncoding
            0x00,                        // ttypeEncoding = absptr
            0x1B,                        // classInfoOffset: pos 3 + 27 = 30
            0x03,                        // callSiteEncoding = udata4
            0x0D,                        // callSiteLength = 13
            0x10, 0x00, 0x00, 0x00,      // cs_start
            0x20, 0x00, 0x00, 0x00,      // cs_length
            0x40, 0x00, 0x00, 0x00,      // cs_lpad
            0x01,                        // cs_action = first action (1-based)
            0x01, 0x01,                  // action #1: type 1, next +1
            0x00, 0x00,                  // action #2: catch-all, end
            0x00, 0x90, 0x00, 0x00,      // typeinfo pointer 0x9000
            0x00, 0x00, 0x00, 0x00,
        ];

        let lsda_va: u64 = 0x4000;
        let function_start: u64 = 0x1000;
        let img = make_lsda_image(lsda_va, bytes);
        let info = parse_gcc_except_table(
            &img,
            &[LsdaEntry {
                lsda_addr: lsda_va,
                function_start,
            }],
        )
        .expect("parse");

        let lsda = info.functions.get(&function_start).expect("LSDA present");
        assert_eq!(lsda.try_regions.len(), 1);
        let region = &lsda.try_regions[0];
        assert_eq!(region.type_filters, vec![1, 0]);
        assert_eq!(region.caught_typeinfo_addrs, vec![0x9000, 0]);
        assert_eq!(lsda.caught_typeinfo_addrs, vec![0x9000]);
    }

    #[test]
    fn test_synthetic_lsda_truncated_header_is_dropped() {
        // Only the lpStartEncoding byte — every subsequent header read
        // will fail. The parser must return without panicking and with
        // no LSDA recorded.
        let bytes = vec![0xFF];

        let lsda_va: u64 = 0x4000;
        let function_start: u64 = 0x1000;
        let img = make_lsda_image(lsda_va, bytes);
        let info = parse_gcc_except_table(
            &img,
            &[LsdaEntry {
                lsda_addr: lsda_va,
                function_start,
            }],
        )
        .expect("parse should not error on truncation");

        assert!(
            info.functions.is_empty(),
            "truncated LSDA should be silently dropped, got {:?}",
            info.functions,
        );
    }
}
