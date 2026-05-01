//! Go `gopclntab` function discovery parser.
//!
//! Parses the `.gopclntab` section found in Go ELF binaries to extract
//! function names and addresses. Supports Go 1.16+ (magic `0xFA 0xFF 0xFF 0xFF`
//! for Go 1.18+ and `0xFB 0xFF 0xFF 0xFF` for Go 1.16–1.17).
//!
//! The gopclntab layout (Go 1.16+):
//!   - `[0..4]`  magic (4 bytes)
//!   - `[4..6]`  padding (2 bytes, zeroes)
//!   - `[6]`     instruction quantum (1 = x86, 4 = ARM)
//!   - `[7]`     pointer size (4 or 8)
//!   - `[8..N]`  nfunc (pointer-sized, little-endian)
//!   - `[N..M]`  nfiles (pointer-sized, little-endian)
//!   - Then: funcnametab offset, cutab offset, filetab offset, pctab offset,
//!           funcdata offset, functab offset (each pointer-sized).
//!   - The functab is an array of `(func_entry, func_offset)` pairs
//!     (each pointer-sized). `func_offset` points into funcdata where
//!     `_func` structs live; the name is at `funcnametab[nameoff]`.

use crate::image::{BinaryImage, Symbol, SymbolKind};

/// Magic bytes for Go 1.18+ gopclntab.
const MAGIC_GO_118: [u8; 4] = [0xFA, 0xFF, 0xFF, 0xFF];

/// Magic bytes for Go 1.16–1.17 gopclntab.
const MAGIC_GO_116: [u8; 4] = [0xFB, 0xFF, 0xFF, 0xFF];

/// Magic bytes for Go 1.20–1.21 gopclntab.
const MAGIC_GO_120: [u8; 4] = [0xF0, 0xFF, 0xFF, 0xFF];

/// Magic bytes for Go 1.22+ gopclntab.
const MAGIC_GO_122: [u8; 4] = [0xF1, 0xFF, 0xFF, 0xFF];

/// A discovered Go function from the gopclntab.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GoFunc {
    /// Virtual address of the function entry point.
    pub addr: u64,
    /// Function name from the funcnametab.
    pub name: String,
}

/// Parsed gopclntab header.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct GopclntabHeader {
    /// Go version indicator: 118 for Go 1.18+, 116 for Go 1.16–1.17.
    pub version: u16,
    /// Instruction quantum (1 for x86, 4 for ARM).
    pub quantum: u8,
    /// Pointer size in bytes (4 or 8).
    pub ptr_size: u8,
    /// Number of functions in the table.
    pub nfunc: u64,
}

/// Result of parsing a gopclntab section.
#[derive(Debug, Clone)]
pub struct GopclntabInfo {
    /// Parsed header metadata.
    pub header: GopclntabHeader,
    /// Discovered functions.
    pub functions: Vec<GoFunc>,
}

fn read_u32_le(data: &[u8], offset: usize) -> Option<u32> {
    let bytes: [u8; 4] = data.get(offset..offset + 4)?.try_into().ok()?;
    Some(u32::from_le_bytes(bytes))
}

fn read_u64_le(data: &[u8], offset: usize) -> Option<u64> {
    let bytes: [u8; 8] = data.get(offset..offset + 8)?.try_into().ok()?;
    Some(u64::from_le_bytes(bytes))
}

/// Read a pointer-sized value (4 or 8 bytes, little-endian).
fn read_ptr(data: &[u8], offset: usize, ptr_size: u8) -> Option<u64> {
    match ptr_size {
        4 => read_u32_le(data, offset).map(u64::from),
        8 => read_u64_le(data, offset),
        _ => None,
    }
}

/// Read a NUL-terminated string from `data` starting at `offset`.
fn read_cstring(data: &[u8], offset: usize) -> Option<String> {
    let remaining = data.get(offset..)?;
    let end = remaining.iter().position(|&b| b == 0)?;
    String::from_utf8(remaining[..end].to_vec()).ok()
}

