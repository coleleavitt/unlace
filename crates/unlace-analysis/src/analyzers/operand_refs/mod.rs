//! Scalar / operand reference markup — the unlace analog of Ghidra's
//! `ScalarOperandAnalyzer` / `ElfScalarOperandAnalyzer` (and, for the
//! listing-cosmetic half, `OperandReferenceAnalyzer` /
//! `DataOperandReferenceAnalyzer`).
//!
//! ## What this is (the salvageable, faithful subset)
//!
//! Ghidra's operand/reference markup family walks every disassembled instruction
//! operand and creates *listing references* — string / pointer / address-table /
//! subroutine references. Most of that output is **listing cosmetics** (a
//! `ReferenceManager` xref that never reaches a decompiler) or already delivered
//! elsewhere in unlace (subroutine refs → `entry`; jump tables → the engine's
//! `JumpTable::recoverAddresses` switch recovery / `addrtable`; PLT/GOT names →
//! `loader::elf_plt`). See the "covered-elsewhere" map below.
//!
//! The **one** product with genuine decompiler relevance is the
//! `ScalarOperandAnalyzer` idea: a scalar immediate operand that points into an
//! allocated **read-only** data section is an address, so the data it targets
//! should render as a typed object (a string literal) rather than a bare integer.
//! This pass ports that faithful subset:
//!
//! 1. linear-decode every instruction in the executable sections (driving the
//!    same ported SLEIGH engine the [`crate::listing`] tier uses — design §4),
//! 2. for each **constant-space** p-code input (the unlace analog of Ghidra's
//!    `Instruction.getOpObjects(i)` `Scalar` operands — see [`ScalarCapture`]),
//!    apply `ScalarOperandAnalyzer.checkOperands`'s value filter (reject `< 4096`
//!    and the byte-mask values like `0xffff`/`0xff00`),
//! 3. accept the scalar as an address only when it lands inside an **allocated,
//!    read-only** section (`SHF_ALLOC` and **not** `SHF_WRITE` — the `.rodata`
//!    case the decompiler can use; mirrors `program.getMemory().contains(addr)` +
//!    the readonly partition),
//! 4. apply the `ElfScalarOperandAnalyzer` `.got`/`.plt` exclusion (those targets
//!    are already named by [`crate::loader::elf_plt`], so a scalar pointing at
//!    them is never a data reference), and (unlace) drop a scalar the instruction
//!    uses as the base of an indexed load wider than a byte, which addresses a
//!    jump table, a function-pointer table or a word map ([`IndexedBases`]),
//! 5. emit a [`crate::pass::StringFact`] (a typed `char[N]`) when the target is a
//!    NUL-terminated printable run that is not a pointer-aligned slot holding an
//!    address of the image ([`crate::strings::ptrslot`]) nor the head of a
//!    wider array: a sized data object of another size ([`DataObjects`]), or
//!    an array of 2- or 4-byte character codes ([`wide_element_neighbour`]),
//!    plus a `readonly` range over it — reusing the
//!    **existing** strings/readonly commit arms, so the printer's
//!    pointer-to-readonly-char-array literal route (Increment 12) renders the
//!    reference as the string literal.
//!
//! ## Why DEFAULT-OFF (the buildplan §1.2 net-negative)
//!
//! `docs/history/analysis-port-buildplan.md` §1.2 gives this family the verdict
//! **never-for-an-ELF-decompiler (as producing passes)**, for reasons that all
//! still hold and are why this pass ships gated off behind `--option operand_refs
//! on` (default off):
//!
//! - **ELF-default-off upstream.** `ScalarOperandAnalyzer.getDefaultEnablement`
//!   returns `!ElfLoader.isElf(program)` — Ghidra ships the producing analyzer
//!   **disabled for every ELF**. `ElfScalarOperandAnalyzer` exists only to *remove*
//!   the bad `.got`/`.plt` references its parent would create — a correction of a
//!   bug unlace never has (unlace names `.plt`/`.got` correctly via `elf_plt`).
//! - **The one useful product is already covered.** A `.rodata` string ≥ 5 chars
//!   is already planted as a `char[N]` by the always-on [`crate::strings`] pass,
//!   and the printer renders it as the literal via the SPACEBASE route (Increment
//!   12). Library-call argument typing already types a `char *` argument
//!   ([`crate::protos`] / S5 usage inference). So this pass only adds output for
//!   the *residual* case: a short (< 4 char) or otherwise `strings`-missed
//!   read-only printable run pointed at by a bare immediate whose consuming call
//!   has no prototype — a narrow, low-payoff slice.
//! - **Over-acceptance risk.** A per-instruction immediate scan that types any
//!   in-`.rodata` constant as a pointer over-accepts (a coincidental constant that
//!   happens to land in `.rodata` is not necessarily an address), the same
//!   false-positive shape that keeps [`crate::addrtable`] off by default.
//!
//! So the pass is **ported + flippable** (it exists, is registered, and is
//! exercised by tests + a console e2e gate) but **off by default** — exactly the
//! posture the buildplan prescribes. `--option operand_refs on` enables it.
//!
//! ## Empirical render (verified) + the deferred-run requirement
//!
//! The scalar→string-literal render **does** work (the Increment-12 printer change
//! removed the old shadowing wall): with `--option operand_refs on`, a `movabs
//! $0x402004,%rax` that materializes a `.rodata` string address renders the
//! consuming call as `mystery("hi")` instead of `mystery(0x402004)` (proven by
//! `unlace-console/tests/verify_operand_refs.rs`). It fires only when the address
//! **appears directly in code** as a bare immediate (the `movabs` / large-code-model
//! case) — for a RIP-relative `lea 0xNNN(%rip)` (gcc `-O0` default) the absolute
//! address is a `pc + displacement` computation, not a bare immediate, so no scalar
//! is captured — faithful to Ghidra's `ADDRESSES_DO_NOT_APPEAR_DIRECTLY_IN_CODE`
//! gate (`getDefaultEnablement2`).
//!
//! Like the [`crate::listing`] tier (the PR6 build-timing fix), this pass runs
//! **deferred** — at the commit point (`read symbols`), NOT in the load-time pass
//! list — because it decodes through the engine `Translate` whose program loadimage
//! is only attached (`set_loader`) *after* the load-time passes run. A load-time
//! decode finds no bytes (every `one_instruction` fails). It is therefore driven
//! from `passes::run_operand_refs`, called from the console's
//! `commit_pending_analysis` gated on `analysis_operand_refs`.
//!
//! ## The listing-cosmetic / covered-elsewhere half (documented, not built)
//!
//! `OperandReferenceAnalyzer` / `DataOperandReferenceAnalyzer` additionally create
//! **subroutine** references (it even runs a `PseudoDisassembler` to detect a
//! function start) and **address-table** references. unlace has no commit arm for a
//! bare xref, and these products are delivered by other passes:
//!
//! | Ghidra operand-ref product | unlace source (covered elsewhere) |
//! |---|---|
//! | subroutine reference → create function | [`crate::entry`] (entry discovery) |
//! | jump/address-table reference | engine `JumpTable::recoverAddresses` (S2) + [`crate::addrtable`] |
//! | string reference | [`crate::strings`] + the printer literal route |
//! | `.plt`/`.got` reference (corrective) | [`crate::loader::elf_plt`] names them directly |
//!
//! So those halves are **documented as covered-elsewhere** rather than built as a
//! no-op (faithful to the buildplan: "faithfully DOCUMENT it as covered-elsewhere
//! … rather than building a no-op").
//!
//! ## Origin (upstream Ghidra, the tree unlace was ported from)
//!
//! `Ghidra/Features/Base/src/main/java/ghidra/app/plugin/core/analysis/{ScalarOperandAnalyzer,ElfScalarOperandAnalyzer,OperandReferenceAnalyzer,DataOperandReferenceAnalyzer}.java`
//! — `ScalarOperandAnalyzer.checkOperands()` (the per-operand `Scalar` loop +
//! value filter), `addReference()` (the in-memory acceptance), `getDefaultEnablement`
//! (`!isElf`); `ElfScalarOperandAnalyzer.addReference()` (the `.got`/`.plt`
//! exclusion).

