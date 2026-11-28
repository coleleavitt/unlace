//! Address-table discovery — the unlace analog of Ghidra's `AddressTableAnalyzer`
//! ("Create Address Tables").
//!
//! ## What this is (and the three things it is NOT)
//!
//! This pass is a **byte-level data-discovery scan**: it walks read-only/data
//! sections and, wherever it finds a run of ≥ N consecutive pointer-width values
//! that each look like a valid in-memory address landing inside an *executable*
//! section, it lays down an absolute address/jump table (a "function-pointer
//! array": vtables, relocated function-pointer arrays, GCC absolute switch
//! tables). It emits the table head + body as **data facts** only — never
//! function entries and never switch case-ranges.
//!
//! Three distinct concerns the literature conflates; this pass is only the first:
//!
//! 1. **This pass — `AddressTableAnalyzer` (application-layer pointer-table
//!    discovery).** A GAP, but a small, low-payoff, **off-by-default** one (Ghidra
//!    ships it `setDefaultEnablement(false)`). Its output is data symbols + a
//!    read-only range over the table body, NOT prototypes and NOT switch ranges.
//!
//! 2. **switch / jump-table recovery (`JumpTable::recoverAddresses`)** — INHERITED
//!    🟡. The SSA/data-flow-driven, in-function switch recovery in the engine
//!    (`decompiler/cpp/jumptable.{cc,hh}` → unlace `p2_lift/jumptable.rs`, driven
//!    from `p2_lift/flow.rs::recover_jump_tables`). It is the analog of Ghidra's
//!    `DecompilerSwitchAnalyzer`. **This pass does NOT do that** and must not be
//!    confused with it — the switch table the `switchtab_x86_64` fixture also
//!    carries is recovered by that inherited engine machinery, independently.
//!
//! 3. **roadmap #9 "re-run jump-table recovery after type recovery"** — the
//!    decompiler-internal MULTISTAGE re-recovery (`recover_count > 1`, gated behind
//!    the `Override::queryMultistageJumptable` STUB in jumptable.rs). It is
//!    ENGINE-RESIDENT (S2), **not** an analyzer-tier item. This pass does NOT
//!    attempt it; #9 is a separate, deferred *engine* task (see
//!    `docs/missing-analyses.md` §7 and `docs/history/analysis-port-log.md`).
//!
//! ## Origin (upstream Ghidra, the tree unlace was ported from)
//!
//! - Analyzer wrapper:
//!   `Ghidra/Features/Base/src/main/java/ghidra/app/plugin/core/disassembler/AddressTableAnalyzer.java`
//!   (`added()`, `checkTable()`, `removeNonSearchableMemory()`, `getDefaultEnablement()`;
//!   note `setDefaultEnablement(false)`).
//! - Core scanner:
//!   `Ghidra/Features/Base/.../disassembler/AddressTable.java` —
//!   `getEntry()` (the pointer-run scanner: read addr-sized value, reject
//!   0 / `< minAddressOffset` / unaligned / out-of-memory / fails the relocation
//!   guard, stop on any ref-in-middle; min-run length check;
//!   `isValidRelocationAddress()`), `getThresholdRunOfValidPointers()` (the
//!   probability-based min-run).
//!
//! ## DISABLED by default
//!
//! This pass is not in [`crate::passes::default_passes`]: it runs from
//! [`crate::passes::run_addrtable`] at the commit point, only under
//! `--option addrtable on` (and so in `--mode aggressive`), and is off by default
//! for two reasons: (a) Ghidra parity (off by default upstream); (b) real false-positive
//! risk — a pointer-run scanner over `.rodata`/`.data` over-accepts, since any
//! coincidental run of in-range aligned values reads as a "table". The relocation
//! guard is the main defense and is strong on PIE/relocatable objects (every real
//! pointer is relocated) but *weak on non-PIE* binaries (absolute `.text` pointers
//! carry no relocation), so the non-PIE `switchtab_x86_64` fixture exercises the
//! heuristic path (min-run + executable-target check + string guard), not the
//! relocation-guided path.
//!
//! What it commits, with the gate on: each table typed `code *[N]` under its
//! image name or `AddrTable<addr>` (the label `AddressTable.makeTable` writes),
//! and a read-only range over a table in read-only data so a fixed-slot load
//! folds to its function. The reference walk behind `unlace xrefs`
//! ([`crate::listing::xrefs`]) files every slot as a `data` reference from the
//! slot to the code it holds, the reference `makeTable` creates.
//!
//! ## Scope / LOSS vs Ghidra (documented divergence)
//!
//! - No listing/Bookmark/`makeTable`/`autoLabel` side effects: Ghidra mutates the
//!   Program listing; unlace has no pre-decompile listing (the same tier limitation
//!   documented for the `FindNoReturnFunctionsAnalyzer` "Discovered" analyzer in
//!   [`crate::loader::noreturn`]). unlace emits *facts only*.
//! - No index-table (secondary byte-index) recovery (`AddressTable.getEntry`'s
//!   `checkForIndex` branch) and no shifted-address tables — deferred; rare on
//!   x86-64 ELF.
//! - The probability-based `getThresholdRunOfValidPointers` is reduced to its
//!   clamped floor (`MIN_RUN_FLOOR`); the spirit (a longer run is more credible)
//!   is preserved by the configurable `min_run` knob.

