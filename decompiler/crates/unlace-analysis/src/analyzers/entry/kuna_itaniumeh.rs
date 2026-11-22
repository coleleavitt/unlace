//! (kuna `itaniumeh`) The Itanium call-site table, decoded for the decompiler.
//!
//! For every `.eh_frame` FDE with an LSDA, each `.gcc_except_table` call-site
//! record that has a landing pad becomes an [`EhCallSite`]: the covered range,
//! the pad, and the pad's clauses from the action chain (cleanup, `catch (T)`
//! by `typeinfo` symbol, `catch (...)`, exception specification). The selector
//! value of a clause is its action filter, which is what the pad compares the
//! selector register against. Flow consumes the table (`p2_lift/kuna_itaniumeh.rs`).

use std::collections::HashMap;

use object::{Object, ObjectSection, ObjectSymbol, ObjectSymbolTable};
use unlace_decomp::kuna_itaniumeh::{EhCallSite, EhClause};

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

/// Every call-site record with a landing pad, with its clauses.
pub fn collect_call_sites(file: &object::File) -> Vec<EhCallSite> {
    let mut out = Vec::new();
    let Some(gcc) = file.section_by_name(".gcc_except_table") else {
        return out;
    };
    let gcc_vma = gcc.address();
    let Ok(gcc_data) = gcc.data() else {
        return out;
    };
    let ptr_size = if file.is_64() { 8 } else { 4 };
    let names = TypeNames::new(file);
    for_each_fde_lsda(file, ptr_size, &mut |pc_begin, lsda_ptr| {
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
        for cs in lsda
            .call_sites
            .iter()
            .filter(|cs| cs.pad != 0 && cs.len != 0)
        {
            let clauses = clauses(gcc_data, gcc_vma, &lsda, cs.action, ptr_size, &names);
            out.push(EhCallSite {
                start: cs.start,
                end: cs.start + cs.len,
                pad: cs.pad,
                clauses,
            });
        }
    });
    out.sort_by_key(|s| (s.start, s.end));
    out.dedup();
    out
}

