//! ELF PLT/GOT import-name resolution — the unlace analog of Ghidra's Java
//! `ElfDefaultGotPltMarkup` + `ElfProgramBuilder::createExternalFunctionLinkage`
//! (`Ghidra/Features/Base/.../elf/ElfDefaultGotPltMarkup.java`,
//! `.../opinion/ElfProgramBuilder.java`).
//!
//! ## Why this lives in unlace at all
//!
//! unlace ports Ghidra's C++ *decompiler*; the resolution of a PLT stub
//! (`0x400510`) to its imported library name (`puts`) is done by Ghidra's Java
//! *loader/analyzer* layer, which the port never carried over.  Without it a CALL
//! to a PLT stub has no symbol, so `FlowInfo::queryCall` (unlace
//! `decompile_drive.rs::query_call`) finds nothing and the printer falls back to
//! `sub_<addr>`.  This module reconstructs the stub→name mapping straight from the
//! ELF, so the loader can register the imports as ordinary `FunctionSymbol`s in
//! the same stream as the `.symtab`/`.dynsym` defined functions (the
//! "correct-names" model — the full external-location/thunk object model is a
//! deferred follow-up).
//!
//! ## Algorithm (matches `ElfDefaultGotPltMarkup`'s correlation)
//!
//! 1. **`got_slot → name`** from the dynamic relocations: each relocation's
//!    `r_offset` is a GOT slot address and its symbol index resolves (in the
//!    *dynamic* symbol table) to the imported name.  See [`build_got_name_map`].
//! 2. **`plt_stub → got_slot`** by decoding each `.plt*` section's indirect jump
//!    per architecture, then matching the decoded GOT target against the map.
//!    Matching the *decoded target* (rather than trusting PLT-entry order) is
//!    self-correcting: the resolver stub (PLT0) and `IRELATIVE`/IFUNC stubs jump
//!    to slots that are not symbol-bearing relocations, so they fall out of the
//!    map and are dropped automatically.
//!
//! Both inputs are section-keyed, so an ELF with no usable section table gets
//! neither.  [`resolve_from_dynamic_segment`] re-derives them from `PT_DYNAMIC`
//! (see [`crate::loader::elf_dynseg`]) and runs only when the section path found
//! nothing at all.
//!
//! Everything degrades gracefully: an unsupported architecture, a missing
//! dynamic symbol table, or an undecodable stub yields fewer (or zero) entries,
//! leaving the pre-existing behavior unchanged.  This module never panics and
//! never errors — it only ever produces *more* names.

use std::collections::{HashMap, HashSet};

use object::read::{Object, ObjectSection, ObjectSymbol};
use object::{Architecture, RelocationTarget};

/// One resolved PLT-stub import: the stub entry address (the CALL target the
/// decompiler sees) and the clean imported name.
pub(crate) struct PltSym {
    /// PLT stub entry address (`FunctionSymbol` address; what a CALL targets).
    pub addr: u64,
    /// Imported function name (raw `.dynstr` bytes, `@VERSION` stripped).
    pub name: Vec<u8>,
    /// The GOT slot the stub jumps through, when it was decoded from the stub.
    pub slot: Option<u64>,
}

/// Resolve PLT-stub call targets to their imported function names.
///
/// Returns one `(stub_addr, name)` per decodable PLT entry whose decoded GOT
/// target matches a symbol-bearing dynamic relocation.  Empty when the binary
/// has no dynamic imports, an unsupported architecture, or stubs this decoder
/// does not recognize.
///
/// `bytes` is the raw image, used only by the `PT_DYNAMIC` fallback below.
pub(crate) fn resolve_plt_imports(file: &object::File, bytes: &[u8]) -> Vec<PltSym> {
    resolve_plt_imports_and_slots(file, bytes).0
}

/// [`resolve_plt_imports`] plus the set of GOT slots its stubs jump through.
fn resolve_plt_imports_and_slots(file: &object::File, bytes: &[u8]) -> (Vec<PltSym>, HashSet<u64>) {
    let mut named_got = HashSet::new();
    let out = resolve_from_sections(file, &mut named_got);
    if !out.is_empty() {
        return (out, named_got);
    }
    // Every input above is keyed on the section table, so an ELF without one
    // yields nothing at all.  Re-derive the same facts from `PT_DYNAMIC`, which
    // is how the run-time loader finds them.  See [`resolve_from_dynamic_segment`].
    let out = resolve_from_dynamic_segment(file, bytes, &mut named_got);
    (out, named_got)
}

/// The PLT stubs of [`resolve_plt_imports`] plus one entry per GOT slot that
/// holds the address of an imported function no PLT stub jumps through.
///
/// A `-fno-plt` (or `-z now` relaxed) call is `call *slot(%rip)`: there is no
/// stub to name, so the import is reachable only through its slot. The second
/// vector names those slots, the ELF counterpart of the Mach-O symbol-pointer
/// slots `macho_stubs` names. A slot qualifies when it lies in a `.got*`
/// section and a dynamic relocation with no addend binds it to an undefined
/// `STT_FUNC` `.dynsym` entry. MIPS and PowerPC are left out: their GOTs are resolved
/// through their own layouts above, not through call-site slots.
pub(crate) fn resolve_imports_with_got_slots(
    file: &object::File,
    bytes: &[u8],
) -> (Vec<PltSym>, Vec<PltSym>) {
    let (stubs, plt_slots) = resolve_plt_imports_and_slots(file, bytes);
    let slots = if matches!(
        file.architecture(),
        Architecture::Mips | Architecture::Mips64 | Architecture::PowerPc | Architecture::PowerPc64
    ) {
        Vec::new()
    } else {
        got_call_slots(file, &plt_slots)
    };
    (stubs, slots)
}

/// The `[slot, slot + ptr)` ranges of [`resolve_imports_with_got_slots`]'s
/// `.got` call slots.
pub(crate) fn got_call_slot_ranges(file: &object::File, bytes: &[u8]) -> Vec<(u64, u64)> {
    let width = if file.is_64() { 8 } else { 4 };
    resolve_imports_with_got_slots(file, bytes)
        .1
        .into_iter()
        .map(|p| (p.addr, p.addr + width))
        .collect()
}

/// The GOT slots bound to an undefined function symbol, minus `plt_slots`.
///
/// Only words inside a `.got*` section count: the same relocation also fills a
/// function pointer stored in program data (a `.data.rel.ro` dispatch table),
/// and that word is an object of the program, not an import slot.
fn got_call_slots(file: &object::File, plt_slots: &HashSet<u64>) -> Vec<PltSym> {
    let got: Vec<(u64, u64)> = file
        .sections()
        .filter(|s| s.name().is_ok_and(|n| n.starts_with(".got")))
        .map(|s| (s.address(), s.address().saturating_add(s.size())))
        .collect();
    if got.is_empty() {
        return Vec::new();
    }
    let mut funcs: HashMap<usize, Vec<u8>> = HashMap::new();
    for s in file.dynamic_symbols() {
        if s.is_undefined() && s.kind() == object::SymbolKind::Text {
            if let Ok(n) = s.name_bytes() {
                if !n.is_empty() {
                    funcs.insert(s.index().0, strip_version(n));
                }
            }
        }
    }
    let Some(relocs) = file.dynamic_relocations() else {
        return Vec::new();
    };
    let mut seen = HashSet::new();
    let mut out = Vec::new();
    for (slot, reloc) in relocs {
        let RelocationTarget::Symbol(idx) = reloc.target() else {
            continue;
        };
        let Some(name) = funcs.get(&idx.0) else {
            continue;
        };
        if reloc.addend() != 0
            || plt_slots.contains(&slot)
            || !got.iter().any(|&(lo, hi)| (lo..hi).contains(&slot))
        {
            continue;
        }
        if seen.insert(slot) {
            out.push(PltSym {
                addr: slot,
                name: name.clone(),
                slot: None,
            });
        }
    }
    out
}