use object::SectionKind;
use object::read::{Object, ObjectSection};

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::types::int4;
use unlace_decomp::dtype::TypeFactory;

use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, DataObjectFact, Phase, TypedDataFact,
};

// --- Upstream constants (AddressTable.java / AddressTableAnalyzer.java) --------

/// `AddressTable.MINIMUM_SAFE_ADDRESS` — addresses below this look like small
/// integers, not pointers, and are rejected.
const MINIMUM_SAFE_ADDRESS: u64 = 1024;

/// `AddressTableAnalyzer.OPTION_DEFAULT_MIN_POINTER_ADDR` — the default minimum
/// value a slot may hold to be considered an address (`minAddressOffset`).
const DEFAULT_MIN_POINTER_ADDR: u64 = 0x1024;

/// `AddressTable` floor for the minimum run length. The faithful
/// `getThresholdRunOfValidPointers` computes a probability over total mapped
/// bytes vs `2^ptrbits` and clamps `>= 2`; unlace uses the clamped floor and lets
/// the caller raise `min_run`.
const MIN_RUN_FLOOR: usize = 2;

/// ELF section-header flag: `SHF_EXECINSTR` (section holds executable machine
/// instructions) — a table element must point into such a section.
const SHF_EXECINSTR: u64 = 0x4;
/// ELF section-header flag: `SHF_ALLOC` (section occupies memory at runtime).
const SHF_ALLOC: u64 = 0x2;

/// A discovered absolute address table: a run of pointer-width values starting at
/// `addr`, each of which (`elements[i]`) lands inside an executable section.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct AddrTable {
    /// Virtual address of the first table slot.
    pub addr: u64,
    /// Number of slots in the table.
    pub len: usize,
    /// The decoded element targets, in order (each is an in-`.text` address).
    pub elements: Vec<u64>,
    /// Whether the table lies in read-only (or relocated-then-read-only) data,
    /// so its slots hold what the image says at run time.
    pub read_only: bool,
}

/// `[start, end)` half-open executable-section range.
type ExecRange = (u64, u64);