use std::collections::BTreeSet;
use std::rc::Rc;

use object::read::{Object, ObjectSection, ObjectSymbol};
use object::{BinaryFormat, ObjectKind, SectionKind, SymbolKind};
use unlace_base::address::Address;
use unlace_base::space::{AddrSpace, spacetype};
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;
use unlace_sleigh::translate::{PcodeEmit, Translate};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase, StringFact};

// --- Upstream constants (ScalarOperandAnalyzer.java) ---------------------------

/// `ScalarOperandAnalyzer.checkOperands`: a scalar value `< 4096` "could be a
/// number, even if it is in the address space" — rejected as an address. (Same
/// 4096 floor the address-table scanner uses, `AddressTable.MINIMUM_SAFE_ADDRESS`.)
const MIN_ADDRESS_VALUE: u64 = 4096;

/// `ScalarOperandAnalyzer.checkOperands`: the explicit byte-mask values that are
/// "even if in the address space" never addresses (`0xffff`, `0xff00`, …). Ported
/// verbatim from the Java `value == 0xffff || value == 0xff00 || …` guard (plus
/// `0xff`, which the < 4096 floor already rejects but is kept for clarity).
const MASK_VALUES: [u64; 10] = [
    0xffff, 0xff00, 0xffffff, 0xff0000, 0xff00ff, 0xffffffff, 0xffffff00, 0xffff0000, 0xff000000,
    0xff,
];

/// ELF section-header flag `SHF_ALLOC` (the section occupies memory at runtime).
const SHF_ALLOC: u64 = 0x2;
/// ELF section-header flag `SHF_WRITE` (the section is writable at runtime).
const SHF_WRITE: u64 = 0x1;
/// ELF section-header flag `SHF_EXECINSTR` (the section holds executable code).
const SHF_EXECINSTR: u64 = 0x4;

/// The minimum visible run length to plant a `char[N]`. The always-on
/// [`crate::strings`] pass uses 5; this pass is the value-add for the residual
/// shorter / missed runs, so it requires only `>= 1` visible char before the NUL.
const STRING_MIN_LEN: usize = 1;

