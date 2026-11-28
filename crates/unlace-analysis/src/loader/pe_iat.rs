//! PE IAT/INT import-name resolution — the unlace analog of Ghidra's
//! `PeLoader.processImports` / `ImportDataDirectory` markup
//! (`Ghidra/Features/PE/.../format/pe/ImportDataDirectory.java`,
//! `.../opinion/PeLoader.java`).
//!
//! ## Why this lives in unlace at all
//!
//! unlace ports Ghidra's C++ *decompiler*; resolving a Windows import slot
//! (`0x14000d33c`) to its imported library name (`puts`) is done by Ghidra's
//! Java *loader* layer, which the port never carried over.  Without it a CALL
//! that lands on an import has no symbol, so `FlowInfo::queryCall` (unlace
//! `decompile_drive.rs::query_call`) finds nothing and the printer falls back to
//! `sub_<addr>`.  This module reconstructs the slot→name mapping straight from
//! the PE Import Directory, so the loader can register the imports as ordinary
//! `FunctionSymbol`s in the same stream as the `.symtab`/`.dynsym` defined
//! functions — exactly the ELF `elf_plt` model, with the IAT slot playing the
//! role of the ELF GOT slot.
//!
//! ## What a PE call to an import looks like (and what we name)
//!
//! A PE references an import through an **Import Address Table (IAT) slot** — a
//! pointer the loader fills in at load time with the resolved function address.
//! Three call shapes reach it (all covered here):
//!
//! 1. **Direct indirect call** — `call [rip+disp]` (x64) / `call [abs32]` (x86)
//!    straight to the IAT slot.  The decompiler constant-folds the `[slot]` load
//!    (the IAT lives in a read-only `.idata` page), so — exactly like ELF's GOT
//!    — **the name attaches to the IAT slot VA**.  This is the *primary*,
//!    arch-independent path (no per-arch stub decode).
//! 2. **Thunk veneer** — MinGW often routes a *direct* `call thunk` to a
//!    one-instruction veneer `jmp [rip+disp]` (`FF 25 <disp32>`) that jumps
//!    through the IAT slot.  Naming only the slot leaves the `call thunk`
//!    rendering `sub_<thunk>`; so we *also* decode the `FF 25` veneers over the
//!    executable sections and name the **thunk entry** with the slot's import
//!    name (the decode is identical to the ELF x86-64 PLT `decode_x86_64`).
//!    A match one byte into a REX-prefixed `48 FF 25` tail jump is not a thunk
//!    and is dropped ([`super::rexthunk`]).
//! 3. **Named thunk / wrapper** — a non-stripped MinGW PE additionally carries a
//!    COFF symbol *on* the thunk (`puts`), which the format-neutral
//!    `file.symbols()` funcsym source already registers; this module is purely
//!    additive to that.
//!
//! ## Algorithm (matches Ghidra's `ImportDataDirectory` loop)
//!
//! For each import descriptor, walk the INT (Import Name Table — the names) and
//! the IAT (the slot addresses) **in lockstep**: the `i`-th INT entry's name
//! belongs to the IAT slot at `image_base + first_thunk_rva + i*ptr`.  Emit one
//! [`ImportSym`] per slot.  An import-by-ordinal (no name) takes its name from
//! the built-in export table of a covered system DLL ([`super::peordinal`]),
//! else synthesizes `<DLL>_Ordinal_<n>` (named beats
//! unresolved).
//!
//! Everything degrades gracefully: a non-PE input, a missing import directory, or
//! an unparsable descriptor yields fewer (or zero) entries.  This module never
//! panics and never errors — it only ever produces *more* names.

use object::pe::{ImageNtHeaders32, ImageNtHeaders64};
use object::read::pe::{ImageNtHeaders, ImageThunkData, ImportTable, PeFile, PeFile32, PeFile64};
use object::read::{Object, ObjectSection};
use object::{FileKind, LittleEndian as LE};

use std::collections::{HashMap, HashSet};

use super::format::{ImportSym, ImportSymKind};

