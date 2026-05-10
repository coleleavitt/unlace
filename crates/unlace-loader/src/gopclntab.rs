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
    /// Per-function pcdata/funcdata metadata, present when the `_func`
    /// trailing variable-length tables decoded cleanly. `None` indicates
    /// the function was discovered but pcdata/funcdata extraction was
    /// skipped or failed (e.g. truncated section, pre-1.18 Go layout).
    pub meta: Option<FuncMeta>,
}

/// A single decoded pcdata table: a sequence of `(pc, value)` pairs
/// recovered from the variable-length delta-encoded stream in `pctab`.
///
/// Each entry says "from this PC onward, the value is …". The first
/// entry's `pc` equals the function entry PC; subsequent entries are
/// produced by walking the encoded `(value_delta, pc_delta)` varint
/// pairs until a zero terminator is reached. The instruction quantum
/// has already been applied to the `pc` values stored here.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PcDataTable {
    pub entries: Vec<(u64, i32)>,
}

/// Per-function pcdata + funcdata metadata extracted from the
/// `_func` trailer in `pclntab`.
///
/// * `pc_data` — one decoded [`PcDataTable`] per `npcdata` entry in
///   the same order the linker emitted them. Empty when `npcdata == 0`.
/// * `func_data` — the raw `nfuncdata`-long sequence of `uint32`
///   offsets that immediately follow the pcdata offsets. The Go
///   runtime resolves each entry as `gofunc + off` (or `0` for the
///   `^uint32(0)` sentinel); since we don't track `gofunc` here we
///   widen the raw offset to `u64` and leave further resolution to
///   downstream consumers.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FuncMeta {
    pub pc_data: Vec<PcDataTable>,
    pub func_data: Vec<u64>,
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

/// Read an unsigned varint (LEB128, 7 bits per byte, MSB = continuation).
/// Returns `(bytes_consumed, value)` or `None` on overrun / >5-byte sequence.
///
/// Matches `runtime.readvarint` in the Go source: encodes a `uint32`.
fn read_uvarint(data: &[u8], offset: usize) -> Option<(usize, u32)> {
    let mut v: u32 = 0;
    let mut shift: u32 = 0;
    let mut n: usize = 0;
    loop {
        // A uint32 needs at most 5 varint bytes.
        if n >= 5 {
            return None;
        }
        let b = *data.get(offset + n)?;
        n += 1;
        v |= ((b & 0x7F) as u32).checked_shl(shift & 31)?;
        if b & 0x80 == 0 {
            return Some((n, v));
        }
        shift = shift.checked_add(7)?;
    }
}

/// Decode a single pcdata table starting at `pctab[off]`.
///
/// The wire format is a stream of `(value_delta, pc_delta)` uvarint pairs;
/// the value delta is zigzag-encoded, and the table terminates when the
/// first byte of a record (the value delta) is `0x00` *and* we have
/// already emitted at least one entry. `entry_pc` and `quantum` come from
/// the enclosing function / pclntab header.
///
/// Returns `None` if the encoded stream is truncated or malformed.
fn decode_pcdata_table(
    pctab: &[u8],
    off: usize,
    entry_pc: u64,
    quantum: u8,
) -> Option<PcDataTable> {
    // off==0 is the Go sentinel "no table".
    if off == 0 {
        return Some(PcDataTable { entries: Vec::new() });
    }
    let mut cursor = off;
    let mut pc = entry_pc;
    let mut val: i32 = -1;
    let mut first = true;
    let mut entries: Vec<(u64, i32)> = Vec::new();
    // Guard against pathological tables: real Go pcdata is bounded by the
    // function size, but the encoding has no explicit length. Cap at the
    // size of pctab to avoid infinite loops on corrupt input.
    let max_iters = pctab.len() + 1;
    for _ in 0..max_iters {
        // Peek the first uvarint byte for the zero-terminator check.
        let lead = *pctab.get(cursor)?;
        if lead == 0 && !first {
            return Some(PcDataTable { entries });
        }
        let (n1, uvdelta) = read_uvarint(pctab, cursor)?;
        cursor += n1;
        // zigzag: int32(-(uv & 1) ^ (uv >> 1))
        let zigzag = ((-((uvdelta & 1) as i32)) ^ ((uvdelta >> 1) as i32)) as i32;
        val = val.wrapping_add(zigzag);
        let (n2, pcdelta) = read_uvarint(pctab, cursor)?;
        cursor += n2;
        pc = pc.wrapping_add((pcdelta as u64).wrapping_mul(quantum as u64));
        entries.push((pc, val));
        first = false;
    }
    // Bail rather than spin forever.
    None
}

