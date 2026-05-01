//! Mach-O loader implementation using the `object` crate.
//!
//! Handles 32-bit and 64-bit Mach-O binaries as well as fat/universal binaries
//! (both 32-bit and 64-bit fat headers). For fat binaries the first architecture
//! slice is selected.

use std::collections::BTreeMap;

use object::macho;
use object::read::macho::{FatArch, LoadCommandVariant, MachHeader, MachOFatFile, MachOFile};
use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};

use crate::Loader;
use crate::error::LoadError;
use crate::image::{
    ArchId, BinaryImage, DylibDep, DylibKind, Endian, RelocKind, Relocation, Section, SectionFlags,
    Symbol, SymbolKind,
};

const DYLD_MAX_OPCODE_OPS: usize = 100_000;
const DYLD_MAX_EXPORT_DEPTH: usize = 128;

/// Mach-O single-arch magic values (native and swapped byte orders).
const MH_MAGIC_32_LE: [u8; 4] = macho::MH_MAGIC.to_le_bytes();
const MH_MAGIC_32_BE: [u8; 4] = macho::MH_MAGIC.to_be_bytes();
const MH_MAGIC_64_LE: [u8; 4] = macho::MH_MAGIC_64.to_le_bytes();
const MH_MAGIC_64_BE: [u8; 4] = macho::MH_MAGIC_64.to_be_bytes();

/// Fat/universal magic values (always big-endian on disk).
const FAT_MAGIC_32: [u8; 4] = macho::FAT_MAGIC.to_be_bytes();
const FAT_MAGIC_64: [u8; 4] = macho::FAT_MAGIC_64.to_be_bytes();

/// Loader for Mach-O binaries (32-bit, 64-bit, and fat/universal).
pub struct MachoLoader;

impl Loader for MachoLoader {
    fn can_load(data: &[u8]) -> bool {
        if data.len() < 4 {
            return false;
        }
        let magic: [u8; 4] = [data[0], data[1], data[2], data[3]];
        matches!(
            magic,
            MH_MAGIC_32_LE
                | MH_MAGIC_32_BE
                | MH_MAGIC_64_LE
                | MH_MAGIC_64_BE
                | FAT_MAGIC_32
                | FAT_MAGIC_64
        )
    }

    fn load(data: &[u8]) -> Result<BinaryImage, LoadError> {
        if !Self::can_load(data) {
            return Err(LoadError::InvalidMagic);
        }

        let magic: [u8; 4] = [data[0], data[1], data[2], data[3]];

        match magic {
            // Fat/universal — pick the first slice.
            FAT_MAGIC_32 => load_fat::<macho::FatArch32>(data),
            FAT_MAGIC_64 => load_fat::<macho::FatArch64>(data),
            // 64-bit single-arch (either endianness).
            MH_MAGIC_64_LE | MH_MAGIC_64_BE => {
                load_macho::<macho::MachHeader64<object::Endianness>>(data)
            }
            // 32-bit single-arch (either endianness).
            MH_MAGIC_32_LE | MH_MAGIC_32_BE => {
                load_macho::<macho::MachHeader32<object::Endianness>>(data)
            }
            _ => Err(LoadError::InvalidMagic),
        }
    }
}

/// Extract the first architecture slice from a fat/universal binary and load it.
fn load_fat<Fat>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Fat: FatArch,
{
    let fat = MachOFatFile::<Fat>::parse(data)?;
    let arches = fat.arches();
    let first = arches.first().ok_or(LoadError::InvalidMagic)?;
    let slice = first.data(data)?;

    // Determine whether the slice is 32-bit or 64-bit from its own magic.
    if slice.len() < 4 {
        return Err(LoadError::InvalidMagic);
    }
    let inner_magic: [u8; 4] = [slice[0], slice[1], slice[2], slice[3]];
    match inner_magic {
        MH_MAGIC_64_LE | MH_MAGIC_64_BE => {
            load_macho::<macho::MachHeader64<object::Endianness>>(slice)
        }
        MH_MAGIC_32_LE | MH_MAGIC_32_BE => {
            load_macho::<macho::MachHeader32<object::Endianness>>(slice)
        }
        _ => Err(LoadError::InvalidMagic),
    }
}

/// Generic Mach-O loader over 32/64-bit headers.
fn load_macho<Mach>(data: &[u8]) -> Result<BinaryImage, LoadError>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let file = MachOFile::<Mach>::parse(data)?;

    let arch = map_arch(&file)?;
    let endian = map_endian(&file);
    let entry = file.entry();
    let sections = load_sections(&file);
    let mut symbols = load_symbols(&file);
    let mut dynamic_linking = collect_macho_dynamic_linking::<Mach>(&file, data);

    merge_function_starts::<Mach>(&file, data, &mut symbols);
    merge_chained_imports::<Mach>(&file, data, &mut symbols, &mut dynamic_linking.relocations);
    merge_dyld_exports(&mut symbols, &dynamic_linking.exports);
    merge_dyld_binds(&mut symbols, &dynamic_linking.relocations);
    let (dylibs, rpaths) = load_dylibs_and_rpaths::<Mach>(&file, data);
    let plt_symbols = resolve_stubs::<Mach>(&file, data, &sections);

    Ok(BinaryImage {
        arch,
        endian,
        entry,
        sections,
        symbols,
        plt_symbols,
        relocations: dynamic_linking.relocations,
        string_table: BTreeMap::new(),
        tls_callbacks: Vec::new(),
        debug_records: Vec::new(),
        load_config: None,
        runtime_functions: Vec::new(),
        resources: Vec::new(),
        bound_imports: Vec::new(),
        rich_header: None,
        dylibs,
        rpaths,
    })
}

#[derive(Debug, Default)]
struct MachoDynamicLinking {
    indirect_symbols: Vec<u32>,
    relocations: Vec<Relocation>,
    exports: Vec<Symbol>,
}

#[derive(Debug, Default)]
struct DyldInfoPayloads<'data> {
    rebase: &'data [u8],
    bind: &'data [u8],
    lazy_bind: &'data [u8],
    export: &'data [u8],
}

fn collect_macho_dynamic_linking<Mach>(
    file: &MachOFile<Mach>,
    data: &[u8],
) -> MachoDynamicLinking
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let endian = match file.macho_header().endian() {
        Ok(e) => e,
        Err(_) => return MachoDynamicLinking::default(),
    };

    let pointer_size = if file.macho_header().is_type_64() { 8 } else { 4 };
    let mut segment_bases = Vec::new();
    let mut indirect_symbols = Vec::new();
    let mut dyld = DyldInfoPayloads::default();

    let mut cmds = match file.macho_header().load_commands(endian, data, 0) {
        Ok(c) => c,
        Err(err) => {
            tracing::debug!(?err, "Mach-O load commands unreadable");
            return MachoDynamicLinking::default();
        }
    };

    while let Ok(Some(cmd)) = cmds.next() {
        let variant = match cmd.variant() {
            Ok(v) => v,
            Err(_) => continue,
        };

        match variant {
            LoadCommandVariant::Segment32(seg, _) => {
                segment_bases.push(u64::from(seg.vmaddr.get(endian)));
            }
            LoadCommandVariant::Segment64(seg, _) => {
                segment_bases.push(seg.vmaddr.get(endian));
            }
            LoadCommandVariant::Dysymtab(dysymtab) => {
                if let Ok(entries) = dysymtab.indirect_symbols(endian, data) {
                    indirect_symbols = entries.iter().map(|entry| entry.get(endian)).collect();
                }
            }
            LoadCommandVariant::DyldInfo(info) => {
                dyld.rebase = read_linkedit_range(data, info.rebase_off.get(endian), info.rebase_size.get(endian));
                dyld.bind = read_linkedit_range(data, info.bind_off.get(endian), info.bind_size.get(endian));
                dyld.lazy_bind = read_linkedit_range(
                    data,
                    info.lazy_bind_off.get(endian),
                    info.lazy_bind_size.get(endian),
                );
                dyld.export = read_linkedit_range(data, info.export_off.get(endian), info.export_size.get(endian));
            }
            _ => {}
        }
    }

    let mut relocations = Vec::new();
    decode_rebase_opcodes(dyld.rebase, &segment_bases, pointer_size, &mut relocations);
    decode_bind_opcodes(dyld.bind, &segment_bases, pointer_size, &mut relocations);
    decode_bind_opcodes(dyld.lazy_bind, &segment_bases, pointer_size, &mut relocations);
    let exports = decode_export_trie(dyld.export);

    MachoDynamicLinking {
        indirect_symbols,
        relocations,
        exports,
    }
}

fn read_linkedit_range(data: &[u8], off: u32, size: u32) -> &[u8] {
    let off = off as usize;
    let size = size as usize;
    if size == 0 || off.checked_add(size).is_none_or(|end| end > data.len()) {
        return &[];
    }
    &data[off..off + size]
}

#[derive(Debug, Clone, Copy)]
struct SegmentOffset {
    segment: usize,
    offset: u64,
}

impl SegmentOffset {
    fn addr(self, segment_bases: &[u64]) -> Option<u64> {
        segment_bases
            .get(self.segment)
            .map(|base| base.saturating_add(self.offset))
    }
}

fn decode_rebase_opcodes(
    bytes: &[u8],
    segment_bases: &[u64],
    pointer_size: u64,
    out: &mut Vec<Relocation>,
) {
    let mut reader = DyldBytecode::new(bytes);
    let mut loc = SegmentOffset {
        segment: 0,
        offset: 0,
    };
    let mut ops = 0usize;

    while ops < DYLD_MAX_OPCODE_OPS {
        let Some(byte) = reader.read_u8() else { break };
        ops += 1;
        let opcode = byte & 0xF0;
        let imm = byte & 0x0F;

        match opcode {
            0x00 => break,
            0x10 => {}
            0x20 => {
                let Some(offset) = reader.read_uleb128() else { break };
                loc = SegmentOffset {
                    segment: imm as usize,
                    offset,
                };
            }
            0x30 => {
                let Some(delta) = reader.read_uleb128() else { break };
                loc.offset = loc.offset.saturating_add(delta);
            }
            0x40 => loc.offset = loc.offset.saturating_add(u64::from(imm) * pointer_size),
            0x50 => rebase_times(imm as u64, segment_bases, pointer_size, out, &mut loc),
            0x60 => {
                let Some(count) = reader.read_uleb128() else { break };
                rebase_times(count, segment_bases, pointer_size, out, &mut loc);
            }
            0x70 => {
                let Some(delta) = reader.read_uleb128() else { break };
                push_rebase(segment_bases, out, loc);
                loc.offset = loc.offset.saturating_add(delta).saturating_add(pointer_size);
            }
            0x80 => {
                let Some(count) = reader.read_uleb128() else { break };
                let Some(skip) = reader.read_uleb128() else { break };
                for _ in 0..count {
                    if ops >= DYLD_MAX_OPCODE_OPS {
                        break;
                    }
                    ops += 1;
                    push_rebase(segment_bases, out, loc);
                    loc.offset = loc.offset.saturating_add(pointer_size).saturating_add(skip);
                }
            }
            _ => break,
        }
    }
}

fn rebase_times(
    count: u64,
    segment_bases: &[u64],
    pointer_size: u64,
    out: &mut Vec<Relocation>,
    loc: &mut SegmentOffset,
) {
    for _ in 0..count.min(DYLD_MAX_OPCODE_OPS as u64) {
        push_rebase(segment_bases, out, *loc);
        loc.offset = loc.offset.saturating_add(pointer_size);
    }
}

fn push_rebase(segment_bases: &[u64], out: &mut Vec<Relocation>, loc: SegmentOffset) {
    let Some(addr) = loc.addr(segment_bases) else {
        return;
    };
    out.push(Relocation {
        addr,
        sym_name: String::new(),
        kind: RelocKind::Relative,
    });
}

#[derive(Debug, Default)]
struct BindState {
    ordinal: i64,
    symbol: String,
    addend: i64,
    loc: SegmentOffset,
}

impl Default for SegmentOffset {
    fn default() -> Self {
        Self {
            segment: 0,
            offset: 0,
        }
    }
}

