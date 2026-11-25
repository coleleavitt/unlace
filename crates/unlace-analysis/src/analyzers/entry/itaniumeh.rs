//! (unlace `itaniumeh`) The Itanium call-site table, decoded for the decompiler.
//!
//! For every LSDA (from an `.eh_frame` FDE, or on ARM32 from an `.ARM.extab`
//! entry), each call-site record that has a landing pad becomes an
//! [`EhCallSite`]: the covered range, the pad, and the pad's clauses from the
//! action chain (cleanup, `catch (T)` named from the `typeinfo` symbol or its
//! name string, `catch (...)`, exception specification). The selector
//! value of a clause is its action filter, which is what the pad compares the
//! selector register against. Flow consumes the table (`p2_lift/itaniumeh.rs`).

use std::collections::HashMap;

use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable, SectionKind};
use unlace_decomp::itaniumeh::{EhCallSite, EhClause};

use super::{DW_EH_PE_OMIT, Lsda, decode_lsda, encoded_size, for_each_fde_lsda, read_sleb128};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// Itanium call sites for the `itaniumeh` exceptional edges. Facts are computed
/// at load and committed only under `--option itaniumeh on`.
pub struct ItaniumEhPass;

impl AnalysisPass for ItaniumEhPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "itaniumeh"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            eh_call_sites: collect_call_sites(ctx.file),
            ..AnalysisOutput::default()
        }
    }
}

/// Every call-site record with a landing pad, with its clauses. An LSDA is
/// reached through an `.eh_frame` FDE or, on ARM32, through the generic-model
/// `.ARM.extab` entry an `.ARM.exidx` entry names, and is read from whichever
/// section holds it.
pub fn collect_call_sites(file: &object::File) -> Vec<EhCallSite> {
    let mut out = Vec::new();
    let ptr_size = if file.is_64() { 8 } else { 4 };
    let mut lsdas = Vec::new();
    for_each_fde_lsda(file, ptr_size, &mut |pc_begin, lsda| {
        lsdas.push((pc_begin, lsda))
    });
    lsdas.extend(
        super::armexidx::scan(file)
            .into_iter()
            .filter_map(|e| Some((e.start, e.lsda?))),
    );
    if lsdas.is_empty() {
        return out;
    }
    let image = Image::new(file);
    let names = TypeNames::new(file);
    for (pc_begin, lsda_ptr) in lsdas {
        let Some((vma, data)) = image.section(lsda_ptr) else {
            continue;
        };
        let Some(lsda) = decode_lsda(data, vma, lsda_ptr, pc_begin, ptr_size, image.le) else {
            continue;
        };
        for cs in lsda
            .call_sites
            .iter()
            .filter(|cs| cs.pad != 0 && cs.len != 0)
        {
            out.push(EhCallSite {
                start: cs.start,
                end: cs.start + cs.len,
                pad: cs.pad,
                clauses: clauses(&image, vma, data, &lsda, cs.action, &names),
            });
        }
    }
    out.sort_by_key(|s| (s.start, s.end));
    out.dedup();
    out
}

/// The allocated sections of the image, for reads by address.
struct Image<'a> {
    sections: Vec<(u64, &'a [u8])>,
    ptr_size: usize,
    le: bool,
    arm: bool,
}

impl<'a> Image<'a> {
    fn new(file: &'a object::File<'a>) -> Self {
        let mut sections: Vec<(u64, &'a [u8])> = file
            .sections()
            .filter(|s| {
                !matches!(
                    s.kind(),
                    SectionKind::Metadata | SectionKind::Other | SectionKind::Debug
                )
            })
            .filter_map(|s| Some((s.address(), s.data().ok()?)))
            .filter(|(vma, data)| *vma != 0 && !data.is_empty())
            .collect();
        sections.sort_by_key(|s| s.0);
        Image {
            sections,
            ptr_size: if file.is_64() { 8 } else { 4 },
            le: file.is_little_endian(),
            arm: file.architecture() == object::Architecture::Arm,
        }
    }

    /// The section holding `vma`, as `(section address, bytes)`.
    fn section(&self, vma: u64) -> Option<(u64, &'a [u8])> {
        let i = self
            .sections
            .partition_point(|s| s.0 <= vma)
            .checked_sub(1)?;
        let (base, data) = self.sections[i];
        (vma - base < data.len() as u64).then_some((base, data))
    }

    fn pointer(&self, vma: u64) -> Option<u64> {
        let (base, data) = self.section(vma)?;
        let off = usize::try_from(vma - base).ok()?;
        let raw = data.get(off..off.checked_add(self.ptr_size)?)?;
        Some(if self.ptr_size == 8 {
            super::read_u64(raw, self.le)
        } else {
            super::read_u32(raw, self.le) as u64
        })
    }

    fn c_string(&self, vma: u64) -> Option<&'a str> {
        let (base, data) = self.section(vma)?;
        let rest = data.get(usize::try_from(vma - base).ok()?..)?;
        let len = rest.iter().take(4096).position(|&b| b == 0)?;
        std::str::from_utf8(&rest[..len]).ok()
    }
}