/// Is `sec` an executable (code) section — the set a table element must point
/// into ("target must be in code memory", `AddressTable.getEntry`)? Per-format
/// (PR-10): ELF `SHF_EXECINSTR` (unchanged), PE/COFF `IMAGE_SCN_MEM_EXECUTE`,
/// Mach-O `S_ATTR_PURE_INSTRUCTIONS` / the neutral `SectionKind::Text`.
fn is_executable_section<'a>(sec: &impl object::read::ObjectSection<'a>) -> bool {
    match sec.flags() {
        object::SectionFlags::Elf { sh_flags } => sh_flags & SHF_EXECINSTR != 0,
        object::SectionFlags::Coff { characteristics } => {
            characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
        }
        object::SectionFlags::MachO { flags } => {
            flags & object::macho::S_ATTR_PURE_INSTRUCTIONS != 0
                || matches!(sec.kind(), SectionKind::Text)
        }
        _ => matches!(sec.kind(), SectionKind::Text),
    }
}

/// Collect the `[address, address+size)` ranges of every executable section — the
/// set a table element must point into. Mirrors the "target must be in code
/// memory" check of `AddressTable.getEntry`.
fn exec_ranges(file: &object::File) -> Vec<ExecRange> {
    let mut out = Vec::new();
    for sec in file.sections() {
        if !is_executable_section(&sec) {
            continue;
        }
        let a = sec.address();
        let sz = sec.size();
        if sz == 0 {
            continue;
        }
        out.push((a, a.saturating_add(sz)));
    }
    out
}

/// `true` if `addr` lands in any executable section of `file` — the public form
/// of [`exec_ranges`] for the tests' per-element assertion.
pub fn in_exec_section(file: &object::File, addr: u64) -> bool {
    exec_ranges(file)
        .iter()
        .any(|&(s, e)| addr >= s && addr < e)
}

/// Build the sorted list of relocated slot addresses (`isValidRelocationAddress`
/// guide). On a relocatable / PIE object every real absolute pointer slot carries
/// a dynamic relocation; on a non-PIE `EXEC` there are typically none, so this is
/// empty and the scan falls through to the pure heuristic path.
///
/// Mirrors `elf_plt::build_got_name_map`'s use of
/// [`object::read::Object::dynamic_relocations`]; we only need the slot *offsets*
/// here, not the target names. No `HashMap` (per the engine convention): a sorted
/// `Vec` + binary search.
fn relocated_slots(file: &object::File) -> Vec<u64> {
    let mut slots = Vec::new();
    if let Some(relocs) = file.dynamic_relocations() {
        // Any dynamic relocation (symbol, absolute, or base-RELATIVE) pins a real
        // pointer into its slot; the guard only needs the slot address (the first
        // tuple element), not the relocation's target.
        for (off, _reloc) in relocs {
            slots.push(off);
        }
    }
    slots.sort_unstable();
    slots.dedup();
    slots
}

/// Read one little/big-endian pointer-width value from `data` at `off`, returning
/// `None` if the slice is too short. `ptr_size` is 8 or 4.
fn read_ptr(data: &[u8], off: usize, ptr_size: usize, little: bool) -> Option<u64> {
    let end = off.checked_add(ptr_size)?;
    let bytes = data.get(off..end)?;
    let mut v: u64 = 0;
    if little {
        for (i, &b) in bytes.iter().enumerate() {
            v |= (b as u64) << (8 * i);
        }
    } else {
        for &b in bytes {
            v = (v << 8) | b as u64;
        }
    }
    Some(v)
}