/// The section-driven resolution: `.dynsym`/`SHT_RELA` for the names, `.plt*`
/// for the stubs.  Unchanged behavior for any image whose section table is
/// intact — which is every image that ever reached this code before.
fn resolve_from_sections(file: &object::File, named_got: &mut HashSet<u64>) -> Vec<PltSym> {
    let arch = file.architecture();
    if arch == Architecture::PowerPc {
        return super::ppc32_imports::resolve(file);
    }

    // MIPS has no regular `.plt` code section and emits NO `R_MIPS_JUMP_SLOT`
    // relocations for its lazy imports: the stub→name correspondence is carried by
    // the dynamic table's GOT layout (`DT_MIPS_LOCAL_GOTNO`/`DT_MIPS_GOTSYM`), not
    // by relocations.  It therefore runs its own resolver (`resolve_mips_imports`)
    // *before* the relocation-driven path below, which would otherwise early-return
    // on the empty `build_got_name_map`.  See [`resolve_mips_imports`].
    if super::mipsabi::is_mips(arch) {
        return resolve_mips_imports(file);
    }

    let got_to_name = build_got_name_map(file);
    // (unlace ifuncfpret) A statically-linked binary can have NO symbol-named PLT
    // imports yet still carry IFUNC (IRELATIVE) `.plt.sec` stubs to name, so the
    // early-out must also account for the ifunc pass below.
    let ifunc_enabled = unlace_decomp::ifuncfpret::ifuncfpret_enabled();
    if got_to_name.is_empty() && !(ifunc_enabled && !build_got_ifunc_map(file).is_empty()) {
        return Vec::new();
    }

    let mut out: Vec<PltSym> = Vec::new();
    // `named_got` holds the GOT slots already named, so an import that appears in
    // both `.plt.sec` (the CET call target) and `.plt` (the lazy-resolution stub)
    // is named once, at the higher-priority section.

    // Scan PLT-bearing sections, `.plt.sec`/`.plt.got` before `.plt` so the
    // actual call target (CET `.plt.sec`) wins over the lazy `.plt` stub.
    let mut plt_secs: Vec<(u64, &[u8], u8)> = Vec::new();
    for sec in file.sections() {
        let name = match sec.name() {
            Ok(n) => n,
            Err(_) => continue,
        };
        let prio = match plt_section_priority(name) {
            Some(p) => p,
            None => continue,
        };
        let data = match sec.data() {
            Ok(d) => d,
            Err(_) => continue,
        };
        plt_secs.push((sec.address(), data, prio));
    }
    plt_secs.sort_by_key(|&(_, _, prio)| prio);

    // (unlace) i386-PIE PLT stubs are GOT-relative (`jmp *disp(%ebx)`, `FF A3
    // <disp32>`), so decoding them needs the GOT base that `%ebx` holds at the
    // call site.  Derive it once (angr `test_decompiling_nl_i386_pie`) and thread
    // it to `decode_i386`; `None` off-i386 or when no GOT anchor exists (non-PIC
    // i386), in which case `decode_i386` decodes only the non-PIC `FF 25 <abs32>`
    // form exactly as before.
    let i386_got_base = if matches!(arch, Architecture::I386) {
        i386_got_base(file)
    } else {
        None
    };

    for (vma, data, _) in plt_secs {
        decode_plt_section(
            file,
            vma,
            data,
            i386_got_base,
            &got_to_name,
            &mut out,
            named_got,
        );
    }

    // (unlace ifuncfpret) Name the x86-64 `.plt.sec`/`.iplt` IFUNC (IRELATIVE) stubs
    // the symbol-keyed pass above leaves undiscovered, so a tail `jmp` to one is
    // recovered as a tail call (`tailcalljump`) rather than flowing into the stub
    // body and dropping the callee's return type.  Gated by `option ifuncfpret`.
    if ifunc_enabled {
        let ifunc = build_got_ifunc_map(file);
        if !ifunc.is_empty() {
            for sec in file.sections() {
                let name = match sec.name() {
                    Ok(n) => n,
                    Err(_) => continue,
                };
                if !matches!(name, ".plt.sec" | ".plt" | ".iplt") {
                    continue;
                }
                if let Ok(data) = sec.data() {
                    decode_x86_64_ifunc_stubs(
                        sec.address(),
                        data,
                        &ifunc,
                        &got_to_name,
                        &mut out,
                        named_got,
                    );
                }
            }
        }
    }

    // PowerPC ELFv2 (and the older `bss-plt` ABI) has no decodable `.plt` *code*
    // section: `.plt` is a NOBITS data table (the runtime GOT for imports) and the
    // linker synthesizes the call stubs inline in `.text`.  Resolve those stubs
    // separately — they are TOC-relative, so they need the TOC base, which the
    // per-section scan above does not carry.  See [`decode_ppc64_text`].
    if matches!(arch, Architecture::PowerPc64 | Architecture::PowerPc) {
        decode_ppc_text(file, arch, &got_to_name, &mut out, named_got);
        out.extend(super::elfv1_imports::resolve(file));
    }

    out
}

/// Sectionless fallback: name the PLT stubs of an ELF whose section table is
/// missing or unusable, from its `PT_DYNAMIC` segment.
///
/// Only ever runs when [`resolve_from_sections`] produced **nothing**, so it can
/// add names but never move one: an image with a working section table takes the
/// path above and never reaches here.
///
/// The stubs are found by handing each executable `PT_LOAD` window to the same
/// per-architecture decoders the section scan uses.  That is deliberate, and the
/// alternative is worse: with no section names left there is no honest way to
/// bound the `.plt`, and a guessed sub-range of an executable segment names
/// stubs off by an entry.  The decoders only ever emit a name for a stub whose
/// *decoded* GOT target is a symbol-bearing relocation slot, so the relocations
/// decide which instructions in the window were stubs — the same correlation the
/// section path relies on, over a wider window.
///
/// PowerPC and MIPS are excluded: neither resolves through a `.plt` code section
/// at all (PowerPC's stubs are TOC-relative and inline in `.text`, MIPS carries
/// the correspondence in its GOT layout), so both need a section-derived anchor
/// this path cannot supply.
fn resolve_from_dynamic_segment(
    file: &object::File,
    bytes: &[u8],
    named_got: &mut HashSet<u64>,
) -> Vec<PltSym> {
    let arch = file.architecture();
    if super::mipsabi::is_mips(arch)
        || matches!(arch, Architecture::PowerPc | Architecture::PowerPc64)
    {
        return Vec::new();
    }
    let Some(imports) = super::elf_dynseg::dynamic_imports(bytes) else {
        return Vec::new();
    };
    if imports.got_to_name.is_empty() {
        return Vec::new();
    }

    // `DT_PLTGOT` *is* `_GLOBAL_OFFSET_TABLE_`, so it is the same anchor
    // [`i386_got_base`] reads off `.got.plt` when the sections are there.
    let i386_got_base = if matches!(arch, Architecture::I386) {
        imports.pltgot
    } else {
        None
    };

    let mut out: Vec<PltSym> = Vec::new();
    for (vma, data) in super::elf_dynseg::exec_segments(bytes) {
        decode_plt_section(
            file,
            vma,
            data,
            i386_got_base,
            &imports.got_to_name,
            &mut out,
            named_got,
        );
    }
    out
}