fn decode_bind_opcodes(
    bytes: &[u8],
    segment_bases: &[u64],
    pointer_size: u64,
    out: &mut Vec<Relocation>,
) {
    let mut reader = DyldBytecode::new(bytes);
    let mut state = BindState::default();
    let mut ops = 0usize;

    while ops < DYLD_MAX_OPCODE_OPS {
        let Some(byte) = reader.read_u8() else { break };
        ops += 1;
        let opcode = byte & 0xF0;
        let imm = byte & 0x0F;

        match opcode {
            0x00 => break,
            0x10 => state.ordinal = i64::from(imm),
            0x20 => {
                let Some(ordinal) = reader.read_uleb128() else { break };
                state.ordinal = ordinal as i64;
            }
            0x30 => state.ordinal = sign_extend_special_ordinal(imm),
            0x40 => {
                let Some(symbol) = reader.read_c_string() else { break };
                state.symbol = symbol.to_string();
            }
            0x50 => {}
            0x60 => {
                let Some(addend) = reader.read_sleb128() else { break };
                state.addend = addend;
            }
            0x70 => {
                let Some(offset) = reader.read_uleb128() else { break };
                state.loc = SegmentOffset {
                    segment: imm as usize,
                    offset,
                };
            }
            0x80 => {
                let Some(delta) = reader.read_uleb128() else { break };
                state.loc.offset = state.loc.offset.saturating_add(delta);
            }
            0x90 => push_bind(segment_bases, out, &mut state, pointer_size),
            0xA0 => {
                let Some(delta) = reader.read_uleb128() else { break };
                push_bind_no_advance(segment_bases, out, &state);
                state.loc.offset = state
                    .loc
                    .offset
                    .saturating_add(delta)
                    .saturating_add(pointer_size);
            }
            0xB0 => {
                push_bind_no_advance(segment_bases, out, &state);
                state.loc.offset = state
                    .loc
                    .offset
                    .saturating_add(u64::from(imm) * pointer_size)
                    .saturating_add(pointer_size);
            }
            0xC0 => {
                let Some(count) = reader.read_uleb128() else { break };
                let Some(skip) = reader.read_uleb128() else { break };
                for _ in 0..count {
                    if ops >= DYLD_MAX_OPCODE_OPS {
                        break;
                    }
                    ops += 1;
                    push_bind_no_advance(segment_bases, out, &state);
                    state.loc.offset = state
                        .loc
                        .offset
                        .saturating_add(pointer_size)
                        .saturating_add(skip);
                }
            }
            _ => break,
        }
    }
}

fn sign_extend_special_ordinal(imm: u8) -> i64 {
    if imm == 0 {
        0
    } else if imm & 0x08 != 0 {
        i64::from(imm) | !0x0F
    } else {
        i64::from(imm)
    }
}

fn push_bind(
    segment_bases: &[u64],
    out: &mut Vec<Relocation>,
    state: &mut BindState,
    pointer_size: u64,
) {
    push_bind_no_advance(segment_bases, out, state);
    state.loc.offset = state.loc.offset.saturating_add(pointer_size);
}

fn push_bind_no_advance(segment_bases: &[u64], out: &mut Vec<Relocation>, state: &BindState) {
    let Some(addr) = state.loc.addr(segment_bases) else {
        return;
    };
    if state.symbol.is_empty() {
        return;
    }

    out.push(Relocation {
        addr,
        sym_name: format!("{}!{}", dylib_ordinal_name(state.ordinal), state.symbol),
        kind: RelocKind::GlobDat,
    });
}

fn dylib_ordinal_name(ordinal: i64) -> &'static str {
    match ordinal {
        0 => "self",
        -1 => "main-executable",
        -2 => "flat-namespace",
        -3 => "weak-lookup",
        _ => "dylib",
    }
}

fn decode_export_trie(bytes: &[u8]) -> Vec<Symbol> {
    let mut out = Vec::new();
    if bytes.is_empty() {
        return out;
    }
    walk_export_trie(bytes, 0, String::new(), 0, &mut out);
    out
}

fn walk_export_trie(bytes: &[u8], offset: usize, name: String, depth: usize, out: &mut Vec<Symbol>) {
    if depth > DYLD_MAX_EXPORT_DEPTH || offset >= bytes.len() || out.len() >= DYLD_MAX_OPCODE_OPS {
        return;
    }

    let mut reader = DyldBytecode::new(&bytes[offset..]);
    let Some(terminal_size) = reader.read_uleb128() else {
        return;
    };
    let terminal_start = reader.position();
    let terminal_end = match terminal_start.checked_add(terminal_size as usize) {
        Some(end) if end <= bytes.len() - offset => end,
        _ => return,
    };

    if terminal_size != 0 {
        let mut terminal = DyldBytecode::new(&bytes[offset + terminal_start..offset + terminal_end]);
        let flags = terminal.read_uleb128().unwrap_or(0);
        if flags & 0x08 == 0 {
            if let Some(addr) = terminal.read_uleb128() {
                out.push(Symbol {
                    name: name.clone(),
                    addr,
                    size: 0,
                    kind: SymbolKind::Function,
                });
            }
        }
    }

    reader.set_position(terminal_end);
    let Some(child_count) = reader.read_u8() else {
        return;
    };

    for _ in 0..child_count {
        let Some(label) = reader.read_c_string() else {
            return;
        };
        let Some(child_offset) = reader.read_uleb128() else {
            return;
        };
        let child_offset = child_offset as usize;
        if child_offset >= bytes.len() {
            continue;
        }
        let mut child_name = name.clone();
        child_name.push_str(label);
        walk_export_trie(bytes, child_offset, child_name, depth + 1, out);
    }
}

fn merge_dyld_exports(out: &mut BTreeMap<u64, Symbol>, exports: &[Symbol]) {
    for sym in exports {
        out.entry(sym.addr).or_insert_with(|| sym.clone());
    }
}

fn merge_dyld_binds(out: &mut BTreeMap<u64, Symbol>, relocations: &[Relocation]) {
    for reloc in relocations {
        if reloc.sym_name.is_empty() {
            continue;
        }
        out.entry(reloc.addr).or_insert_with(|| Symbol {
            name: reloc.sym_name.clone(),
            addr: reloc.addr,
            size: 0,
            kind: SymbolKind::Unknown,
        });
    }
}

#[derive(Debug, Clone, Copy)]
struct DyldBytecode<'data> {
    bytes: &'data [u8],
    pos: usize,
}

impl<'data> DyldBytecode<'data> {
    fn new(bytes: &'data [u8]) -> Self {
        Self { bytes, pos: 0 }
    }

    fn position(&self) -> usize {
        self.pos
    }

    fn set_position(&mut self, pos: usize) {
        self.pos = pos.min(self.bytes.len());
    }

    fn read_u8(&mut self) -> Option<u8> {
        let byte = *self.bytes.get(self.pos)?;
        self.pos += 1;
        Some(byte)
    }

    fn read_c_string(&mut self) -> Option<&'data str> {
        let start = self.pos;
        while self.pos < self.bytes.len() && self.bytes[self.pos] != 0 {
            self.pos += 1;
        }
        if self.pos >= self.bytes.len() {
            return None;
        }
        let s = std::str::from_utf8(&self.bytes[start..self.pos]).ok()?;
        self.pos += 1;
        Some(s)
    }

    fn read_uleb128(&mut self) -> Option<u64> {
        let mut result = 0u64;
        let mut shift = 0u32;
        for _ in 0..10 {
            let byte = self.read_u8()?;
            result |= u64::from(byte & 0x7F) << shift;
            if byte & 0x80 == 0 {
                return Some(result);
            }
            shift += 7;
            if shift >= 64 {
                return None;
            }
        }
        None
    }

    fn read_sleb128(&mut self) -> Option<i64> {
        let mut result = 0i64;
        let mut shift = 0u32;
        let mut byte;
        loop {
            byte = self.read_u8()?;
            result |= i64::from(byte & 0x7F) << shift;
            shift += 7;
            if byte & 0x80 == 0 {
                break;
            }
            if shift >= 64 {
                return None;
            }
        }
        if shift < 64 && byte & 0x40 != 0 {
            result |= !0i64 << shift;
        }
        Some(result)
    }
}

/// Merge function entry addresses from `LC_FUNCTION_STARTS` into `out`.
///
/// `LC_FUNCTION_STARTS` is a `LinkeditDataCommand` whose payload is a stream
/// of ULEB128 deltas relative to the `__TEXT` segment's `vmaddr`. The first
/// delta is added to `vmaddr` to yield the first function start; each
/// subsequent delta accumulates from the previous address. A zero delta
/// terminates the list.
///
/// We synthesize `sub_<addr:x>` named symbols for any address not already
/// covered by the symbol table. Existing symbols win — the symbol table
/// has type info and aliases that LC_FUNCTION_STARTS lacks.
fn merge_function_starts<Mach>(file: &MachOFile<Mach>, data: &[u8], out: &mut BTreeMap<u64, Symbol>)
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let endian = match file.macho_header().endian() {
        Ok(e) => e,
        Err(_) => return,
    };

    let text_vmaddr = match find_text_segment_vmaddr::<Mach>(file, endian) {
        Some(v) => v,
        None => return,
    };

    let mut cmds = match file.macho_header().load_commands(endian, data, 0) {
        Ok(c) => c,
        Err(err) => {
            tracing::debug!(?err, "Mach-O load commands unreadable");
            return;
        }
    };

    while let Ok(Some(cmd)) = cmds.next() {
        let variant = match cmd.variant() {
            Ok(v) => v,
            Err(_) => continue,
        };
        let LoadCommandVariant::LinkeditData(linkedit) = variant else {
            continue;
        };
        if linkedit.cmd.get(endian) != macho::LC_FUNCTION_STARTS {
            continue;
        }
        let mut iter = match linkedit.function_starts(endian, data, text_vmaddr) {
            Ok(i) => i,
            Err(err) => {
                tracing::debug!(?err, "LC_FUNCTION_STARTS payload unreadable");
                return;
            }
        };
        while let Ok(Some(addr)) = iter.next() {
            out.entry(addr).or_insert_with(|| Symbol {
                name: format!("sub_{addr:x}"),
                addr,
                size: 0,
                kind: SymbolKind::Function,
            });
        }
        return;
    }
}

fn find_text_segment_vmaddr<Mach>(file: &MachOFile<Mach>, endian: object::Endianness) -> Option<u64>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    for sec in file.sections() {
        let name = sec.name().ok()?;
        if name == "__text" || name.starts_with("__TEXT,__text") {
            return Some(sec.address() & !0xFFFu64);
        }
    }
    let _ = endian;
    None
}

fn collect_segment_vmaddrs<Mach>(file: &MachOFile<Mach>, data: &[u8]) -> Vec<(u64, u64, u64)>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let endian = match file.macho_header().endian() {
        Ok(e) => e,
        Err(_) => return Vec::new(),
    };
    let mut segments = Vec::new();
    let mut cmds = match file.macho_header().load_commands(endian, data, 0) {
        Ok(c) => c,
        Err(_) => return segments,
    };
    while let Ok(Some(cmd)) = cmds.next() {
        match cmd.variant() {
            Ok(LoadCommandVariant::Segment32(seg, _)) => {
                segments.push((
                    u64::from(seg.vmaddr.get(endian)),
                    u64::from(seg.fileoff.get(endian)),
                    u64::from(seg.filesize.get(endian)),
                ));
            }
            Ok(LoadCommandVariant::Segment64(seg, _)) => {
                segments.push((
                    seg.vmaddr.get(endian),
                    seg.fileoff.get(endian),
                    seg.filesize.get(endian),
                ));
            }
            _ => {}
        }
    }
    segments
}