/// A recovered scalar-operand reference: the instruction at `from` carries a
/// scalar immediate whose value `to` is an address in read-only data.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ScalarRef {
    /// The referencing instruction's VMA.
    pub from: u64,
    /// The referenced read-only-data address (the scalar's value).
    pub to: u64,
}

/// `[start, end)` half-open section range plus its ELF flags (for the readonly /
/// `.got`/`.plt` partition).
#[derive(Clone, Debug)]
struct SecRange {
    lo: u64,
    hi: u64,
    /// ELF `sh_flags` (or 0 for a non-ELF section; the readonly arms key off the
    /// neutral `SectionKind` then).
    elf_flags: u64,
    kind: SectionKind,
    /// `.got` / `.plt` (and `.got.plt`, `.plt.sec`): the `ElfScalarOperandAnalyzer`
    /// exclusion sections.
    is_got_or_plt: bool,
    /// The loader's tables, the notes and `.interp`
    /// ([`crate::loader::format::elf::is_loader_table`]).
    is_loader_table: bool,
}

impl SecRange {
    fn contains(&self, a: u64) -> bool {
        a >= self.lo && a < self.hi
    }

    /// Is this an allocated, read-only data section — the `.rodata` partition a
    /// scalar may point at? `SHF_ALLOC` set, `SHF_WRITE` clear, not executable.
    fn is_readonly_data(&self) -> bool {
        if self.elf_flags != 0 {
            // (unlace) The loader's tables, the notes and `.interp` are allocated
            // and not writable, so the flag test alone accepts them -- and in a
            // position-independent executable `.dynsym` covers `0x1000`, so a
            // buffer size lands in it and the pass plants a `char[2]` on a
            // symbol-table field. Same reason as the `.got`/`.plt` exclusion
            // above: a scalar that lands in them is not a data reference.
            if self.is_loader_table {
                return false;
            }
            // ELF: the authoritative flags. Allocated, not writable, not code.
            return self.elf_flags & SHF_ALLOC != 0
                && self.elf_flags & SHF_WRITE == 0
                && self.elf_flags & SHF_EXECINSTR == 0;
        }
        // Non-ELF fallback: the neutral section kind.
        matches!(
            self.kind,
            SectionKind::ReadOnlyData | SectionKind::ReadOnlyString
        )
    }
}

/// Build the section partition once: every section's `[lo, hi)` + the flags the
/// readonly / `.got`/`.plt` arms need. Mirrors `program.getMemory()` block
/// enumeration in `ScalarOperandAnalyzer.addReference`.
fn section_ranges(file: &object::File) -> Vec<SecRange> {
    let mut out = Vec::new();
    for sec in file.sections() {
        let lo = sec.address();
        let sz = sec.size();
        if sz == 0 {
            continue;
        }
        let elf_flags = match sec.flags() {
            object::SectionFlags::Elf { sh_flags } => sh_flags,
            _ => 0,
        };
        let name = sec.name().unwrap_or("");
        // `.got`, `.got.plt`, `.plt`, `.plt.sec`, `.plt.got`: the
        // `ElfScalarOperandAnalyzer` exclusion set (a scalar that lands here is not
        // a data reference — those targets are already named by `elf_plt`).
        let is_got_or_plt = name.starts_with(".got") || name.starts_with(".plt");
        let is_loader_table = crate::loader::format::elf::is_loader_table(name, sec.kind());
        out.push(SecRange {
            lo,
            hi: lo.saturating_add(sz),
            elf_flags,
            kind: sec.kind(),
            is_got_or_plt,
            is_loader_table,
        });
    }
    out
}

/// The executable `[lo, hi)` ranges to linear-decode (`SHF_EXECINSTR` / the neutral
/// `SectionKind::Text`). Mirrors [`crate::listing`]'s exec-range gate.
fn exec_ranges(file: &object::File) -> Vec<(u64, u64)> {
    let mut out = Vec::new();
    for sec in file.sections() {
        let is_exec = match sec.flags() {
            object::SectionFlags::Elf { sh_flags } => sh_flags & SHF_EXECINSTR != 0,
            _ => matches!(sec.kind(), SectionKind::Text),
        };
        if !is_exec {
            continue;
        }
        let lo = sec.address();
        let sz = sec.size();
        if sz == 0 {
            continue;
        }
        out.push((lo, lo.saturating_add(sz)));
    }
    out
}

/// A p-code operand of one captured instruction: a constant's value, or a
/// storage location `(space index, offset)`.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Operand {
    Const(u64),
    Loc(i32, u64),
}

impl Operand {
    fn of(v: &VarnodeData) -> Operand {
        match &v.space {
            Some(space) if space.get_type() == spacetype::IPTR_CONSTANT => Operand::Const(v.offset),
            Some(space) => Operand::Loc(space.get_index(), v.offset),
            None => Operand::Loc(-1, v.offset),
        }
    }
}

/// A capturing [`PcodeEmit`] that records every **constant-space** input varnode's
/// value for one instruction. These are the scalar immediates the
/// `ScalarOperandAnalyzer` reads as `Instruction.getOpObjects(i)` `Scalar`s — unlace
/// has no separate operand model at this tier, so the constant inputs of the
/// instruction's p-code are the faithful projection (every literal an operand
/// contributes appears as a constant-space varnode in the emitted ops).  The ops
/// also feed [`IndexedBases`].
#[derive(Default)]
struct ScalarCapture {
    consts: Vec<u64>,
    arrays: IndexedBases,
    steps: Option<Vec<Step>>,
}