/// Resolve PE import slots (and the thunk veneers that jump through them) to
/// their imported function names.
///
/// Returns one [`ImportSym`] per IAT slot (`addr` = the slot VA the decompiler
/// constant-folds) plus one per decodable `FF 25` thunk veneer (`addr` = the
/// thunk entry a direct `call` targets), plus the PE exports.  Empty when the
/// input is not a PE, has no import directory, or the layout is unparsable.
pub(crate) fn resolve_pe_imports(file: &object::File, bytes: &[u8]) -> Vec<ImportSym> {
    // Branch on the concrete PE width: the typed parsers (`PeFile32`/`PeFile64`)
    // expose the Import Directory + thunk widths the neutral `object::File` view
    // does not.  A `FileKind` we do not recognize (or a parse failure) yields an
    // empty result — never an error.
    match FileKind::parse(bytes) {
        Ok(FileKind::Pe64) => match PeFile64::parse(bytes) {
            Ok(pe) => collect::<ImageNtHeaders64>(file, &pe, bytes, 8),
            Err(_) => Vec::new(),
        },
        Ok(FileKind::Pe32) => match PeFile32::parse(bytes) {
            Ok(pe) => collect::<ImageNtHeaders32>(file, &pe, bytes, 4),
            Err(_) => Vec::new(),
        },
        _ => Vec::new(),
    }
}

/// The Import Address Table slot ranges of a PE, as `[slot, slot + ptr)` byte
/// ranges in ascending order (empty for a non-PE / no-import / unparsable image).
///
/// The address half of [`resolve_pe_imports`]'s IAT arm, without the names: the
/// `peimportcall` pass paints `Varnode::externref` over exactly these ranges so a
/// `call dword ptr [slot]` resolves through `ActionDeindirect` to the import
/// FunctionSymbol registered at the slot VA.  See
/// [`crate::loader::peimportcall`].
pub(crate) fn resolve_pe_import_slots(bytes: &[u8]) -> Vec<(u64, u64)> {
    match FileKind::parse(bytes) {
        Ok(FileKind::Pe64) => match PeFile64::parse(bytes) {
            Ok(pe) => slot_ranges::<ImageNtHeaders64>(&pe, bytes, 8),
            Err(_) => Vec::new(),
        },
        Ok(FileKind::Pe32) => match PeFile32::parse(bytes) {
            Ok(pe) => slot_ranges::<ImageNtHeaders32>(&pe, bytes, 4),
            Err(_) => Vec::new(),
        },
        _ => Vec::new(),
    }
}

/// The function names a PE imports by name from a Microsoft C runtime DLL
/// (`msvcrt`, `msvcr*`, the UCRT and its `api-ms-win-crt-*` forwarders,
/// `vcruntime*`, `crtdll`). Every export of those is `__cdecl`: the caller
/// removes the arguments. Empty for a non-PE or an unparsable import directory.
pub(crate) fn c_runtime_import_names(bytes: &[u8]) -> Vec<String> {
    match FileKind::parse(bytes) {
        Ok(FileKind::Pe64) => PeFile64::parse(bytes).map(|pe| c_runtime_names(&pe)),
        Ok(FileKind::Pe32) => PeFile32::parse(bytes).map(|pe| c_runtime_names(&pe)),
        _ => return Vec::new(),
    }
    .unwrap_or_default()
}

fn c_runtime_names<Pe: ImageNtHeaders>(pe: &PeFile<Pe>) -> Vec<String> {
    let mut names = Vec::new();
    let Ok(Some(it)) = pe.import_table() else {
        return names;
    };
    let Ok(mut descs) = it.descriptors() else {
        return names;
    };
    while let Ok(Some(desc)) = descs.next() {
        let dll = it
            .name(desc.name.get(LE))
            .unwrap_or(b"")
            .to_ascii_lowercase();
        if !is_c_runtime_dll(&dll) {
            continue;
        }
        let int_rva = match desc.original_first_thunk.get(LE) {
            0 => desc.first_thunk.get(LE),
            oft => oft,
        };
        let Ok(mut thunks) = it.thunks(int_rva) else {
            continue;
        };
        while let Ok(Some(thunk)) = thunks.next::<Pe>() {
            if let Ok(object::read::pe::Import::Name(_, n)) = it.import::<Pe>(thunk)
                && let Ok(name) = std::str::from_utf8(n)
            {
                names.push(name.to_string());
            }
        }
    }
    names
}