/// The clauses of the action chain starting at 1-based `action` (0 = cleanup).
fn clauses(
    image: &Image,
    vma: u64,
    data: &[u8],
    lsda: &Lsda,
    action: u64,
    names: &TypeNames,
) -> Vec<EhClause> {
    if action == 0 {
        return vec![EhClause::Cleanup];
    }
    let mut out = Vec::new();
    let mut p = lsda.action_table + (action as usize - 1);
    for _ in 0..64 {
        let Some((filter, np)) = read_sleb128(data, p) else {
            break;
        };
        let Some((disp, _)) = read_sleb128(data, np) else {
            break;
        };
        let clause = match filter {
            0 => EhClause::Cleanup,
            f if f < 0 => EhClause::Filter { selector: f },
            f => match lsda
                .ttype
                .and_then(|(enc, end)| type_entry(image, vma, data, enc, end, f as usize, names))
            {
                Some(0) => EhClause::CatchAll { selector: f },
                Some(ti) => EhClause::Catch {
                    selector: f,
                    type_name: names.type_name(image, ti),
                },
                None => EhClause::Catch {
                    selector: f,
                    type_name: None,
                },
            },
        };
        if !out.contains(&clause) {
            out.push(clause);
        }
        if disp == 0 {
            break;
        }
        p = (np as i64 + disp) as usize;
    }
    out
}

/// The type-table entry `filter` (counted back from the table's end): the
/// address of the `typeinfo`, or of its pointer slot (marked [`INDIRECT`]).
/// 0 is `catch (...)`. An entry a dynamic relocation fills is its own slot. An
/// ARM32 `absptr` entry is an `R_ARM_TARGET2` word: a self-relative offset to
/// the slot (Linux) or to the object (bare metal, which [`TypeNames`] also
/// tries).
fn type_entry(
    image: &Image,
    vma: u64,
    data: &[u8],
    enc: u8,
    end: usize,
    filter: usize,
    names: &TypeNames,
) -> Option<u64> {
    if enc == DW_EH_PE_OMIT {
        return None;
    }
    let size = encoded_size(enc, image.ptr_size, &[]);
    let off = end.checked_sub(filter.checked_mul(size)?)?;
    let raw = data.get(off..off.checked_add(size)?)?;
    let place = vma + off as u64;
    if names.slot.contains_key(&place) || names.slot_target.contains_key(&place) {
        return Some(place | INDIRECT);
    }
    let mut v = 0u64;
    for (i, b) in raw.iter().enumerate() {
        v |= (*b as u64) << (8 * i);
    }
    if v == 0 {
        return Some(0);
    }
    if image.arm && enc & 0x7f == 0 && size == 4 {
        let target = place.wrapping_add(v as u32 as i32 as i64 as u64) & 0xffff_ffff;
        return Some(target | INDIRECT);
    }
    if enc & 0x0f == 0x0b && size == 4 {
        v = v as u32 as i32 as i64 as u64;
    }
    if enc & 0x70 == 0x10 {
        v = v.wrapping_add(place);
    }
    Some(v | if enc & 0x80 != 0 { INDIRECT } else { 0 })
}

/// Marks a type-table value as the address of a pointer slot.
const INDIRECT: u64 = 1 << 63;

/// What the image says about its `std::type_info` objects.
struct TypeNames {
    /// Address -> `_ZTI` symbol defined there.
    at: HashMap<u64, String>,
    /// Slot -> the symbol a dynamic relocation binds there.
    slot: HashMap<u64, String>,
    /// Slot -> the address a symbol-less dynamic relocation writes there.
    slot_target: HashMap<u64, u64>,
}

impl TypeNames {
    fn new(file: &object::File) -> TypeNames {
        let mut at = HashMap::new();
        for sym in file.symbols().chain(file.dynamic_symbols()) {
            if let Ok(name) = sym.name()
                && name.starts_with("_ZTI")
                && sym.address() != 0
            {
                at.insert(sym.address(), name.to_string());
            }
        }
        let mut slot = HashMap::new();
        let mut slot_target = HashMap::new();
        if let Some(relocs) = file.dynamic_relocations() {
            let dynsym = file.dynamic_symbol_table();
            for (off, r) in relocs {
                match r.target() {
                    object::RelocationTarget::Symbol(idx) => {
                        if let Some(name) = dynsym
                            .as_ref()
                            .and_then(|t| t.symbol_by_index(idx).ok())
                            .and_then(|s| s.name().ok().map(str::to_string))
                        {
                            slot.insert(off, name);
                        }
                    }
                    object::RelocationTarget::Absolute if !r.has_implicit_addend() => {
                        slot_target.insert(off, r.addend() as u64);
                    }
                    _ => {}
                }
            }
        }
        TypeNames {
            at,
            slot,
            slot_target,
        }
    }