/// One captured p-code op: its opcode, output and first inputs (how many).
type Step = (OpCode, Option<(Operand, u32)>, [Operand; 2], usize);

impl PcodeEmit for ScalarCapture {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        for v in vars {
            if let Some(space) = &v.space
                && space.get_type() == spacetype::IPTR_CONSTANT {
                    self.consts.push(v.offset);
                }
        }
        let mut ins = [Operand::Const(0); 2];
        for (slot, v) in ins.iter_mut().zip(vars) {
            *slot = Operand::of(v);
        }
        let out = outvar.map(|v| (Operand::of(v), v.size));
        self.arrays.step(opc, out, &ins[..vars.len().min(2)]);
        if let Some(steps) = &mut self.steps {
            steps.push((opc, out, ins, vars.len().min(2)));
        }
    }
}

/// (unlace) How many instructions an address stays in a register for
/// [`TableUses`].
const TABLE_WINDOW: u8 = 32;

/// (unlace) The addresses code puts in a register and, within [`TABLE_WINDOW`]
/// instructions, adds a computed index to (`lea rcx,table` then
/// `mov eax,[rcx+rax*4]`, or `lea rdi,[rax+table]`): the base of an array,
/// whatever its bytes spell. A conditional branch or a call falls through to the
/// next instruction with the register intact; a jump or a return does not, so
/// it forgets every address (a tail call's argument is not the next function's
/// table).
#[derive(Default)]
struct TableUses {
    held: Vec<(Operand, u64, u8)>,
    bases: Vec<u64>,
}

impl TableUses {
    /// The address `v` holds.
    fn base_of(&self, v: &Operand) -> Option<u64> {
        self.held
            .iter()
            .find(|(loc, ..)| loc == v)
            .map(|&(_, base, _)| base)
    }

    fn indexed(&mut self, base: u64) -> Option<u64> {
        if !self.bases.contains(&base) {
            self.bases.push(base);
        }
        Some(base)
    }

    /// Follow one decoded instruction's ops; `None` for an undecodable address.
    fn instruction(&mut self, steps: Option<&[Step]>) {
        let Some(steps) = steps else {
            self.held.clear();
            return;
        };
        let mut flow = false;
        for &(opc, out, ins, n) in steps {
            let from = match (opc, &ins[..n]) {
                (OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT, &[Operand::Const(c), ..]) => {
                    looks_like_address(c).then_some(c)
                }
                (OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT, &[v, ..])
                | (OpCode::CPUI_INT_MULT, &[v, Operand::Const(1)]) => self.base_of(&v),
                (OpCode::CPUI_INT_ADD, &[a, b]) => match (self.base_of(&a), self.base_of(&b), a, b)
                {
                    (Some(base), None, _, Operand::Const(_))
                    | (None, Some(base), Operand::Const(_), _) => Some(base),
                    (Some(base), None, ..) | (None, Some(base), ..) => self.indexed(base),
                    (None, None, Operand::Const(c), Operand::Loc(..))
                    | (None, None, Operand::Loc(..), Operand::Const(c))
                        if looks_like_address(c) =>
                    {
                        self.indexed(c)
                    }
                    _ => None,
                },
                (OpCode::CPUI_BRANCH | OpCode::CPUI_BRANCHIND | OpCode::CPUI_RETURN, _) => {
                    flow = true;
                    None
                }
                _ => None,
            };
            if let Some((loc, _)) = out {
                self.held.retain(|(l, ..)| *l != loc);
                if let Some(base) = from {
                    self.held.push((loc, base, TABLE_WINDOW));
                }
            }
        }
        if flow {
            self.held.clear();
        }
        self.held.retain_mut(|h| {
            h.2 -= 1;
            h.2 > 0
        });
    }
}

/// (unlace) The scalars an instruction uses as the base of an indexed load wider
/// than a byte: added to a value the instruction does not know (`table(,%rax,8)`,
/// `map(%rdi,%rdi)`) to form the address of a 2-byte or wider LOAD.  Such a scalar
/// addresses an array of wider elements -- a jump table, a table of function
/// pointers, a word map -- never a character string, so its bytes are not typed
/// `char[N]` however printable they look.
#[derive(Default)]
struct IndexedBases {
    derived: Vec<(Operand, u64)>,
    bases: Vec<u64>,
}

impl IndexedBases {
    /// The scalar `v` was computed from, if any.
    fn base_of(&self, v: &Operand) -> Option<u64> {
        self.derived
            .iter()
            .find(|(loc, _)| loc == v)
            .map(|&(_, base)| base)
    }

