//! (kuna `pdbtypes`) Types, prototypes, locals, globals and vftables from a
//! fingerprint-matched `.pdb` (P1 external refinement).
//!
//! The `pdb` pass names functions; this one gives them what a `/Zi` build
//! records beside the name, the PDB half of what [`crate::dwarf`] does for DWARF.
//! The kuna analog of Ghidra's `PdbApplicator` symbol appliers
//! (`FunctionSymbolApplier`, `LocalOptimizedSymbolApplier`,
//! `RegisterRelativeSymbolApplier`, `DataSymbolApplier`). For each procedure in
//! the module streams:
//!
//! - **Prototype.** The procedure's TPI type ([`TpiMapper::procedure`]), with its
//!   parameter names from the parameter records that follow it, emitted on
//!   [`AnalysisOutput::prototypes_at`]. A member function's `this` pointer is its
//!   first parameter. On i386 the stated calling convention binds the matching
//!   `x86win.cspec` model ([`AnalysisOutput::models`]). An address that
//!   identical-COMDAT folding gave several procedures of different types gets
//!   nothing, and a lone `T_NOTYPE` argument (C's `int f()`) states no
//!   parameters rather than a variadic list.
//! - **Stack locals.** `S_LOCAL` with an `S_DEFRANGE_FRAMEPOINTER_REL`,
//!   `S_DEFRANGE_FRAMEPOINTER_REL_FULL_SCOPE` or `S_DEFRANGE_REGISTER_REL` range, and
//!   the MSVC `S_REGREL32`/`S_BPREL32` records, placed in kuna stack coordinates
//!   (0 is the return-address slot) by [`base_offset`]. Only a slot below the
//!   return address becomes a [`crate::pass::LocalFact`]; one above it is an
//!   incoming argument, which the prototype already describes.
//! - **Register locals.** A non-parameter `S_LOCAL` whose first range is an
//!   `S_DEFRANGE_REGISTER`, and `S_REGISTER`, become
//!   [`crate::pass::RegLocalFact`]s from the range's start.
//! - **Globals.** `S_GDATA32`/`S_LDATA32` with a complete type become typed data.
//! - **Vftables.** A `??_7` public is typed as an array of code pointers, one per
//!   slot its class's virtuals occupy ([`TpiMapper::vftable_slots`]); a
//!   multiply-inheriting class's table for another base (`C::vftable_for_B`)
//!   has that base's slots.
//!
//! ## Where a frame-relative slot is
//!
//! A CodeView record gives an offset from a base register in the procedure body.
//! The x64 stack pointer there is the entry stack pointer less the callee-saved
//! pushes and the fixed allocation `S_FRAMEPROC` records (`cbSaveRegs + cbFrame`,
//! the convention both MSVC and LLVM write); an x64 frame register (`RBP`,
//! `R13`) points where the function's unwind data puts it
//! ([`super::kuna_pdbframe`]); and an i386 `EBP` frame pointer is the entry stack
//! pointer less the pushed `EBP`. Under i386 frame-pointer omission the virtual
//! frame `$T0` is the address of the return address, and the stack pointer is
//! placed like the x64 one, both only when the locals and the parameters share a
//! base: a realigned frame (locals off `$T0`, parameters off `EBP`) addresses its
//! locals off a stack pointer whose distance from the entry is known only at run
//! time. An x64 frame-register slot of a function with no unwind data is left
//! out, and so is a variable spilled in pieces (`spilledUdtMember` or a nonzero
//! `offsetParent`) or one whose slot would reach the return address. Locals of
//! inlined call sites belong to the inlinee and are skipped.
//!
//! Inert unless `pdb` locates a fingerprint-matching `.pdb` beside a PE. Run at
//! the commit (a deferred pass) and only under `option pdbtypes on` (default
//! off), so a default load never reads the type or module streams.

use std::collections::BTreeMap;
use std::rc::Rc;

use object::Object;
use pdb::FallibleIterator;
use unlace_decomp::dtype::{Datatype, type_metatype};

use super::kuna_pdbtpi::TpiMapper;
use crate::pass::{
    AnalysisCtx, AnalysisOutput, AnalysisPass, LocalFact, ModelFact, Phase, RegLocalFact,
    TypedDataFact,
};

const S_FRAMEPROC: u16 = 0x1012;
const S_BPREL32: u16 = 0x110b;
const S_INLINESITE: u16 = 0x114d;
const S_INLINESITE_END: u16 = 0x114e;
const S_INLINESITE2: u16 = 0x115d;
const S_DEFRANGE_REGISTER: u16 = 0x1141;
const S_DEFRANGE_FRAMEPOINTER_REL: u16 = 0x1142;
const S_DEFRANGE_SUBFIELD_REGISTER: u16 = 0x1143;
const S_DEFRANGE_FRAMEPOINTER_REL_FULL_SCOPE: u16 = 0x1144;
const S_DEFRANGE_REGISTER_REL: u16 = 0x1145;