fn is_c_runtime_dll(dll: &[u8]) -> bool {
    dll.starts_with(b"msvcr")
        || dll.starts_with(b"ucrtbase")
        || dll.starts_with(b"api-ms-win-crt-")
        || dll.starts_with(b"vcruntime")
        || dll == b"crtdll.dll"
}

/// [`resolve_pe_import_slots`] over a typed `PeFile`: reuse the INT/IAT lockstep
/// walk purely for its slot-VA side table, then widen each slot to its pointer.
fn slot_ranges<Pe: ImageNtHeaders>(pe: &PeFile<Pe>, bytes: &[u8], ptr: u64) -> Vec<(u64, u64)> {
    let mut slot_to_name: std::collections::HashMap<u64, Vec<u8>> =
        std::collections::HashMap::new();
    let mut discard: Vec<ImportSym> = Vec::new();
    if let Ok(Some(it)) = pe.import_table() {
        walk_import_table::<Pe>(
            &it,
            pe.relative_address_base(),
            ptr,
            &mut discard,
            &mut slot_to_name,
        );
    }
    walk_delay_import_table(pe, bytes, ptr, &mut discard, &mut slot_to_name);
    let mut slots: Vec<u64> = slot_to_name.into_keys().collect();
    slots.sort_unstable();
    slots
        .into_iter()
        .map(|s| (s, s.wrapping_add(ptr)))
        .collect()
}

/// Walk the Import Directory of a typed `PeFile`, pairing the INT (names) and IAT
/// (slot addresses) in lockstep, then decode the `FF 25` thunk veneers and append
/// the exports.  `ptr` is the IAT slot width (8 for PE32+, 4 for PE32).
fn collect<Pe: ImageNtHeaders>(
    neutral: &object::File,
    pe: &PeFile<Pe>,
    bytes: &[u8],
    ptr: u64,
) -> Vec<ImportSym> {
    let mut out: Vec<ImportSym> = Vec::new();

    let image_base = pe.relative_address_base(); // = optional-header ImageBase

    // The IAT slot VA → name map, also used to name the `FF 25` thunk veneers.
    let mut slot_to_name: std::collections::HashMap<u64, Vec<u8>> =
        std::collections::HashMap::new();

    if let Ok(Some(it)) = pe.import_table() {
        walk_import_table::<Pe>(&it, image_base, ptr, &mut out, &mut slot_to_name);
    }
    walk_delay_import_table(pe, bytes, ptr, &mut out, &mut slot_to_name);

    // Thunk veneers: a direct `call thunk` to a `jmp [rip+disp]` (`FF 25 …`)
    // veneer that jumps through an IAT slot we just named.  Decode the veneers
    // over the executable sections (x86/x64 only — `FF 25` is an x86 opcode; on
    // other arches the call shape differs and this loop simply matches nothing).
    let starts = super::rexthunk::declared_starts(neutral, pe, bytes);
    decode_iat_thunks(neutral, &starts, &slot_to_name, &mut out);

    // PE exports (additive funcsyms): name + address, registered directly so a
    // call to an exported function of this image resolves.  `relative_address_base`
    // is already folded into `Export::address` by `object`.
    for (addr, name, code) in named_exports(neutral) {
        if code {
            out.push(ImportSym {
                addr,
                name,
                kind: ImportSymKind::Export,
            });
        }
    }

    out
}

/// The image's named exports as `(address, name, in_code)`, where `in_code` says
/// the address lies in a section the loader classifies as code.
fn named_exports(neutral: &object::File) -> Vec<(u64, Vec<u8>, bool)> {
    let Ok(exports) = neutral.exports() else {
        return Vec::new();
    };
    let code_ranges: Vec<_> = neutral
        .sections()
        .filter_map(|section| {
            let flags = super::format::pe::coff_section_bits(section.kind(), section.flags());
            (flags & unlace_sleigh::loadimage::section_flags::CODE != 0)
                .then_some((section.address(), section.size()))
        })
        .collect();
    exports
        .into_iter()
        .filter(|e| !e.name().is_empty())
        .map(|e| {
            let addr = e.address();
            let code = code_ranges
                .iter()
                .any(|&(start, size)| addr >= start && addr - start < size);
            (addr, e.name().to_vec(), code)
        })
        .collect()
}