    /// Follow one p-code op, given its output and its first two inputs.
    fn step(&mut self, opc: OpCode, out: Option<(Operand, u32)>, ins: &[Operand]) {
        let from = match (opc, ins) {
            (OpCode::CPUI_INT_ADD, &[a, b]) => match (a, b) {
                (Operand::Const(c), other) | (other, Operand::Const(c))
                    if !matches!(other, Operand::Const(_)) && looks_like_address(c) =>
                {
                    self.base_of(&other).or(Some(c))
                }
                _ => self.base_of(&a).or_else(|| self.base_of(&b)),
            },
            (OpCode::CPUI_COPY | OpCode::CPUI_INT_ZEXT, &[v, ..]) => self.base_of(&v),
            (OpCode::CPUI_LOAD, &[_, addr]) => {
                let wide = out.is_some_and(|(_, size)| size >= 2);
                if let Some(base) = self.base_of(&addr).filter(|_| wide)
                    && !self.bases.contains(&base) {
                        self.bases.push(base);
                    }
                None
            }
            _ => None,
        };
        if let Some((out, _)) = out {
            self.derived.retain(|(loc, _)| *loc != out);
            if let Some(base) = from {
                self.derived.push((out, base));
            }
        }
    }
}

/// Decode the instruction at `vma` and return `(len, constant_inputs)`, leaving
/// out the scalars [`IndexedBases`] finds. `None` on an undecodable address
/// (the caller's policy is to skip to the next aligned address — a conservative
/// linear sweep, unlike the listing tier's flow-following recursive descent,
/// because this pass needs no flow, only the operand scalars).
fn decode_scalars(
    translate: &dyn Translate,
    vma: u64,
    code_space: &Rc<AddrSpace>,
    tables: Option<&mut TableUses>,
) -> Option<(u32, Vec<u64>)> {
    let addr = Address::new(Rc::clone(code_space), vma);
    let mut cap = ScalarCapture {
        steps: tables.as_ref().map(|_| Vec::new()),
        ..Default::default()
    };
    let len = translate
        .one_instruction(&mut cap, &addr)
        .ok()
        .filter(|&len| len > 0);
    if let Some(tables) = tables {
        tables.instruction(len.and(cap.steps.as_deref()));
    }
    let len = len?;
    let arrays = &cap.arrays.bases;
    cap.consts.retain(|c| !arrays.contains(c));
    Some((len as u32, cap.consts))
}

/// `ScalarOperandAnalyzer.checkOperands` value filter: a scalar is a candidate
/// address unless it is `< 4096` or one of the byte-mask values.
fn looks_like_address(value: u64) -> bool {
    value >= MIN_ADDRESS_VALUE && !MASK_VALUES.contains(&value)
}

/// The bytes of the section holding `addr`, from `addr` to the section's end.
fn bytes_at<'d>(file: &object::File<'d>, addr: u64) -> Option<&'d [u8]> {
    let sec = file.sections().find(|sec| {
        let lo = sec.address();
        sec.size() != 0 && addr >= lo && addr < lo.saturating_add(sec.size())
    })?;
    sec.data()
        .ok()?
        .get(usize::try_from(addr - sec.address()).ok()?..)
}

/// If `bytes` open a NUL-terminated printable run of at least
/// [`STRING_MIN_LEN`] visible characters, its byte length **including** the NUL
/// (the `char[N]` length). Reuses the [`crate::strings`] printable-char
/// recognizer so a planted symbol is shaped identically.
pub(crate) fn string_len(bytes: &[u8]) -> Option<u32> {
    let len = bytes.iter().position(|&b| !is_printable_string_byte(b))?;
    (bytes[len] == 0 && len >= STRING_MIN_LEN).then_some((len + 1) as u32)
}

/// (unlace) If `bytes`, at `addr`, read as the head of an array of 2- or 4-byte
/// elements that hold character codes (a `wchar_t`, `char32_t` or `char16_t`
/// string, or an `int` or `short` table such as `{65, 66, 67, 68}`) rather than
/// as a one-character string, the address of its second element. The first two
/// elements, at an address aligned to their width, are each one printable byte
/// followed by zeros. At width 2 a third element, another character or the zero
/// terminator, is required too, because `c 00 c 00` is also two adjacent
/// literals of a merged string section.
fn wide_element_neighbour(bytes: &[u8], addr: u64) -> Option<u64> {
    let unit_is = |width: usize, k: usize, nul_ok: bool| {
        bytes.get(k * width..(k + 1) * width).is_some_and(|unit| {
            let char_code = is_printable_string_byte(unit[0]);
            (char_code || (nul_ok && unit[0] == 0)) && unit[1..].iter().all(|&b| b == 0)
        })
    };
    [(4u64, 2usize), (2, 3)]
        .into_iter()
        .find(|&(width, units)| {
            addr.is_multiple_of(width) && (0..units).all(|k| unit_is(width as usize, k, k == 2))
        })
        .map(|(width, _)| addr + width)
}

/// (unlace) The most entries [`relative_string_table`] reads from one table.
const RELATIVE_TABLE_ENTRIES: usize = 256;