/// Scope bound inside one procedure.
const MAX_SCOPE_DEPTH: u32 = 256;

/// (kuna) The PDB types/prototypes/locals pass (`pdbtypes`).
#[derive(Default)]
pub struct PdbTypesPass;

impl AnalysisPass for PdbTypesPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "pdbtypes"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        super::guarded("pdbtypes", || {
            let mut out = AnalysisOutput::default();
            if let Some((mut pdb, image_base)) = super::open_matched(ctx) {
                collect(&mut pdb, image_base, ctx, &mut out);
            }
            out
        })
    }
}

/// Which x86 family the image is, for the register table and frame math.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub(crate) enum Family {
    X86,
    X64,
    Other,
}

impl Family {
    fn of(arch: object::Architecture) -> Family {
        match arch {
            object::Architecture::I386 => Family::X86,
            object::Architecture::X86_64 => Family::X64,
            _ => Family::Other,
        }
    }
}

/// The base register of a frame-relative record: the stack pointer, or another
/// register by its CodeView number.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub(crate) enum Base {
    StackPointer,
    Register(u16),
}

/// The `S_FRAMEPROC` fields the frame math reads.
#[derive(Clone, Copy, Default, PartialEq, Eq, Debug)]
pub(crate) struct FrameProc {
    pub frame: u32,
    pub saved_regs: u32,
    pub flags: u32,
}

impl FrameProc {
    /// Parse an `S_FRAMEPROC` record (kind included): `cbFrame`, `cbPad`,
    /// `offPad`, `cbSaveRegs`, `offExHdlr`, `sectExHdlr`, `flags`.
    pub(crate) fn parse(raw: &[u8]) -> Option<FrameProc> {
        Some(FrameProc {
            frame: read_u32(raw, 2)?,
            saved_regs: read_u32(raw, 14)?,
            flags: read_u32(raw, 24)?,
        })
    }

    /// The register `S_DEFRANGE_FRAMEPOINTER_REL` offsets are from: the encoded
    /// local or parameter base pointer.
    fn base(&self, family: Family, param: bool) -> Option<Base> {
        let encoded = if param {
            (self.flags >> 16) & 3
        } else {
            (self.flags >> 14) & 3
        };
        match (family, encoded) {
            (Family::X64, 1) => Some(Base::StackPointer),
            (Family::X64, 2) => Some(Base::Register(334)),
            (Family::X64, 3) => Some(Base::Register(341)),
            (Family::X86, 1) => Some(Base::Register(CV_VFRAME)),
            (Family::X86, 2) => Some(Base::Register(22)),
            _ => None,
        }
    }

    /// Whether the locals and the parameters share one base, i.e. the frame
    /// was not realigned: a realigned frame addresses its locals off a stack
    /// pointer whose distance from the entry one is only known at run time.
    fn unaligned(&self) -> bool {
        (self.flags >> 14) & 3 == (self.flags >> 16) & 3
    }
}

/// CodeView's `CV_ALLREG_VFRAME`, the i386 virtual frame `$T0` that frame-pointer
/// omission defines as the address of the return address (`$T0 .raSearch =`).
const CV_VFRAME: u16 = 30006;

/// The base a CodeView register number names.
fn register_base(family: Family, reg: u16) -> Option<Base> {
    match (family, reg) {
        (Family::X64, 335) | (Family::X86, 21) => Some(Base::StackPointer),
        (Family::X64 | Family::X86, _) => Some(Base::Register(reg)),
        _ => None,
    }
}

/// Where `base` points in kuna stack coordinates during the procedure body (0
/// is the return-address slot), when it is known: the x64 stack pointer from
/// `S_FRAMEPROC`, the x64 frame register from the function's unwind data
/// (`frame_register`, [`super::kuna_pdbframe`]), the i386 `EBP` frame.
pub(crate) fn base_offset(
    family: Family,
    base: Base,
    frame: Option<&FrameProc>,
    frame_register: Option<(u16, i64)>,
) -> Option<i64> {
    match (family, base) {
        (Family::X64, Base::StackPointer) => {
            let f = frame?;
            Some(-(i64::from(f.frame) + i64::from(f.saved_regs)))
        }
        (Family::X64, Base::Register(reg)) => frame_register
            .filter(|&(r, _)| r == reg)
            .map(|(_, offset)| offset),
        (Family::X86, Base::Register(22)) => Some(-4),
        (Family::X86, Base::Register(CV_VFRAME)) => frame.filter(|f| f.unaligned()).map(|_| 0),
        (Family::X86, Base::StackPointer) => {
            let f = frame.filter(|f| f.unaligned())?;
            Some(-(i64::from(f.frame) + i64::from(f.saved_regs)))
        }
        _ => None,
    }
}