/// The PE exports that name data rather than code: each named export whose
/// address lies outside every code section, as `(address, name)`. Empty for a
/// non-PE image.
pub fn data_exports(file: &object::File) -> Vec<(u64, Vec<u8>)> {
    if file.format() != object::BinaryFormat::Pe {
        return Vec::new();
    }
    named_exports(file)
        .into_iter()
        .filter(|(_, _, code)| !code)
        .map(|(addr, name, _)| (addr, name))
        .collect()
}

/// Walk one import table, emitting an [`ImportSym`] per IAT slot and recording the
/// slot-VA → name map (for the thunk-veneer decode).
fn walk_import_table<Pe: ImageNtHeaders>(
    it: &ImportTable<'_>,
    image_base: u64,
    ptr: u64,
    out: &mut Vec<ImportSym>,
    slot_to_name: &mut std::collections::HashMap<u64, Vec<u8>>,
) {
    let mut descs = match it.descriptors() {
        Ok(d) => d,
        Err(_) => return,
    };
    while let Ok(Some(desc)) = descs.next() {
        // The DLL name (for ordinal synthesis); best-effort.
        let dll = it.name(desc.name.get(LE)).unwrap_or(b"");

        // The INT (`original_first_thunk`) carries the *names*; the IAT
        // (`first_thunk`) is the slot table.  A bound import may have a zero INT,
        // in which case the IAT itself still holds the (pre-binding) name
        // thunks, so fall back to it — exactly Ghidra's `getOriginalFirstThunk()`
        // / `getFirstThunk()` preference.
        let int_rva = {
            let oft = desc.original_first_thunk.get(LE);
            if oft != 0 {
                oft
            } else {
                desc.first_thunk.get(LE)
            }
        };
        let iat_rva = desc.first_thunk.get(LE) as u64;

        let mut names = match it.thunks(int_rva) {
            Ok(t) => t,
            Err(_) => continue,
        };
        let mut i = 0u64;
        // Stops at the end of this descriptor's thunk list (or a read error).
        while let Ok(Some(thunk)) = names.next::<Pe>() {
            let slot_va = image_base
                .wrapping_add(iat_rva)
                .wrapping_add(i.wrapping_mul(ptr));
            let name: Vec<u8> = match it.import::<Pe>(thunk) {
                Ok(object::read::pe::Import::Name(_hint, n)) => n.to_vec(),
                Ok(object::read::pe::Import::Ordinal(ord)) => ordinal_import_name(dll, ord),
                Err(_) => {
                    i += 1;
                    continue;
                }
            };
            slot_to_name.insert(slot_va, name.clone());
            out.push(ImportSym {
                addr: slot_va,
                name,
                kind: ImportSymKind::Import,
            });
            i += 1;
        }
    }
}