/// (unlace) Which of `wanted` (sorted) the image holds as a pointer: the value of a
/// pointer-aligned slot of an allocated section, read in the image's byte order,
/// or the addend of a dynamic relocation, where a position-independent image
/// keeps the pointers its loader writes. With `code_slots` false the slots of
/// executable sections (an ARM literal pool) do not count.
pub(crate) fn held_pointers(file: &object::File, wanted: &[u64], code_slots: bool) -> Vec<u64> {
    let width: usize = if file.is_64() { 8 } else { 4 };
    let little_endian = file.is_little_endian();
    let mut held: Vec<u64> = Vec::new();
    let mut note = |value: u64| {
        if wanted.binary_search(&value).is_ok() && !held.contains(&value) {
            held.push(value);
        }
    };
    if let Some(relocs) = file.dynamic_relocations() {
        for (_, reloc) in relocs {
            note(reloc.addend() as u64);
        }
    }
    for sec in file.sections() {
        let allocated = match sec.flags() {
            object::SectionFlags::Elf { sh_flags } => {
                sh_flags & SHF_ALLOC != 0 && (code_slots || sh_flags & SHF_EXECINSTR == 0)
            }
            _ => code_slots || sec.kind() != SectionKind::Text,
        };
        let Some(data) = sec.data().ok().filter(|_| allocated) else {
            continue;
        };
        let skip = (width - (sec.address() % width as u64) as usize) % width;
        for word in data.get(skip..).unwrap_or_default().chunks_exact(width) {
            let mut buf = [0u8; 8];
            let value = if little_endian {
                buf[..width].copy_from_slice(word);
                u64::from_le_bytes(buf)
            } else {
                buf[8 - width..].copy_from_slice(word);
                u64::from_be_bytes(buf)
            };
            note(value);
        }
    }
    held
}

/// (unlace) The strings a table of 32-bit offsets from its own start at `table`
/// addresses (clang's position-independent lookup table, `.long .str - table`),
/// or none if `table` holds no such table. It must be 4-aligned and not itself
/// open a string. Its entries are read up to the first that is zero, a small
/// positive character code (9..=0x7e, the first unit of a wide string or a code
/// table the read has run into), points back into the entries read, or lands on
/// no string, and at least two must remain.
pub(crate) fn relative_string_table(
    file: &object::File,
    table: u64,
    little_endian: bool,
) -> Vec<u64> {
    let Some(bytes) =
        bytes_at(file, table).filter(|b| table.is_multiple_of(4) && string_len(b).is_none())
    else {
        return Vec::new();
    };
    let mut strings: Vec<u64> = Vec::new();
    for (k, entry) in bytes
        .as_chunks::<4>().0.iter()
        .take(RELATIVE_TABLE_ENTRIES)
        .enumerate()
    {
        let raw = [entry[0], entry[1], entry[2], entry[3]];
        let offset = if little_endian {
            i32::from_le_bytes(raw)
        } else {
            i32::from_be_bytes(raw)
        };
        let value = table.wrapping_add_signed(i64::from(offset));
        let in_entries = value >= table && value < table + 4 * (k as u64 + 1);
        if offset == 0
            || (9..=0x7e).contains(&offset)
            || in_entries
            || bytes_at(file, value).and_then(string_len).is_none()
        {
            break;
        }
        strings.push(value);
    }
    if strings.len() < 2 {
        strings.clear();
    }
    strings
}

/// (unlace) The start and size of every sized data object the image's symbol
/// tables declare, sorted. A relocatable object has no image addresses yet and
/// lists none.
pub(crate) struct DataObjects(Vec<(u64, u64)>);

impl DataObjects {
    pub(crate) fn new(file: &object::File) -> Self {
        if file.kind() == ObjectKind::Relocatable {
            return DataObjects(Vec::new());
        }
        DataObjects::from_spans(
            file.symbols()
                .chain(file.dynamic_symbols())
                .filter(|s| s.kind() == SymbolKind::Data && !s.is_undefined() && s.size() != 0)
                .map(|s| (s.address(), s.size()))
                .collect(),
        )
    }

    pub(crate) fn from_spans(mut spans: Vec<(u64, u64)>) -> Self {
        spans.sort_unstable();
        spans.dedup();
        DataObjects(spans)
    }

    /// Does a declared object start at `addr`?
    pub(crate) fn starts_at(&self, addr: u64) -> bool {
        let from = self.0.partition_point(|&(lo, _)| lo < addr);
        self.0.get(from).is_some_and(|&(lo, _)| lo == addr)
    }

    /// Does a declared object start at `addr` with a size other than `len`? The
    /// image then says the bytes there are something else: an array whose first
    /// element happens to read as a string, or a larger buffer, and the reference
    /// prints as the object's name. An object that only contains `addr`, such as
    /// a table of `char` rows, says nothing against the string it holds there.
    fn contradicts(&self, addr: u64, len: u64) -> bool {
        let from = self.0.partition_point(|&(lo, _)| lo < addr);
        self.0[from..]
            .iter()
            .take_while(|&&(lo, _)| lo == addr)
            .any(|&(_, size)| size != len)
    }

    /// The furthest end of the objects up to each one, for [`Self::overlaps`].
    pub(crate) fn reach(&self) -> Vec<u64> {
        self.0
            .iter()
            .scan(0u64, |end, &(lo, size)| {
                *end = (*end).max(lo.saturating_add(size));
                Some(*end)
            })
            .collect()
    }

    /// Does a declared object overlap `[addr, addr + len)`? `reach` is
    /// [`Self::reach`].
    pub(crate) fn overlaps(&self, reach: &[u64], addr: u64, len: u64) -> bool {
        self.overlapping(reach, addr, len).next().is_some()
    }

