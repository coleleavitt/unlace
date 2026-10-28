//! End-to-end smoke test for Batch 3 slice 1: every analyzed function
//! in `medium.elf` must have a non-empty `lvars` candidate list after
//! the per-function pipeline runs. A pure jump thunk
//! (`frame_dummy`: `endbr64; jmp register_tm_clones`) defines nothing.
//!
//! Goldens are intentionally untouched — the collector is metadata-only
//! and the C printer ignores `lvars` in this slice.

use std::path::PathBuf;

use unlace_cli::pipeline::{self, FunctionEntry};
use unlace_ir::ssa::build_ssa;
use unlace_lift::get_lifter;
use unlace_loader::{ElfLoader, Loader};

fn fixture(name: &str) -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../../fixtures")
        .join(name)
}

#[test]
fn medium_elf_collects_lvars_for_every_function() {
    let data = std::fs::read(fixture("medium.elf")).expect("read fixture");
    let image = ElfLoader::load(&data).expect("parse ELF");
    let lifter = get_lifter(image.arch).expect("supported arch");
    let entries: Vec<FunctionEntry> = pipeline::discover_functions(&image, None).expect("discover");

    let mut analyzed = 0usize;
    let mut total_lvars = 0usize;
    let mut empty_funcs: Vec<String> = Vec::new();
    let mut class_counts: std::collections::BTreeMap<&'static str, usize> =
        std::collections::BTreeMap::new();

    for entry in &entries {
        let Ok(ir) = pipeline::lift_function(&image, lifter.as_ref(), entry) else {
            continue;
        };
        let mut ssa = build_ssa(ir);
        ssa.arch = image.arch;
        if pipeline::run_passes(&mut ssa, &unlace_passes::PassOptions::default()).is_err() {
            continue;
        }
        let defines_nothing = ssa
            .function
            .blocks
            .values()
            .flat_map(|block| &block.insns)
            .all(|insn| insn.output.is_none());
        if defines_nothing {
            continue;
        }
        analyzed += 1;
        if ssa.lvars.is_empty() {
            empty_funcs.push(ssa.function.name.clone());
        }
        total_lvars += ssa.lvars.len();
        for lv in &ssa.lvars {
            *class_counts.entry(lv.storage.class()).or_insert(0) += 1;
        }
    }

    assert!(analyzed > 0, "no functions were analyzed");
    assert!(
        empty_funcs.is_empty(),
        "expected lvars.len() > 0 for every analyzed function, but {} functions \
         emitted zero lvars: {:?}",
        empty_funcs.len(),
        empty_funcs,
    );
    eprintln!(
        "medium.elf: {} functions analyzed, {} total lvars, breakdown: {:?}",
        analyzed, total_lvars, class_counts,
    );
}