/// Section-scan priority for the PLT-bearing sections, lowest scanned first.
/// `.plt.sec`/`.plt.got` (the real CET call targets / GOT-relative stubs) take
/// precedence over `.plt` (the lazy-resolution stubs) for the same GOT slot.
fn plt_section_priority(name: &str) -> Option<u8> {
    match name {
        ".plt.sec" => Some(0),
        ".plt.got" => Some(1),
        ".plt" => Some(2),
        // `.iplt` (IFUNC) carries IRELATIVE relocations (no symbol) → no names;
        // skip it explicitly rather than scanning for nothing.
        _ => None,
    }
}

/// Build `got_slot_addr → import_name` from the dynamic relocations.
///
/// The relocation's `RelocationTarget::Symbol(idx)` indexes the **dynamic**
/// symbol table (`.dynsym`), NOT `.symtab`; `Object::symbol_by_index` would
/// resolve the wrong table, so we build a `dynidx → name` map from
/// [`object::read::Object::dynamic_symbols`] keyed on each symbol's own index.
///
/// All symbol-bearing dynamic relocations are included (not just `JUMP_SLOT`):
/// it is harmless because only offsets that a decoded PLT stub actually
/// references are ever queried, and a GOT slot has exactly one relocation.
fn build_got_name_map(file: &object::File) -> HashMap<u64, Vec<u8>> {
    let mut dynnames: HashMap<usize, Vec<u8>> = HashMap::new();
    for s in file.dynamic_symbols() {
        if let Ok(n) = s.name_bytes() {
            if !n.is_empty() {
                dynnames.insert(s.index().0, strip_version(n));
            }
        }
    }

    let mut map: HashMap<u64, Vec<u8>> = HashMap::new();
    if let Some(relocs) = file.dynamic_relocations() {
        for (got_off, reloc) in relocs {
            if let RelocationTarget::Symbol(idx) = reloc.target() {
                if let Some(name) = dynnames.get(&idx.0) {
                    map.entry(got_off).or_insert_with(|| name.clone());
                }
            }
        }
    }
    map
}

/// Build `got_slot_addr → ifunc_resolver_addr` from the `R_*_IRELATIVE`
/// (IFUNC) dynamic relocations.  Unlike a `JUMP_SLOT`, an IRELATIVE slot carries
/// **no symbol** — its addend is the address of the STT_GNU_IFUNC *resolver*, so
/// [`build_got_name_map`] never names it and its `.plt.sec` stub is left
/// undiscovered.  A function whose last act is a tail `jmp` to such a stub (a
/// glibc math/mem/str wrapper: `sub_15620`/`log`) therefore flows INTO the stub,
/// renders `(*dat_...)(...)`, and loses its return type.  Naming the stub (below)
/// makes it a `FunctionSymbol`, so `tailcalljump` recovers the tail jump.
/// x86-64 only (the `R_X86_64_IRELATIVE` = 37 relocation).
fn build_got_ifunc_map(file: &object::File) -> HashMap<u64, u64> {
    const R_X86_64_IRELATIVE: u32 = 37;
    let mut map: HashMap<u64, u64> = HashMap::new();
    if !matches!(
        file.architecture(),
        object::Architecture::X86_64 | object::Architecture::X86_64_X32
    ) {
        return map;
    }
    if let Some(relocs) = file.dynamic_relocations() {
        for (got_off, reloc) in relocs {
            if let object::RelocationFlags::Elf { r_type } = reloc.flags() {
                if r_type == R_X86_64_IRELATIVE {
                    // The resolver address is the reloc addend (no symbol).
                    map.entry(got_off).or_insert(reloc.addend() as u64);
                }
            }
        }
    }
    map
}

/// Emit a `PltSym` for each x86-64 `.plt.sec`/`.plt`/`.iplt` stub whose GOT slot
/// is an IFUNC (IRELATIVE) slot not otherwise named — the [`decode_x86_64`] scan
/// restricted to the ifunc map, naming the stub `ifunc.<resolver_hex>` so it
/// becomes a discovered `FunctionSymbol` and a tail `jmp` to it is recovered as a
/// tail call (`tailcalljump`) instead of flowing into the stub body.
fn decode_x86_64_ifunc_stubs(
    vma: u64,
    data: &[u8],
    ifunc: &HashMap<u64, u64>,
    named: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let mut i = 0usize;
    while i + 6 <= data.len() {
        if data[i] == 0xFF && data[i + 1] == 0x25 {
            let disp = i32::from_le_bytes([data[i + 2], data[i + 3], data[i + 4], data[i + 5]]);
            let insn_addr = vma + i as u64;
            let got = insn_addr.wrapping_add(6).wrapping_add(disp as i64 as u64);
            if let Some(&resolver) = ifunc.get(&got) {
                if !named.contains_key(&got) && named_got.insert(got) {
                    let stub = vma + x86_stub_start(data, i, &[0xF3, 0x0F, 0x1E, 0xFA]) as u64;
                    out.push(PltSym {
                        addr: stub,
                        name: format!("ifunc_{resolver:x}").into_bytes(),
                        slot: None,
                    });
                }
            }
            i += 6;
        } else {
            i += 1;
        }
    }
}

/// Strip a glibc-style `@VERSION` / `@@VERSION` suffix from a symbol name.  The
/// raw `.dynstr` string is usually already clean (`puts`); this is defensive for
/// symbol-versioned libraries that fold the version into the string.  Shared with
/// [`crate::loadimage_object`] for the `.symtab`/`.dynsym` paths.
///
/// MSVC C++ mangling (multi-format loader PR-9) uses `@` *structurally* as the
/// namespace/type separator (`?foo@Bar@@QEAAHH@Z`), so a leading-`?` name is
/// returned verbatim — truncating at the first `@` would corrupt every MSVC
/// COFF/PE symbol before the demangler ever sees it. No glibc-versioned symbol
/// ever starts with `?`, so this guard never changes the ELF behavior.
pub(crate) fn strip_version(name: &[u8]) -> Vec<u8> {
    if name.first() == Some(&b'?') {
        return name.to_vec();
    }
    match name.iter().position(|&b| b == b'@') {
        Some(p) => name[..p].to_vec(),
        None => name.to_vec(),
    }
}