/// The SLEIGH name of a CodeView x86/x64 register number.
pub(crate) fn sleigh_register(family: Family, reg: u16) -> Option<String> {
    const LOW: [&str; 24] = [
        "AL", "CL", "DL", "BL", "AH", "CH", "DH", "BH", "AX", "CX", "DX", "BX", "SP", "BP", "SI",
        "DI", "EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI",
    ];
    const X64: [&str; 8] = ["RAX", "RBX", "RCX", "RDX", "RSI", "RDI", "RBP", "RSP"];
    const SMALL: [&str; 4] = ["SIL", "DIL", "BPL", "SPL"];
    let name = match (family, reg) {
        (Family::X86 | Family::X64, 1..=24) => LOW[usize::from(reg - 1)].to_string(),
        (Family::X86 | Family::X64, 154..=161) => format!("XMM{}", reg - 154),
        (Family::X64, 252..=259) => format!("XMM{}", reg - 244),
        (Family::X64, 324..=327) => SMALL[usize::from(reg - 324)].to_string(),
        (Family::X64, 328..=335) => X64[usize::from(reg - 328)].to_string(),
        (Family::X64, 336..=343) => format!("R{}", reg - 328),
        (Family::X64, 344..=351) => format!("R{}B", reg - 336),
        (Family::X64, 352..=359) => format!("R{}W", reg - 344),
        (Family::X64, 360..=367) => format!("R{}D", reg - 352),
        _ => return None,
    };
    Some(name)
}

/// The i386 `x86win.cspec` model a CodeView calling convention names.
fn x86_model(cc: u8) -> Option<&'static str> {
    match cc {
        0x00 => Some("__cdecl"),
        0x04 => Some("__fastcall"),
        0x07 => Some("__stdcall"),
        0x0b => Some("__thiscall"),
        _ => None,
    }
}

/// Where one variable lives.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub(crate) enum Loc {
    /// Kuna stack coordinates.
    Stack(i64),
    /// A CodeView register from the given address on.
    Register(u16, u64),
    Unknown,
}

/// A variable record of one procedure.
#[derive(Clone, Debug)]
pub(crate) struct Var {
    pub name: String,
    pub type_index: pdb::TypeIndex,
    /// `Some` when the record says, `None` for the MSVC records that do not.
    pub param: Option<bool>,
    pub loc: Loc,
}

/// One procedure record with the variables at its own level.
#[derive(Clone, Debug)]
pub(crate) struct Proc {
    pub start: u64,
    pub name: String,
    pub type_index: pdb::TypeIndex,
    pub frame: Option<FrameProc>,
    /// The x64 frame register and where it points, from the unwind data.
    pub frame_register: Option<(u16, i64)>,
    pub vars: Vec<Var>,
}

