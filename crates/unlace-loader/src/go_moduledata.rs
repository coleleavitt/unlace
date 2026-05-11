//! Go `runtime.firstmoduledata` parser.
//!
//! Each Go binary ships a `runtime.moduledata` struct that records, among many
//! other things, the bounds of executable code (`minpc`/`maxpc`), the type
//! information region (`types`/`etypes`), and a `typelinks` slice of i32
//! offsets that enumerate every type the compiler kept around. This module
//! recovers a small MVP subset of that struct so downstream passes can iterate
//! Go types and validate function ranges.
//!
//! Layout (Go 1.20+, 64-bit, little-endian) — only the fields we extract are
//! named; everything else is skipped via fixed offsets:
//!
//! ```text
//! type moduledata struct {
//!     pcHeader      *pcHeader          // 0
//!     funcnametab   []byte             // 8   (ptr+len+cap = 24)
//!     cutab         []uint32           // 32
//!     filetab       []byte             // 56
//!     pctab         []byte             // 80
//!     pclntable     []byte             // 104
//!     ftab          []functab          // 128
//!     findfunctab   uintptr            // 152
//!     minpc         uintptr            // 160
//!     maxpc         uintptr            // 168
//!     text          uintptr            // 176
//!     etext         uintptr            // 184
//!     noptrdata     uintptr            // 192
//!     enoptrdata    uintptr            // 200
//!     data          uintptr            // 208
//!     edata         uintptr            // 216
//!     bss           uintptr            // 224
//!     ebss          uintptr            // 232
//!     noptrbss      uintptr            // 240
//!     enoptrbss     uintptr            // 248
//!     covctrs       uintptr            // 256  (Go 1.20+)
//!     ecovctrs      uintptr            // 264
//!     end           uintptr            // 272
//!     gcdata        uintptr            // 280
//!     gcbss         uintptr            // 288
//!     types         uintptr            // 296
//!     etypes        uintptr            // 304
//!     rodata        uintptr            // 312
//!     gofunc        uintptr            // 320
//!     textsectmap   []textsect         // 328
//!     typelinks     []int32            // 352
//!     itablinks     []*itab            // 376
//!     ptab          []ptabEntry        // 400
//!     pluginpath    string             // 424  (ptr+len = 16)
//!     pkghashes     []modulehash       // 440
//!     ...
//!     modulename    string             // 464
//!     ...
//! }
//! ```
//!
//! These offsets target Go 1.20–1.22 with `covctrs/ecovctrs` present. Older
//! 1.18/1.19 binaries have a slightly different layout — the parser is best-
//! effort: if the recovered `minpc`/`maxpc` don't bracket a sane code region
//! we give up cleanly.
//!
//! # Discovery
//!
//! `parse_firstmoduledata` first searches the symbol table for
//! `runtime.firstmoduledata`. If absent (stripped binary), it scans
//! `.noptrdata`, `.data`, and `.rodata` for a pcHeader pointer whose
//! contents match one of the known gopclntab magics — moduledata's first
//! field always points at the pcHeader, so this is a reliable anchor.

use crate::image::BinaryImage;

/// Recovered subset of `runtime.moduledata`.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct GoModuleInfo {
    /// Lowest VA of any Go function (`moduledata.minpc`).
    pub minpc: u64,
    /// One past the highest VA of any Go function (`moduledata.maxpc`).
    pub maxpc: u64,
    /// VA of the start of the type-information region.
    pub types_va: u64,
    /// VA of one-past-the-end of the type-information region.
    pub etypes_va: u64,
    /// `typelinks`: signed offsets (relative to `types_va`) at which each
    /// reflect-discoverable `runtime._type` lives.
    pub typelinks: Vec<i32>,
    /// `itablinks`: virtual addresses of each `runtime.itab` registered by
    /// the linker.
    pub itablinks: Vec<u64>,
    /// Recovered `modulename` if it decodes as UTF-8.
    pub modulename: Option<String>,
}

/// pcHeader magics this module is willing to anchor on.
const PC_HEADER_MAGICS: [[u8; 4]; 4] = [
    [0xFA, 0xFF, 0xFF, 0xFF], // Go 1.18+
    [0xFB, 0xFF, 0xFF, 0xFF], // Go 1.16–1.17
    [0xF0, 0xFF, 0xFF, 0xFF], // Go 1.20–1.21
    [0xF1, 0xFF, 0xFF, 0xFF], // Go 1.22+
];