/// The clauses of the action chain starting at 1-based `action` (0 = cleanup).
fn clauses(
    gcc: &[u8],
    gcc_vma: u64,
    lsda: &Lsda,
    action: u64,
    ptr_size: usize,
    names: &TypeNames,
) -> Vec<EhClause> {
    if action == 0 {
        return vec![EhClause::Cleanup];
    }
    let mut out = Vec::new();
    let mut p = lsda.action_table + (action as usize - 1);
    for _ in 0..64 {
        let Some((filter, np)) = read_sleb128(gcc, p) else {
            break;
        };
        let Some((disp, _)) = read_sleb128(gcc, np) else {
            break;
        };
        let clause = match filter {
            0 => EhClause::Cleanup,
            f if f < 0 => EhClause::Filter { selector: f },
            f => match lsda
                .ttype
                .and_then(|(enc, end)| type_entry(gcc, gcc_vma, enc, end, f as usize, ptr_size))
            {
                Some(0) => EhClause::CatchAll { selector: f },
                Some(ti) => EhClause::Catch {
                    selector: f,
                    type_name: names.type_name(ti),
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
/// address of the `typeinfo`, or of its GOT-style slot when the encoding is
/// indirect (`TypeNames` resolves both). 0 is `catch (...)`.
fn type_entry(
    gcc: &[u8],
    gcc_vma: u64,
    enc: u8,
    end: usize,
    filter: usize,
    ptr_size: usize,
) -> Option<u64> {
    if enc == DW_EH_PE_OMIT {
        return None;
    }
    let size = encoded_size(enc, ptr_size, &[]);
    let off = end.checked_sub(filter * size)?;
    let raw = gcc.get(off..off + size)?;
    let mut v = 0u64;
    for (i, b) in raw.iter().enumerate() {
        v |= (*b as u64) << (8 * i);
    }
    if v == 0 {
        return Some(0);
    }
    if enc & 0x0f == 0x0b && size == 4 {
        v = v as u32 as i32 as i64 as u64;
    }
    if enc & 0x70 == 0x10 {
        v = v.wrapping_add(gcc_vma + off as u64);
    }
    Some(v | if enc & 0x80 != 0 { INDIRECT } else { 0 })
}

/// Marks a type-table value as the address of a pointer slot.
const INDIRECT: u64 = 1 << 63;

/// Symbol names by address and by relocated slot, for naming `typeinfo`s.
struct TypeNames {
    at: HashMap<u64, String>,
    slot: HashMap<u64, String>,
}

impl TypeNames {
    fn new(file: &object::File) -> TypeNames {
        let mut at = HashMap::new();
        for sym in file.symbols().chain(file.dynamic_symbols()) {
            if let Ok(name) = sym.name() {
                if name.starts_with("_ZTI") && sym.address() != 0 {
                    at.insert(sym.address(), name.to_string());
                }
            }
        }
        let mut slot = HashMap::new();
        if let (Some(relocs), Some(dynsym)) =
            (file.dynamic_relocations(), file.dynamic_symbol_table())
        {
            for (off, r) in relocs {
                match r.target() {
                    object::RelocationTarget::Symbol(idx) => {
                        if let Some(name) = dynsym
                            .symbol_by_index(idx)
                            .ok()
                            .and_then(|s| s.name().ok().map(str::to_string))
                        {
                            slot.insert(off, name);
                        }
                    }
                    object::RelocationTarget::Absolute => {
                        if let Some(name) = at.get(&(r.addend() as u64)).cloned() {
                            slot.insert(off, name);
                        }
                    }
                    _ => {}
                }
            }
        }
        TypeNames { at, slot }
    }

    fn type_name(&self, v: u64) -> Option<String> {
        let addr = v & !INDIRECT;
        let sym = if v & INDIRECT != 0 {
            self.slot.get(&addr).or_else(|| self.at.get(&addr))
        } else {
            self.at.get(&addr)
        }?;
        let d = crate::demangle::demangle_raw(sym)?;
        d.strip_prefix("typeinfo for ").map(str::to_string)
    }
}

/// (kuna `ehnote`) A header note on every function whose landing pads flow does
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
            for clause in clauses(gcc_data, gcc_vma, &lsda, cs.action, ptr_size, &names) {
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
mod tests {
    use super::*;

    #[test]
    fn notes_name_the_hidden_pads() {
        let bytes = std::fs::read(format!(
            "{}/tests/fixtures/ehcold_x86_64",
            env!("CARGO_MANIFEST_DIR")
        ))
        .unwrap();
        let file = object::File::parse(bytes.as_slice()).unwrap();
        let notes: Vec<String> = eh_notes(&file).into_iter().map(|n| n.text).collect();
        assert!(
            notes.contains(
                &"eh: 1 call site unwinds to C++ landing pads (catch int); not shown".to_string()
            ),
            "{notes:?}"
        );
        assert!(
            notes.contains(
                &"eh: 3 call sites unwind to C++ landing pads (3 cleanup); not shown".to_string()
            ),
            "{notes:?}"
        );
    }

    #[test]
    fn a_rust_image_reads_rust_eh_personality() {
        let bytes = std::fs::read(format!(
            "{}/tests/fixtures/rust_eh_x86_64",
            env!("CARGO_MANIFEST_DIR")
        ))
        .unwrap();
        let file = object::File::parse(bytes.as_slice()).unwrap();
        let mut seen = Vec::new();
        super::super::for_each_fde_lsda_classified(&file, 8, &mut |_, _, p| seen.push(p));
        assert!(
            !seen.is_empty() && seen.iter().all(|&p| p == super::super::Personality::Rust),
            "{seen:?}"
        );
    }

    #[test]
    fn personality_names_classify() {
        use super::super::Personality as P;
        assert_eq!(P::of_name("DW.ref.__gxx_personality_v0"), P::Cxx);
        assert_eq!(P::of_name("__gxx_personality_sj0"), P::SjLj);
        assert!(!P::of_name("__gxx_personality_sj0").reads_itanium_lsda());
        assert_eq!(P::of_name("rust_eh_personality"), P::Rust);
        assert_eq!(P::of_name("__objc_personality_v0"), P::ObjC);
        assert_eq!(P::of_name("__gcc_personality_v0@GCC_3.3.1"), P::GccC);
        assert_eq!(P::of_name("__gnat_personality_v0"), P::Gnat);
        assert_eq!(P::of_name("my_handler"), P::Unknown);
    }

    /// `catcher` catches `std::runtime_error const&` (selector 1) and `...`
    /// (selector 2) around one call; `cleanup` runs a destructor around two.
    #[test]
    fn decodes_catch_and_cleanup_pads() {
        let path = concat!(
            env!("CARGO_MANIFEST_DIR"),
            "/../unlace-cli/tests/fixtures/itaniumeh/eh_x86_64.elf"
        );
        let bytes = std::fs::read(path).expect("fixture");
        let file = object::File::parse(&*bytes).expect("elf");
        let sites = collect_call_sites(&file);
        let catch = sites
            .iter()
            .find(|s| s.clauses.len() == 2)
            .expect("catch site");
        assert_eq!(
            catch.clauses,
            vec![
                EhClause::Catch {
                    selector: 1,
                    type_name: Some("std::runtime_error".into())
                },
                EhClause::CatchAll { selector: 2 },
            ]
        );
        assert!(sites.iter().any(|s| s.clauses == vec![EhClause::Cleanup]));
        assert!(sites.iter().all(|s| s.start < s.end && s.pad != 0));
    }
}