/// Walk the delay-load import directory (`IMAGE_DELAYLOAD_DESCRIPTOR`, data
/// directory 13) the way [`walk_import_table`] walks the regular one: the `i`-th
/// name-table entry names the `i`-th delay IAT slot. Until its first call a
/// slot holds the address of the image's own load thunk, which resolves the
/// import and patches the slot; that thunk is named `__imp_load_<name>`.
fn walk_delay_import_table<Pe: ImageNtHeaders>(
    pe: &PeFile<Pe>,
    bytes: &[u8],
    ptr: u64,
    out: &mut Vec<ImportSym>,
    slot_to_name: &mut HashMap<u64, Vec<u8>>,
) {
    let sections = pe.section_table();
    let Ok(Some(dt)) = pe
        .data_directories()
        .delay_load_import_table(bytes, &sections)
    else {
        return;
    };
    let Ok(mut descs) = dt.descriptors() else {
        return;
    };
    let image_base = pe.relative_address_base();
    while let Ok(Some(desc)) = descs.next() {
        // Attributes bit 0 clear is the pre-VC7 form, which stores VAs where
        // the current one stores RVAs.
        let rva = |field: u32| match desc.attributes.get(LE) & 1 {
            0 => (field as u64).wrapping_sub(image_base) as u32,
            _ => field,
        };
        let dll = dt.name(rva(desc.dll_name_rva.get(LE))).unwrap_or(b"");
        let iat_rva = rva(desc.import_address_table_rva.get(LE));
        let Ok(mut names) = dt.thunks(rva(desc.import_name_table_rva.get(LE))) else {
            continue;
        };
        let iat = sections.pe_data_at(bytes, iat_rva).unwrap_or(&[]);
        let mut i = 0u64;
        while let Ok(Some(thunk)) = names.next::<Pe>() {
            let index = i;
            i += 1;
            let name = match thunk.is_ordinal() {
                true => ordinal_import_name(dll, thunk.ordinal()),
                false => match dt.hint_name(rva(thunk.address())) {
                    Ok((_, n)) => n.to_vec(),
                    Err(_) => continue,
                },
            };
            let slot_va = image_base
                .wrapping_add(iat_rva as u64)
                .wrapping_add(index.wrapping_mul(ptr));
            if let Some(thunk_va) = read_slot(iat, index, ptr).filter(|&va| va != 0) {
                let load_name = [&b"__imp_load_"[..], &name].concat();
                out.push(ImportSym {
                    addr: thunk_va,
                    name: load_name,
                    kind: ImportSymKind::Import,
                });
            }
            slot_to_name.insert(slot_va, name.clone());
            out.push(ImportSym {
                addr: slot_va,
                name,
                kind: ImportSymKind::Import,
            });
        }
    }
}

/// The `index`-th little-endian `ptr`-byte word of `table`, or `None` past its end.
fn read_slot(table: &[u8], index: u64, ptr: u64) -> Option<u64> {
    let at = usize::try_from(index.checked_mul(ptr)?).ok()?;
    let word = table.get(at..at.checked_add(ptr as usize)?)?;
    Some(word.iter().rev().fold(0u64, |v, &b| (v << 8) | b as u64))
}

/// The name of an import-by-ordinal: the built-in export table's name for a
/// covered system DLL, else [`synth_ordinal_name`].
fn ordinal_import_name(dll: &[u8], ord: u16) -> Vec<u8> {
    match super::peordinal::ordinal_name(dll, ord) {
        Some(name) => name.as_bytes().to_vec(),
        None => synth_ordinal_name(dll, ord),
    }
}

/// Synthesize a name for an import-by-ordinal: `<DLL-stem>_Ordinal_<n>` (the
/// extension is dropped, so `ws2_32.dll` → `ws2_32_Ordinal_115`).  A named symbol
/// — even a synthetic one — beats an unresolved `sub_<addr>` call (design §3.5).
fn synth_ordinal_name(dll: &[u8], ord: u16) -> Vec<u8> {
    let dll = String::from_utf8_lossy(dll);
    let stem = dll.rsplit_once('.').map(|(s, _)| s).unwrap_or(&dll);
    format!("{stem}_Ordinal_{ord}").into_bytes()
}

/// Decode the x86/x64 `FF 25 <disp32>` import thunk veneers over every executable
/// section, naming each thunk **entry** with the import its target IAT slot holds.
///
/// MinGW emits a one-instruction veneer `jmp QWORD PTR [rip+disp]` (x64) /
/// `jmp DWORD PTR [abs32]` (x86) per import and routes *direct* `call thunk`s to
/// it; naming only the IAT slot would leave such a `call` rendering `sub_<thunk>`.
/// The decode is the same `FF 25` recovery as the ELF x86-64 PLT
/// (`elf_plt::decode_x86_64`): the byte after the 6-byte `FF 25 <disp32>` is the
/// next-instruction address, and the slot is `next + sign(disp32)` (x64,
/// RIP-relative) or the absolute `disp32` (x86).
fn decode_iat_thunks(
    file: &object::File,
    starts: &[u64],
    slot_to_name: &std::collections::HashMap<u64, Vec<u8>>,
    out: &mut Vec<ImportSym>,
) {
    if slot_to_name.is_empty() {
        return;
    }
    let is_64 = file.is_64();
    let is_x86 = matches!(
        file.architecture(),
        object::Architecture::X86_64
            | object::Architecture::X86_64_X32
            | object::Architecture::I386
    );
    if !is_x86 {
        return; // `FF 25` is x86-only; other arches use a different call shape.
    }

    let mut code: Vec<(u64, &[u8])> = Vec::new();
    let mut image: Vec<(u64, &[u8])> = Vec::new();
    for sec in file.sections() {
        let Ok(data) = sec.data() else { continue };
        let characteristics = match sec.flags() {
            object::SectionFlags::Coff { characteristics } => characteristics,
            _ => 0,
        };
        // Only executable sections carry thunk veneers.
        let exec = characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
            || sec.kind() == object::SectionKind::Text;
        if exec {
            code.push((sec.address(), data));
        }
        if exec || characteristics & object::pe::IMAGE_SCN_MEM_DISCARDABLE == 0 {
            image.push((sec.address(), data));
        }
    }

    decode_thunks(&code, &image, starts, is_64, slot_to_name, out);
}