    /// [`Self::overlaps`], by an object other than one of exactly that extent.
    pub(crate) fn overlaps_other(&self, reach: &[u64], addr: u64, len: u64) -> bool {
        self.overlapping(reach, addr, len)
            .any(|span| span != (addr, len))
    }

    fn overlapping<'s>(
        &'s self,
        reach: &'s [u64],
        addr: u64,
        len: u64,
    ) -> impl Iterator<Item = (u64, u64)> + 's {
        let end = addr.saturating_add(len);
        let upto = self.0.partition_point(|&(lo, _)| lo < end);
        (0..upto)
            .rev()
            .take_while(move |&k| reach[k] > addr)
            .map(|k| self.0[k])
            .filter(move |&(lo, size)| lo.saturating_add(size) > addr)
    }
}

/// Mirror of `strings::is_string_char` (`AsciiCharSetRecognizer.contains`):
/// printable ASCII + CR/LF/TAB.
fn is_printable_string_byte(b: u8) -> bool {
    (0x20..=0x7e).contains(&b) || b == 0x0d || b == 0x0a || b == 0x09
}

/// The pure core: linear-decode the executable sections, and for every scalar
/// immediate that is a valid read-only-data address (passing the value filter, the
/// readonly partition test, and the `.got`/`.plt` exclusion), record a
/// [`ScalarRef`]. Shared with the unit tests.
///
/// `translate` + `code_space` drive the SLEIGH decoder; on x86-64 the linear sweep
/// at 1-byte stride realigns after a bad decode (CISC instructions vary in length).
pub fn scan_scalar_refs(
    file: &object::File,
    translate: &dyn Translate,
    code_space: &Rc<AddrSpace>,
) -> Vec<ScalarRef> {
    scan(file, translate, code_space, None)
}

/// (unlace) [`scan_scalar_refs`], also returning the addresses [`TableUses`] saw
/// the code index as tables of wider elements.
fn scan_scalar_refs_and_tables(
    file: &object::File,
    translate: &dyn Translate,
    code_space: &Rc<AddrSpace>,
) -> (Vec<ScalarRef>, Vec<u64>) {
    let mut tables = TableUses::default();
    let refs = scan(file, translate, code_space, Some(&mut tables));
    let mut bases = tables.bases;
    bases.sort_unstable();
    (refs, bases)
}

fn scan(
    file: &object::File,
    translate: &dyn Translate,
    code_space: &Rc<AddrSpace>,
    mut tables: Option<&mut TableUses>,
) -> Vec<ScalarRef> {
    let secs = section_ranges(file);
    let exec = exec_ranges(file);
    let mut out = Vec::new();

    for &(lo, hi) in &exec {
        let mut vma = lo;
        // The (vma, value) pairs already emitted for the CURRENT instruction — a
        // single immediate often appears in several of an instruction's captured
        // p-code ops. Dedup is per-instruction (each `vma` is visited once in the
        // linear sweep), so this stays O(consts) per instruction — no global set.
        let mut emitted_for_insn: Vec<u64> = Vec::new();
        while vma < hi {
            let (len, consts) =
                match decode_scalars(translate, vma, code_space, tables.as_deref_mut()) {
                    Some(r) => r,
                    None => {
                        // Undecodable: realign by one byte (CISC linear sweep).
                        vma += 1;
                        continue;
                    }
                };
            emitted_for_insn.clear();
            for &value in &consts {
                if !looks_like_address(value) {
                    continue;
                }
                // Must land in an allocated read-only data section — and NOT in the
                // `.got`/`.plt` exclusion (ElfScalarOperandAnalyzer).
                let in_ro = secs
                    .iter()
                    .any(|s| s.contains(value) && s.is_readonly_data() && !s.is_got_or_plt);
                if !in_ro {
                    continue;
                }
                // Dedup an immediate that appears in several captured ops of one insn.
                if emitted_for_insn.contains(&value) {
                    continue;
                }
                emitted_for_insn.push(value);
                out.push(ScalarRef {
                    from: vma,
                    to: value,
                });
            }
            vma += len.max(1) as u64;
        }
    }
    out
}