/// Merge bound import names from `LC_DYLD_CHAINED_FIXUPS` into `out`.
///
/// Modern Apple binaries (since macOS 12 / iOS 15) replace the legacy
/// `LC_DYLD_INFO` rebase/bind opcodes with a chained-fixup format defined in
/// dyld's `mach-o/fixup-chains.h`. The payload starts with a 28-byte
/// `dyld_chained_fixups_header` followed by an imports table and a symbol
/// strings blob.
///
/// We parse only the imports — extracting bound symbol names is the most
/// directly useful metadata for a decompiler. Walking per-segment / per-page
/// fixup chains (to compute every patched VA) is deferred; that data is also
/// reachable on demand from the existing object::Object::dynamic_relocations
/// surface area for current consumers.
///
/// `imports_format` values:
/// - 1 (`DYLD_CHAINED_IMPORT`): 4-byte entries, top 23 bits = name offset
/// - 2/3 (`_ADDEND`/`_ADDEND64`): unsupported here — skip the table
fn merge_chained_imports<Mach>(
    file: &MachOFile<Mach>,
    data: &[u8],
    out: &mut BTreeMap<u64, Symbol>,
    relocations: &mut Vec<Relocation>,
)
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let endian = match file.macho_header().endian() {
        Ok(e) => e,
        Err(_) => return,
    };

    let segment_vmaddrs = collect_segment_vmaddrs::<Mach>(file, data);

    let mut cmds = match file.macho_header().load_commands(endian, data, 0) {
        Ok(c) => c,
        Err(_) => return,
    };

    while let Ok(Some(cmd)) = cmds.next() {
        let variant = match cmd.variant() {
            Ok(v) => v,
            Err(_) => continue,
        };
        let LoadCommandVariant::LinkeditData(linkedit) = variant else {
            continue;
        };
        if linkedit.cmd.get(endian) != macho::LC_DYLD_CHAINED_FIXUPS {
            continue;
        }
        let dataoff = linkedit.dataoff.get(endian) as usize;
        let datasize = linkedit.datasize.get(endian) as usize;
        if datasize < 28 || dataoff.saturating_add(datasize) > data.len() {
            tracing::debug!(
                dataoff,
                datasize,
                "LC_DYLD_CHAINED_FIXUPS payload bounds invalid"
            );
            return;
        }
        let payload = &data[dataoff..dataoff + datasize];
        decode_chained_imports(payload, out);
        walk_chained_fixup_pages(payload, data, &segment_vmaddrs, relocations);
        return;
    }
}

fn decode_chained_imports(payload: &[u8], out: &mut BTreeMap<u64, Symbol>) {
    let fixups_version = u32::from_le_bytes(payload[0..4].try_into().unwrap_or([0; 4]));
    if fixups_version != 0 {
        tracing::debug!(fixups_version, "unsupported chained fixups version");
        return;
    }
    let imports_offset = u32::from_le_bytes(payload[8..12].try_into().unwrap_or([0; 4])) as usize;
    let symbols_offset = u32::from_le_bytes(payload[12..16].try_into().unwrap_or([0; 4])) as usize;
    let imports_count = u32::from_le_bytes(payload[16..20].try_into().unwrap_or([0; 4])) as usize;
    let imports_format = u32::from_le_bytes(payload[20..24].try_into().unwrap_or([0; 4]));
    let symbols_format = u32::from_le_bytes(payload[24..28].try_into().unwrap_or([0; 4]));

    if imports_format != 1 || symbols_format != 0 {
        tracing::debug!(
            imports_format,
            symbols_format,
            "chained-fixup variants beyond DYLD_CHAINED_IMPORT (uncompressed) not yet supported"
        );
        return;
    }

    let entry_size = 4usize;
    let imports_end = imports_offset.saturating_add(imports_count.saturating_mul(entry_size));
    if imports_end > payload.len() || symbols_offset > payload.len() {
        return;
    }

    let symbols_blob = &payload[symbols_offset..];
    for i in 0..imports_count {
        let off = imports_offset + i * entry_size;
        let raw = u32::from_le_bytes(payload[off..off + 4].try_into().unwrap_or([0; 4]));
        let name_offset = (raw >> 9) as usize;
        if name_offset >= symbols_blob.len() {
            continue;
        }
        let end = symbols_blob[name_offset..]
            .iter()
            .position(|&b| b == 0)
            .map(|p| name_offset + p)
            .unwrap_or(symbols_blob.len());
        let name = String::from_utf8_lossy(&symbols_blob[name_offset..end]).to_string();
        if name.is_empty() {
            continue;
        }
        let qualified = format!("dyld!{name}");
        out.entry(0).or_insert(Symbol {
            name: qualified,
            addr: 0,
            size: 0,
            kind: SymbolKind::Unknown,
        });
    }
}

// ---------------------------------------------------------------------------
// P10-26: Per-page chained fixup chain walking
// ---------------------------------------------------------------------------

const DYLD_CHAINED_PTR_START_NONE: u16 = 0xFFFF;
const DYLD_CHAINED_PTR_64: u16 = 2;
const CHAINED_MAX_ENTRIES_PER_PAGE: usize = 1024;

fn walk_chained_fixup_pages(
    payload: &[u8],
    file_data: &[u8],
    segments: &[(u64, u64, u64)],
    relocations: &mut Vec<Relocation>,
) {
    if payload.len() < 28 {
        return;
    }
    let starts_offset =
        u32::from_le_bytes(payload[4..8].try_into().unwrap_or([0; 4])) as usize;
    if starts_offset == 0 || starts_offset + 4 > payload.len() {
        return;
    }

    let starts = &payload[starts_offset..];
    if starts.len() < 4 {
        return;
    }
    let seg_count = u32::from_le_bytes(starts[0..4].try_into().unwrap_or([0; 4])) as usize;
    if starts.len() < 4 + seg_count * 4 {
        return;
    }

    for seg_idx in 0..seg_count {
        let seg_info_off_raw = u32::from_le_bytes(
            starts[4 + seg_idx * 4..8 + seg_idx * 4]
                .try_into()
                .unwrap_or([0; 4]),
        ) as usize;
        if seg_info_off_raw == 0 {
            continue;
        }
        let seg_info_abs = seg_info_off_raw;
        if seg_info_abs + 22 > starts.len() {
            continue;
        }
        let seg_info = &starts[seg_info_abs..];
        let page_size =
            u16::from_le_bytes(seg_info[4..6].try_into().unwrap_or([0; 2])) as usize;
        let pointer_format =
            u16::from_le_bytes(seg_info[6..8].try_into().unwrap_or([0; 2]));
        let segment_offset =
            u64::from_le_bytes(seg_info[8..16].try_into().unwrap_or([0; 8]));
        let page_count =
            u16::from_le_bytes(seg_info[20..22].try_into().unwrap_or([0; 2])) as usize;

        if pointer_format != DYLD_CHAINED_PTR_64 {
            tracing::debug!(
                pointer_format,
                "unsupported chained pointer format, only DYLD_CHAINED_PTR_64 (2) supported"
            );
            continue;
        }
        if page_size == 0 {
            continue;
        }
        if seg_info.len() < 22 + page_count * 2 {
            continue;
        }

        let (seg_vmaddr, seg_fileoff, seg_filesize) = segments
            .get(seg_idx)
            .copied()
            .unwrap_or((0, 0, 0));

        for page_idx in 0..page_count {
            let ps_off = 22 + page_idx * 2;
            let page_start = u16::from_le_bytes(
                seg_info[ps_off..ps_off + 2].try_into().unwrap_or([0; 2]),
            );
            if page_start == DYLD_CHAINED_PTR_START_NONE {
                continue;
            }

            let page_file_base = seg_fileoff
                .saturating_add(segment_offset)
                .saturating_add((page_idx as u64) * (page_size as u64));
            let page_vm_base = seg_vmaddr
                .saturating_add(segment_offset)
                .saturating_add((page_idx as u64) * (page_size as u64));

            walk_ptr64_chain(
                file_data,
                page_file_base,
                page_vm_base,
                page_start as u64,
                seg_fileoff.saturating_add(seg_filesize),
                relocations,
            );
        }
    }
}

fn walk_ptr64_chain(
    file_data: &[u8],
    page_file_base: u64,
    page_vm_base: u64,
    first_offset: u64,
    seg_file_end: u64,
    relocations: &mut Vec<Relocation>,
) {
    let mut offset = first_offset;
    let mut count = 0usize;

    loop {
        if count >= CHAINED_MAX_ENTRIES_PER_PAGE {
            break;
        }
        let file_pos = page_file_base.saturating_add(offset) as usize;
        if file_pos + 8 > file_data.len() || page_file_base.saturating_add(offset) >= seg_file_end
        {
            break;
        }

        let raw = u64::from_le_bytes(
            file_data[file_pos..file_pos + 8]
                .try_into()
                .unwrap_or([0; 8]),
        );

        let bind = (raw >> 62) & 1;
        let next_delta = ((raw >> 51) & 0x7FF) * 4;
        let va = page_vm_base.saturating_add(offset);

        if bind != 0 {
            let ordinal = (raw & 0x00FF_FFFF) as u32;
            relocations.push(Relocation {
                addr: va,
                sym_name: format!("bind_ordinal_{ordinal}"),
                kind: RelocKind::GlobDat,
            });
        } else {
            let target = raw & 0x0007_FFFF_FFFF_FFFF;
            relocations.push(Relocation {
                addr: va,
                sym_name: format!("rebase_{target:#x}"),
                kind: RelocKind::Relative,
            });
        }

        count += 1;
        if next_delta == 0 {
            break;
        }
        offset = offset.saturating_add(next_delta);
    }
}

// ---------------------------------------------------------------------------
// P10-27: Stub recognition (__stubs / __la_symbol_ptr / __nl_symbol_ptr)
// ---------------------------------------------------------------------------

const S_SYMBOL_STUBS: u32 = 0x08;
const S_LAZY_SYMBOL_POINTERS: u32 = 0x07;
const S_NON_LAZY_SYMBOL_POINTERS: u32 = 0x06;

fn resolve_stubs<Mach>(
    file: &MachOFile<Mach>,
    data: &[u8],
    sections: &[Section],
) -> BTreeMap<u64, String>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let endian = match file.macho_header().endian() {
        Ok(e) => e,
        Err(_) => return BTreeMap::new(),
    };

    let pointer_size: usize = if std::mem::size_of::<Mach>() > 28 { 8 } else { 4 };

    let (indirect_syms, nlist_names) = match load_indirect_table::<Mach>(file, data, endian) {
        Some(v) => v,
        None => return BTreeMap::new(),
    };

    let mut plt = BTreeMap::new();

    for obj_sec in file.sections() {
        let flags = match obj_sec.flags() {
            object::SectionFlags::MachO { flags } => flags,
            _ => continue,
        };
        let sec_type = flags & 0xFF;
        if sec_type != S_SYMBOL_STUBS
            && sec_type != S_LAZY_SYMBOL_POINTERS
            && sec_type != S_NON_LAZY_SYMBOL_POINTERS
        {
            continue;
        }

        let sec_name = obj_sec.name().unwrap_or_default();
        let matched_sec = sections.iter().find(|s| s.name == sec_name);
        let sec_vaddr = matched_sec.map(|s| s.vaddr).unwrap_or(obj_sec.address());
        let sec_size = matched_sec.map(|s| s.size).unwrap_or(obj_sec.size());

        let (reserved1, reserved2) = extract_reserved_fields::<Mach>(file, data, endian, sec_name);

        let entry_size = if sec_type == S_SYMBOL_STUBS {
            reserved2 as usize
        } else {
            pointer_size
        };
        if entry_size == 0 {
            continue;
        }

        let entry_count = (sec_size as usize) / entry_size;
        let indirect_start = reserved1 as usize;

        for i in 0..entry_count {
            let isym_idx = indirect_start + i;
            if isym_idx >= indirect_syms.len() {
                break;
            }
            let nlist_idx = indirect_syms[isym_idx] as usize;
            // INDIRECT_SYMBOL_LOCAL (0x80000000) or INDIRECT_SYMBOL_ABS (0x40000000)
            if nlist_idx >= 0x4000_0000 {
                continue;
            }
            if let Some(name) = nlist_names.get(nlist_idx) {
                if !name.is_empty() {
                    let stub_addr = sec_vaddr + (i as u64) * (entry_size as u64);
                    plt.insert(stub_addr, name.clone());
                }
            }
        }
    }

    plt
}