// --- Field offsets (Go 1.20+, 64-bit). ---
const OFF_MINPC: usize = 160;
const OFF_MAXPC: usize = 168;
const OFF_TYPES: usize = 296;
const OFF_ETYPES: usize = 304;
const OFF_TYPELINKS: usize = 352;
const OFF_ITABLINKS: usize = 376;
const OFF_MODULENAME: usize = 464;

/// Maximum struct extent we ever read. moduledata is much larger than this in
/// real binaries but we never reach past the modulename string header.
const MODULEDATA_READ_SPAN: usize = OFF_MODULENAME + 16;

fn read_u64_le(data: &[u8], off: usize) -> Option<u64> {
    let bytes: [u8; 8] = data.get(off..off + 8)?.try_into().ok()?;
    Some(u64::from_le_bytes(bytes))
}

fn read_i32_le(data: &[u8], off: usize) -> Option<i32> {
    let bytes: [u8; 4] = data.get(off..off + 4)?.try_into().ok()?;
    Some(i32::from_le_bytes(bytes))
}

/// Read `len` bytes starting at virtual address `va`.
fn read_va(image: &BinaryImage, va: u64, len: usize) -> Option<Vec<u8>> {
    for sec in &image.sections {
        let end = sec.vaddr.saturating_add(sec.size);
        if va >= sec.vaddr && va < end {
            let off = (va - sec.vaddr) as usize;
            if off + len <= sec.data.len() {
                return Some(sec.data[off..off + len].to_vec());
            }
            // BSS-like section with not enough backing bytes.
            return None;
        }
    }
    None
}

/// Read a NUL-terminated or length-bounded UTF-8 string from `va` (up to `max`
/// bytes). Returns `None` if the bytes don't decode.
fn read_string_va(image: &BinaryImage, va: u64, max: usize) -> Option<String> {
    let bytes = read_va(image, va, max)?;
    let end = bytes.iter().position(|&b| b == 0).unwrap_or(bytes.len());
    String::from_utf8(bytes[..end].to_vec()).ok()
}

/// Verify that `pc_header_va` points at a gopclntab-shaped header.
fn is_pc_header(image: &BinaryImage, pc_header_va: u64) -> bool {
    let Some(bytes) = read_va(image, pc_header_va, 8) else {
        return false;
    };
    let magic = [bytes[0], bytes[1], bytes[2], bytes[3]];
    if !PC_HEADER_MAGICS.contains(&magic) {
        return false;
    }
    // Bytes 4..6 are padding zeros, byte 6 is the quantum (1/2/4), byte 7 is
    // the pointer size (4 or 8).
    bytes[4] == 0 && bytes[5] == 0 && matches!(bytes[7], 4 | 8)
}

/// Parse a candidate moduledata at virtual address `va`.
fn parse_at(image: &BinaryImage, va: u64) -> Option<GoModuleInfo> {
    let raw = read_va(image, va, MODULEDATA_READ_SPAN)?;

    let pc_header_va = read_u64_le(&raw, 0)?;
    if !is_pc_header(image, pc_header_va) {
        return None;
    }

    let minpc = read_u64_le(&raw, OFF_MINPC)?;
    let maxpc = read_u64_le(&raw, OFF_MAXPC)?;
    if minpc == 0 || maxpc <= minpc {
        return None;
    }

    let types_va = read_u64_le(&raw, OFF_TYPES)?;
    let etypes_va = read_u64_le(&raw, OFF_ETYPES)?;

    // typelinks slice header: ptr + len + cap (24 bytes).
    let typelinks_ptr = read_u64_le(&raw, OFF_TYPELINKS)?;
    let typelinks_len = read_u64_le(&raw, OFF_TYPELINKS + 8)? as usize;
    let typelinks = if typelinks_ptr != 0 && typelinks_len > 0 && typelinks_len < 10_000_000 {
        let mut out = Vec::with_capacity(typelinks_len.min(1024));
        if let Some(bytes) = read_va(image, typelinks_ptr, typelinks_len * 4) {
            for i in 0..typelinks_len {
                let Some(v) = read_i32_le(&bytes, i * 4) else {
                    break;
                };
                out.push(v);
            }
        }
        out
    } else {
        Vec::new()
    };

    // itablinks slice header: ptr + len + cap (24 bytes). Each entry is a
    // *itab, i.e. a 64-bit virtual address.
    let itablinks_ptr = read_u64_le(&raw, OFF_ITABLINKS)?;
    let itablinks_len = read_u64_le(&raw, OFF_ITABLINKS + 8)? as usize;
    let itablinks = if itablinks_ptr != 0 && itablinks_len > 0 && itablinks_len < 1_000_000 {
        let mut out = Vec::with_capacity(itablinks_len.min(1024));
        if let Some(bytes) = read_va(image, itablinks_ptr, itablinks_len * 8) {
            for i in 0..itablinks_len {
                let Some(v) = read_u64_le(&bytes, i * 8) else {
                    break;
                };
                out.push(v);
            }
        }
        out
    } else {
        Vec::new()
    };

    // modulename string header: ptr + len (16 bytes).
    let modulename_ptr = read_u64_le(&raw, OFF_MODULENAME)?;
    let modulename_len = read_u64_le(&raw, OFF_MODULENAME + 8)? as usize;
    let modulename = if modulename_ptr != 0 && modulename_len > 0 && modulename_len < 4096 {
        read_string_va(image, modulename_ptr, modulename_len)
    } else {
        None
    };

    Some(GoModuleInfo {
        minpc,
        maxpc,
        types_va,
        etypes_va,
        typelinks,
        itablinks,
        modulename,
    })
}