/// Decode every recognizable PLT stub in one `.plt*` section, pushing a
/// [`PltSym`] for each whose decoded GOT target is in `map` and not yet named.
fn decode_plt_section(
    file: &object::File,
    vma: u64,
    data: &[u8],
    i386_got_base: Option<u64>,
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    match file.architecture() {
        Architecture::X86_64 | Architecture::X86_64_X32 => {
            decode_x86_64(vma, data, map, out, named_got)
        }
        Architecture::I386 => decode_i386(vma, data, i386_got_base, map, out, named_got),
        Architecture::Aarch64 | Architecture::Aarch64_Ilp32 => {
            decode_aarch64(vma, data, map, out, named_got)
        }
        Architecture::Arm => decode_arm(vma, data, map, out, named_got),
        Architecture::Riscv64 | Architecture::Riscv32 => {
            decode_riscv(vma, data, map, out, named_got)
        }
        Architecture::Sparc | Architecture::Sparc32Plus | Architecture::Sparc64 => decode_sparc(
            vma,
            data,
            if file.is_64() { 32 } else { 12 },
            map,
            out,
            named_got,
        ),
        Architecture::S390x => super::s390xplt::decode(vma, data, map, out, named_got),
        // PowerPC's stubs are not in a `.plt*` *code* section (`.plt` is a NOBITS
        // data table; the call stubs live in `.text`), so they are resolved out of
        // band in [`resolve_plt_imports`] via [`decode_ppc_text`], not here.
        //
        // MIPS has no `.plt` code section either (`.MIPS.stubs` + `$gp`-relative
        // GOT); it is resolved out of band by [`resolve_mips_imports`] before this
        // point (the GOT layout carries the names).  See docs/missing-analyses.md.
        _ => {}
    }
}

/// Push `(stub, got)`'s name if `got` is a known import not yet named.
pub(super) fn record(
    stub: u64,
    got: u64,
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    if let Some(name) = map.get(&got) {
        if named_got.insert(got) {
            out.push(PltSym {
                addr: stub,
                name: name.clone(),
                slot: Some(got),
            });
        }
    }
}

// ---------------------------------------------------------------------------
// x86-64 / x86-32
// ---------------------------------------------------------------------------

/// x86-64 PLT stub: `[endbr64] [bnd] FF 25 <disp32>` = RIP-relative
/// `jmp *got(%rip)`.  The GOT slot is `rip + disp32` where `rip` is the address
/// of the byte after the 6-byte `FF 25 <disp32>`.  For CET `.plt.sec` the stub
/// entry (the real call target) starts at the leading `endbr64`, so the recorded
/// address is backed up over the `endbr64` (+ optional `bnd` prefix).
fn decode_x86_64(
    vma: u64,
    data: &[u8],
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let mut i = 0usize;
    while i + 6 <= data.len() {
        if data[i] == 0xFF && data[i + 1] == 0x25 {
            let disp = i32::from_le_bytes([data[i + 2], data[i + 3], data[i + 4], data[i + 5]]);
            let insn_addr = vma + i as u64;
            // rip = insn_addr + 6 (next instruction), GOT = rip + sign(disp32).
            let got = insn_addr.wrapping_add(6).wrapping_add(disp as i64 as u64);
            let stub = vma + x86_stub_start(data, i, /*endbr64*/ &[0xF3, 0x0F, 0x1E, 0xFA]) as u64;
            record(stub, got, map, out, named_got);
            i += 6;
        } else {
            i += 1;
        }
    }
}

/// x86-32 PLT stub.  Two forms:
///
/// * **Non-PIC**: `[endbr32] FF 25 <abs32>` = `jmp *abs32` where the disp32 is
///   the absolute GOT slot address (operand IS the slot).
/// * **PIE / PIC** (`i386_got_base = Some(base)`): `[endbr32] FF A3 <disp32>` =
///   `jmp *disp32(%ebx)`, GOT-relative, where `%ebx` holds the GOT base (the PIC
///   prologue's `call __x86.get_pc_thunk.bx; add $_,%ebx` sets it to
///   `_GLOBAL_OFFSET_TABLE_`).  The slot is `base + sign(disp32)`.  This is the
///   i386-PIE analog of [`decode_x86_64`] (RIP-relative) / [`decode_aarch64`]
///   (adrp/ldr veneer); naming these stubs lets the no-return pass flag `exit`
///   and collapses the spurious fall-through loop (angr
///   `test_decompiling_nl_i386_pie`).  `i386_got_base` is `None` when the GOT
///   base could not be derived, in which case
///   the `FF A3` form is skipped (byte-identical to the pre-fix behavior); the
///   non-PIC `FF 25` arm is unaffected either way.
fn decode_i386(
    vma: u64,
    data: &[u8],
    i386_got_base: Option<u64>,
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let mut i = 0usize;
    while i + 6 <= data.len() {
        if data[i] == 0xFF && data[i + 1] == 0x25 {
            // Absolute (non-PIC): operand IS the GOT slot address.
            let got =
                u32::from_le_bytes([data[i + 2], data[i + 3], data[i + 4], data[i + 5]]) as u64;
            let stub = vma + x86_stub_start(data, i, /*endbr32*/ &[0xF3, 0x0F, 0x1E, 0xFB]) as u64;
            record(stub, got, map, out, named_got);
            i += 6;
        } else if data[i] == 0xFF && data[i + 1] == 0xA3 {
            // PIE / PIC: `jmp *disp32(%ebx)`, slot = GOT_base + sign(disp32).
            // Only resolvable with the derived GOT base (option-gated); without
            // it the stub is left to the `sub_<addr>` fallback (pre-fix behavior).
            if let Some(base) = i386_got_base {
                let disp = i32::from_le_bytes([data[i + 2], data[i + 3], data[i + 4], data[i + 5]]);
                let got = base.wrapping_add(disp as i64 as u64);
                let stub =
                    vma + x86_stub_start(data, i, /*endbr32*/ &[0xF3, 0x0F, 0x1E, 0xFB]) as u64;
                record(stub, got, map, out, named_got);
            }
            i += 6;
        } else {
            i += 1;
        }
    }
}

/// Derive the i386 PIC GOT base (the value `%ebx` holds) for resolving the PIE
/// `jmp *disp(%ebx)` (`FF A3 <disp32>`) PLT stubs: prefer the
/// `_GLOBAL_OFFSET_TABLE_` symbol value, falling back to the `.got.plt` then
/// `.got` section address.  `None` when no GOT anchor is present (a non-PIC i386
/// binary, where the `FF A3` form does not occur).  The i386 analog of
/// [`decode_ppc_text`]'s `.got + 0x8000` TOC-base derivation.
fn i386_got_base(file: &object::File) -> Option<u64> {
    // `_GLOBAL_OFFSET_TABLE_` is the exact base `%ebx` is set to; it may live in
    // `.symtab` (LOCAL) or `.dynsym`.
    for sym in file.symbols() {
        if sym.name_bytes() == Ok(&b"_GLOBAL_OFFSET_TABLE_"[..]) {
            return Some(sym.address());
        }
    }
    for sym in file.dynamic_symbols() {
        if sym.name_bytes() == Ok(&b"_GLOBAL_OFFSET_TABLE_"[..]) {
            return Some(sym.address());
        }
    }
    // Stripped of the GOT symbol: the section base is the same anchor.
    for name in [".got.plt", ".got"] {
        if let Some(s) = file.sections().find(|s| s.name() == Ok(name)) {
            return Some(s.address());
        }
    }
    None
}