fn load_indirect_table<Mach>(
    file: &MachOFile<Mach>,
    data: &[u8],
    endian: object::Endianness,
) -> Option<(Vec<u32>, Vec<String>)>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let mut cmds = file.macho_header().load_commands(endian, data, 0).ok()?;

    let mut indirect_symoff = 0u32;
    let mut indirect_nsyms = 0u32;
    let mut symoff = 0u32;
    let mut nsyms = 0u32;
    let mut stroff = 0u32;
    let mut strsize = 0u32;

    while let Ok(Some(cmd)) = cmds.next() {
        let variant = match cmd.variant() {
            Ok(v) => v,
            Err(_) => continue,
        };
        match variant {
            LoadCommandVariant::Symtab(sym) => {
                symoff = sym.symoff.get(endian);
                nsyms = sym.nsyms.get(endian);
                stroff = sym.stroff.get(endian);
                strsize = sym.strsize.get(endian);
            }
            LoadCommandVariant::Dysymtab(dys) => {
                indirect_symoff = dys.indirectsymoff.get(endian);
                indirect_nsyms = dys.nindirectsyms.get(endian);
            }
            _ => {}
        }
    }

    if indirect_nsyms == 0 || nsyms == 0 {
        return None;
    }

    let isym_off = indirect_symoff as usize;
    let isym_end = isym_off.checked_add((indirect_nsyms as usize).checked_mul(4)?)?;
    if isym_end > data.len() {
        return None;
    }
    let indirect_syms: Vec<u32> = (0..indirect_nsyms as usize)
        .map(|i| {
            let off = isym_off + i * 4;
            u32::from_le_bytes(data[off..off + 4].try_into().unwrap_or([0; 4]))
        })
        .collect();

    let nlist_entry_size: usize = if std::mem::size_of::<Mach>() > 28 { 16 } else { 12 };
    let sym_off = symoff as usize;
    let str_off = stroff as usize;
    let str_end = str_off.checked_add(strsize as usize)?;
    if str_end > data.len() {
        return None;
    }
    let strtab = &data[str_off..str_end];

    let nlist_names: Vec<String> = (0..nsyms as usize)
        .map(|i| {
            let noff = sym_off + i * nlist_entry_size;
            if noff + 4 > data.len() {
                return String::new();
            }
            let n_strx =
                u32::from_le_bytes(data[noff..noff + 4].try_into().unwrap_or([0; 4])) as usize;
            if n_strx >= strtab.len() {
                return String::new();
            }
            let end = strtab[n_strx..]
                .iter()
                .position(|&b| b == 0)
                .map(|p| n_strx + p)
                .unwrap_or(strtab.len());
            String::from_utf8_lossy(&strtab[n_strx..end]).to_string()
        })
        .collect();

    Some((indirect_syms, nlist_names))
}

fn extract_reserved_fields<Mach>(
    file: &MachOFile<Mach>,
    data: &[u8],
    endian: object::Endianness,
    target_name: &str,
) -> (u32, u32)
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let mut cmds = match file.macho_header().load_commands(endian, data, 0) {
        Ok(c) => c,
        Err(_) => return (0, 0),
    };

    while let Ok(Some(cmd)) = cmds.next() {
        let variant = match cmd.variant() {
            Ok(v) => v,
            Err(_) => continue,
        };
        match variant {
            LoadCommandVariant::Segment64(seg, sec_data) => {
                let nsects = seg.nsects.get(endian) as usize;
                let cmd_data = sec_data;
                let sec_start = 0usize;
                for i in 0..nsects {
                    let soff = sec_start + i * 80;
                    if soff + 80 > cmd_data.len() {
                        break;
                    }
                    let sec_name_bytes = &cmd_data[soff..soff + 16];
                    let nul = sec_name_bytes
                        .iter()
                        .position(|&b| b == 0)
                        .unwrap_or(16);
                    let sec_name = std::str::from_utf8(&sec_name_bytes[..nul]).unwrap_or("");
                    if sec_name == target_name {
                        let r1 = u32::from_le_bytes(
                            cmd_data[soff + 68..soff + 72].try_into().unwrap_or([0; 4]),
                        );
                        let r2 = u32::from_le_bytes(
                            cmd_data[soff + 72..soff + 76].try_into().unwrap_or([0; 4]),
                        );
                        return (r1, r2);
                    }
                }
            }
            LoadCommandVariant::Segment32(seg, sec_data) => {
                let nsects = seg.nsects.get(endian) as usize;
                let cmd_data = sec_data;
                let sec_start = 0usize;
                for i in 0..nsects {
                    let soff = sec_start + i * 68;
                    if soff + 68 > cmd_data.len() {
                        break;
                    }
                    let sec_name_bytes = &cmd_data[soff..soff + 16];
                    let nul = sec_name_bytes
                        .iter()
                        .position(|&b| b == 0)
                        .unwrap_or(16);
                    let sec_name = std::str::from_utf8(&sec_name_bytes[..nul]).unwrap_or("");
                    if sec_name == target_name {
                        let r1 = u32::from_le_bytes(
                            cmd_data[soff + 60..soff + 64].try_into().unwrap_or([0; 4]),
                        );
                        let r2 = u32::from_le_bytes(
                            cmd_data[soff + 64..soff + 68].try_into().unwrap_or([0; 4]),
                        );
                        return (r1, r2);
                    }
                }
            }
            _ => {}
        }
    }
    (0, 0)
}

// ---------------------------------------------------------------------------
// P10-28: LC_LOAD_DYLIB + LC_RPATH dependency tracking
// ---------------------------------------------------------------------------

fn load_dylibs_and_rpaths<Mach>(
    file: &MachOFile<Mach>,
    data: &[u8],
) -> (Vec<DylibDep>, Vec<String>)
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let endian = match file.macho_header().endian() {
        Ok(e) => e,
        Err(_) => return (Vec::new(), Vec::new()),
    };

    let mut cmds = match file.macho_header().load_commands(endian, data, 0) {
        Ok(c) => c,
        Err(_) => return (Vec::new(), Vec::new()),
    };

    let mut dylibs = Vec::new();
    let mut rpaths = Vec::new();

    while let Ok(Some(cmd)) = cmds.next() {
        let cmd_id = cmd.cmd();
        let variant = match cmd.variant() {
            Ok(v) => v,
            Err(_) => continue,
        };
        match variant {
            LoadCommandVariant::Dylib(dylib_cmd) => {
                let kind = match cmd_id {
                    macho::LC_LOAD_DYLIB => DylibKind::Load,
                    macho::LC_LOAD_WEAK_DYLIB => DylibKind::Weak,
                    macho::LC_REEXPORT_DYLIB => DylibKind::Reexport,
                    macho::LC_LAZY_LOAD_DYLIB => DylibKind::Lazy,
                    macho::LC_LOAD_UPWARD_DYLIB => DylibKind::Upward,
                    _ => DylibKind::Load,
                };
                let path = cmd
                    .string(endian, dylib_cmd.dylib.name)
                    .ok()
                    .and_then(|b| std::str::from_utf8(b).ok())
                    .unwrap_or("")
                    .to_string();
                let current_version = dylib_cmd.dylib.current_version.get(endian);
                let compat_version = dylib_cmd.dylib.compatibility_version.get(endian);
                if !path.is_empty() {
                    dylibs.push(DylibDep {
                        path,
                        kind,
                        current_version,
                        compat_version,
                    });
                }
            }
            LoadCommandVariant::Rpath(rpath_cmd) => {
                let path = cmd
                    .string(endian, rpath_cmd.path)
                    .ok()
                    .and_then(|b| std::str::from_utf8(b).ok())
                    .unwrap_or("")
                    .to_string();
                if !path.is_empty() {
                    rpaths.push(path);
                }
            }
            _ => {}
        }
    }

    (dylibs, rpaths)
}

/// Map the Mach-O `cputype` value to our [`ArchId`].
fn map_arch<'data, Mach>(file: &MachOFile<'data, Mach>) -> Result<ArchId, LoadError>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let header = file.macho_header();
    let endian = header.endian().map_err(LoadError::Parse)?;
    let cputype = header.cputype(endian);

    let arch = match cputype {
        macho::CPU_TYPE_X86_64 => ArchId::X86_64,
        macho::CPU_TYPE_X86 => ArchId::X86,
        macho::CPU_TYPE_ARM64 | macho::CPU_TYPE_ARM64_32 => ArchId::AArch64,
        macho::CPU_TYPE_ARM => ArchId::Arm,
        macho::CPU_TYPE_POWERPC => ArchId::Ppc,
        macho::CPU_TYPE_POWERPC64 => ArchId::Ppc64,
        macho::CPU_TYPE_MIPS => ArchId::Mips,
        _ => ArchId::Unknown(cputype as u16),
    };

    Ok(arch)
}

/// Map Mach-O endianness to our [`Endian`].
fn map_endian<'data, Mach>(file: &MachOFile<'data, Mach>) -> Endian
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    if file.is_little_endian() {
        Endian::Little
    } else {
        Endian::Big
    }
}

/// Load all Mach-O sections into owned [`Section`] values.
fn load_sections<'data, Mach>(file: &MachOFile<'data, Mach>) -> Vec<Section>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    file.sections()
        .filter_map(|sec| {
            let name = sec.name().ok()?.to_string();
            if name.is_empty() {
                return None;
            }

            let vaddr = sec.address();
            let size = sec.size();
            let data = sec.data().ok().unwrap_or_default().to_vec();
            let flags = section_flags(&sec);

            Some(Section {
                name,
                vaddr,
                size,
                data,
                flags,
            })
        })
        .collect()
}

/// Derive [`SectionFlags`] from a Mach-O section's flags.
///
/// Mach-O section headers carry attribute flags (e.g. `S_ATTR_PURE_INSTRUCTIONS`)
/// but not memory protection bits directly. We infer exec from the instruction
/// attributes, and conservatively mark all sections as readable. For write we
/// check whether the section lives in the `__DATA` or `__DATA_CONST` segment
/// by name convention, since that information is not in the section flags word.
fn section_flags<'data>(sec: &impl ObjectSection<'data>) -> SectionFlags {
    use object::SectionFlags as ObjFlags;

    match sec.flags() {
        ObjFlags::MachO { flags } => {
            // All mapped sections are readable.
            let mut f = SectionFlags::READ;

            // Executable if the section contains instructions.
            if flags & macho::S_ATTR_PURE_INSTRUCTIONS != 0
                || flags & macho::S_ATTR_SOME_INSTRUCTIONS != 0
            {
                f = f | SectionFlags::EXEC;
            }

            // Heuristic: sections whose name starts with `__DATA` segment
            // convention (e.g. `__data`, `__bss`) are writable.  The `object`
            // crate's `ObjectSection::name()` returns the *section* name
            // (e.g. `__text`), not the segment name.  Use `SectionKind` to
            // detect writable categories.
            let kind = sec.kind();
            if matches!(
                kind,
                object::SectionKind::Data
                    | object::SectionKind::UninitializedData
                    | object::SectionKind::Tls
                    | object::SectionKind::UninitializedTls
                    | object::SectionKind::Common
                    | object::SectionKind::ReadOnlyDataWithRel
            ) {
                f = f | SectionFlags::WRITE;
            }

            f
        }
        _ => SectionFlags::empty(),
    }
}

/// Load symbols from symtab and dysymtab, merged into one `BTreeMap`.
///
/// When two symbols occupy the same address the one with a non-empty name wins.
fn load_symbols<'data, Mach>(file: &MachOFile<'data, Mach>) -> BTreeMap<u64, Symbol>
where
    Mach: MachHeader<Endian = object::Endianness>,
{
    let mut out = BTreeMap::new();

    // Static symbol table (LC_SYMTAB).
    if let Some(table) = file.symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    // Dynamic symbol table (LC_DYSYMTAB re-indexes into the same nlist array,
    // but the `object` crate exposes it as a separate table via `dynamic_symbol_table`).
    if let Some(table) = file.dynamic_symbol_table() {
        collect_symbols(&mut out, table.symbols());
    }

    out
}