    /// The pointer the loader leaves in `slot`.
    fn slot_value(&self, image: &Image, slot: u64) -> Option<u64> {
        self.slot_target
            .get(&slot)
            .copied()
            .or_else(|| image.pointer(slot))
            .filter(|&v| v != 0)
    }

    /// The type a `type_info` object at `object` describes: its `_ZTI`
    /// symbol, else its own name string (its second word), which survives
    /// stripping.
    fn object_type(&self, image: &Image, object: u64) -> Option<String> {
        if let Some(sym) = self.at.get(&object) {
            return symbol_type(sym);
        }
        let name = self.slot_value(image, object + image.ptr_size as u64)?;
        crate::demangle::demangle_typeinfo_name(image.c_string(name)?)
    }

    fn type_name(&self, image: &Image, v: u64) -> Option<String> {
        let addr = v & !INDIRECT;
        if v & INDIRECT != 0 {
            if let Some(sym) = self.slot.get(&addr) {
                return symbol_type(sym);
            }
            if let Some(t) = self
                .slot_value(image, addr)
                .and_then(|o| self.object_type(image, o))
            {
                return Some(t);
            }
        }
        self.object_type(image, addr)
    }
}

/// `std::runtime_error` for `_ZTISt13runtime_error`.
fn symbol_type(sym: &str) -> Option<String> {
    let d = crate::demangle::demangle_raw(sym)?;
    d.strip_prefix("typeinfo for ").map(str::to_string)
}

/// (unlace `ehnote`) A header note on every function whose landing pads flow does
/// not show: how many call sites unwind to one, what the pads do, and the
/// personality that reads them. Committed only when `ehnote` is on and
/// `itaniumeh` (which shows the pads) is off.
pub struct EhNotePass;

impl AnalysisPass for EhNotePass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "ehnote"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            header_comments: eh_notes(ctx.file),
            ..AnalysisOutput::default()
        }
    }
}

/// One note per FDE with landing pads, at the FDE's start.
pub fn eh_notes(file: &object::File) -> Vec<crate::pass::CommentFact> {
    let mut out = Vec::new();
    let Some(gcc) = file.section_by_name(".gcc_except_table") else {
        return out;
    };
    let gcc_vma = gcc.address();
    let Ok(gcc_data) = gcc.data() else {
        return out;
    };
    let ptr_size = if file.is_64() { 8 } else { 4 };
    let image = Image::new(file);
    let names = TypeNames::new(file);
    super::for_each_fde_lsda_classified(file, ptr_size, &mut |pc_begin, lsda_ptr, personality| {
        if !personality.reads_itanium_lsda() {
            out.push(crate::pass::CommentFact {
                func_addr: pc_begin,
                addr: pc_begin,
                text: "eh: SjLj exception table (call-site indices); landing pads not shown"
                    .to_string(),
            });
            return;
        }
        let Some(lsda) = decode_lsda(
            gcc_data,
            gcc_vma,
            lsda_ptr,
            pc_begin,
            ptr_size,
            file.is_little_endian(),
        ) else {
            return;
        };
        let sites: Vec<_> = lsda
            .call_sites
            .iter()
            .filter(|cs| cs.pad != 0 && cs.len != 0)
            .collect();
        if sites.is_empty() {
            return;
        }
        let mut cleanup = 0usize;
        let mut filters = 0usize;
        let mut catches: Vec<String> = Vec::new();
        for cs in &sites {
            for clause in clauses(&image, gcc_vma, gcc_data, &lsda, cs.action, &names) {
                let name = match clause {
                    EhClause::Cleanup => {
                        cleanup += 1;
                        continue;
                    }
                    EhClause::Catch { type_name, .. } => {
                        type_name.unwrap_or_else(|| "?".to_string())
                    }
                    EhClause::CatchAll { .. } => "...".to_string(),
                    EhClause::Filter { .. } => {
                        filters += 1;
                        continue;
                    }
                };
                if !catches.contains(&name) {
                    catches.push(name);
                }
            }
        }
        let mut what = Vec::new();
        if cleanup > 0 {
            what.push(format!("{cleanup} cleanup"));
        }
        if !catches.is_empty() {
            what.push(format!("catch {}", catches.join(", ")));
        }
        if filters > 0 {
            what.push(format!("{filters} exception specification"));
        }
        let runtime = match personality {
            super::Personality::Unknown => String::new(),
            p => format!("{} ", p.label()),
        };
        out.push(crate::pass::CommentFact {
            func_addr: pc_begin,
            addr: pc_begin,
            text: format!(
                "eh: {} call site{} to {}landing pads ({}); not shown",
                sites.len(),
                if sites.len() == 1 {
                    " unwinds"
                } else {
                    "s unwind"
                },
                runtime,
                what.join("; ")
            ),
        });
    });
    out
}

#[cfg(test)]
mod tests;