/// Compute the stub entry start (section-relative) for an x86 `FF 25` at index
/// `i`, backing up over a CET `endbr` (`endbr64`/`endbr32`, 4 bytes) and an
/// optional `bnd` prefix (`F2`).  Without CET the stub starts at the `FF`.
fn x86_stub_start(data: &[u8], i: usize, endbr: &[u8; 4]) -> usize {
    // `[endbr] [F2] FF ...`  → start at endbr.
    if i >= 5 && data[i - 1] == 0xF2 && &data[i - 5..i - 1] == endbr {
        return i - 5;
    }
    // `[endbr] FF ...`       → start at endbr.
    if i >= 4 && &data[i - 4..i] == endbr {
        return i - 4;
    }
    // `[F2] FF ...`          → start at the bnd prefix.
    if i >= 1 && data[i - 1] == 0xF2 {
        return i - 1;
    }
    i
}

// ---------------------------------------------------------------------------
// AArch64 / ARM32 / RISC-V  (filled in by the per-arch follow-up; each decodes
// the stub's GOT reference and calls `record(stub, got, …)`).  Until then they
// no-op, so those arches keep the pre-fix behavior.
// ---------------------------------------------------------------------------

/// AArch64 standard GNU `ld` import veneer (16-byte entry):
/// ```text
///     adrp x16, GOT_page          ; PC-relative page of the GOT slot
///     ldr  x17, [x16, #lo12]      ; 64-bit unsigned-offset load (scaled by 8)
///     add  x16, x16, #lo12
///     br   x17
/// ```
/// `got = (adrp_addr & !0xFFF) + (sign_extend_21(immhi:immlo) << 12) + imm12*8`.
/// A64 is fixed 32-bit little-endian, so we scan at 4-byte alignment matching the
/// `adrp x16` + `ldr x17,[x16]` pair; the 32-byte PLT0 header and any leading
/// `bti c` fall out of the pattern, and the GOT-vs-map cross-check drops the rest.
fn decode_aarch64(
    vma: u64,
    data: &[u8],
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let mut off = 0usize;
    while off + 8 <= data.len() {
        let adrp = u32::from_le_bytes([data[off], data[off + 1], data[off + 2], data[off + 3]]);
        let ldr = u32::from_le_bytes([data[off + 4], data[off + 5], data[off + 6], data[off + 7]]);

        // adrp Xd, imm: op=1 (bit31), bits[28:24]=10000; immlo=bits[30:29],
        // immhi=bits[23:5], Rd=bits[4:0].
        let is_adrp = (adrp >> 31) & 1 == 1 && (adrp >> 24) & 0x1f == 0b1_0000;
        let adrp_rd = adrp & 0x1f;
        // ldr Xt,[Xn,#imm] 64-bit unsigned offset: size=11(bits[31:30]),
        // bits[29:24]=111001, opc=01(bits[23:22]=LDR), imm12=bits[21:10],
        // Rn=bits[9:5], Rt=bits[4:0].
        let is_ldr = (ldr >> 30) & 0x3 == 0b11
            && (ldr >> 24) & 0x3f == 0b11_1001
            && (ldr >> 22) & 0x3 == 0b01;
        let ldr_rn = (ldr >> 5) & 0x1f;
        let ldr_rt = ldr & 0x1f;

        if is_adrp && adrp_rd == 16 && is_ldr && ldr_rn == 16 && ldr_rt == 17 {
            let immlo = ((adrp >> 29) & 0x3) as i64;
            let immhi = ((adrp >> 5) & 0x7_ffff) as i64; // 19 bits
            let mut imm21 = (immhi << 2) | immlo;
            if imm21 & (1 << 20) != 0 {
                imm21 -= 1 << 21; // sign-extend the 21-bit page offset
            }
            let page_off = imm21 << 12;
            let ldr_off = (((ldr >> 10) & 0xfff) as u64) * 8; // 64-bit scale
            let adrp_addr = vma.wrapping_add(off as u64);
            let got = (adrp_addr & !0xFFF)
                .wrapping_add(page_off as u64)
                .wrapping_add(ldr_off);
            record(adrp_addr, got, map, out, named_got);
        }
        off += 4;
    }
}

/// ARM A32 "modified immediate" (data-processing operand2): an 8-bit value
/// `imm8` rotated right by `2*rot`.  `op2` is the low 12 bits of the instruction.
fn arm_modified_immediate(op2: u32) -> u32 {
    let rot = (op2 >> 8) & 0xF;
    let imm8 = op2 & 0xFF;
    imm8.rotate_right(2 * rot)
}