/// Scan a section's bytes looking for a moduledata whose first pointer field
/// resolves to a pcHeader. Returns the first plausible candidate.
fn scan_section(image: &BinaryImage, section_name: &str) -> Option<GoModuleInfo> {
    let sec = image.section_by_name(section_name)?;
    if sec.data.len() < MODULEDATA_READ_SPAN {
        return None;
    }
    // moduledata is 8-byte aligned (its first field is a pointer).
    let limit = sec.data.len().saturating_sub(MODULEDATA_READ_SPAN);
    let mut off = 0usize;
    while off <= limit {
        if let Some(first_ptr) = read_u64_le(&sec.data, off) {
            if first_ptr != 0 && is_pc_header(image, first_ptr) {
                let candidate_va = sec.vaddr + off as u64;
                if let Some(info) = parse_at(image, candidate_va) {
                    return Some(info);
                }
            }
        }
        off += 8;
    }
    None
}

/// Locate and parse `runtime.firstmoduledata`.
///
/// Strategy:
/// 1. Look for a symbol literally named `runtime.firstmoduledata`.
/// 2. Otherwise scan `.noptrdata`, `.data`, and `.rodata` for a 64-bit pointer
///    whose target looks like a Go pcHeader, then try to parse a moduledata at
///    that scan offset.
pub fn parse_firstmoduledata(image: &BinaryImage) -> Option<GoModuleInfo> {
    if let Some(sym) = image
        .symbols
        .values()
        .find(|s| s.name == "runtime.firstmoduledata")
    {
        if let Some(info) = parse_at(image, sym.addr) {
            return Some(info);
        }
    }
    for sect in [".noptrdata", ".data", ".rodata"] {
        if let Some(info) = scan_section(image, sect) {
            return Some(info);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::image::{ArchId, Endian, Section, SectionFlags};
    use std::collections::BTreeMap;

    /// Build a `BinaryImage` containing a synthetic `.noptrdata` section whose
    /// content is fully under the test's control.
    fn make_image(sections: Vec<Section>) -> BinaryImage {
        BinaryImage {
            arch: ArchId::X86_64,
            endian: Endian::Little,
            entry: 0,
            sections,
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
            forwarded_resolutions: std::collections::BTreeMap::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
            pdb_types: None,
            msvc_rtti: None,
            seh: None,
            go_module: None,
            go_itabs: std::collections::BTreeMap::new(),
            go_types: std::collections::BTreeMap::new(),
            swift_info: None,
        }
    }

    /// Synthesize a full moduledata buffer with the parser's expected fields
    /// populated. Returns the raw bytes plus useful VAs.
    fn build_synthetic_moduledata(
        base_va: u64,
        pc_header_va: u64,
        minpc: u64,
        maxpc: u64,
        types_va: u64,
        etypes_va: u64,
        typelinks_ptr: u64,
        typelinks_len: u64,
        modulename_ptr: u64,
        modulename_len: u64,
    ) -> Vec<u8> {
        // Make the buffer large enough to cover modulename + slack.
        let mut buf = vec![0u8; MODULEDATA_READ_SPAN + 64];

        // Field 0: pcHeader pointer.
        buf[0..8].copy_from_slice(&pc_header_va.to_le_bytes());

        // minpc / maxpc.
        buf[OFF_MINPC..OFF_MINPC + 8].copy_from_slice(&minpc.to_le_bytes());
        buf[OFF_MAXPC..OFF_MAXPC + 8].copy_from_slice(&maxpc.to_le_bytes());

        // types / etypes.
        buf[OFF_TYPES..OFF_TYPES + 8].copy_from_slice(&types_va.to_le_bytes());
        buf[OFF_ETYPES..OFF_ETYPES + 8].copy_from_slice(&etypes_va.to_le_bytes());

        // typelinks slice header (ptr, len, cap).
        buf[OFF_TYPELINKS..OFF_TYPELINKS + 8].copy_from_slice(&typelinks_ptr.to_le_bytes());
        buf[OFF_TYPELINKS + 8..OFF_TYPELINKS + 16].copy_from_slice(&typelinks_len.to_le_bytes());
        buf[OFF_TYPELINKS + 16..OFF_TYPELINKS + 24].copy_from_slice(&typelinks_len.to_le_bytes());

        // modulename string header (ptr, len).
        buf[OFF_MODULENAME..OFF_MODULENAME + 8].copy_from_slice(&modulename_ptr.to_le_bytes());
        buf[OFF_MODULENAME + 8..OFF_MODULENAME + 16].copy_from_slice(&modulename_len.to_le_bytes());

        let _ = base_va; // unused; caller positions the buffer in a Section
        buf
    }

    /// pcHeader: 4-byte magic + zero-padding to 8 bytes is enough for the
    /// parser's sanity check.
    fn pc_header_bytes() -> Vec<u8> {
        vec![0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 1, 8]
    }

    #[test]
    fn parse_synthetic_moduledata_minpc_maxpc() {
        // Layout in our synthetic .noptrdata section (vaddr = 0x500000):
        //   +0x000  pcHeader bytes (8 bytes)
        //   +0x008  pad to 0x010
        //   +0x010  moduledata struct begins
        //   +0x600  modulename string ("synth\0")
        let mut data = vec![0u8; 0x800];

        // pcHeader at section offset 0 (VA = 0x500000).
        data[0..8].copy_from_slice(&pc_header_bytes());

        // Place a modulename further down.
        let modulename_off = 0x600usize;
        let modulename_va = 0x500000u64 + modulename_off as u64;
        let name_bytes = b"synth";
        data[modulename_off..modulename_off + name_bytes.len()].copy_from_slice(name_bytes);

        let moduledata_off = 0x010usize;
        let moduledata_va = 0x500000u64 + moduledata_off as u64;
        let md = build_synthetic_moduledata(
            moduledata_va,
            0x500000,
            0x401000,
            0x401234,
            0x700000,
            0x710000,
            0,
            0,
            modulename_va,
            name_bytes.len() as u64,
        );
        data[moduledata_off..moduledata_off + md.len()].copy_from_slice(&md);

        let image = make_image(vec![Section {
            name: ".noptrdata".to_string(),
            vaddr: 0x500000,
            size: data.len() as u64,
            data,
            flags: SectionFlags::READ,
        }]);

        let info = parse_firstmoduledata(&image).expect("scan should find moduledata");
        assert_eq!(info.minpc, 0x401000);
        assert_eq!(info.maxpc, 0x401234);
        assert_eq!(info.types_va, 0x700000);
        assert_eq!(info.etypes_va, 0x710000);
        assert_eq!(info.modulename.as_deref(), Some("synth"));
    }

    #[test]
    fn parse_typelinks_slice() {
        // Build a moduledata referencing a typelinks slice with three i32
        // entries: [0x10, 0x20, -4]. The parser must decode all three.
        let mut data = vec![0u8; 0x800];

        // pcHeader at offset 0.
        data[0..8].copy_from_slice(&pc_header_bytes());

        // typelinks data at offset 0x500.
        let typelinks_off = 0x500usize;
        let typelinks_va = 0x500000u64 + typelinks_off as u64;
        let entries: [i32; 3] = [0x10, 0x20, -4];
        for (i, e) in entries.iter().enumerate() {
            data[typelinks_off + i * 4..typelinks_off + i * 4 + 4].copy_from_slice(&e.to_le_bytes());
        }

        let moduledata_off = 0x010usize;
        let moduledata_va = 0x500000u64 + moduledata_off as u64;
        let md = build_synthetic_moduledata(
            moduledata_va,
            0x500000,
            0x401000,
            0x401234,
            0x700000,
            0x710000,
            typelinks_va,
            entries.len() as u64,
            0,
            0,
        );
        data[moduledata_off..moduledata_off + md.len()].copy_from_slice(&md);

        let image = make_image(vec![Section {
            name: ".noptrdata".to_string(),
            vaddr: 0x500000,
            size: data.len() as u64,
            data,
            flags: SectionFlags::READ,
        }]);

        let info = parse_firstmoduledata(&image).expect("should find moduledata");
        assert_eq!(info.typelinks, vec![0x10i32, 0x20, -4]);
    }
}