/// Turn the recovered scalar references into [`AnalysisOutput`] facts: for each
/// referenced read-only address that begins a NUL-terminated printable run, emit a
/// [`StringFact`] (a typed `char[N]`, via the **existing** strings commit arm) + a
/// `readonly` range over it — so the printer renders the reference as the string
/// literal. Targets that are not printable runs are skipped (no type to plant),
/// and so is a target whose pointer-sized slot holds an address of the image
/// ([`crate::strings::ptrslot`]): an entry of a vtable or of a pointer table.
/// (unlace) So is a run where a sized data object of another size starts
/// ([`DataObjects`]), and a one-character run that opens an array of wider
/// character codes ([`wide_element_neighbour`]) whose second element is no
/// declared object's start and nothing points at: neither an operand nor a
/// pointer the image holds ([`held_pointers`]), nor, beside a 2-byte run of an
/// ELF image, an entry of a relative lookup table at an operand target
/// ([`relative_string_table`]). A reference to the neighbour is what tells two
/// one-character literals laid out side by side from the elements of one array;
/// a literal whose neighbour has none is refused with the array.
/// Pure — the unit tests assert it directly.
fn emit_facts(file: &object::File, refs: &[ScalarRef]) -> AnalysisOutput {
    let slots = crate::strings::ptrslot::PointerSlots::new(file);
    let objects = DataObjects::new(file);
    let mut targets: Vec<u64> = refs.iter().map(|r| r.to).collect();
    targets.sort_unstable();
    targets.dedup();
    let mut seen: BTreeSet<u64> = BTreeSet::new();
    let mut runs: Vec<(u64, u32, Option<(u64, u64)>)> = Vec::new();
    for r in refs {
        if !seen.insert(r.to) || slots.holds_address(r.to) {
            continue;
        }
        let Some(bytes) = bytes_at(file, r.to) else {
            continue;
        };
        let Some(len) = string_len(bytes) else {
            continue;
        };
        if objects.contradicts(r.to, len as u64) {
            continue;
        }
        let neighbour = wide_element_neighbour(bytes, r.to)
            .filter(|n| targets.binary_search(n).is_err() && !objects.starts_at(*n))
            .map(|n| (n, n - r.to));
        runs.push((r.to, len, neighbour));
    }
    let mut unreferenced: Vec<u64> = runs
        .iter()
        .filter_map(|&(_, _, n)| n.map(|n| n.0))
        .collect();
    if !unreferenced.is_empty() {
        unreferenced.sort_unstable();
        unreferenced.dedup();
        let held = held_pointers(file, &unreferenced, true);
        unreferenced.retain(|n| !held.contains(n));
    }
    let mut narrow: Vec<u64> = runs
        .iter()
        .filter_map(|&(_, _, n)| {
            n.filter(|&(n, width)| width == 2 && unreferenced.binary_search(&n).is_ok())
        })
        .map(|(n, _)| n)
        .collect();
    if !narrow.is_empty() && file.format() == BinaryFormat::Elf {
        narrow.sort_unstable();
        narrow.dedup();
        let little_endian = file.is_little_endian();
        let tabled: Vec<u64> = targets
            .iter()
            .flat_map(|&t| relative_string_table(file, t, little_endian))
            .filter(|v| narrow.binary_search(v).is_ok())
            .collect();
        unreferenced.retain(|n| !tabled.contains(n));
    }
    let mut out = AnalysisOutput::default();
    for (addr, len, neighbour) in runs {
        if neighbour.is_some_and(|(n, _)| unreferenced.binary_search(&n).is_ok()) {
            continue;
        }
        out.strings.push(StringFact { addr, len });
        out.readonly.push((addr, addr + len as u64));
    }
    out
}

/// Port of the salvageable `ScalarOperandAnalyzer` / `ElfScalarOperandAnalyzer`
/// subset: type a scalar immediate that points into read-only data as a string
/// literal. **Disabled by default** (see the module docs: ELF-default-off
/// upstream, covered-elsewhere, over-acceptance-prone) — gated behind
/// `--option operand_refs on`.
pub struct OperandRefsPass;

impl AnalysisPass for OperandRefsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "operand_refs"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        // The decode needs the default code space; absent it (no decodable image)
        // the pass is a no-op.
        let code_space = match ctx.arch.manage().get_default_code_space() {
            Some(s) => Rc::clone(s),
            None => return AnalysisOutput::default(),
        };
        if !ctx
            .arch
            .unlace_options
            .get::<unlace_decomp::analysisgates::Widestrings32>()
            .0
        {
            return emit_facts(
                ctx.file,
                &scan_scalar_refs(ctx.file, ctx.arch.translate(), &code_space),
            );
        }
        let (refs, tables) =
            scan_scalar_refs_and_tables(ctx.file, ctx.arch.translate(), &code_space);
        let mut out = emit_facts(ctx.file, &refs);
        out.wide_strings32 = wide_strings32(ctx.file, &refs, &tables);
        out
    }
}

/// (unlace `widestrings32`) The 4-byte string facts of the decode's operand
/// targets `refs` and table uses `tables` (sorted).
fn wide_strings32(
    file: &object::File,
    refs: &[ScalarRef],
    tables: &[u64],
) -> Vec<crate::pass::StringFact> {
    let mut targets: Vec<u64> = refs.iter().map(|r| r.to).collect();
    targets.sort_unstable();
    targets.dedup();
    crate::strings::widestrings32::wide_string32_facts(file, &targets, tables)
}

/// (unlace `widestrings32`) The 4-byte string facts alone, for a run with
/// `operand_refs` off: the same decode, for the operand targets and table uses
/// the facts weigh, without the pass's own string facts.
pub fn wide_strings32_alone(ctx: &AnalysisCtx) -> AnalysisOutput {
    let Some(code_space) = ctx.arch.manage().get_default_code_space().map(Rc::clone) else {
        return AnalysisOutput::default();
    };
    let (refs, tables) = scan_scalar_refs_and_tables(ctx.file, ctx.arch.translate(), &code_space);
    AnalysisOutput {
        wide_strings32: wide_strings32(ctx.file, &refs, &tables),
        ..Default::default()
    }
}

#[cfg(test)]
mod tests;