/// `getLoadedAndInitializedAddressSet` ∩ `removeNonSearchableMemory`: the
/// sections worth scanning for a pointer table — allocated + initialized
/// read-only/data (`.rodata`, `.data`, `.data.rel.ro`, `.got` analogues). `.bss`
/// (uninitialized) and non-allocated metadata (`.symtab`, `.comment`) are skipped.
fn is_searchable_section<'a>(sec: &impl object::read::ObjectSection<'a>) -> bool {
    if matches!(sec.kind(), SectionKind::UninitializedData) {
        return false;
    }
    // Executable sections hold code, not data tables — the disqualifier on every
    // format.
    if is_executable_section(sec) {
        return false;
    }
    // Import pointer slots are the loader's (named after their imports), and a
    // lazily bound one holds its own PLT stub until the first call.
    if sec.name().is_ok_and(is_import_slot_section) {
        return false;
    }
    // Must be in the runtime image. Read-only OR writable data both qualify
    // (vtables in .data.rel.ro, GOT, .rodata switch tables). Per-format (PR-10):
    // ELF SHF_ALLOC (unchanged); a PE/COFF section is mapped iff readable+
    // initialized; a Mach-O section is mapped unless it is zero-fill (already
    // excluded by the `SectionKind` guard above).
    match sec.flags() {
        object::SectionFlags::Elf { sh_flags } => sh_flags & SHF_ALLOC != 0,
        object::SectionFlags::Coff { characteristics } => {
            characteristics & object::pe::IMAGE_SCN_CNT_UNINITIALIZED_DATA == 0
                && characteristics & object::pe::IMAGE_SCN_MEM_READ != 0
        }
        object::SectionFlags::MachO { .. } => true,
        _ => false,
    }
}

/// A section of import pointer slots: the ELF GOT, the Mach-O symbol-pointer
/// and GOT sections, the PE import address table.
fn is_import_slot_section(name: &str) -> bool {
    matches!(
        name,
        ".got"
            | ".got.plt"
            | ".idata"
            | "__got"
            | "__auth_got"
            | "__la_symbol_ptr"
            | "__nl_symbol_ptr"
    )
}

/// `checkTable` string guard (AddressTable.java): a run that is actually a
/// NUL-terminated printable string is not a pointer table. We reuse the
/// `strings` charset recognizer: if every byte of the candidate slot region is
/// a printable string char, treat the region as text and reject the run.  Kept
/// deliberately minimal (the spirit of the guard, not the full n-gram model).
fn looks_like_string(data: &[u8], off: usize, span: usize) -> bool {
    let end = match off.checked_add(span) {
        Some(e) if e <= data.len() => e,
        _ => return false,
    };
    span > 0 && data[off..end].iter().all(|&b| is_printable_string_byte(b))
}

/// Mirror of `strings::is_string_char` (`AsciiCharSetRecognizer.contains`):
/// printable ASCII + CR/LF/TAB. Duplicated (rather than re-exported) to keep this
/// disabled pass self-contained.
fn is_printable_string_byte(b: u8) -> bool {
    (0x20..=0x7e).contains(&b) || b == 0x0d || b == 0x0a || b == 0x09
}

/// Faithful port of the `AddressTable.getEntry` per-entry loop over one section's
/// bytes, returning every accepted absolute table in the section.
///
/// For each aligned start offset, accumulate consecutive slots while each decoded
/// value is a valid in-`.text` pointer; close the run on the first invalid slot.
/// A run of `>= min_run` slots becomes an [`AddrTable`]. The relocation guard
/// (`isValidRelocationAddress`) is applied **only when `use_reloc_guard` is set** —
/// i.e. for a relocatable / PIE image (`ET_REL`/`ET_DYN`), where *every* real
/// absolute pointer is relocated, so an un-relocated slot is provably not a
/// pointer. On a non-PIE `ET_EXEC` the guard is OFF (absolute `.text` pointers
/// carry no relocation), and only the heuristic checks (in-exec, min-addr,
/// string-guard, min-run) apply — the over-acceptance-prone path that is exactly
/// why this pass ships disabled. See the module docs.
fn scan_section(
    sec_vma: u64,
    data: &[u8],
    ptr_size: usize,
    little: bool,
    min_addr: u64,
    min_run: usize,
    exec: &[ExecRange],
    relocs: &[u64],
    use_reloc_guard: bool,
) -> Vec<AddrTable> {
    let mut tables = Vec::new();
    let in_exec = |a: u64| exec.iter().any(|&(s, e)| a >= s && a < e);
    let is_reloc_slot = |slot_vma: u64| relocs.binary_search(&slot_vma).is_ok();

    let n = data.len();
    let mut off = 0usize;
    while off + ptr_size <= n {
        // The table slot's own virtual address (for the relocation guard).
        let slot_vma = sec_vma + off as u64;
        let mut elements: Vec<u64> = Vec::new();
        let mut cur = off;
        while cur + ptr_size <= n {
            let slot_vma_cur = sec_vma + cur as u64;
            let Some(v) = read_ptr(data, cur, ptr_size, little) else {
                break;
            };
            // getEntry rejects: 0, small ints (< minAddressOffset / MINIMUM_SAFE_ADDRESS),
            // and targets not inside executable memory.
            if v == 0 || v < min_addr || v < MINIMUM_SAFE_ADDRESS || !in_exec(v) {
                break;
            }
            // Relocation guard (isValidRelocationAddress): on a relocatable image
            // a real pointer slot must be relocated.
            if use_reloc_guard && !is_reloc_slot(slot_vma_cur) {
                break;
            }
            // String guard: a printable, would-be-string region is not a table.
            if looks_like_string(data, cur, ptr_size) {
                break;
            }
            elements.push(v);
            cur += ptr_size;
        }
        if elements.len() >= min_run {
            tables.push(AddrTable {
                addr: slot_vma,
                len: elements.len(),
                elements,
                read_only: false,
            });
            // Advance past the accepted table (non-overlapping, like getEntry).
            off = cur;
        } else {
            off += ptr_size;
        }
    }
    tables
}