/// Parse the `.gopclntab` section data.
///
/// `text_base` is the VA of the `.text` section, needed for Go 1.20+ where
/// functab entries store offsets relative to the text start.
/// Returns `None` if the magic bytes don't match or the section is too small.
pub fn parse_gopclntab(data: &[u8], text_base: u64) -> Option<GopclntabInfo> {
    if data.len() < 8 {
        return None;
    }

    let magic: [u8; 4] = [data[0], data[1], data[2], data[3]];
    let version = match magic {
        MAGIC_GO_122 => 122,
        MAGIC_GO_120 => 120,
        MAGIC_GO_118 => 118,
        MAGIC_GO_116 => 116,
        _ => return None,
    };

    let quantum = data[6];
    let ptr_size = data[7];

    if !matches!(ptr_size, 4 | 8) {
        return None;
    }

    let ps = ptr_size as usize;
    let nfunc = read_ptr(data, 8, ptr_size)?;
    let _nfiles = read_ptr(data, 8 + ps, ptr_size)?;

    // Go 1.20+ added a textStart field before the 6 offset fields.
    // Go 1.16–1.19: 6 offsets (funcnametab, cutab, filetab, pctab, funcdata, functab)
    // Go 1.20+:     textStart + 6 offsets
    let uses_text_start = version >= 120;
    let offsets_base = 8 + 2 * ps + if uses_text_start { ps } else { 0 };

    let _text_start_from_header = if uses_text_start {
        read_ptr(data, 8 + 2 * ps, ptr_size)?
    } else {
        0
    };

    let funcnametab_off = read_ptr(data, offsets_base, ptr_size)? as usize;
    // Go 1.20+ has 5 offsets (funcdata merged into functab); Go 1.16–1.19 has 6.
    let functab_idx = if version >= 120 { 4 } else { 5 };
    let functab_off = read_ptr(data, offsets_base + functab_idx * ps, ptr_size)? as usize;

    let nfunc_capped = (nfunc as usize).min(1_000_000);
    let mut functions = Vec::new();

    // Go 1.20+ uses 4-byte functab entries; Go 1.16–1.19 uses pointer-sized entries.
    let entry_size = if version >= 120 { 4 } else { ps };

    for i in 0..nfunc_capped {
        let entry_off = functab_off + i * 2 * entry_size;

        let (func_entry, func_off) = if version >= 120 {
            let entry_offset = read_u32_le(data, entry_off)? as u64;
            let struct_offset = read_u32_le(data, entry_off + 4)? as usize;
            (text_base + entry_offset, struct_offset)
        } else {
            let addr = read_ptr(data, entry_off, ptr_size)?;
            let off = read_ptr(data, entry_off + ps, ptr_size)? as usize;
            (addr, off)
        };

        let func_struct_off = functab_off + func_off;

        // _func layout: entryoff (u32 in 1.20+, ptr in 1.16-1.19), then nameoff (i32)
        let nameoff_pos = if version >= 120 {
            func_struct_off + 4
        } else {
            func_struct_off + ps
        };
        let nameoff = read_u32_le(data, nameoff_pos)? as usize;

        let name = read_cstring(data, funcnametab_off + nameoff)
            .unwrap_or_else(|| format!("go_func_{:#x}", func_entry));

        if !name.is_empty() {
            functions.push(GoFunc {
                addr: func_entry,
                name,
            });
        }
    }

    Some(GopclntabInfo {
        header: GopclntabHeader {
            version,
            quantum,
            ptr_size,
            nfunc,
        },
        functions,
    })
}

/// Merge discovered Go functions into a [`BinaryImage`]'s symbol table.
pub fn merge_go_symbols(image: &mut BinaryImage, info: &GopclntabInfo) {
    for func in &info.functions {
        image
            .symbols
            .entry(func.addr)
            .or_insert_with(|| Symbol {
                name: func.name.clone(),
                addr: func.addr,
                size: 0,
                kind: SymbolKind::Function,
            });
    }
}