/// ARM (32-bit, little-endian, ARM-state) classic GNU `ld` import veneer
/// (12-byte entry):
/// ```text
///     add ip, pc, #a        ; pc here = entry+8 (ARM pipeline offset)
///     add ip, ip, #b
///     ldr pc, [ip, #c]!     ; pre-indexed, U=1 (additive)
/// ```
/// `got = (entry + 8) + a + b + c`, where `a`/`b` are modified immediates and `c`
/// is the 12-bit `ldr` offset.  Scanned at 4-byte alignment; the 20-byte PLT0
/// header and Thumb veneers do not match.
fn decode_arm(
    vma: u64,
    data: &[u8],
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let read_word = |off: usize| -> Option<u32> {
        let b = data.get(off..off + 4)?;
        Some(u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
    };
    // `add ip, <Rn>, #imm`: cond=0xE, I=1,S=0,opcode=ADD → bits[27:20]==0x28,
    // Rd field == 12 (ip).
    let is_add_ip = |w: u32, rn: u32| -> bool {
        (w >> 28) == 0xE
            && ((w >> 20) & 0xFF) == 0x28
            && ((w >> 16) & 0xF) == rn
            && ((w >> 12) & 0xF) == 12
    };

    let mut off = 0usize;
    while off + 12 <= data.len() {
        let (w0, w1, w2) = match (read_word(off), read_word(off + 4), read_word(off + 8)) {
            (Some(a), Some(b), Some(c)) => (a, b, c),
            _ => break,
        };
        // `ldr pc, [ip, #imm]!`: cond=0xE, bits[27:20]==0x5B (P=1,U=1,W=1,L=1,
        // immediate), Rn=12(ip), Rt=15(pc).
        let is_ldr_pc_ip = (w2 >> 28) == 0xE
            && ((w2 >> 20) & 0xFF) == 0x5B
            && ((w2 >> 16) & 0xF) == 12
            && ((w2 >> 12) & 0xF) == 15;

        if is_add_ip(w0, 15) && is_add_ip(w1, 12) && is_ldr_pc_ip {
            let entry = vma.wrapping_add(off as u64);
            let a = arm_modified_immediate(w0 & 0xFFF) as u64;
            let b = arm_modified_immediate(w1 & 0xFFF) as u64;
            let c = (w2 & 0xFFF) as u64; // U=1 → additive offset
            let got = entry
                .wrapping_add(8) // ARM pipeline: pc = entry + 8
                .wrapping_add(a)
                .wrapping_add(b)
                .wrapping_add(c);
            record(entry, got, map, out, named_got);
        }
        off += 4;
    }
}

/// RISC-V (RV32/RV64) standard GNU `ld` import veneer (16-byte entry):
/// ```text
///     auipc t3, %pcrel_hi(got)     ; t3 = pc + (hi20 << 12)
///     l[wd] t3, %pcrel_lo(t3)(t3)  ; ld (RV64, funct3=3) / lw (RV32, funct3=2)
///     jalr  t1, t3
///     nop                          ; (c.nop padding, ignored)
/// ```
/// `got = auipc_addr + (hi20 << 12) + sign_extend_12(lo12)` (`t3`=x28, `t1`=x6).
/// Scanned at 4-byte alignment; the 32-byte PLT0 header does not match.
fn decode_riscv(
    vma: u64,
    data: &[u8],
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let word = |off: usize| -> Option<u32> {
        data.get(off..off + 4)
            .map(|b| u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
    };

    let mut off = 0usize;
    while off + 8 <= data.len() {
        let auipc = match word(off) {
            Some(w) => w,
            None => break,
        };
        // auipc t3, imm: opcode 0x17 (bits[6:0]), rd 28 (bits[11:7]).
        if (auipc & 0x7f) != 0x17 || ((auipc >> 7) & 0x1f) != 28 {
            off += 4;
            continue;
        }
        let load = match word(off + 4) {
            Some(w) => w,
            None => break,
        };
        // l[wd] t3, lo12(t3): opcode 0x03, funct3 ∈ {2 (lw), 3 (ld)}, rd 28,
        // rs1 28.
        let funct3 = (load >> 12) & 0x7;
        let load_ok = (load & 0x7f) == 0x03
            && (funct3 == 2 || funct3 == 3)
            && ((load >> 7) & 0x1f) == 28
            && ((load >> 15) & 0x1f) == 28;
        if !load_ok {
            off += 4;
            continue;
        }

        let hi20 = (auipc >> 12) & 0xf_ffff; // imm[31:12], used as-is
        let imm12 = (load >> 20) & 0xfff;
        let lo12 = ((imm12 as i32) << 20) >> 20; // sign-extend 12-bit
        let auipc_addr = vma.wrapping_add(off as u64);
        let got = auipc_addr
            .wrapping_add((hi20 as u64) << 12)
            .wrapping_add(lo12 as i64 as u64);
        record(auipc_addr, got, map, out, named_got);
        off += 16; // skip the rest of the 16-byte veneer
    }
}

// ---------------------------------------------------------------------------
// PowerPC64 ELFv2 (and PPC32) — TOC-relative `.text` call stubs
// ---------------------------------------------------------------------------

/// Resolve PowerPC PLT-call stubs, which the linker synthesizes inline in
/// `.text` (there is no `.plt` *code* section — `.plt` is a NOBITS data table,
/// the runtime GOT for imports).
///
/// On PPC64 ELFv2 a call to an imported function `bl`s to a stub of the form
/// ```text
///     std   r2,24(r1)        ; save the caller TOC (0xf8410018)
///     addis r12,r2,off@ha    ; r12 = TOC_base + (ha << 16)
///     ld    r12,off@l(r12)   ; r12 = *(.plt slot) = *(TOC_base + (ha<<16) + lo)
///     mtctr r12
///     bctr
/// ```
/// The loaded address is a `.plt` slot whose `R_PPC64_JMP_SLOT` relocation names
/// the import — exactly the `got_slot → name` map [`build_got_name_map`] already
/// built (every symbol-bearing dynamic reloc is included, so the JMP_SLOTs are in
/// it).  We decode the `addis`/`ld` pair, reconstruct the slot
/// `TOC_base + (ha << 16) + sign_extend16(lo)`, and record the stub entry (the
/// `std r2,24(r1)` — the address `bl` targets) against the matched name.
///
/// **TOC base.**  The ELFv2 ABI fixes the TOC pointer (`r2`) at
/// `.got + 0x8000` (equivalently the `.TOC.` symbol); using `.got + 0x8000`
/// avoids relying on a `.TOC.` symbol being present.  If there is no `.got`
/// section the binary has no TOC-relative imports and we resolve nothing.
///
/// PPC32 uses the separate relocation-validated `unlace_ppc32_imports` resolver.
fn decode_ppc_text(
    file: &object::File,
    arch: Architecture,
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    // ELFv2 PPC64 is the only PowerPC ABI whose `.text` stubs we decode.
    if arch != Architecture::PowerPc64 {
        return;
    }
    let little = file.is_little_endian();

    // TOC base = `.got` vma + 0x8000 (ELFv2). No `.got` → no TOC-relative imports.
    let got_vma = match file.sections().find(|s| s.name() == Ok(".got")) {
        Some(s) => s.address(),
        None => return,
    };
    let toc_base = got_vma.wrapping_add(0x8000);

    // The stubs are inline in `.text`.
    let text = match file.sections().find(|s| s.name() == Ok(".text")) {
        Some(s) => s,
        None => return,
    };
    let vma = text.address();
    let data = match text.data() {
        Ok(d) => d,
        Err(_) => return,
    };

    decode_ppc64_stubs(vma, data, little, toc_base, map, out, named_got);
}

/// Decode the PPC64-ELFv2 `std/addis/ld/mtctr/bctr` PLT stubs in a `.text` blob.
/// Pulled out from [`decode_ppc_text`] so the arithmetic is unit-testable without
/// an `object::File`.  `toc_base` is the ELFv2 TOC pointer (`.got + 0x8000`).
fn decode_ppc64_stubs(
    vma: u64,
    data: &[u8],
    little: bool,
    toc_base: u64,
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let word = |off: usize| -> Option<u32> {
        let b = data.get(off..off + 4)?;
        let arr = [b[0], b[1], b[2], b[3]];
        Some(if little {
            u32::from_le_bytes(arr)
        } else {
            u32::from_be_bytes(arr)
        })
    };

    // Instruction fields (big-endian instruction semantics regardless of byte
    // order in the file): opcode = bits[0:6], RT = bits[6:11], RA = bits[11:16].
    let opcode = |w: u32| (w >> 26) & 0x3f;
    let rt = |w: u32| (w >> 21) & 0x1f;
    let ra = |w: u32| (w >> 16) & 0x1f;

    let mut off = 0usize;
    while off + 20 <= data.len() {
        let (w0, w1, w2, w3, w4) = match (
            word(off),
            word(off + 4),
            word(off + 8),
            word(off + 12),
            word(off + 16),
        ) {
            (Some(a), Some(b), Some(c), Some(d), Some(e)) => (a, b, c, d, e),
            _ => break,
        };

        // std r2,24(r1)         = 0xf8410018  (DS-form, opcode 62, RT=2, RA=1)
        // addis r12,r2,off@ha   opcode 15, RT=12, RA=2
        // ld    r12,off@l(r12)  DS-form, opcode 58, XO=0, RT=12, RA=12
        // mtctr r12             = 0x7d8903a6
        // bctr                  = 0x4e800420
        let is_std_r2 = w0 == 0xf8410018;
        let is_addis = opcode(w1) == 15 && rt(w1) == 12 && ra(w1) == 2;
        let is_ld = opcode(w2) == 58 && (w2 & 0x3) == 0 && rt(w2) == 12 && ra(w2) == 12;
        let is_mtctr = w3 == 0x7d8903a6;
        let is_bctr = w4 == 0x4e800420;

        if is_std_r2 && is_addis && is_ld && is_mtctr && is_bctr {
            // addis @ha: sign-extend the 16-bit field, then << 16.
            let ha = ((w1 & 0xffff) as i16) as i64;
            // ld DS-form: the 14-bit DS displacement is the low 16 bits with the
            // bottom two bits forced to the XO (0 for `ld`); sign-extend it.
            let lo = ((w2 & 0xfffc) as i16) as i64;
            let slot = toc_base
                .wrapping_add((ha << 16) as u64)
                .wrapping_add(lo as u64);
            let stub = vma.wrapping_add(off as u64);
            record(stub, slot, map, out, named_got);
            off += 20; // skip past this 5-instruction stub
            continue;
        }
        off += 4;
    }
}

// ---------------------------------------------------------------------------
// SPARC (SPARC v9 / 32-bit, big-endian)
// ---------------------------------------------------------------------------

/// SPARC PLT import veneer (big-endian fixed 32-bit instructions):
/// ELF32 uses 12-byte entries (`sethi %hi(...),%g1; b,a <resolver>; nop`);
/// ELF64 uses 32-byte entries (`sethi; b,a %xcc,<resolver>; nop*6`).
/// Unlike every other arch, SPARC's `.rela.plt` `R_SPARC_JMP_SLOT` relocation
/// `r_offset` **is the PLT entry address itself** (the linker rewrites the
/// in-place stub at resolution time — see Ghidra's `SPARC*_ElfRelocationHandler`),
/// not a separate `.got` slot.  So the "got_slot → name" map ([`build_got_name_map`])
/// is already keyed on the call target the decompiler sees, and the relocation,
/// not a stride, fixes each entry boundary: the decoder visits every word and
/// records a `sethi %g1`-headed word whose address is a known symbol-bearing
/// relocation and which has a complete ABI-sized entry behind it. A window that
/// starts mid-table (the sectionless `PT_LOAD` scan) therefore finds the same
/// entries as `.plt`. Reserved PLT0 entries and non-symbol relocations fall out
/// of the map automatically (here `stub == got`).
fn decode_sparc(
    vma: u64,
    data: &[u8],
    entry_size: usize,
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    for (index, entry) in data.windows(entry_size).step_by(4).enumerate() {
        // `sethi %hi(...),%g1`: op=00, rd=1, op2=100.
        let w0 = u32::from_be_bytes([entry[0], entry[1], entry[2], entry[3]]);
        let is_sethi_g1 =
            (w0 >> 30) == 0b00 && ((w0 >> 25) & 0x1f) == 1 && ((w0 >> 22) & 0x7) == 0b100;
        if is_sethi_g1 {
            let addr = vma.wrapping_add((index * 4) as u64);
            record(addr, addr, map, out, named_got);
        }
    }
}

// ---------------------------------------------------------------------------
// MIPS (.MIPS.stubs / GOT layout)
// ---------------------------------------------------------------------------

/// Resolve MIPS import names from the dynamic-symbol GOT layout — the unlace analog
/// of Ghidra's `MIPS_ElfExtension.fixupGot` + `processMipsStubsSection`
/// (`Ghidra/Processors/MIPS/.../elf/extend/MIPS_ElfExtension.java`).
///
/// ## Why MIPS is different
///
/// Unlike x86/ARM/RISC-V, the GNU MIPS o32 toolchain emits **no `.plt` code
/// section and no `R_MIPS_JUMP_SLOT` relocations** for its lazy imports.  Instead
/// the dynamic linker resolves a fixed slice of the GOT in *symbol-table order*:
/// the doc anchor is the "MIPS Multi-GOT" layout (the cr0.org
/// `mips.elf.external.resolution.txt` paper that Ghidra cites).  The
/// correspondence is purely positional:
///
/// * `DT_MIPS_LOCAL_GOTNO` (0x7000000a) — the count of *local* GOT entries that
///   precede the first global (external-symbol) GOT entry.
/// * `DT_MIPS_GOTSYM` (0x70000013) — the **first** dynamic-symbol index that has a
///   GOT entry.  Dynamic symbols `[GOTSYM .. dynsym_count)` map 1:1, in order, to
///   GOT entries starting at index `LOCAL_GOTNO`:
///
///   ```text
///     got_index(i) = LOCAL_GOTNO + (i - GOTSYM)        for i >= GOTSYM
///   ```
///
/// * `DT_PLTGOT` (3) — the GOT base address (`gotBaseOffset`).
///
/// For an **undefined FUNC** dynamic symbol (an import), the GOT slot is
/// initialized to the address of that import's lazy-binding stub in `.MIPS.stubs`
/// (and that same stub address is the symbol's `st_value`).  At a MIPS call site
/// the compiler emits `lw $t9, off($gp); jalr $t9` — an indirect call through the
/// GOT slot.  With unlace's `$gp` recovery (Increment 17) the engine constant-folds
/// the GOT load to that slot's contents (the stub address), so naming the **stub
/// address** as a `FunctionSymbol` makes the call render `puts(...)` instead of
/// `sub_<addr>` — exactly mirroring `createExternalFunctionLinkage(symName,
/// refAddr, gotEntryAddr)` where `refAddr` is the GOT-slot contents (the stub).
///
/// Both naming targets are emitted: the **stub address** (`refAddr`, the indirect
/// call target the decompiler sees) and, defensively, the **GOT slot address**
/// itself (in case a future pass names the slot directly).  Everything degrades
/// gracefully: a missing `DT_MIPS_*` tag, a missing GOT, or a 0 slot yields fewer
/// (or zero) entries and leaves behavior unchanged — this never panics or errors.
fn resolve_mips_imports(file: &object::File) -> Vec<PltSym> {
    let mut out: Vec<PltSym> = Vec::new();
    for ext in mips_external_got_entries(file) {
        // The GOT slot's static contents = the `.MIPS.stubs` stub address (the
        // import's `refAddr`); this is the indirect call target the decompiler
        // resolves after $gp recovery.  Skip a 0 slot (unresolvable).
        if ext.stub_addr != 0 {
            out.push(PltSym {
                addr: ext.stub_addr,
                name: ext.name,
                slot: None,
            });
        }
    }
    out
}

/// The MIPS GOT external slots' `[start, stop]` (inclusive) byte ranges, to be
/// marked **constant** so the engine folds the `lw $t9, off($gp)` indirect-call
/// load to the stub address (the analog of `setConstant` on the GOT pointer
/// entries in Ghidra's `MIPS_ElfExtension.fixupGot`).  Empty off-MIPS or when the
/// `DT_MIPS_*` tags are absent.  One slot per undefined function import that has
/// a lazy stub. A slot holding 0 belongs to an import with no stub (its address
/// is taken, or it is a weak reference); the dynamic linker writes the import's
/// address there at load time, so the 0 is not its value and the slot stays
/// variable.
pub(crate) fn mips_got_const_ranges(file: &object::File) -> Vec<(u64, u64)> {
    if !super::mipsabi::is_mips(file.architecture()) {
        return Vec::new();
    }
    let ptr = if file.is_64() { 8u64 } else { 4u64 };
    mips_external_got_entries(file)
        .into_iter()
        .filter(|e| e.stub_addr != 0)
        .map(|e| (e.slot_addr, e.slot_addr.wrapping_add(ptr - 1)))
        .collect()
}

/// One external-symbol GOT entry on MIPS: the dynsym name, the GOT slot address,
/// and the slot's static contents (the `.MIPS.stubs` stub address it points at).
struct MipsExtGot {
    symbol_index: u64,
    name: Vec<u8>,
    slot_addr: u64,
    stub_addr: u64,
}

/// Walk the MIPS external-symbol GOT window — dynsym indices `[GOTSYM, count)`
/// map 1:1, in order, to GOT entries starting at index `LOCAL_GOTNO`
/// (`got_index(i) = LOCAL_GOTNO + (i - GOTSYM)`).  Yields one [`MipsExtGot`] per
/// **undefined FUNC** import (Ghidra's `isFunction() && sectionHeaderIndex == 0`).
/// Empty when the `DT_MIPS_LOCAL_GOTNO`/`DT_MIPS_GOTSYM`/`DT_PLTGOT` tags are
/// absent.  Shared by [`resolve_mips_imports`] (naming) and
/// [`mips_got_const_ranges`] (constant-folding); never panics or errors.
fn mips_external_got_entries(file: &object::File) -> Vec<MipsExtGot> {
    let mut out: Vec<MipsExtGot> = Vec::new();

    // The dynamic table tags we need, read straight from the `.dynamic` bytes.
    let Some((local_gotno, gotsym, got_base)) = read_mips_dynamic_tags(file) else {
        return out;
    };

    // The dynamic symbols, by index (the positional GOT correspondence is by
    // `.dynsym` index).
    let mut dynsyms: Vec<(usize, object::read::Symbol)> = Vec::new();
    for s in file.dynamic_symbols() {
        dynsyms.push((s.index().0, s));
    }
    if dynsyms.is_empty() {
        return out;
    }
    let dynsym_count = dynsyms.iter().map(|(i, _)| *i).max().unwrap_or(0) + 1;

    let ptr = if file.is_64() { 8usize } else { 4usize };
    let le = file.is_little_endian();

    for &(idx, ref sym) in &dynsyms {
        if idx < gotsym as usize || idx >= dynsym_count {
            continue;
        }
        // Only undefined FUNC imports name a stub.
        if sym.kind() != object::SymbolKind::Text || !sym.is_undefined() {
            continue;
        }
        let name = match sym.name_bytes() {
            Ok(n) if !n.is_empty() => strip_version(n),
            _ => continue,
        };
        let Some(slot_addr) = local_gotno
            .checked_add(idx as u64 - gotsym)
            .and_then(|index| index.checked_mul(ptr as u64))
            .and_then(|offset| got_base.checked_add(offset))
        else {
            continue;
        };
        let stub_addr = read_word_at_vma(file, slot_addr, ptr, le).unwrap_or(0);
        out.push(MipsExtGot {
            name,
            slot_addr,
            stub_addr,
            symbol_index: idx as u64,
        });
    }

    out
}

/// Read `(DT_MIPS_LOCAL_GOTNO, DT_MIPS_GOTSYM, DT_PLTGOT)` from the `.dynamic`
/// section, or `None` if any is absent.  Tags/vals are `Elf{32,64}_Dyn` pairs.
fn read_mips_dynamic_tags(file: &object::File) -> Option<(u64, u64, u64)> {
    const DT_NULL: u64 = 0;
    const DT_PLTGOT: u64 = 3;
    const DT_MIPS_LOCAL_GOTNO: u64 = 0x7000_000a;
    const DT_MIPS_GOTSYM: u64 = 0x7000_0013;

    let data = file.section_by_name(".dynamic")?.data().ok()?;
    let is64 = file.is_64();
    let le = file.is_little_endian();
    let entsz = if is64 { 16usize } else { 8usize };

    let mut local_gotno: Option<u64> = None;
    let mut gotsym: Option<u64> = None;
    let mut pltgot: Option<u64> = None;

    let mut off = 0usize;
    while off + entsz <= data.len() {
        let (tag, val) = if is64 {
            (
                read_u64_le(&data[off..], le),
                read_u64_le(&data[off + 8..], le),
            )
        } else {
            (
                read_u32_le(&data[off..], le) as u64,
                read_u32_le(&data[off + 4..], le) as u64,
            )
        };
        off += entsz;
        if tag == DT_NULL {
            break;
        }
        match tag {
            DT_PLTGOT => pltgot = Some(val),
            DT_MIPS_LOCAL_GOTNO => local_gotno = Some(val),
            DT_MIPS_GOTSYM => gotsym = Some(val),
            _ => {}
        }
    }
    Some((local_gotno?, gotsym?, pltgot?))
}

/// Read a `ptr`-byte little/big-endian word from the section that contains `vma`
/// (the static-image base-0 assumption: the GOT vma is the file vma).  `None` if
/// no section covers it.
fn read_word_at_vma(file: &object::File, vma: u64, ptr: usize, le: bool) -> Option<u64> {
    for sec in file.sections() {
        let addr = sec.address();
        let size = sec.size();
        if size == 0 || vma < addr || vma >= addr.wrapping_add(size) {
            continue;
        }
        let data = sec.data().ok()?;
        let o = (vma - addr) as usize;
        if o + ptr > data.len() {
            return None;
        }
        return Some(if ptr == 8 {
            read_u64_le(&data[o..], le)
        } else {
            read_u32_le(&data[o..], le) as u64
        });
    }
    None
}

/// Read a 4-byte word honoring endianness (`le`); 0 on a short slice.
fn read_u32_le(b: &[u8], le: bool) -> u32 {
    if b.len() < 4 {
        return 0;
    }
    let a = [b[0], b[1], b[2], b[3]];
    if le {
        u32::from_le_bytes(a)
    } else {
        u32::from_be_bytes(a)
    }
}

/// Read an 8-byte word honoring endianness (`le`); 0 on a short slice.
fn read_u64_le(b: &[u8], le: bool) -> u64 {
    if b.len() < 8 {
        return 0;
    }
    let a = [b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]];
    if le {
        u64::from_le_bytes(a)
    } else {
        u64::from_be_bytes(a)
    }
}

#[cfg(test)]
mod tests;

/// Dynamic-symbol identities for validating lazy-binding stub instructions.
pub(super) fn mips_stub_identities(file: &object::File<'_>) -> Vec<(u64, u64)> {
    mips_external_got_entries(file)
        .into_iter()
        .map(|entry| (entry.stub_addr, entry.symbol_index))
        .collect()
}