/// Decode the trailing pcdata/funcdata tables of a `_func` struct.
///
/// Two layouts are supported via the `entry_field_size` parameter (matching
/// the unlace parser's `version < 120 ⇒ ptr_size` vs `version ≥ 120 ⇒ 4`
/// rule for the leading `entry`/`entryOff` field):
///
/// * Go 1.16–1.19 (`entry_field_size == ptr_size`):
///   `entry: uintptr`, then `nameoff: i32`, `args`, `deferret`, `pcsp`,
///   `pcfile`, `pcln`, `npcdata: u32`, `cuOffset`, `startLine`, `funcID`,
///   `flag`, `_pad`, `nfuncdata: u8`, then `[npcdata]u32` pcdata offsets,
///   then `[nfuncdata]u32` funcdata refs.
/// * Go 1.20+ (`entry_field_size == 4`): same trailing layout but
///   `entryOff: u32` replaces `entry: uintptr`, shifting every field
///   downward by `entry_field_size - 4` bytes.
///
/// Returns `None` only on bounds-check failure during the fixed-header
/// read; individual pcdata streams that fail to decode are kept as
/// empty `PcDataTable`s so a partially-corrupt section doesn't drop
/// the function entirely.
fn decode_func_meta(
    data: &[u8],
    func_struct_off: usize,
    entry_field_size: usize,
    pctab_off: usize,
    entry_pc: u64,
    quantum: u8,
) -> Option<FuncMeta> {
    // Field offsets relative to `func_struct_off`.
    //   0                              entry / entryOff (entry_field_size bytes)
    //  +entry_field_size               nameoff   u32
    //  +entry_field_size+ 4            args      u32
    //  +entry_field_size+ 8            deferret  u32
    //  +entry_field_size+12            pcsp      u32
    //  +entry_field_size+16            pcfile    u32
    //  +entry_field_size+20            pcln      u32
    //  +entry_field_size+24            npcdata   u32      ← read here
    //  +entry_field_size+28            cuOffset  u32
    //  +entry_field_size+32            startLine i32
    //  +entry_field_size+36            funcID    u8
    //  +entry_field_size+37            flag      u8
    //  +entry_field_size+38            _pad      u8
    //  +entry_field_size+39            nfuncdata u8       ← read here
    //  +entry_field_size+40            [npcdata]u32 pcdata offsets, then
    //                                  [nfuncdata]u32 funcdata refs
    let npcdata_off = func_struct_off + entry_field_size + 24;
    let nfuncdata_off = func_struct_off + entry_field_size + 39;
    let trailer_off = func_struct_off + entry_field_size + 40;

    let npcdata = read_u32_le(data, npcdata_off)? as usize;
    let nfuncdata = *data.get(nfuncdata_off)? as usize;
    // Cap obviously-broken counts to avoid huge allocations on corrupt input.
    if npcdata > 64 || nfuncdata > 64 {
        return Some(FuncMeta::default());
    }

    let pcdata_section = pctab_off > 0 && pctab_off < data.len();
    let pctab = if pcdata_section {
        &data[pctab_off..]
    } else {
        &[][..]
    };

    let mut pc_data: Vec<PcDataTable> = Vec::with_capacity(npcdata);
    for i in 0..npcdata {
        let off_u32 = match read_u32_le(data, trailer_off + i * 4) {
            Some(v) => v as usize,
            None => {
                pc_data.push(PcDataTable { entries: Vec::new() });
                continue;
            }
        };
        // Sentinel: 0 → no table. Anything else is an offset into pctab.
        let table = if off_u32 == 0 || pctab.is_empty() {
            PcDataTable { entries: Vec::new() }
        } else {
            decode_pcdata_table(pctab, off_u32, entry_pc, quantum)
                .unwrap_or(PcDataTable { entries: Vec::new() })
        };
        pc_data.push(table);
    }

    let mut func_data: Vec<u64> = Vec::with_capacity(nfuncdata);
    let funcdata_off = trailer_off + npcdata * 4;
    for i in 0..nfuncdata {
        let off_u32 = read_u32_le(data, funcdata_off + i * 4).unwrap_or(u32::MAX);
        func_data.push(off_u32 as u64);
    }

    Some(FuncMeta { pc_data, func_data })
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
    // pctab is the 4th offset (index 3) in both Go 1.16–1.19 (6 offsets:
    // funcname, cu, file, pctab, funcdata, functab) and Go 1.20+ (5 offsets:
    // funcname, cu, file, pctab, pclntab). We tolerate truncated sections
    // by returning 0 when out of bounds — decode_pcdata_table treats 0 as
    // "no table".
    let pctab_off = read_ptr(data, offsets_base + 3 * ps, ptr_size)
        .map(|v| v as usize)
        .unwrap_or(0);
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

        // Decode the trailing pcdata/funcdata tables. The leading `_func`
        // field is `entryOff: u32` (4 bytes) in Go 1.20+ and pointer-sized
        // `entry: uintptr` in Go 1.16–1.19 — matching the offset arithmetic
        // already in this parser for `nameoff_pos`.
        let entry_field_size = if version >= 120 { 4 } else { ps };
        let meta = decode_func_meta(
            data,
            func_struct_off,
            entry_field_size,
            pctab_off,
            func_entry,
            quantum,
        );

        if !name.is_empty() {
            functions.push(GoFunc {
                addr: func_entry,
                name,
                meta,
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
        image.symbols.entry(func.addr).or_insert_with(|| Symbol {
            name: func.name.clone(),
            addr: func.addr,
            size: 0,
            kind: SymbolKind::Function,
        });
    }
}

/// Convenience: find `.gopclntab` in a `BinaryImage`, parse it, and merge symbols.
pub fn discover_go_functions(image: &mut BinaryImage) {
    let gopclntab_data = image.section_by_name(".gopclntab").map(|s| s.data.clone());

    let text_base = image.section_by_name(".text").map(|s| s.vaddr).unwrap_or(0);

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
        };

        merge_go_symbols(&mut image, &info);

        assert_eq!(image.symbols.len(), 2);
        assert_eq!(image.symbols[&0x401000].name, "main.main");
        assert_eq!(image.symbols[&0x401100].name, "main.helper");
        assert_eq!(image.symbols[&0x401000].kind, SymbolKind::Function);
    }

    #[test]
    fn test_real_go_fixture() {
        let elf_data =
            std::fs::read("../../fixtures/go_hello.elf").expect("fixture go_hello.elf must exist");
        let image = <crate::elf::ElfLoader as crate::Loader>::load(&elf_data)
            .expect("should parse go_hello.elf");

        let section = image
            .section_by_name(".gopclntab")
            .expect("go_hello.elf should have .gopclntab");

        let text_base = image.section_by_name(".text").map(|s| s.vaddr).unwrap_or(0);

        let info = parse_gopclntab(&section.data, text_base).expect("should parse real gopclntab");
        assert!(
            info.header.nfunc > 0,
            "Go binary should have at least 1 function"
        );
        assert!(!info.functions.is_empty());

        let has_main = info.functions.iter().any(|f| f.name.contains("main.main"));
        assert!(
            has_main,
            "should find main.main, got: {:?}",
            info.functions
                .iter()
                .map(|f| &f.name)
                .take(10)
                .collect::<Vec<_>>()
        );
    }

    /// Helpers used by the FuncMeta-focused tests below.
    fn push_uvarint(buf: &mut Vec<u8>, mut v: u32) {
        while v >= 0x80 {
            buf.push(((v as u8) & 0x7F) | 0x80);
            v >>= 7;
        }
        buf.push(v as u8);
    }

    fn push_zigzag(buf: &mut Vec<u8>, v: i32) {
        // zigzag encode: (v << 1) ^ (v >> 31)
        let enc = ((v << 1) ^ (v >> 31)) as u32;
        push_uvarint(buf, enc);
    }

    /// Build a synthetic Go 1.18 pclntab containing exactly one function
    /// whose `_func` carries two pcdata tables and three funcdata
    /// pointers. The pcdata streams live in a separate `pctab` region so
    /// the test exercises the full offset chain.
    ///
    /// Layout matches the existing `build_synthetic_gopclntab` helper —
    /// Go 1.18 functab entries are pointer-sized `(entry, offset)` pairs.
    fn build_pclntab_with_funcmeta() -> Vec<u8> {
        let ptr_size: usize = 8;
        // pcdata table A — three entries the decoder should recover:
        //   (pc=0x401000, val= 0)   first entry sets val from -1 by +1
        //   (pc=0x401010, val= 5)   delta +5, pc +16
        //   (pc=0x401020, val=-2)   delta -7, pc +16
        // Encoded as (zigzag uvdelta, uvarint pcdelta) pairs, terminated by 0x00.
        let mut pcdata_a = Vec::<u8>::new();
        // entry 1: delta = 0 - (-1) = 1 ; pc_delta = 0
        push_zigzag(&mut pcdata_a, 1);
        push_uvarint(&mut pcdata_a, 0);
        // entry 2: delta = 5 - 0 = 5 ; pc_delta = 16
        push_zigzag(&mut pcdata_a, 5);
        push_uvarint(&mut pcdata_a, 16);
        // entry 3: delta = -2 - 5 = -7 ; pc_delta = 16
        push_zigzag(&mut pcdata_a, -7);
        push_uvarint(&mut pcdata_a, 16);
        // terminator
        pcdata_a.push(0x00);

        // pcdata table B — a single (pc=0x401000, val=42) entry then end.
        let mut pcdata_b = Vec::<u8>::new();
        push_zigzag(&mut pcdata_b, 43); // delta from -1 to 42
        push_uvarint(&mut pcdata_b, 0);
        pcdata_b.push(0x00);

        let pcdata_a_off_in_pctab: u32 = 1; // skip a 1-byte pad so off=0 stays the sentinel
        let pcdata_b_off_in_pctab: u32 = pcdata_a_off_in_pctab + pcdata_a.len() as u32;

        let mut buf = Vec::<u8>::new();

        // --- Fixed header ---
        buf.extend_from_slice(&MAGIC_GO_118);
        buf.extend_from_slice(&[0, 0]);
        buf.push(1); // quantum
        buf.push(8); // ptr_size
        buf.extend_from_slice(&1u64.to_le_bytes()); // nfunc
        buf.extend_from_slice(&0u64.to_le_bytes()); // nfiles
        // Six offsets — we fill them in after we know where each region lives.
        let offsets_at = buf.len();
        for _ in 0..6 {
            buf.extend_from_slice(&0u64.to_le_bytes());
        }
        let header_size = 8 + 2 * ptr_size + 6 * ptr_size; // 72
        assert_eq!(buf.len(), header_size);

        // funcnametab
        let funcnametab_start = buf.len() as u64;
        buf.extend_from_slice(b"main.main\0");

        // pctab — leading pad byte so offset 0 inside the table is a sentinel
        let pctab_start = buf.len() as u64;
        buf.push(0x00);
        buf.extend_from_slice(&pcdata_a);
        buf.extend_from_slice(&pcdata_b);

        // functab — Go 1.18 uses pointer-sized (entry, offset) pairs.
        // Two entries (one real + one sentinel) = 2 * (8 + 8) = 32 bytes,
        // so the _func struct lives at offset 32 within functab.
        let functab_start = buf.len() as u64;
        let func_struct_off_rel: u64 = 32;

        let func_entry_addr: u64 = 0x401000;

        // Entry 0: (func_entry, func_struct_off_rel)
        buf.extend_from_slice(&func_entry_addr.to_le_bytes());
        buf.extend_from_slice(&func_struct_off_rel.to_le_bytes());
        // Sentinel: (end_addr, 0)
        buf.extend_from_slice(&0x402000u64.to_le_bytes());
        buf.extend_from_slice(&0u64.to_le_bytes());

        // _func struct (Go 1.16-1.19 layout = pointer-sized leading entry):
        //   0  entry      : u64  = 0x401000
        //   8  nameoff    : i32  = 0   (points to "main.main")
        //  12  args       : i32  = 0
        //  16  deferret   : u32  = 0
        //  20  pcsp       : u32  = 0
        //  24  pcfile     : u32  = 0
        //  28  pcln       : u32  = 0
        //  32  npcdata    : u32  = 2
        //  36  cuOffset   : u32  = 0
        //  40  startLine  : i32  = 0
        //  44  funcID     : u8   = 0
        //  45  flag       : u8   = 0
        //  46  _ pad      : u8
        //  47  nfuncdata  : u8   = 3
        //  48  pcdata[0]  : u32  = offset of pcdata_a within pctab
        //  52  pcdata[1]  : u32  = offset of pcdata_b within pctab
        //  56  funcdata[0]: u32  = 0xCAFEBABE
        //  60  funcdata[1]: u32  = 0xDEADBEEF
        //  64  funcdata[2]: u32  = 0xFFFFFFFF  (sentinel "no funcdata")
        let mut fstruct = Vec::<u8>::new();
        fstruct.extend_from_slice(&func_entry_addr.to_le_bytes()); // entry (u64)
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // nameoff
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // args
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // deferreturn
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // pcsp
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // pcfile
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // pcln
        fstruct.extend_from_slice(&2u32.to_le_bytes()); // npcdata
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // cuOffset
        fstruct.extend_from_slice(&0u32.to_le_bytes()); // startLine
        fstruct.push(0); // funcID
        fstruct.push(0); // flag
        fstruct.push(0); // pad
        fstruct.push(3); // nfuncdata
        // pcdata offsets
        fstruct.extend_from_slice(&pcdata_a_off_in_pctab.to_le_bytes());
        fstruct.extend_from_slice(&pcdata_b_off_in_pctab.to_le_bytes());
        // funcdata pointers
        fstruct.extend_from_slice(&0xCAFEBABEu32.to_le_bytes());
        fstruct.extend_from_slice(&0xDEADBEEFu32.to_le_bytes());
        fstruct.extend_from_slice(&0xFFFFFFFFu32.to_le_bytes());

        assert_eq!(fstruct.len(), 68);
        buf.extend_from_slice(&fstruct);

        // --- Patch the 6 header offset fields ---
        let mut patch = |idx: usize, v: u64| {
            let off = offsets_at + idx * 8;
            buf[off..off + 8].copy_from_slice(&v.to_le_bytes());
        };
        patch(0, funcnametab_start);
        patch(1, 0); // cutab (unused)
        patch(2, 0); // filetab (unused)
        patch(3, pctab_start);
        patch(4, 0); // funcdata-table base (unused for our synthetic fixture)
        patch(5, functab_start);

        buf
    }

    #[test]
    fn decodes_pcdata_and_funcdata_from_synthetic_pclntab() {
        let data = build_pclntab_with_funcmeta();
        // text_base = 0x401000 so func entry at offset 0 ⇒ pc = 0x401000.
        let info = parse_gopclntab(&data, 0x401000).expect("synthetic should parse");
        assert_eq!(info.functions.len(), 1);
        let f = &info.functions[0];
        assert_eq!(f.addr, 0x401000);
        assert_eq!(f.name, "main.main");

        let meta = f.meta.as_ref().expect("FuncMeta should be populated for Go 1.18+");
        assert_eq!(meta.pc_data.len(), 2, "npcdata=2");
        assert_eq!(meta.func_data.len(), 3, "nfuncdata=3");

        // Table A: three entries as encoded.
        let a = &meta.pc_data[0];
        assert_eq!(
            a.entries,
            vec![(0x401000, 0), (0x401010, 5), (0x401020, -2)],
            "pcdata table A should decode to the three (pc, val) pairs we encoded"
        );

        // Table B: one entry, value 42 at function entry.
        let b = &meta.pc_data[1];
        assert_eq!(b.entries, vec![(0x401000, 42)]);

        // Funcdata offsets are stored verbatim (widened to u64).
        assert_eq!(
            meta.func_data,
            vec![0xCAFEBABE_u64, 0xDEADBEEF_u64, 0xFFFFFFFF_u64]
        );
    }

    #[test]
    fn pcdata_sentinel_offset_yields_empty_table() {
        // Exercise the off==0 sentinel + decode_pcdata_table directly,
        // plus the readvarint helper, so the unit test surface covers
        // the building blocks independently of the full pclntab parser.

        // off==0 is the documented Go "no table" sentinel.
        let empty = decode_pcdata_table(&[], 0, 0x401000, 1).expect("sentinel decodes");
        assert!(empty.entries.is_empty(), "off=0 ⇒ empty table per Go runtime");

        // off==1 with single-byte buffer ⇒ first uvarint succeeds but the
        // pcdelta read runs off the end ⇒ None.
        let truncated = decode_pcdata_table(&[0xAA, 0x02], 1, 0x401000, 1);
        assert!(truncated.is_none(), "truncated stream must fail cleanly");

        // Well-formed single-entry table: zigzag(3)=6, pcdelta=4, then 0x00.
        //   entry pc = 0x401000, val = -1 + 3 = 2
        let mut stream = Vec::<u8>::new();
        stream.push(0xCC); // padding so off>0
        let body_off = stream.len();
        push_zigzag(&mut stream, 3);
        push_uvarint(&mut stream, 4);
        stream.push(0x00);
        let table = decode_pcdata_table(&stream, body_off, 0x401000, 1).expect("decodes");
        assert_eq!(table.entries, vec![(0x401004, 2)]);

        // Quantum >1 multiplies pcdelta: arm64 uses quantum=4.
        let table_q4 = decode_pcdata_table(&stream, body_off, 0x401000, 4).expect("decodes");
        assert_eq!(table_q4.entries, vec![(0x401010, 2)]);

        // Round-trip uvarint encoding/decoding for a multi-byte value.
        let mut buf = Vec::new();
        push_uvarint(&mut buf, 0x1234_5678);
        let (n, v) = read_uvarint(&buf, 0).expect("uvarint round-trips");
        assert_eq!(v, 0x1234_5678);
        assert_eq!(n, buf.len());
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