/// Walk one module's symbols into procedures with their variables.
pub(crate) fn module_procs(
    symbols: &mut pdb::SymbolIter<'_>,
    map: &pdb::AddressMap<'_>,
    image_base: u64,
    family: Family,
    frame_registers: &BTreeMap<u64, (u16, i64)>,
) -> Vec<Proc> {
    let mut out: Vec<Proc> = Vec::new();
    let mut current: Option<Proc> = None;
    let mut depth: u32 = 0;
    let mut inline_depth: u32 = 0;
    let mut pending: Option<usize> = None;
    let vma = |offset: pdb::PdbInternalSectionOffset| -> Option<u64> {
        image_base.checked_add(u64::from(offset.to_rva(map)?.0))
    };
    while let Ok(Some(symbol)) = symbols.next() {
        let kind = symbol.raw_kind();
        let raw = symbol.raw_bytes();
        let Some(proc) = current.as_mut() else {
            if super::walk::PROCEDURE_KINDS.contains(&kind) {
                if let Ok(pdb::SymbolData::Procedure(p)) = symbol.parse() {
                    if let Some(start) = vma(p.offset) {
                        current = Some(Proc {
                            start,
                            name: p.name.to_string().into_owned(),
                            type_index: p.type_index,
                            frame: None,
                            frame_register: frame_registers.get(&start).copied(),
                            vars: Vec::new(),
                        });
                        depth = 1;
                        inline_depth = 0;
                        pending = None;
                    }
                }
            }
            continue;
        };
        if symbol.ends_scope() {
            if kind == S_INLINESITE_END {
                inline_depth = inline_depth.saturating_sub(1);
            }
            depth = depth.saturating_sub(1);
            pending = None;
            if depth == 0 {
                out.extend(current.take());
            }
            continue;
        }
        if symbol.starts_scope() {
            depth += 1;
            if matches!(kind, S_INLINESITE | S_INLINESITE2) {
                inline_depth += 1;
            }
            pending = None;
            if depth > MAX_SCOPE_DEPTH {
                current = None;
                depth = 0;
            }
            continue;
        }
        let frame = proc.frame;
        let frame_register = proc.frame_register;
        let place = |base: Option<Base>, off: i64| -> Loc {
            base.and_then(|b| base_offset(family, b, frame.as_ref(), frame_register))
                .and_then(|b| b.checked_add(off))
                .map_or(Loc::Unknown, Loc::Stack)
        };
        match kind {
            S_FRAMEPROC => {
                proc.frame = FrameProc::parse(raw);
                pending = None;
            }
            S_DEFRANGE_FRAMEPOINTER_REL | S_DEFRANGE_FRAMEPOINTER_REL_FULL_SCOPE => {
                let Some(i) = pending else { continue };
                let (Some(off), Some(var)) = (read_i32(raw, 2), proc.vars.get(i)) else {
                    continue;
                };
                if var.loc != Loc::Unknown {
                    continue;
                }
                let base = frame.and_then(|f| f.base(family, var.param == Some(true)));
                let loc = place(base, i64::from(off));
                if let Some(var) = proc.vars.get_mut(i) {
                    var.loc = loc;
                }
            }
            S_DEFRANGE_REGISTER_REL => {
                let Some(i) = pending else { continue };
                let (Some(reg), Some(flags), Some(off)) =
                    (read_u16(raw, 2), read_u16(raw, 4), read_i32(raw, 6))
                else {
                    continue;
                };
                // A spilled piece of an aggregate (`spilledUdtMember`, or a
                // nonzero `offsetParent`): the pieces need not be contiguous,
                // so the variable has no single slot.
                if flags & 1 != 0 || flags >> 4 != 0 {
                    pending = None;
                    continue;
                }
                let loc = place(register_base(family, reg), i64::from(off));
                if let Some(var) = proc.vars.get_mut(i).filter(|v| v.loc == Loc::Unknown) {
                    var.loc = loc;
                }
            }
            S_DEFRANGE_REGISTER => {
                let Some(i) = pending else { continue };
                let (Some(reg), Some(offset), Some(section)) =
                    (read_u16(raw, 2), read_u32(raw, 6), read_u16(raw, 10))
                else {
                    continue;
                };
                let Some(at) = vma(pdb::PdbInternalSectionOffset { offset, section }) else {
                    continue;
                };
                if let Some(var) = proc.vars.get_mut(i).filter(|v| v.loc == Loc::Unknown) {
                    var.loc = Loc::Register(reg, at);
                }
            }
            S_DEFRANGE_SUBFIELD_REGISTER => pending = None,
            _ if inline_depth > 0 => pending = None,
            S_BPREL32 => {
                pending = None;
                let (Some(off), Some(ti)) = (read_i32(raw, 2), read_u32(raw, 6)) else {
                    continue;
                };
                proc.vars.push(Var {
                    name: read_cstr(raw, 10),
                    type_index: pdb::TypeIndex(ti),
                    param: None,
                    loc: place(
                        register_base(family, if family == Family::X64 { 334 } else { 22 }),
                        i64::from(off),
                    ),
                });
            }
            _ => {
                pending = None;
                match symbol.parse() {
                    Ok(pdb::SymbolData::Local(l)) => {
                        proc.vars.push(Var {
                            name: l.name.to_string().into_owned(),
                            type_index: l.type_index,
                            param: Some(l.flags.isparam),
                            loc: Loc::Unknown,
                        });
                        pending = Some(proc.vars.len() - 1);
                    }
                    Ok(pdb::SymbolData::RegisterRelative(r)) => {
                        proc.vars.push(Var {
                            name: r.name.to_string().into_owned(),
                            type_index: r.type_index,
                            param: None,
                            loc: place(register_base(family, r.register.0), i64::from(r.offset)),
                        });
                    }
                    Ok(pdb::SymbolData::RegisterVariable(r)) => {
                        let start = proc.start;
                        proc.vars.push(Var {
                            name: r.name.to_string().into_owned(),
                            type_index: r.type_index,
                            param: None,
                            loc: Loc::Register(r.register.0, start),
                        });
                    }
                    _ => {}
                }
            }
        }
    }
    out
}