/// Scan every searchable section of `file` for absolute address tables: runs of
/// `>= min_run` consecutive `ptr_size`-byte values that each point inside an
/// executable section. The pure core of the pass; shared with the unit tests.
///
/// `min_run` is clamped up to [`MIN_RUN_FLOOR`] (a 1-element "run" is never a
/// table). `ptr_size` is 8 (ELFCLASS64) or 4 (ELFCLASS32); endianness from the
/// object.
pub fn scan_address_tables(file: &object::File, min_run: usize, ptr_size: usize) -> Vec<AddrTable> {
    let min_run = min_run.max(MIN_RUN_FLOOR);
    let little = file.is_little_endian();
    let min_addr = DEFAULT_MIN_POINTER_ADDR;
    let exec = exec_ranges(file);
    if exec.is_empty() {
        return Vec::new();
    }
    let relocs = relocated_slots(file);
    // The relocation guard is only sound on a relocatable / PIE image, where every
    // real absolute pointer carries a relocation. On a non-PIE ET_EXEC the few
    // dynamic relocations (GOT slots for `__libc_start_main` etc.) do NOT cover the
    // program's absolute switch-table pointers, so applying the guard there would
    // wrongly reject every real table (this is the `switchtab_x86_64` case). Mirror
    // `AddressTable.isValidRelocationAddress`, which is only consulted for objects
    // whose memory is relocatable.
    let use_reloc_guard = matches!(
        file.kind(),
        object::ObjectKind::Relocatable | object::ObjectKind::Dynamic
    ) && !relocs.is_empty();

    let mut out = Vec::new();
    for sec in file.sections() {
        if !is_searchable_section(&sec) {
            continue;
        }
        let data = match sec.data() {
            Ok(d) if !d.is_empty() => d,
            _ => continue,
        };
        let read_only = matches!(
            sec.kind(),
            SectionKind::ReadOnlyData
                | SectionKind::ReadOnlyDataWithRel
                | SectionKind::ReadOnlyString
        );
        out.extend(
            scan_section(
                sec.address(),
                data,
                ptr_size,
                little,
                min_addr,
                min_run,
                &exec,
                &relocs,
                use_reloc_guard,
            )
            .into_iter()
            .map(|table| AddrTable { read_only, ..table }),
        );
    }
    out
}

/// Choose the pointer width for `file`: 8 for ELFCLASS64, else 4. Faithful to
/// `AddressTable.getByteLength` reading the program's default pointer size.
pub(crate) fn ptr_width(file: &object::File) -> usize {
    if file.is_64() { 8 } else { 4 }
}