/// Decode the `FF 25` thunks of every `(vma, bytes)` code section into `out`. On
/// x86-64, a REX tail the image never references is dropped
/// ([`super::rexthunk`]); `image` is every section but discardable data and
/// `starts` the addresses the image declares to begin code.
fn decode_thunks(
    code: &[(u64, &[u8])],
    image: &[(u64, &[u8])],
    starts: &[u64],
    is_64: bool,
    slot_to_name: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<ImportSym>,
) {
    let first = out.len();
    let mut rex_tails: HashSet<u64> = HashSet::new();
    let track = is_64;
    for &(vma, data) in code {
        decode_ff25(
            vma,
            data,
            is_64,
            slot_to_name,
            out,
            track.then_some(&mut rex_tails),
        );
    }
    if rex_tails.is_empty() {
        return;
    }
    let referenced = super::rexthunk::referenced_cached(code, image, starts, &rex_tails);
    let mut thunks = out.split_off(first);
    thunks.retain(|t| !rex_tails.contains(&t.addr) || referenced.contains(&t.addr));
    out.extend(thunks);
}

/// Scan a code blob for `FF 25 <disp32>` (`jmp [mem]`) and, for each whose target
/// IAT slot is in `slot_to_name`, record the thunk entry address against the
/// import name.  `is_64` selects RIP-relative (x64) vs absolute (x86) addressing.
/// With `rex_tails`, each recorded entry that is a REX tail
/// ([`super::rexthunk::is_rex_tail`]) is also added to that set.
/// Factored out from [`decode_iat_thunks`] so the arithmetic is unit-testable
/// without an `object::File` (mirrors `elf_plt`'s synthetic decoder tests).
fn decode_ff25(
    vma: u64,
    data: &[u8],
    is_64: bool,
    slot_to_name: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<ImportSym>,
    mut rex_tails: Option<&mut HashSet<u64>>,
) {
    let ff25 = memchr::memmem::Finder::new(b"\xFF\x25");
    let mut i = 0usize;
    while i + 6 <= data.len() {
        let Some(at) = ff25.find(&data[i..]) else {
            break;
        };
        i += at;
        if i + 6 > data.len() {
            break;
        }
        if data[i] == 0xFF && data[i + 1] == 0x25 {
            let disp = i32::from_le_bytes([data[i + 2], data[i + 3], data[i + 4], data[i + 5]]);
            let insn_addr = vma + i as u64;
            let slot = if is_64 {
                // RIP-relative: rip = insn_addr + 6 (next insn), slot = rip + disp32.
                insn_addr.wrapping_add(6).wrapping_add(disp as i64 as u64)
            } else {
                // x86: the disp32 IS the absolute IAT slot address.
                disp as u32 as u64
            };
            if let Some(name) = slot_to_name.get(&slot) {
                // The thunk entry is the `FF` byte (the `call` target).  MinGW
                // veneers have no CET `endbr` prefix, so no back-up is needed.
                if let Some(tails) = rex_tails.as_deref_mut()
                    && super::rexthunk::is_rex_tail(vma, data, i, slot_to_name)
                {
                    tails.insert(insn_addr);
                }
                out.push(ImportSym {
                    addr: insn_addr,
                    name: name.clone(),
                    kind: ImportSymKind::Import,
                });
            }
            i += 6;
        } else {
            i += 1;
        }
    }
}

#[cfg(test)]
mod tests;
