//! (unlace `pdblines`) Source-line comments from a fingerprint-matched `.pdb`.
//!
//! The PDB twin of [`crate::dwarf::DwarfLinesPass`] (Ghidra's
//! `DWARFLineInfoCommentScript`, and the line half of `PdbUniversalAnalyzer`'s
//! `applySourceLineNumbers`): each module's C13 line program maps code ranges to
//! `file:line`, and every line entry inside a procedure becomes a `file:line`
//! [`CommentFact`] at its address, attached to that procedure. Only the file's
//! base name is kept, the build machine's directory being noise. The first entry
//! per address wins; the compiler's "hidden" line numbers (`0xfeefee`,
//! `0xf00f00`) and line 0 are dropped.
//!
//! Inert unless `pdb` locates a fingerprint-matching `.pdb` beside a PE. Run at
//! the commit (a deferred pass) and only under `option pdblines on` (default
//! off: it adds comments to the output).

use pdb::FallibleIterator;

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, CommentFact, Phase};

/// Line numbers the compiler writes for code that has no source line.
const HIDDEN_LINES: [u32; 2] = [0x00fe_efee, 0x00f0_0f00];

/// (unlace) The PDB source-line comment pass (`pdblines`).
#[derive(Default)]
pub struct PdbLinesPass;

impl AnalysisPass for PdbLinesPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "pdblines"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        super::guarded("pdblines", || {
            let mut out = AnalysisOutput::default();
            if let Some((mut pdb, image_base)) = super::open_matched(ctx) {
                out.comments = line_comments(&mut pdb, image_base);
            }
            out
        })
    }
}

/// The `file:line` comments of every procedure, sorted by `(function, address)`
/// with one per address.
pub(crate) fn line_comments(
    pdb: &mut pdb::PDB<'static, std::fs::File>,
    image_base: u64,
) -> Vec<CommentFact> {
    let mut out = Vec::new();
    let (Ok(map), Ok(strings), Ok(dbi)) = (
        pdb.address_map(),
        pdb.string_table(),
        pdb.debug_information(),
    ) else {
        return out;
    };
    let Ok(mut modules) = dbi.modules() else {
        return out;
    };
    let vma = |offset: pdb::PdbInternalSectionOffset| -> Option<u64> {
        image_base.checked_add(u64::from(offset.to_rva(&map)?.0))
    };
    while let Ok(Some(module)) = modules.next() {
        let Ok(Some(info)) = pdb.module_info(&module) else {
            continue;
        };
        let (Ok(program), Ok(mut symbols)) = (info.line_program(), info.symbols()) else {
            continue;
        };
        while let Ok(Some(symbol)) = symbols.next() {
            if !super::walk::PROCEDURE_KINDS.contains(&symbol.raw_kind()) {
                continue;
            }
            let Ok(pdb::SymbolData::Procedure(proc)) = symbol.parse() else {
                continue;
            };
            let Some(func_addr) = vma(proc.offset) else {
                continue;
            };
            let end = func_addr.saturating_add(u64::from(proc.len));
            let mut lines = program.lines_for_symbol(proc.offset);
            while let Ok(Some(line)) = lines.next() {
                if line.line_start == 0 || HIDDEN_LINES.contains(&line.line_start) {
                    continue;
                }
                let Some(addr) = vma(line.offset).filter(|&a| a >= func_addr && a < end) else {
                    continue;
                };
                let Ok(file) = program.get_file_info(line.file_index) else {
                    continue;
                };
                let Ok(path) = file.name.to_string_lossy(&strings) else {
                    continue;
                };
                out.push(CommentFact {
                    func_addr,
                    addr,
                    text: format!("{}:{}", base_name(&path), line.line_start),
                });
            }
        }
    }
    out.sort_by_key(|a| (a.func_addr, a.addr));
    out.dedup_by(|a, b| a.func_addr == b.func_addr && a.addr == b.addr);
    out
}

/// The last component of a Windows or POSIX path.
fn base_name(path: &str) -> &str {
    path.rsplit(['/', '\\']).next().unwrap_or(path)
}

#[cfg(test)]
mod tests;