/// Turn the discovered tables into [`AnalysisOutput`] facts, each under the name
/// the image already gives its head or `AddrTable<addr>`, the label Ghidra's
/// `AddressTable.makeTable` writes.
///
/// - A table in **writable** data is a run-time hook or callback table: no
///   compiler puts a switch table there. It is typed `code *[len]`, so a call
///   through a slot reads `AddrTable[i](x)`.
/// - A table in **read-only** data may be a switch's offset or address table
///   that the code masks and adds to, and a name-locked object of no element
///   type would print every access through it as a byte offset. It only gets a
///   read-only range over its body, so a load from a fixed slot folds to what it
///   holds; the access keeps its inferred `dat_<addr>[i]` spelling.
///
/// **Never** an `entries` / Function fact — faithful to `AddressTableAnalyzer`,
/// which labels the table but never makes functions from it.
fn emit_facts(
    tables: &[AddrTable],
    ptr_size: usize,
    types: Option<&dyn TypeFactory>,
    names: &BTreeMap<u64, String>,
) -> AnalysisOutput {
    let mut out = AnalysisOutput::default();
    let slot = types.and_then(|types| {
        types
            .get_type_pointer(ptr_size as int4, types.get_type_code().ok()?, 1)
            .ok()
    });
    for t in tables {
        let size = (t.len * ptr_size) as u64;
        let name = names
            .get(&t.addr)
            .cloned()
            .unwrap_or_else(|| format!("AddrTable{:08x}", t.addr));
        if t.read_only {
            out.readonly.push((t.addr, t.addr + size));
            continue;
        }
        if let (Some(types), Some(slot)) = (types, &slot)
            && let Ok(type_) = types.get_type_array(t.len as int4, Rc::clone(slot)) {
                out.typed_data.push(TypedDataFact {
                    addr: t.addr,
                    name,
                    type_,
                });
                continue;
            }
        out.data_objects.push(DataObjectFact {
            addr: t.addr,
            name,
            size: size as u32,
        });
    }
    out
}

/// The name every data symbol of `file` gives its address.
fn data_symbol_names(file: &object::File) -> BTreeMap<u64, String> {
    use object::{ObjectSymbol, SymbolKind};
    file.symbols()
        .chain(file.dynamic_symbols())
        .filter(|s| s.kind() == SymbolKind::Data && s.address() != 0)
        .filter_map(|s| Some((s.address(), s.name().ok()?.to_string())))
        .filter(|(_, name)| !name.is_empty())
        .collect()
}

/// Port of `AddressTableAnalyzer` ("Create Address Tables"): discover absolute
/// address/jump tables and emit their head + body as **data** facts.
///
/// **Disabled by default** (see the module docs): run from
/// [`crate::passes::run_addrtable`] under `--option addrtable on`.
pub struct AddrTablePass {
    /// Minimum run length to accept a table (clamped up to [`MIN_RUN_FLOOR`]).
    pub min_run: usize,
}

impl Default for AddrTablePass {
    fn default() -> Self {
        AddrTablePass {
            min_run: MIN_RUN_FLOOR,
        }
    }
}

impl AnalysisPass for AddrTablePass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "addrtable"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        // Format-agnostic (PR-10): the scan keys off the neutral pointer-run +
        // executable-target heuristic (per-format exec/searchable section arms),
        // so it works on ELF/PE/COFF/Mach-O. The relocation guard keys on the
        // neutral `file.kind()`.
        let ptr_size = ptr_width(ctx.file);
        let tables = scan_address_tables(ctx.file, self.min_run, ptr_size);
        emit_facts(
            &tables,
            ptr_size,
            Some(ctx.arch.types()),
            &data_symbol_names(ctx.file),
        )
    }
}

#[cfg(test)]
mod tests;