/// The parameter records of `proc` in order: the flagged ones, or for the MSVC
/// records that carry no flag, the ones above the return address.
pub(crate) fn parameters(proc: &Proc) -> Vec<&Var> {
    proc.vars
        .iter()
        .filter(|v| match v.param {
            Some(p) => p,
            None => matches!(v.loc, Loc::Stack(off) if off > 0),
        })
        .collect()
}

/// Distinct names in one function: a repeated name gets `_1`, `_2`, ...
#[derive(Default)]
struct Names(BTreeMap<String, u32>);

impl Names {
    fn unique(&mut self, name: &str) -> String {
        let n = self.0.entry(name.to_string()).or_insert(0);
        *n += 1;
        if *n == 1 {
            name.to_string()
        } else {
            format!("{name}_{}", *n - 1)
        }
    }
}

/// A global's type is worth committing when it has a size and says more than a
/// raw word.
fn whole(t: &Datatype) -> bool {
    t.get_size() > 0
        && !t.is_incomplete()
        && !matches!(
            t.get_metatype(),
            type_metatype::TYPE_VOID | type_metatype::TYPE_UNKNOWN
        )
}

fn collect(
    pdb: &mut pdb::PDB<'static, std::fs::File>,
    image_base: u64,
    ctx: &AnalysisCtx,
    out: &mut AnalysisOutput,
) {
    let family = Family::of(ctx.file.architecture());
    let (Ok(map), Ok(info), Ok(dbi)) = (
        pdb.address_map(),
        pdb.type_information(),
        pdb.debug_information(),
    ) else {
        return;
    };
    let (_, word_size) = ctx.arch.data_org();
    let frame_registers = if family == Family::X64 {
        super::kuna_pdbframe::x64_frame_registers(ctx.bytes)
    } else {
        BTreeMap::new()
    };
    let mut tpi = TpiMapper::new(&info, ctx.arch.types(), word_size);
    let mut globals: BTreeMap<u64, TypedDataFact> = BTreeMap::new();

    let mut procs: Vec<Proc> = Vec::new();
    if let Ok(mut modules) = dbi.modules() {
        while let Ok(Some(module)) = modules.next() {
            let Ok(Some(module_info)) = pdb.module_info(&module) else {
                continue;
            };
            if let Ok(mut symbols) = module_info.symbols() {
                procs.extend(module_procs(
                    &mut symbols,
                    &map,
                    image_base,
                    family,
                    &frame_registers,
                ));
            }
            if let Ok(mut symbols) = module_info.symbols() {
                collect_data(&mut symbols, &map, image_base, &mut tpi, &mut globals);
            }
        }
    }
    if let Ok(table) = pdb.global_symbols() {
        collect_data(&mut table.iter(), &map, image_base, &mut tpi, &mut globals);
        collect_vftables(&mut table.iter(), &map, image_base, &mut tpi, &mut globals);
    }
    procs.sort_by_key(|p| p.start);
    for group in procs.chunk_by(|a, b| a.start == b.start) {
        // Identical-COMDAT folding gives several procedures one address; when
        // their types differ the address has no single prototype or frame.
        if group.iter().all(|p| p.type_index == group[0].type_index) {
            emit_proc(&group[0], family, &mut tpi, out);
        }
    }
    out.typed_data.extend(globals.into_values());
}

fn emit_proc(proc: &Proc, family: Family, tpi: &mut TpiMapper<'_, '_>, out: &mut AnalysisOutput) {
    if let Some(mut ty) = tpi.procedure(proc.type_index) {
        let params = parameters(proc);
        if params.len() == ty.pieces.intypes.len() {
            ty.pieces.innames = params.iter().map(|v| v.name.clone()).collect();
        }
        if ty.has_this {
            if let Some(first) = ty.pieces.innames.first_mut().filter(|n| n.is_empty()) {
                *first = "this".to_string();
            }
        }
        ty.pieces.name = proc.name.clone();
        if family == Family::X86 {
            if let Some(model) = x86_model(ty.calling_convention) {
                out.models.push(ModelFact {
                    func_addr: proc.start,
                    model,
                    leaf_stack_inputs: None,
                    maybe_self: false,
                });
            }
        }
        out.prototypes_at.push((proc.start, ty.pieces));
    }
    let mut names = Names::default();
    for var in &proc.vars {
        if var.name.is_empty() {
            continue;
        }
        match var.loc {
            Loc::Stack(off) if off < 0 => {
                let Some(t) = tpi.map(var.type_index).filter(|t| t.get_size() > 0) else {
                    continue;
                };
                if off.saturating_add(i64::from(t.get_size())) > 0 {
                    continue;
                }
                out.locals.push(LocalFact {
                    func_addr: proc.start,
                    name: names.unique(&var.name),
                    type_: t,
                    stack_offset: off,
                });
            }
            Loc::Register(reg, start) if var.param != Some(true) => {
                let Some(name) = sleigh_register(family, reg) else {
                    continue;
                };
                let Some(t) = tpi.map(var.type_index).filter(|t| t.get_size() > 0) else {
                    continue;
                };
                out.dwarf_reg_locals.push(RegLocalFact {
                    func_addr: proc.start,
                    name: names.unique(&var.name),
                    type_: t,
                    dwarf_reg: reg,
                    reg: name,
                    start,
                });
            }
            _ => {}
        }
    }
}