/// Convenience: find `.gopclntab` in a `BinaryImage`, parse it, and merge symbols.
pub fn discover_go_functions(image: &mut BinaryImage) {
    let gopclntab_data = image
        .section_by_name(".gopclntab")
        .map(|s| s.data.clone());

    let text_base = image
        .section_by_name(".text")
        .map(|s| s.vaddr)
        .unwrap_or(0);

    if let Some(data) = gopclntab_data {
        if let Some(info) = parse_gopclntab(&data, text_base) {
            merge_go_symbols(image, &info);
        }
    }
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use super::*;
    use crate::image::{Section, SectionFlags};

    /// Build a synthetic gopclntab section (Go 1.18+ format, 8-byte pointers).
    ///
    /// Contains two functions: `main.main` at 0x401000 and `main.helper` at 0x401100.
    fn build_synthetic_gopclntab() -> Vec<u8> {
        let ptr_size: usize = 8;
        let mut buf = Vec::new();

        // --- Header ---
        // magic
        buf.extend_from_slice(&MAGIC_GO_118);
        // pad (2 bytes)
        buf.extend_from_slice(&[0x00, 0x00]);
        // quantum = 1 (x86)
        buf.push(1);
        // ptr_size = 8
        buf.push(8);

        // nfunc = 2
        buf.extend_from_slice(&2u64.to_le_bytes());
        // nfiles = 1
        buf.extend_from_slice(&1u64.to_le_bytes());

        // Now we need 6 offset fields (each 8 bytes):
        //   funcnametab_off, cutab_off, filetab_off, pctab_off, funcdata_off, functab_off
        //
        // We'll lay out the data as:
        //   [header: 8 + 2*8 + 6*8 = 72 bytes]
        //   [funcnametab: starts at 72]
        //   [functab: starts after funcnametab]
        //   [func structs: inline in functab area]

        let header_size = 8 + 2 * ptr_size + 6 * ptr_size; // 72

        // Build funcnametab: "main.main\0main.helper\0"
        let funcnametab_start = header_size;
        let name1 = b"main.main\0";
        let name2 = b"main.helper\0";
        let funcnametab_data: Vec<u8> = [name1.as_slice(), name2.as_slice()].concat();
        let name1_off: u32 = 0;
        let name2_off: u32 = name1.len() as u32;

        // Build functab: 2 entries + sentinel, each (func_entry: u64, func_offset: u64)
        // func_offset is relative to functab start.
        // After the 3 entries (3 * 2 * 8 = 48 bytes), we place the _func structs.
        let functab_start = funcnametab_start + funcnametab_data.len();
        let functab_entries = 3; // 2 funcs + 1 sentinel
        let functab_array_size = functab_entries * 2 * ptr_size;
        let func_struct_base = functab_array_size; // relative to functab

        // _func struct layout: entry (8 bytes) + nameoff (4 bytes) = 12 bytes min
        // We'll use 16 bytes per struct for alignment.
        let func_struct_size = 16;

        let func1_struct_off = func_struct_base;
        let func2_struct_off = func_struct_base + func_struct_size;

        let func1_addr: u64 = 0x401000;
        let func2_addr: u64 = 0x401100;

        // Write the 6 offset fields
        // funcnametab_off
        buf.extend_from_slice(&(funcnametab_start as u64).to_le_bytes());
        // cutab_off (unused, point to 0)
        buf.extend_from_slice(&0u64.to_le_bytes());
        // filetab_off (unused)
        buf.extend_from_slice(&0u64.to_le_bytes());
        // pctab_off (unused)
        buf.extend_from_slice(&0u64.to_le_bytes());
        // funcdata_off (unused)
        buf.extend_from_slice(&0u64.to_le_bytes());
        // functab_off
        buf.extend_from_slice(&(functab_start as u64).to_le_bytes());

        assert_eq!(buf.len(), header_size);

        // Write funcnametab
        buf.extend_from_slice(&funcnametab_data);

        assert_eq!(buf.len(), functab_start);

        // Write functab entries
        // Entry 0: (func1_addr, func1_struct_off)
        buf.extend_from_slice(&func1_addr.to_le_bytes());
        buf.extend_from_slice(&(func1_struct_off as u64).to_le_bytes());
        // Entry 1: (func2_addr, func2_struct_off)
        buf.extend_from_slice(&func2_addr.to_le_bytes());
        buf.extend_from_slice(&(func2_struct_off as u64).to_le_bytes());
        // Sentinel: (end_addr, 0)
        buf.extend_from_slice(&0x402000u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());

        // Write _func structs
        // Struct 1: entry=func1_addr, nameoff=name1_off
        buf.extend_from_slice(&func1_addr.to_le_bytes());
        buf.extend_from_slice(&name1_off.to_le_bytes());
        buf.extend_from_slice(&[0u8; 4]); // padding to 16
        // Struct 2: entry=func2_addr, nameoff=name2_off
        buf.extend_from_slice(&func2_addr.to_le_bytes());
        buf.extend_from_slice(&name2_off.to_le_bytes());
        buf.extend_from_slice(&[0u8; 4]); // padding to 16

        buf
    }

    #[test]
    fn test_parse_synthetic_gopclntab() {
        let data = build_synthetic_gopclntab();
        let info = parse_gopclntab(&data, 0x401000).expect("should parse synthetic gopclntab");

        assert_eq!(info.header.version, 118);
        assert_eq!(info.header.quantum, 1);
        assert_eq!(info.header.ptr_size, 8);
        assert_eq!(info.header.nfunc, 2);
        assert_eq!(info.functions.len(), 2);

        assert_eq!(info.functions[0].addr, 0x401000);
        assert_eq!(info.functions[0].name, "main.main");
        assert_eq!(info.functions[1].addr, 0x401100);
        assert_eq!(info.functions[1].name, "main.helper");
    }

    #[test]
    fn test_invalid_magic_returns_none() {
        let data = vec![0x00, 0x01, 0x02, 0x03, 0x00, 0x00, 0x01, 0x08];
        assert!(parse_gopclntab(&data, 0).is_none());
    }

    #[test]
    fn test_too_short_returns_none() {
        assert!(parse_gopclntab(&[0xFA, 0xFF, 0xFF], 0).is_none());
    }

    #[test]
    fn test_merge_go_symbols() {
        let data = build_synthetic_gopclntab();
        let info = parse_gopclntab(&data, 0x401000).unwrap();

        let mut image = BinaryImage {
            arch: crate::image::ArchId::X86_64,
            endian: crate::image::Endian::Little,
            entry: 0x401000,
            sections: vec![Section {
                name: ".gopclntab".to_string(),
                vaddr: 0x500000,
                size: data.len() as u64,
                data,
                flags: SectionFlags::READ,
            }],
            symbols: BTreeMap::new(),
            plt_symbols: BTreeMap::new(),
            relocations: Vec::new(),
            string_table: BTreeMap::new(),
            tls_callbacks: Vec::new(),
            debug_records: Vec::new(),
            load_config: None,
            runtime_functions: Vec::new(),
            resources: Vec::new(),
            bound_imports: Vec::new(),
            rich_header: None,
            dylibs: Vec::new(),
            rpaths: Vec::new(),
        };

        merge_go_symbols(&mut image, &info);

        assert_eq!(image.symbols.len(), 2);
        assert_eq!(image.symbols[&0x401000].name, "main.main");
        assert_eq!(image.symbols[&0x401100].name, "main.helper");
        assert_eq!(image.symbols[&0x401000].kind, SymbolKind::Function);
    }

    #[test]
    fn test_real_go_fixture() {
        let elf_data = std::fs::read("../../fixtures/go_hello.elf")
            .expect("fixture go_hello.elf must exist");
        let image = <crate::elf::ElfLoader as crate::Loader>::load(&elf_data)
            .expect("should parse go_hello.elf");

        let section = image
            .section_by_name(".gopclntab")
            .expect("go_hello.elf should have .gopclntab");

        let text_base = image
            .section_by_name(".text")
            .map(|s| s.vaddr)
            .unwrap_or(0);

        let info = parse_gopclntab(&section.data, text_base)
            .expect("should parse real gopclntab");
        assert!(
            info.header.nfunc > 0,
            "Go binary should have at least 1 function"
        );
        assert!(!info.functions.is_empty());

        let has_main = info.functions.iter().any(|f| f.name.contains("main.main"));
        assert!(
            has_main,
            "should find main.main, got: {:?}",
            info.functions.iter().map(|f| &f.name).take(10).collect::<Vec<_>>()
        );
    }

    #[test]
    fn test_go116_magic_accepted() {
        // Build a minimal Go 1.16 header (just enough to parse header + 0 funcs)
        let mut data = Vec::new();
        data.extend_from_slice(&MAGIC_GO_116);
        data.extend_from_slice(&[0x00, 0x00]); // pad
        data.push(1); // quantum
        data.push(8); // ptr_size

        // nfunc = 0
        data.extend_from_slice(&0u64.to_le_bytes());
        // nfiles = 0
        data.extend_from_slice(&0u64.to_le_bytes());

        // 6 offset fields (all 0)
        for _ in 0..6 {
            data.extend_from_slice(&0u64.to_le_bytes());
        }

        let info = parse_gopclntab(&data, 0).expect("Go 1.16 magic should be accepted");
        assert_eq!(info.header.version, 116);
        assert_eq!(info.header.nfunc, 0);
        assert!(info.functions.is_empty());
    }
}