/// Collect symbols from an iterator of `object::Symbol` into the map.
fn collect_symbols<'data>(
    out: &mut BTreeMap<u64, Symbol>,
    symbols: impl Iterator<Item = impl ObjectSymbol<'data>>,
) {
    for sym in symbols {
        let addr = sym.address();
        let name = sym.name().unwrap_or_default().to_string();
        if addr == 0 && name.is_empty() {
            continue;
        }

        let kind = match sym.kind() {
            object::SymbolKind::Text => SymbolKind::Function,
            object::SymbolKind::Data => SymbolKind::Object,
            object::SymbolKind::Section => SymbolKind::Section,
            object::SymbolKind::File => SymbolKind::File,
            _ => SymbolKind::Unknown,
        };

        let new_sym = Symbol {
            name: name.clone(),
            addr,
            size: sym.size(),
            kind,
        };

        // Prefer the symbol with a non-empty name when addresses collide.
        out.entry(addr)
            .and_modify(|existing| {
                if existing.name.is_empty() && !new_sym.name.is_empty() {
                    *existing = new_sym.clone();
                }
            })
            .or_insert(new_sym);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    // -----------------------------------------------------------------------
    // Synthetic Mach-O builders
    // -----------------------------------------------------------------------

    /// Build a minimal valid Mach-O 64-bit little-endian binary in memory.
    ///
    /// Layout:
    ///   0x000 .. 0x020  mach_header_64  (32 bytes)
    ///   0x020 .. 0x068  LC_SEGMENT_64 for __TEXT with one __text section
    ///   0x068 .. 0x078  LC_SYMTAB (empty)
    ///   0x100 .. 0x101  section data (single RET byte)
    fn minimal_macho64() -> Vec<u8> {
        let mut buf = vec![0u8; 0x200];

        // ---- mach_header_64 (32 bytes) ----
        // magic
        buf[0..4].copy_from_slice(&macho::MH_MAGIC_64.to_le_bytes());
        // cputype: CPU_TYPE_X86_64
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86_64 as i32).to_le_bytes());
        // cpusubtype: CPU_SUBTYPE_ALL (3)
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        // filetype: MH_EXECUTE (2)
        buf[12..16].copy_from_slice(&2u32.to_le_bytes());
        // ncmds: 2 (LC_SEGMENT_64 + LC_SYMTAB)
        buf[16..20].copy_from_slice(&2u32.to_le_bytes());
        // sizeofcmds: LC_SEGMENT_64 (72 + 80 section = 152 = 0x48 + 0x50 … nah, let's compute)
        // LC_SEGMENT_64 header = 72 bytes, each section_64 = 80 bytes, 1 section → 72+80=152
        // LC_SYMTAB = 24 bytes
        // total = 152 + 24 = 176 = 0xB0  …  but actually:
        // segment_command_64 = 72 bytes, section_64 = 80 bytes → 72 + 80 = 152 for segment
        // symtab_command = 24 bytes
        // total = 176 bytes (0xB0)
        //
        // But our header is 32 bytes, so commands start at 0x20 and end at 0x20 + 0xB0 = 0xD0.
        // We'll put section data at 0x100.
        let sizeofcmds: u32 = 152 + 24;
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());
        // flags: 0
        buf[24..28].copy_from_slice(&0u32.to_le_bytes());
        // reserved (mach_header_64 pad): 0
        buf[28..32].copy_from_slice(&0u32.to_le_bytes());

        // ---- LC_SEGMENT_64 at offset 0x20 ----
        let seg = 0x20usize;
        // cmd = LC_SEGMENT_64 (0x19)
        buf[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes());
        // cmdsize = 72 + 80 = 152
        buf[seg + 4..seg + 8].copy_from_slice(&152u32.to_le_bytes());
        // segname: "__TEXT\0..." (16 bytes)
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        // vmaddr
        buf[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes());
        // vmsize
        buf[seg + 32..seg + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        // fileoff
        buf[seg + 40..seg + 48].copy_from_slice(&0u64.to_le_bytes());
        // filesize
        buf[seg + 48..seg + 56].copy_from_slice(&0x200u64.to_le_bytes());
        // maxprot: VM_PROT_READ | VM_PROT_EXECUTE = 0x05
        buf[seg + 56..seg + 60].copy_from_slice(&0x05u32.to_le_bytes());
        // initprot: same
        buf[seg + 60..seg + 64].copy_from_slice(&0x05u32.to_le_bytes());
        // nsects: 1
        buf[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes());
        // flags: 0
        buf[seg + 68..seg + 72].copy_from_slice(&0u32.to_le_bytes());

        // ---- section_64 at seg + 72 = 0x68 ----
        let sec = seg + 72;
        // sectname: "__text\0..." (16 bytes)
        buf[sec..sec + 6].copy_from_slice(b"__text");
        // segname: "__TEXT\0..." (16 bytes)
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        // addr
        buf[sec + 32..sec + 40].copy_from_slice(&0x1100u64.to_le_bytes());
        // size: 1
        buf[sec + 40..sec + 48].copy_from_slice(&1u64.to_le_bytes());
        // offset (file offset of section data)
        buf[sec + 48..sec + 52].copy_from_slice(&0x100u32.to_le_bytes());
        // align: 0 (2^0 = 1)
        buf[sec + 52..sec + 56].copy_from_slice(&0u32.to_le_bytes());
        // reloff: 0
        buf[sec + 56..sec + 60].copy_from_slice(&0u32.to_le_bytes());
        // nreloc: 0
        buf[sec + 60..sec + 64].copy_from_slice(&0u32.to_le_bytes());
        // flags: S_ATTR_PURE_INSTRUCTIONS | S_REGULAR
        buf[sec + 64..sec + 68].copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());
        // reserved1, reserved2, reserved3 (12 bytes) — already zeroed.

        // ---- LC_SYMTAB at offset seg + 152 = 0x20 + 0x98 = 0xB8 ----
        let sym_cmd = seg + 152;
        // cmd = LC_SYMTAB (0x02)
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        // cmdsize = 24
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&24u32.to_le_bytes());
        // symoff, nsyms, stroff, strsize — all 0 (empty symbol table).

        // ---- Section data at 0x100 ----
        buf[0x100] = 0xC3; // x86 RET

        buf
    }

    /// Build a minimal valid Mach-O 32-bit little-endian binary.
    ///
    /// Layout:
    ///   0x000 .. 0x01C  mach_header   (28 bytes)
    ///   0x01C .. 0x090  LC_SEGMENT + one section
    ///   0x090 .. 0x0A8  LC_SYMTAB
    ///   0x100 .. 0x101  section data
    fn minimal_macho32() -> Vec<u8> {
        let mut buf = vec![0u8; 0x200];

        // ---- mach_header (28 bytes) ----
        buf[0..4].copy_from_slice(&macho::MH_MAGIC.to_le_bytes());
        // cputype: CPU_TYPE_X86
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86 as i32).to_le_bytes());
        // cpusubtype
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        // filetype: MH_EXECUTE
        buf[12..16].copy_from_slice(&2u32.to_le_bytes());
        // ncmds: 2
        buf[16..20].copy_from_slice(&2u32.to_le_bytes());
        // sizeofcmds: segment_command = 56, section = 68, symtab = 24 → 56+68+24 = 148
        let sizeofcmds: u32 = 56 + 68 + 24;
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());
        // flags
        buf[24..28].copy_from_slice(&0u32.to_le_bytes());

        // ---- LC_SEGMENT at 0x1C ----
        let seg = 0x1Cusize;
        // cmd = LC_SEGMENT (0x01)
        buf[seg..seg + 4].copy_from_slice(&0x01u32.to_le_bytes());
        // cmdsize = 56 + 68 = 124
        buf[seg + 4..seg + 8].copy_from_slice(&124u32.to_le_bytes());
        // segname: "__TEXT"
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        // vmaddr (32-bit)
        buf[seg + 24..seg + 28].copy_from_slice(&0x1000u32.to_le_bytes());
        // vmsize
        buf[seg + 28..seg + 32].copy_from_slice(&0x1000u32.to_le_bytes());
        // fileoff
        buf[seg + 32..seg + 36].copy_from_slice(&0u32.to_le_bytes());
        // filesize
        buf[seg + 36..seg + 40].copy_from_slice(&0x200u32.to_le_bytes());
        // maxprot
        buf[seg + 40..seg + 44].copy_from_slice(&0x05u32.to_le_bytes());
        // initprot
        buf[seg + 44..seg + 48].copy_from_slice(&0x05u32.to_le_bytes());
        // nsects: 1
        buf[seg + 48..seg + 52].copy_from_slice(&1u32.to_le_bytes());
        // flags
        buf[seg + 52..seg + 56].copy_from_slice(&0u32.to_le_bytes());

        // ---- section at seg + 56 = 0x54 ----
        let sec = seg + 56;
        // sectname: "__text"
        buf[sec..sec + 6].copy_from_slice(b"__text");
        // segname: "__TEXT"
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        // addr (32-bit)
        buf[sec + 32..sec + 36].copy_from_slice(&0x1100u32.to_le_bytes());
        // size
        buf[sec + 36..sec + 40].copy_from_slice(&1u32.to_le_bytes());
        // offset
        buf[sec + 40..sec + 44].copy_from_slice(&0x100u32.to_le_bytes());
        // align
        buf[sec + 44..sec + 48].copy_from_slice(&0u32.to_le_bytes());
        // reloff
        buf[sec + 48..sec + 52].copy_from_slice(&0u32.to_le_bytes());
        // nreloc
        buf[sec + 52..sec + 56].copy_from_slice(&0u32.to_le_bytes());
        // flags: S_ATTR_PURE_INSTRUCTIONS
        buf[sec + 56..sec + 60].copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());
        // reserved1, reserved2 (8 bytes) — zeroed

        // ---- LC_SYMTAB at seg + 56 + 68 = 0x1C + 124 = 0x98 ----
        let sym_cmd = seg + 56 + 68;
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&24u32.to_le_bytes());

        // ---- Section data at 0x100 ----
        buf[0x100] = 0xC3;

        buf
    }

    /// Build a minimal fat/universal binary wrapping a single 64-bit x86_64 slice.
    ///
    /// Layout:
    ///   0x000 .. 0x008  fat_header (magic + nfat_arch)
    ///   0x008 .. 0x01C  fat_arch (cputype, cpusubtype, offset, size, align)
    ///   0x1000 ..       embedded Mach-O 64-bit
    fn minimal_fat32() -> Vec<u8> {
        let inner = minimal_macho64();
        let inner_len = inner.len();
        // Align the inner binary to page boundary (0x1000).
        let inner_offset: u32 = 0x1000;
        let total = inner_offset as usize + inner_len;
        let mut buf = vec![0u8; total];

        // ---- fat_header (8 bytes, big-endian) ----
        buf[0..4].copy_from_slice(&macho::FAT_MAGIC.to_be_bytes());
        // nfat_arch: 1
        buf[4..8].copy_from_slice(&1u32.to_be_bytes());

        // ---- fat_arch (20 bytes, big-endian) ----
        let fa = 8usize;
        // cputype: CPU_TYPE_X86_64
        buf[fa..fa + 4].copy_from_slice(&macho::CPU_TYPE_X86_64.to_be_bytes());
        // cpusubtype: 3
        buf[fa + 4..fa + 8].copy_from_slice(&3u32.to_be_bytes());
        // offset
        buf[fa + 8..fa + 12].copy_from_slice(&inner_offset.to_be_bytes());
        // size
        buf[fa + 12..fa + 16].copy_from_slice(&(inner_len as u32).to_be_bytes());
        // align: 12 (2^12 = 4096)
        buf[fa + 16..fa + 20].copy_from_slice(&12u32.to_be_bytes());

        // ---- Embedded Mach-O at inner_offset ----
        buf[inner_offset as usize..inner_offset as usize + inner_len].copy_from_slice(&inner);

        buf
    }

    // -----------------------------------------------------------------------
    // Tests
    // -----------------------------------------------------------------------

    #[test]
    fn test_can_load_macho64() {
        let data = minimal_macho64();
        assert!(MachoLoader::can_load(&data));
    }

    #[test]
    fn test_can_load_macho32() {
        let data = minimal_macho32();
        assert!(MachoLoader::can_load(&data));
    }

    #[test]
    fn test_can_load_fat() {
        let data = minimal_fat32();
        assert!(MachoLoader::can_load(&data));
    }

    #[test]
    fn test_reject_non_macho() {
        assert!(!MachoLoader::can_load(b""));
        assert!(!MachoLoader::can_load(b"not a macho"));
        assert!(!MachoLoader::can_load(&[0u8; 1024]));
        assert!(!MachoLoader::can_load(b"\x7fELF")); // ELF magic
        assert!(!MachoLoader::can_load(b"MZ\x90\x00")); // PE magic

        let err = MachoLoader::load(b"not a macho").unwrap_err();
        assert!(matches!(err, LoadError::InvalidMagic));
    }

    #[test]
    fn test_load_macho64() {
        let data = minimal_macho64();
        let img = MachoLoader::load(&data).expect("should parse minimal Mach-O 64");

        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(
            text.flags.contains(SectionFlags::EXEC),
            "__text should be executable"
        );
        assert!(
            text.flags.contains(SectionFlags::READ),
            "__text should be readable"
        );
        assert!(!text.data.is_empty(), "__text should have data");
    }

    #[test]
    fn test_load_macho32() {
        let data = minimal_macho32();
        let img = MachoLoader::load(&data).expect("should parse minimal Mach-O 32");

        assert_eq!(img.arch, ArchId::X86);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(text.flags.contains(SectionFlags::EXEC));
        assert!(text.flags.contains(SectionFlags::READ));
    }

    #[test]
    fn test_load_fat_binary() {
        let data = minimal_fat32();
        let img = MachoLoader::load(&data).expect("should parse fat binary");

        // The fat binary wraps a single x86_64 slice.
        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist in fat slice");
        assert!(text.flags.contains(SectionFlags::EXEC));
    }

    /// Mach-O 64-bit with one LC_FUNCTION_STARTS pointing at two synthetic
    /// function entries (text vmaddr + 0x100, +0x140).
    fn macho64_with_function_starts() -> Vec<u8> {
        let mut buf = vec![0u8; 0x300];

        let seg_cmdsize: u32 = 152;
        let symtab_cmdsize: u32 = 24;
        let funcstarts_cmdsize: u32 = 16;
        let sizeofcmds: u32 = seg_cmdsize + symtab_cmdsize + funcstarts_cmdsize;
        let funcstarts_dataoff: u32 = 0x180;
        let funcstarts_datasize: u32 = 4;

        buf[0..4].copy_from_slice(&macho::MH_MAGIC_64.to_le_bytes());
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86_64 as i32).to_le_bytes());
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        buf[12..16].copy_from_slice(&2u32.to_le_bytes());
        buf[16..20].copy_from_slice(&3u32.to_le_bytes());
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());

        let seg = 0x20usize;
        buf[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes());
        buf[seg + 4..seg + 8].copy_from_slice(&seg_cmdsize.to_le_bytes());
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        buf[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[seg + 32..seg + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[seg + 48..seg + 56].copy_from_slice(&0x200u64.to_le_bytes());
        buf[seg + 56..seg + 60].copy_from_slice(&0x05u32.to_le_bytes());
        buf[seg + 60..seg + 64].copy_from_slice(&0x05u32.to_le_bytes());
        buf[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes());

        let sec = seg + 72;
        buf[sec..sec + 6].copy_from_slice(b"__text");
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        buf[sec + 32..sec + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[sec + 40..sec + 48].copy_from_slice(&1u64.to_le_bytes());
        buf[sec + 48..sec + 52].copy_from_slice(&0x100u32.to_le_bytes());
        buf[sec + 64..sec + 68].copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());

        let sym_cmd = seg + seg_cmdsize as usize;
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&symtab_cmdsize.to_le_bytes());

        let fs_cmd = sym_cmd + symtab_cmdsize as usize;
        buf[fs_cmd..fs_cmd + 4].copy_from_slice(&macho::LC_FUNCTION_STARTS.to_le_bytes());
        buf[fs_cmd + 4..fs_cmd + 8].copy_from_slice(&funcstarts_cmdsize.to_le_bytes());
        buf[fs_cmd + 8..fs_cmd + 12].copy_from_slice(&funcstarts_dataoff.to_le_bytes());
        buf[fs_cmd + 12..fs_cmd + 16].copy_from_slice(&funcstarts_datasize.to_le_bytes());

        buf[0x100] = 0xC3;

        let fs = funcstarts_dataoff as usize;
        buf[fs] = 0x80;
        buf[fs + 1] = 0x02;
        buf[fs + 2] = 0x40;
        buf[fs + 3] = 0x00;

        buf
    }

    #[test]
    fn test_macho_function_starts_recovered() {
        let bin = macho64_with_function_starts();
        let img = MachoLoader::load(&bin).expect("Mach-O with LC_FUNCTION_STARTS must load");

        let entry_a = img.symbols.get(&0x1100).expect("first function recovered");
        assert_eq!(entry_a.kind, SymbolKind::Function);
        assert_eq!(entry_a.name, "sub_1100");

        let entry_b = img.symbols.get(&0x1140).expect("second function recovered");
        assert_eq!(entry_b.name, "sub_1140");
    }

    /// Mach-O 64-bit with LC_DYLD_INFO + LC_DYSYMTAB.
    ///
    /// Layout (< 1 KB):
    /// ```text
    /// 0x000  mach_header_64          (32 B)
    /// 0x020  LC_SEGMENT_64 __TEXT    (152 B, 1 section: __text)
    /// 0x0B8  LC_SEGMENT_64 __DATA    (152 B, 1 section: __la_symbol_ptr)
    /// 0x150  LC_SYMTAB               (24 B, 1 nlist for "_malloc")
    /// 0x168  LC_DYSYMTAB             (80 B, 1 indirect sym entry)
    /// 0x1B8  LC_DYLD_INFO            (48 B, bind opcodes for "_printf")
    /// --- load commands end at 0x1E8 ---
    /// 0x1F0  __text data             (1 B: 0xC3 RET)
    /// 0x200  __la_symbol_ptr data    (8 B: pointer slot)
    /// 0x210  string table            ("\0_malloc\0", 9 B)
    /// 0x220  nlist64                 (16 B)
    /// 0x230  indirect sym table      (4 B: [0])
    /// 0x238  bind opcodes            (15 B)
    /// ```
    fn macho64_with_dyld_info() -> Vec<u8> {
        let mut buf = vec![0u8; 0x300];

        // ── Sizes ──────────────────────────────────────────────────
        let seg_cmdsize: u32 = 152; // 72 base + 80 section
        let symtab_cmdsize: u32 = 24;
        let dysymtab_cmdsize: u32 = 80;
        let dyld_info_cmdsize: u32 = 48;
        let sizeofcmds: u32 =
            seg_cmdsize * 2 + symtab_cmdsize + dysymtab_cmdsize + dyld_info_cmdsize;

        // ── mach_header_64 (0x00) ──────────────────────────────────
        buf[0..4].copy_from_slice(&macho::MH_MAGIC_64.to_le_bytes());
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86_64 as i32).to_le_bytes());
        buf[8..12].copy_from_slice(&3u32.to_le_bytes()); // cpusubtype
        buf[12..16].copy_from_slice(&2u32.to_le_bytes()); // MH_EXECUTE
        buf[16..20].copy_from_slice(&5u32.to_le_bytes()); // ncmds
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());

        // ── LC_SEGMENT_64 __TEXT (0x20) ────────────────────────────
        let seg = 0x20usize;
        buf[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes()); // LC_SEGMENT_64
        buf[seg + 4..seg + 8].copy_from_slice(&seg_cmdsize.to_le_bytes());
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        buf[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes()); // vmaddr
        buf[seg + 32..seg + 40].copy_from_slice(&0x1000u64.to_le_bytes()); // vmsize
        // fileoff = 0 (default)
        buf[seg + 48..seg + 56].copy_from_slice(&0x200u64.to_le_bytes()); // filesize
        buf[seg + 56..seg + 60].copy_from_slice(&0x05u32.to_le_bytes()); // maxprot R|X
        buf[seg + 60..seg + 64].copy_from_slice(&0x05u32.to_le_bytes()); // initprot R|X
        buf[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes()); // nsects

        // section __text
        let sec = seg + 72;
        buf[sec..sec + 6].copy_from_slice(b"__text");
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        buf[sec + 32..sec + 40].copy_from_slice(&0x11F0u64.to_le_bytes()); // addr
        buf[sec + 40..sec + 48].copy_from_slice(&1u64.to_le_bytes()); // size
        buf[sec + 48..sec + 52].copy_from_slice(&0x1F0u32.to_le_bytes()); // offset
        buf[sec + 64..sec + 68].copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes()); // flags

        // ── LC_SEGMENT_64 __DATA (0xB8) ────────────────────────────
        let dseg = 0xB8usize;
        buf[dseg..dseg + 4].copy_from_slice(&0x19u32.to_le_bytes()); // LC_SEGMENT_64
        buf[dseg + 4..dseg + 8].copy_from_slice(&seg_cmdsize.to_le_bytes());
        buf[dseg + 8..dseg + 14].copy_from_slice(b"__DATA");
        buf[dseg + 24..dseg + 32].copy_from_slice(&0x2000u64.to_le_bytes()); // vmaddr
        buf[dseg + 32..dseg + 40].copy_from_slice(&0x1000u64.to_le_bytes()); // vmsize
        buf[dseg + 40..dseg + 48].copy_from_slice(&0x200u64.to_le_bytes()); // fileoff
        buf[dseg + 48..dseg + 56].copy_from_slice(&0x10u64.to_le_bytes()); // filesize
        buf[dseg + 56..dseg + 60].copy_from_slice(&0x03u32.to_le_bytes()); // maxprot R|W
        buf[dseg + 60..dseg + 64].copy_from_slice(&0x03u32.to_le_bytes()); // initprot R|W
        buf[dseg + 64..dseg + 68].copy_from_slice(&1u32.to_le_bytes()); // nsects

        // section __la_symbol_ptr
        let dsec = dseg + 72;
        buf[dsec..dsec + 16].copy_from_slice(b"__la_symbol_ptr\0");
        buf[dsec + 16..dsec + 22].copy_from_slice(b"__DATA");
        buf[dsec + 32..dsec + 40].copy_from_slice(&0x2000u64.to_le_bytes()); // addr
        buf[dsec + 40..dsec + 48].copy_from_slice(&8u64.to_le_bytes()); // size (1 pointer)
        buf[dsec + 48..dsec + 52].copy_from_slice(&0x200u32.to_le_bytes()); // offset
        // flags: S_LAZY_SYMBOL_POINTERS = 0x7
        buf[dsec + 64..dsec + 68].copy_from_slice(&macho::S_LAZY_SYMBOL_POINTERS.to_le_bytes());
        // reserved1 = 0 (indirect symbol table start index) — already zero

        // ── LC_SYMTAB (0x150) ──────────────────────────────────────
        let sym_cmd = 0x150usize;
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes()); // LC_SYMTAB
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&symtab_cmdsize.to_le_bytes());
        buf[sym_cmd + 8..sym_cmd + 12].copy_from_slice(&0x220u32.to_le_bytes()); // symoff
        buf[sym_cmd + 12..sym_cmd + 16].copy_from_slice(&1u32.to_le_bytes()); // nsyms
        buf[sym_cmd + 16..sym_cmd + 20].copy_from_slice(&0x210u32.to_le_bytes()); // stroff
        buf[sym_cmd + 20..sym_cmd + 24].copy_from_slice(&9u32.to_le_bytes()); // strsize

        // ── LC_DYSYMTAB (0x168) ────────────────────────────────────
        // DysymtabCommand: 20 × u32 = 80 bytes
        let dys = 0x168usize;
        buf[dys..dys + 4].copy_from_slice(&macho::LC_DYSYMTAB.to_le_bytes()); // cmd
        buf[dys + 4..dys + 8].copy_from_slice(&dysymtab_cmdsize.to_le_bytes());
        // ilocalsym=0, nlocalsym=0 (offsets 8,12 — already zero)
        // iextdefsym=0, nextdefsym=0 (offsets 16,20 — already zero)
        // iundefsym=0
        buf[dys + 24..dys + 28].copy_from_slice(&0u32.to_le_bytes()); // iundefsym
        buf[dys + 28..dys + 32].copy_from_slice(&1u32.to_le_bytes()); // nundefsym
        // tocoff..nextrefsyms (offsets 32-52) — all zero
        // indirectsymoff, nindirectsyms
        buf[dys + 56..dys + 60].copy_from_slice(&0x230u32.to_le_bytes()); // indirectsymoff
        buf[dys + 60..dys + 64].copy_from_slice(&1u32.to_le_bytes()); // nindirectsyms
        // extreloff..nlocrel (offsets 64-76) — all zero

        // ── LC_DYLD_INFO (0x1B8) ──────────────────────────────────
        // DyldInfoCommand: 12 × u32 = 48 bytes
        let dyi = 0x1B8usize;
        buf[dyi..dyi + 4].copy_from_slice(&macho::LC_DYLD_INFO.to_le_bytes()); // cmd
        buf[dyi + 4..dyi + 8].copy_from_slice(&dyld_info_cmdsize.to_le_bytes());
        // rebase_off=0, rebase_size=0 (offsets 8,12 — zero)
        buf[dyi + 16..dyi + 20].copy_from_slice(&0x238u32.to_le_bytes()); // bind_off
        buf[dyi + 20..dyi + 24].copy_from_slice(&15u32.to_le_bytes()); // bind_size
        // weak_bind, lazy_bind, export — all zero

        // ── __text data (0x100) ────────────────────────────────────
        buf[0x1F0] = 0xC3; // RET

        // ── String table (0x210) ───────────────────────────────────
        // "\0_malloc\0"
        buf[0x210] = 0x00;
        buf[0x211..0x219].copy_from_slice(b"_malloc\0");

        // ── nlist64 (0x220) ────────────────────────────────────────
        // n_strx = 1 (index of "_malloc" in strtab)
        buf[0x220..0x224].copy_from_slice(&1u32.to_le_bytes());
        // n_type = N_EXT | N_UNDF = 0x01
        buf[0x224] = macho::N_EXT | macho::N_UNDF;
        // n_sect = 0 (NO_SECT)
        // n_desc = 0
        // n_value = 0
        // (bytes 0x225..0x230 already zero)

        // ── Indirect symbol table (0x230) ──────────────────────────
        // 1 entry: index 0 into symtab
        buf[0x230..0x234].copy_from_slice(&0u32.to_le_bytes());

        // ── Bind opcodes (0x238, 15 bytes) ─────────────────────────
        let bind = 0x238usize;
        buf[bind] = 0x11; // SET_DYLIB_ORDINAL_IMM | 1
        buf[bind + 1] = 0x40; // SET_SYMBOL_TRAILING_FLAGS_IMM | 0
        buf[bind + 2..bind + 10].copy_from_slice(b"_printf\0"); // symbol name
        buf[bind + 10] = 0x51; // SET_TYPE_IMM | BIND_TYPE_POINTER(1)
        buf[bind + 11] = 0x71; // SET_SEGMENT_AND_OFFSET_ULEB | 1
        buf[bind + 12] = 0x00; // ULEB128(0)
        buf[bind + 13] = 0x90; // DO_BIND
        buf[bind + 14] = 0x00; // DONE

        buf
    }

    #[test]
    fn test_macho_dyld_info_fixture_loads() {
        let bin = macho64_with_dyld_info();
        assert!(bin.len() < 1024, "fixture must be < 1 KB");
        let img = MachoLoader::load(&bin).expect("Mach-O with LC_DYLD_INFO must load");

        assert_eq!(img.arch, ArchId::X86_64);
        assert_eq!(img.endian, Endian::Little);

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(text.flags.contains(SectionFlags::EXEC));

        let la_ptr = img
            .section_by_name("__la_symbol_ptr")
            .expect("__la_symbol_ptr section must exist");
        assert!(la_ptr.flags.contains(SectionFlags::READ));
    }

    #[test]
    fn test_macho_dysymtab_indirect_symbols_parsed() {
        let bin = macho64_with_dyld_info();
        let file = MachOFile::<macho::MachHeader64<object::Endianness>>::parse(&bin[..])
            .expect("fixture parses");
        let dynamic = collect_macho_dynamic_linking(&file, &bin);

        assert_eq!(dynamic.indirect_symbols, vec![0]);
    }

    #[test]
    fn test_macho_rebase_opcodes_populate_relative_relocation() {
        let mut bin = macho64_with_dyld_info();
        let rebase = 0x248usize;
        bin[0x1B8 + 8..0x1B8 + 12].copy_from_slice(&(rebase as u32).to_le_bytes());
        bin[0x1B8 + 12..0x1B8 + 16].copy_from_slice(&5u32.to_le_bytes());
        bin[rebase] = 0x21; // SET_SEGMENT_AND_OFFSET_ULEB | __DATA
        bin[rebase + 1] = 0x08; // offset 8
        bin[rebase + 2] = 0x51; // DO_REBASE_IMM_TIMES | 1
        bin[rebase + 3] = 0x00; // DONE

        let img = MachoLoader::load(&bin).expect("Mach-O with rebase stream must load");

        assert!(img.relocations.iter().any(|reloc| {
            reloc.addr == 0x2008 && reloc.sym_name.is_empty() && reloc.kind == RelocKind::Relative
        }));
    }

    #[test]
    fn test_macho_bind_opcodes_populate_dylib_symbol_and_relocation() {
        let bin = macho64_with_dyld_info();
        let img = MachoLoader::load(&bin).expect("Mach-O with bind stream must load");

        let reloc = img
            .relocations
            .iter()
            .find(|reloc| reloc.sym_name == "dylib!_printf")
            .expect("bind relocation recovered");
        assert_eq!(reloc.addr, 0x2000);
        assert_eq!(reloc.kind, RelocKind::GlobDat);

        let sym = img.symbols.get(&0x2000).expect("bound symbol merged");
        assert_eq!(sym.name, "dylib!_printf");
    }

    #[test]
    fn test_macho_lazy_bind_stream_is_interpreted() {
        let mut bin = macho64_with_dyld_info();
        let lazy = 0x248usize;
        let lazy_stream = [
            0x11, // SET_DYLIB_ORDINAL_IMM | 1
            0x40, // SET_SYMBOL_TRAILING_FLAGS_IMM | 0
            b'_', b'p', b'u', b't', b's', 0x00, 0x51, // SET_TYPE_IMM | POINTER
            0x71, // SET_SEGMENT_AND_OFFSET_ULEB | __DATA
            0x08, // offset 8
            0x90, // DO_BIND
            0x00, // DONE
        ];
        bin[lazy..lazy + lazy_stream.len()].copy_from_slice(&lazy_stream);
        bin[0x1B8 + 32..0x1B8 + 36].copy_from_slice(&(lazy as u32).to_le_bytes());
        bin[0x1B8 + 36..0x1B8 + 40].copy_from_slice(&(lazy_stream.len() as u32).to_le_bytes());

        let img = MachoLoader::load(&bin).expect("Mach-O with lazy bind stream must load");

        assert!(img.relocations.iter().any(|reloc| {
            reloc.addr == 0x2008 && reloc.sym_name == "dylib!_puts" && reloc.kind == RelocKind::GlobDat
        }));
    }

    #[test]
    fn test_macho_export_trie_symbols_are_functions() {
        let mut bin = macho64_with_dyld_info();
        let export = 0x248usize;
        let export_trie = [
            0x00, // root terminal size
            0x01, // one child
            b'_', b'e', b'x', b'p', b'o', b'r', b't', b'e', b'd', 0x00, 0x0D, // child offset
            0x03, // child terminal size
            0x00, // flags
            0xB4, 0x24, // address 0x1234
            0x00, // no children
        ];
        bin[export..export + export_trie.len()].copy_from_slice(&export_trie);
        bin[0x1B8 + 40..0x1B8 + 44].copy_from_slice(&(export as u32).to_le_bytes());
        bin[0x1B8 + 44..0x1B8 + 48].copy_from_slice(&(export_trie.len() as u32).to_le_bytes());

        let img = MachoLoader::load(&bin).expect("Mach-O with export trie must load");

        let sym = img.symbols.get(&0x1234).expect("exported symbol recovered");
        assert_eq!(sym.name, "_exported");
        assert_eq!(sym.kind, SymbolKind::Function);
    }

    #[test]
    fn test_macho_relocations_populated_from_rebase_and_bind() {
        let mut bin = macho64_with_dyld_info();
        let rebase = 0x248usize;
        bin[0x1B8 + 8..0x1B8 + 12].copy_from_slice(&(rebase as u32).to_le_bytes());
        bin[0x1B8 + 12..0x1B8 + 16].copy_from_slice(&4u32.to_le_bytes());
        bin[rebase] = 0x21;
        bin[rebase + 1] = 0x08;
        bin[rebase + 2] = 0x51;
        bin[rebase + 3] = 0x00;

        let img = MachoLoader::load(&bin).expect("Mach-O with dyld relocations must load");

        assert!(img.relocations.iter().any(|r| r.kind == RelocKind::Relative));
        assert!(img.relocations.iter().any(|r| r.kind == RelocKind::GlobDat));
        assert!(!img.relocations.is_empty());
    }

    #[test]
    fn test_text_section_not_writable() {
        let data = minimal_macho64();
        let img = MachoLoader::load(&data).expect("should parse");

        let text = img
            .section_by_name("__text")
            .expect("__text section must exist");
        assert!(!text.flags.contains(SectionFlags::WRITE));
    }

    // -----------------------------------------------------------------------
    // P10-26: Chained fixup chain walking tests
    // -----------------------------------------------------------------------

    fn macho64_with_chained_fixups() -> Vec<u8> {
        let mut buf = vec![0u8; 0x400];

        let seg_cmdsize: u32 = 152;
        let symtab_cmdsize: u32 = 24;
        let chained_cmdsize: u32 = 16;
        let sizeofcmds: u32 = seg_cmdsize * 2 + symtab_cmdsize + chained_cmdsize;

        // mach_header_64
        buf[0..4].copy_from_slice(&macho::MH_MAGIC_64.to_le_bytes());
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86_64 as i32).to_le_bytes());
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        buf[12..16].copy_from_slice(&2u32.to_le_bytes()); // MH_EXECUTE
        buf[16..20].copy_from_slice(&4u32.to_le_bytes()); // ncmds
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());

        // LC_SEGMENT_64 __TEXT (seg 0)
        let seg = 0x20usize;
        buf[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes());
        buf[seg + 4..seg + 8].copy_from_slice(&seg_cmdsize.to_le_bytes());
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        buf[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes()); // vmaddr
        buf[seg + 32..seg + 40].copy_from_slice(&0x1000u64.to_le_bytes()); // vmsize
        buf[seg + 48..seg + 56].copy_from_slice(&0x200u64.to_le_bytes()); // filesize
        buf[seg + 56..seg + 60].copy_from_slice(&0x05u32.to_le_bytes());
        buf[seg + 60..seg + 64].copy_from_slice(&0x05u32.to_le_bytes());
        buf[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes()); // nsects

        let sec = seg + 72;
        buf[sec..sec + 6].copy_from_slice(b"__text");
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        buf[sec + 32..sec + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[sec + 40..sec + 48].copy_from_slice(&1u64.to_le_bytes());
        buf[sec + 48..sec + 52].copy_from_slice(&0x100u32.to_le_bytes());
        buf[sec + 64..sec + 68].copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());

        // LC_SEGMENT_64 __DATA (seg 1)
        let dseg = seg + seg_cmdsize as usize;
        buf[dseg..dseg + 4].copy_from_slice(&0x19u32.to_le_bytes());
        buf[dseg + 4..dseg + 8].copy_from_slice(&seg_cmdsize.to_le_bytes());
        buf[dseg + 8..dseg + 14].copy_from_slice(b"__DATA");
        buf[dseg + 24..dseg + 32].copy_from_slice(&0x2000u64.to_le_bytes()); // vmaddr
        buf[dseg + 32..dseg + 40].copy_from_slice(&0x1000u64.to_le_bytes()); // vmsize
        buf[dseg + 40..dseg + 48].copy_from_slice(&0x200u64.to_le_bytes()); // fileoff
        buf[dseg + 48..dseg + 56].copy_from_slice(&0x100u64.to_le_bytes()); // filesize
        buf[dseg + 56..dseg + 60].copy_from_slice(&0x03u32.to_le_bytes());
        buf[dseg + 60..dseg + 64].copy_from_slice(&0x03u32.to_le_bytes());
        buf[dseg + 64..dseg + 68].copy_from_slice(&1u32.to_le_bytes()); // nsects

        let dsec = dseg + 72;
        buf[dsec..dsec + 6].copy_from_slice(b"__data");
        buf[dsec + 16..dsec + 22].copy_from_slice(b"__DATA");
        buf[dsec + 32..dsec + 40].copy_from_slice(&0x2000u64.to_le_bytes());
        buf[dsec + 40..dsec + 48].copy_from_slice(&0x100u64.to_le_bytes());
        buf[dsec + 48..dsec + 52].copy_from_slice(&0x200u32.to_le_bytes());

        // LC_SYMTAB
        let sym_cmd = dseg + seg_cmdsize as usize;
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&symtab_cmdsize.to_le_bytes());

        // LC_DYLD_CHAINED_FIXUPS
        let cf_cmd = sym_cmd + symtab_cmdsize as usize;
        buf[cf_cmd..cf_cmd + 4].copy_from_slice(&macho::LC_DYLD_CHAINED_FIXUPS.to_le_bytes());
        buf[cf_cmd + 4..cf_cmd + 8].copy_from_slice(&chained_cmdsize.to_le_bytes());
        let payload_off: u32 = 0x300;
        buf[cf_cmd + 8..cf_cmd + 12].copy_from_slice(&payload_off.to_le_bytes());
        let payload_size: u32 = 0x80;
        buf[cf_cmd + 12..cf_cmd + 16].copy_from_slice(&payload_size.to_le_bytes());

        // Chained fixups payload at 0x300
        let p = payload_off as usize;
        // dyld_chained_fixups_header (28 bytes)
        buf[p..p + 4].copy_from_slice(&0u32.to_le_bytes()); // fixups_version
        let starts_offset: u32 = 28; // starts right after header
        buf[p + 4..p + 8].copy_from_slice(&starts_offset.to_le_bytes());
        buf[p + 8..p + 12].copy_from_slice(&0u32.to_le_bytes()); // imports_offset (unused)
        buf[p + 12..p + 16].copy_from_slice(&0u32.to_le_bytes()); // symbols_offset
        buf[p + 16..p + 20].copy_from_slice(&0u32.to_le_bytes()); // imports_count
        buf[p + 20..p + 24].copy_from_slice(&1u32.to_le_bytes()); // imports_format=1
        buf[p + 24..p + 28].copy_from_slice(&0u32.to_le_bytes()); // symbols_format

        // dyld_chained_starts_in_image at p+28
        let si = p + starts_offset as usize;
        buf[si..si + 4].copy_from_slice(&2u32.to_le_bytes()); // seg_count = 2
        buf[si + 4..si + 8].copy_from_slice(&0u32.to_le_bytes()); // seg 0 offset = 0 (no fixups)
        let seg1_info_off: u32 = 12; // offset from starts_in_image base
        buf[si + 8..si + 12].copy_from_slice(&seg1_info_off.to_le_bytes()); // seg 1 offset

        // dyld_chained_starts_in_segment for seg 1 at si+12
        let ss = si + seg1_info_off as usize;
        buf[ss..ss + 4].copy_from_slice(&30u32.to_le_bytes()); // size
        buf[ss + 4..ss + 6].copy_from_slice(&0x1000u16.to_le_bytes()); // page_size = 4096
        buf[ss + 6..ss + 8].copy_from_slice(&2u16.to_le_bytes()); // pointer_format = DYLD_CHAINED_PTR_64
        buf[ss + 8..ss + 16].copy_from_slice(&0u64.to_le_bytes()); // segment_offset = 0
        buf[ss + 16..ss + 20].copy_from_slice(&0u32.to_le_bytes()); // max_valid_pointer
        buf[ss + 20..ss + 22].copy_from_slice(&1u16.to_le_bytes()); // page_count = 1
        buf[ss + 22..ss + 24].copy_from_slice(&0u16.to_le_bytes()); // page_starts[0] = 0

        // Chain data in __DATA segment file area (fileoff=0x200, segment_offset=0, page 0, start=0)
        // Entry 1 at file offset 0x200: rebase, target=0x1234, next_delta=2 (raw delta field, *4=8 bytes)
        let chain_base = 0x200usize;
        let entry1: u64 = 0x1234 | (2u64 << 51); // target=0x1234, next=2 (*4=8), bind=0
        buf[chain_base..chain_base + 8].copy_from_slice(&entry1.to_le_bytes());
        // Entry 2 at file offset 0x208: bind, ordinal=5, next_delta=0 (end of chain)
        let entry2: u64 = 5 | (1u64 << 62); // ordinal=5, bind=1, next=0
        buf[chain_base + 8..chain_base + 16].copy_from_slice(&entry2.to_le_bytes());

        buf[0x100] = 0xC3; // RET in __text

        buf
    }

    #[test]
    fn test_chained_fixup_chain_walking() {
        let bin = macho64_with_chained_fixups();
        let img = MachoLoader::load(&bin).expect("Mach-O with chained fixups must load");

        let rebase = img
            .relocations
            .iter()
            .find(|r| r.kind == RelocKind::Relative && r.addr == 0x2000);
        assert!(rebase.is_some(), "rebase relocation at 0x2000 expected");
        let rebase = rebase.unwrap();
        assert!(
            rebase.sym_name.contains("0x1234"),
            "rebase target should contain 0x1234, got: {}",
            rebase.sym_name
        );

        let bind = img
            .relocations
            .iter()
            .find(|r| r.kind == RelocKind::GlobDat && r.addr == 0x2008);
        assert!(bind.is_some(), "bind relocation at 0x2008 expected");
        let bind = bind.unwrap();
        assert!(
            bind.sym_name.contains("5"),
            "bind ordinal should contain 5, got: {}",
            bind.sym_name
        );
    }

    // -----------------------------------------------------------------------
    // P10-27: Stub recognition tests
    // -----------------------------------------------------------------------

    #[test]
    fn test_stub_recognition_la_symbol_ptr() {
        let bin = macho64_with_dyld_info();
        let img = MachoLoader::load(&bin).expect("Mach-O with stubs must load");

        // __la_symbol_ptr at vmaddr 0x2000, 1 entry (8 bytes), reserved1=0
        // indirect_symbols[0] = 0 → nlist[0] = "_malloc"
        assert!(
            !img.plt_symbols.is_empty(),
            "plt_symbols should have entries from __la_symbol_ptr"
        );
        let entry = img.plt_symbols.get(&0x2000);
        assert!(
            entry.is_some(),
            "plt_symbols should contain entry at 0x2000, got: {:?}",
            img.plt_symbols
        );
        assert_eq!(entry.unwrap(), "_malloc");
    }

    // -----------------------------------------------------------------------
    // P10-28: Dylib + rpath tracking tests
    // -----------------------------------------------------------------------

    fn macho64_with_dylib_and_rpath() -> Vec<u8> {
        let mut buf = vec![0u8; 0x400];

        let seg_cmdsize: u32 = 152;
        let symtab_cmdsize: u32 = 24;
        // LC_LOAD_DYLIB: cmdsize must be >= 24 (header) + path length, rounded to 4
        let dylib_path = b"/usr/lib/libSystem.B.dylib\0";
        let dylib_cmdsize: u32 = ((24 + dylib_path.len() + 3) & !3) as u32;
        // LC_RPATH: cmdsize must be >= 12 (header) + path length, rounded to 4
        let rpath_path = b"@executable_path/../Frameworks\0";
        let rpath_cmdsize: u32 = ((12 + rpath_path.len() + 3) & !3) as u32;
        let sizeofcmds: u32 = seg_cmdsize + symtab_cmdsize + dylib_cmdsize + rpath_cmdsize;

        // mach_header_64
        buf[0..4].copy_from_slice(&macho::MH_MAGIC_64.to_le_bytes());
        buf[4..8].copy_from_slice(&(macho::CPU_TYPE_X86_64 as i32).to_le_bytes());
        buf[8..12].copy_from_slice(&3u32.to_le_bytes());
        buf[12..16].copy_from_slice(&2u32.to_le_bytes()); // MH_EXECUTE
        buf[16..20].copy_from_slice(&4u32.to_le_bytes()); // ncmds
        buf[20..24].copy_from_slice(&sizeofcmds.to_le_bytes());

        // LC_SEGMENT_64 __TEXT
        let seg = 0x20usize;
        buf[seg..seg + 4].copy_from_slice(&0x19u32.to_le_bytes());
        buf[seg + 4..seg + 8].copy_from_slice(&seg_cmdsize.to_le_bytes());
        buf[seg + 8..seg + 14].copy_from_slice(b"__TEXT");
        buf[seg + 24..seg + 32].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[seg + 32..seg + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[seg + 48..seg + 56].copy_from_slice(&0x200u64.to_le_bytes());
        buf[seg + 56..seg + 60].copy_from_slice(&0x05u32.to_le_bytes());
        buf[seg + 60..seg + 64].copy_from_slice(&0x05u32.to_le_bytes());
        buf[seg + 64..seg + 68].copy_from_slice(&1u32.to_le_bytes());

        let sec = seg + 72;
        buf[sec..sec + 6].copy_from_slice(b"__text");
        buf[sec + 16..sec + 22].copy_from_slice(b"__TEXT");
        buf[sec + 32..sec + 40].copy_from_slice(&0x1000u64.to_le_bytes());
        buf[sec + 40..sec + 48].copy_from_slice(&1u64.to_le_bytes());
        buf[sec + 48..sec + 52].copy_from_slice(&0x200u32.to_le_bytes());
        buf[sec + 64..sec + 68].copy_from_slice(&macho::S_ATTR_PURE_INSTRUCTIONS.to_le_bytes());

        // LC_SYMTAB
        let sym_cmd = seg + seg_cmdsize as usize;
        buf[sym_cmd..sym_cmd + 4].copy_from_slice(&0x02u32.to_le_bytes());
        buf[sym_cmd + 4..sym_cmd + 8].copy_from_slice(&symtab_cmdsize.to_le_bytes());

        // LC_LOAD_DYLIB
        let dylib_cmd = sym_cmd + symtab_cmdsize as usize;
        buf[dylib_cmd..dylib_cmd + 4].copy_from_slice(&macho::LC_LOAD_DYLIB.to_le_bytes());
        buf[dylib_cmd + 4..dylib_cmd + 8].copy_from_slice(&dylib_cmdsize.to_le_bytes());
        // dylib.name offset (LcStr) = 24 (after the fixed fields)
        buf[dylib_cmd + 8..dylib_cmd + 12].copy_from_slice(&24u32.to_le_bytes());
        // dylib.timestamp
        buf[dylib_cmd + 12..dylib_cmd + 16].copy_from_slice(&0u32.to_le_bytes());
        // dylib.current_version = 0x010203 (1.2.3)
        buf[dylib_cmd + 16..dylib_cmd + 20].copy_from_slice(&0x0001_0203u32.to_le_bytes());
        // dylib.compatibility_version = 0x010000 (1.0.0)
        buf[dylib_cmd + 20..dylib_cmd + 24].copy_from_slice(&0x0001_0000u32.to_le_bytes());
        // path string
        buf[dylib_cmd + 24..dylib_cmd + 24 + dylib_path.len()].copy_from_slice(dylib_path);

        // LC_RPATH
        let rpath_cmd = dylib_cmd + dylib_cmdsize as usize;
        buf[rpath_cmd..rpath_cmd + 4].copy_from_slice(&macho::LC_RPATH.to_le_bytes());
        buf[rpath_cmd + 4..rpath_cmd + 8].copy_from_slice(&rpath_cmdsize.to_le_bytes());
        // rpath.path offset (LcStr) = 12 (after cmd + cmdsize + path_offset)
        buf[rpath_cmd + 8..rpath_cmd + 12].copy_from_slice(&12u32.to_le_bytes());
        // path string
        buf[rpath_cmd + 12..rpath_cmd + 12 + rpath_path.len()].copy_from_slice(rpath_path);

        buf[0x200] = 0xC3; // RET

        buf
    }

    #[test]
    fn test_dylib_and_rpath_extraction() {
        let bin = macho64_with_dylib_and_rpath();
        let img = MachoLoader::load(&bin).expect("Mach-O with dylib+rpath must load");

        assert_eq!(img.dylibs.len(), 1, "should have 1 dylib dependency");
        let dep = &img.dylibs[0];
        assert_eq!(dep.path, "/usr/lib/libSystem.B.dylib");
        assert_eq!(dep.kind, crate::image::DylibKind::Load);
        assert_eq!(dep.current_version, 0x0001_0203);
        assert_eq!(dep.compat_version, 0x0001_0000);

        assert_eq!(img.rpaths.len(), 1, "should have 1 rpath");
        assert_eq!(img.rpaths[0], "@executable_path/../Frameworks");
    }
}