/// `S_GDATA32`/`S_LDATA32` records with a complete type, the first per address.
fn collect_data(
    symbols: &mut pdb::SymbolIter<'_>,
    map: &pdb::AddressMap<'_>,
    image_base: u64,
    tpi: &mut TpiMapper<'_, '_>,
    globals: &mut BTreeMap<u64, TypedDataFact>,
) {
    while let Ok(Some(symbol)) = symbols.next() {
        let Ok(pdb::SymbolData::Data(d)) = symbol.parse() else {
            continue;
        };
        let Some(addr) = d
            .offset
            .to_rva(map)
            .and_then(|rva| image_base.checked_add(u64::from(rva.0)))
        else {
            continue;
        };
        let name = d.name.to_string().into_owned();
        if name.is_empty() || globals.contains_key(&addr) {
            continue;
        }
        if let Some(t) = tpi.map(d.type_index).filter(|t| whole(t)) {
            globals.insert(
                addr,
                TypedDataFact {
                    addr,
                    name,
                    type_: t,
                },
            );
        }
    }
}

/// Each `??_7` vftable public whose class the TPI stream describes, typed as its
/// slots of code pointers. A multiply-inheriting class has one table per base
/// that brings a table of its own (`C::vftable_for_B`); its slots are the
/// base's, the class's new virtuals going into its primary table.
fn collect_vftables(
    symbols: &mut pdb::SymbolIter<'_>,
    map: &pdb::AddressMap<'_>,
    image_base: u64,
    tpi: &mut TpiMapper<'_, '_>,
    globals: &mut BTreeMap<u64, TypedDataFact>,
) {
    while let Ok(Some(symbol)) = symbols.next() {
        let Ok(pdb::SymbolData::Public(p)) = symbol.parse() else {
            continue;
        };
        if p.function || !p.name.as_bytes().starts_with(b"??_7") {
            continue;
        }
        let raw = p.name.to_string();
        let (class, base) = match vftable_names(&raw) {
            Some(names) => names,
            None => {
                let Some(demangled) = crate::demangle::demangle_name(&raw) else {
                    continue;
                };
                let Some(class) = vftable_class(&demangled) else {
                    continue;
                };
                (class.to_string(), None)
            }
        };
        let Some(addr) = p
            .offset
            .to_rva(map)
            .and_then(|rva| image_base.checked_add(u64::from(rva.0)))
        else {
            continue;
        };
        if globals.contains_key(&addr) {
            continue;
        }
        let owner = base.as_deref().unwrap_or(&class);
        let Some(slots) = tpi.vftable_slots(owner).and_then(|s| i32::try_from(s).ok()) else {
            continue;
        };
        let Some(slot) = tpi.code_pointer() else {
            continue;
        };
        let Ok(t) = tpi.factory().get_type_array(slots, Rc::clone(&slot)) else {
            continue;
        };
        globals.insert(
            addr,
            TypedDataFact {
                addr,
                name: match &base {
                    None => format!("{class}::vftable"),
                    Some(b) => format!(
                        "{class}::vftable_for_{}",
                        b.rsplit("::").next().unwrap_or(b)
                    ),
                },
                type_: t,
            },
        );
    }
}

/// The class of a `??_7` vftable symbol spelled with plain identifiers, and
/// the base it serves when it is not the class's primary table:
/// `??_7Square@geo@@6B@` is `geo::Square`'s own, `??_7C@@6BB@ns@@@` is `C`'s
/// table for its base `ns::B`. `None` for any other spelling (a template, a
/// back-reference), which the demangler path handles for a primary table.
pub(crate) fn vftable_names(raw: &str) -> Option<(String, Option<String>)> {
    let (scope, tail) = raw.strip_prefix("??_7")?.split_once("@@6B")?;
    let class = qualified(scope)?;
    let base = match tail {
        "@" => None,
        t => Some(qualified(t.strip_suffix("@@@")?)?),
    };
    Some((class, base))
}

/// `Square@geo` as `geo::Square`; `None` unless every component is a plain
/// identifier.
fn qualified(scope: &str) -> Option<String> {
    let parts: Vec<&str> = scope.split('@').collect();
    let plain = |p: &&str| {
        p.bytes().next().is_some_and(|b| !b.is_ascii_digit())
            && p.bytes().all(|b| b.is_ascii_alphanumeric() || b == b'_')
    };
    if !parts.iter().all(plain) {
        return None;
    }
    Some(parts.into_iter().rev().collect::<Vec<_>>().join("::"))
}

/// The class a demangled vftable name belongs to (`geo::Square` for the table
/// of `geo::Square`).
pub(crate) fn vftable_class(demangled: &str) -> Option<&str> {
    let name = demangled.strip_prefix("const ").unwrap_or(demangled);
    if name.contains("{for") {
        return None;
    }
    let class = name
        .strip_suffix("::`vftable'")
        .or_else(|| name.strip_suffix("::vftable"))?;
    (!class.is_empty()).then_some(class)
}

fn read_u16(raw: &[u8], at: usize) -> Option<u16> {
    Some(u16::from_le_bytes(
        raw.get(at..at.checked_add(2)?)?.try_into().ok()?,
    ))
}

fn read_u32(raw: &[u8], at: usize) -> Option<u32> {
    Some(u32::from_le_bytes(
        raw.get(at..at.checked_add(4)?)?.try_into().ok()?,
    ))
}

fn read_i32(raw: &[u8], at: usize) -> Option<i32> {
    read_u32(raw, at).map(|v| v as i32)
}

fn read_cstr(raw: &[u8], at: usize) -> String {
    let tail = raw.get(at..).unwrap_or(&[]);
    let end = tail.iter().position(|&b| b == 0).unwrap_or(tail.len());
    String::from_utf8_lossy(&tail[..end]).into_owned()
}

#[cfg(test)]
mod tests {
    use super::*;

    fn procs(name: &str, family: Family) -> Vec<Proc> {
        let path = format!("{}/tests/fixtures/{name}", env!("CARGO_MANIFEST_DIR"));
        let file = std::fs::File::open(path).expect("open the fixture pdb");
        let mut pdb = pdb::PDB::open(file).expect("parse the fixture pdb");
        let map = pdb.address_map().expect("address map");
        let dbi = pdb.debug_information().expect("dbi");
        let mut modules = dbi.modules().expect("modules");
        let mut out = Vec::new();
        while let Ok(Some(module)) = modules.next() {
            let Ok(Some(info)) = pdb.module_info(&module) else {
                continue;
            };
            let mut symbols = info.symbols().expect("symbols");
            out.extend(module_procs(
                &mut symbols,
                &map,
                0x1000,
                family,
                &BTreeMap::new(),
            ));
        }
        out
    }

    fn vars(procs: &[Proc], name: &str) -> Vec<(String, Loc)> {
        let p = procs
            .iter()
            .find(|p| p.name == name)
            .expect("procedure present");
        p.vars.iter().map(|v| (v.name.clone(), v.loc)).collect()
    }

    /// x64: the clang locals of `rect_area` sit below the return address by the
    /// frame `S_FRAMEPROC` records (40 bytes, nothing saved).
    #[test]
    fn x64_stack_slots_follow_the_frame_size() {
        let procs = procs("pdb_types_x86_64.pdb", Family::X64);
        assert_eq!(
            vars(&procs, "rect_area"),
            [
                ("r".to_string(), Loc::Stack(-16)),
                ("scale".to_string(), Loc::Stack(-4)),
                ("w".to_string(), Loc::Stack(-20)),
                ("h".to_string(), Loc::Stack(-24)),
                ("buf".to_string(), Loc::Stack(-40)),
            ]
        );
    }

    /// i386: an `EBP` frame puts the arguments above the return address and the
    /// locals below the saved `EBP`.
    #[test]
    fn x86_frame_pointer_slots() {
        let procs = procs("pdb_types_i386.pdb", Family::X86);
        let p = procs
            .iter()
            .find(|p| p.name == "rect_area")
            .expect("rect_area");
        let params: Vec<&str> = parameters(p).iter().map(|v| v.name.as_str()).collect();
        assert_eq!(params, ["r", "scale"]);
        assert_eq!(
            vars(&procs, "rect_area"),
            [
                ("r".to_string(), Loc::Stack(4)),
                ("scale".to_string(), Loc::Stack(8)),
                ("w".to_string(), Loc::Stack(-8)),
                ("h".to_string(), Loc::Stack(-12)),
                ("buf".to_string(), Loc::Stack(-28)),
            ]
        );
    }

    #[test]
    fn frame_bases() {
        let f = FrameProc {
            frame: 32,
            saved_regs: 8,
            flags: (1 << 14) | (1 << 16),
        };
        assert_eq!(f.base(Family::X64, false), Some(Base::StackPointer));
        let rbp = Base::Register(334);
        assert_eq!(
            base_offset(Family::X64, Base::StackPointer, Some(&f), None),
            Some(-40)
        );
        assert_eq!(base_offset(Family::X64, rbp, Some(&f), None), None);
        assert_eq!(
            base_offset(Family::X64, rbp, None, Some((334, -8))),
            Some(-8)
        );
        assert_eq!(base_offset(Family::X64, rbp, None, Some((341, -8))), None);
        assert_eq!(
            base_offset(Family::X86, Base::Register(22), None, None),
            Some(-4)
        );
        assert_eq!(
            base_offset(Family::X86, Base::StackPointer, Some(&f), None),
            Some(-40)
        );
        let vframe = Base::Register(CV_VFRAME);
        assert_eq!(f.base(Family::X86, false), Some(vframe));
        assert_eq!(base_offset(Family::X86, vframe, Some(&f), None), Some(0));
        // A realigned frame: locals off `$T0`, parameters off `EBP`.
        let realigned = FrameProc {
            flags: (1 << 14) | (2 << 16),
            ..f
        };
        assert_eq!(
            base_offset(Family::X86, vframe, Some(&realigned), None),
            None
        );
        assert_eq!(
            base_offset(Family::X86, Base::StackPointer, Some(&realigned), None),
            None
        );
    }

    /// i386 frame-pointer omission: arguments off `$T0` sit above the return
    /// address, an array split into scattered pieces gets no slot, and a
    /// realigned frame's `$T0` locals are left alone while its `EBP` argument
    /// is placed.
    #[test]
    fn x86_vframe_slots() {
        let procs = procs("fpo_i386.pdb", Family::X86);
        assert_eq!(
            vars(&procs, "sum_buf"),
            [
                ("n".to_string(), Loc::Stack(4)),
                ("k".to_string(), Loc::Stack(8)),
                ("buf".to_string(), Loc::Unknown),
            ]
        );
        assert_eq!(
            vars(&procs, "aligned"),
            [
                ("n".to_string(), Loc::Stack(4)),
                ("a".to_string(), Loc::Unknown),
            ]
        );
    }

    #[test]
    fn register_names() {
        assert_eq!(sleigh_register(Family::X64, 330).as_deref(), Some("RCX"));
        assert_eq!(sleigh_register(Family::X64, 18).as_deref(), Some("ECX"));
        assert_eq!(sleigh_register(Family::X64, 336).as_deref(), Some("R8"));
        assert_eq!(sleigh_register(Family::X64, 367).as_deref(), Some("R15D"));
        assert_eq!(sleigh_register(Family::X64, 259).as_deref(), Some("XMM15"));
        assert_eq!(sleigh_register(Family::X86, 330), None);
        assert_eq!(sleigh_register(Family::Other, 18), None);
    }

    #[test]
    fn raw_vftable_names() {
        assert_eq!(
            vftable_names("??_7Square@geo@@6B@"),
            Some(("geo::Square".to_string(), None))
        );
        assert_eq!(
            vftable_names("??_7C@@6BB@ns@@@"),
            Some(("C".to_string(), Some("ns::B".to_string())))
        );
        assert_eq!(vftable_names("??_7C@ns@@6BB@1@@"), None, "back-reference");
        assert_eq!(vftable_names("??_7?$V@H@@6B@"), None, "template");
        assert_eq!(vftable_names("?area@Square@geo@@UEBAHXZ"), None);
    }

    #[test]
    fn demangled_vftable_names() {
        assert_eq!(vftable_class("geo::Square::`vftable'"), Some("geo::Square"));
        assert_eq!(
            vftable_class("const geo::Shape::`vftable'"),
            Some("geo::Shape")
        );
        assert_eq!(vftable_class("A::`vftable'{for `B'}"), None);
        assert_eq!(vftable_class("geo::Square::area"), None);
    }

    #[test]
    fn repeated_local_names_are_suffixed() {
        let mut n = Names::default();
        assert_eq!(n.unique("i"), "i");
        assert_eq!(n.unique("i"), "i_1");
        assert_eq!(n.unique("j"), "j");
    }
}
