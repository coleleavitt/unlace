//! End-to-end decompiler benchmarks over committed fixtures, for CodSpeed
//! (simulation mode in CI) and plain `cargo bench`.
//!
//! Every case reads the SLEIGH tree (`$UNLACE_SPECS`, else the repo's `specs/`); each `.sla` comes
//! from the `.sla` cache, compiled on first use. Setup that is not the measured
//! stage (reading files, loading the image) runs in `with_inputs`, which divan
//! and CodSpeed leave out of the measurement.

use std::path::PathBuf;

use unlace_base::address::Address;
use unlace_base::error::{KunaError, KunaResult};
use unlace_console::engine::{ConsoleProgram, bootstrap_from_object};
use unlace_console::ifacedecomp::{
    DECOMPILE_MODULE, IfaceDecompData, execute, register_decomp_commands,
};
use unlace_console::ifaceterm::ConsoleCommands;
use unlace_sleigh::globalcontext::ContextInternal;
use unlace_sleigh::loadimage::LoadImage;
use unlace_sleigh::sleigh::Sleigh;

fn main() {
    divan::main();
}

fn repo_root() -> PathBuf {
    PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../..")
}

fn specs_dir() -> PathBuf {
    unlace_base::env::var_os("UNLACE_SPECS")
        .map_or_else(|| repo_root().join("specs"), PathBuf::from)
}

fn fixture(name: &str) -> String {
    let path = repo_root()
        .join("crates/unlace-analysis/tests/fixtures")
        .join(name);
    path.to_str().expect("UTF-8 fixture path").to_string()
}

fn load(binary: &str) -> ConsoleProgram {
    let roots = vec![specs_dir().to_str().expect("UTF-8 specs path").to_string()];
    bootstrap_from_object(&fixture(binary), "", &roots)
        .unwrap_or_else(|e| panic!("load {binary} (are the specs built?): {e}"))
}

struct NoImage;

impl LoadImage for NoImage {
    fn get_file_name(&self) -> &str {
        "none"
    }
    fn load_fill(&mut self, _ptr: &mut [u8], _addr: &Address) -> KunaResult<()> {
        Err(KunaError::data_unavail("no image"))
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

/// Decoding a compiled `.sla` into a ready SLEIGH translator.
#[divan::bench(args = ["x86/data/languages/x86-64.sla", "AARCH64/data/languages/AARCH64.sla"])]
fn sleigh_load(bencher: divan::Bencher, sla: &str) {
    let path = specs_dir().join("Ghidra/Processors").join(sla);
    let bytes = unlace_slacomp::slacache::read_sla(&path)
        .unwrap_or_else(|e| panic!("read {}: {e}", path.display()));
    bencher.bench(|| {
        let mut sleigh = Sleigh::new(Box::new(NoImage), Box::new(ContextInternal::new()));
        sleigh
            .initialize_from_sla(divan::black_box(&bytes))
            .expect("decode .sla");
        sleigh
    });
}

/// Loading a binary: object parse, language selection, SLEIGH setup and the
/// loader's analysis passes (symbols, function discovery).
#[divan::bench(args = ["switch_nop_case_x86_64", "xrefpairs_macho_arm64"])]
fn image_load(binary: &str) -> ConsoleProgram {
    load(divan::black_box(binary))
}

/// Raw p-code lift of every instruction in one function, before any
/// decompiler pass.
#[divan::bench(args = [("switch_nop_case_x86_64", "pick"), ("xrefpairs_macho_arm64", "_main")])]
fn lift_function(bencher: divan::Bencher, (binary, function): (&str, &str)) {
    let prog = load(binary);
    let entry = prog
        .lookup_symbol(function)
        .unwrap_or_else(|| panic!("{binary}: no symbol {function}"))
        .get_offset();
    let end = entry + prog.function_extent_at(entry);
    bencher.bench_local(|| {
        let mut ops = 0;
        let mut vma = entry;
        while vma < end {
            let (len, raw) = prog.raw_pcode_at(vma).expect("lift instruction");
            ops += raw.len();
            vma += u64::try_from(len).expect("positive instruction length");
        }
        ops
    });
}

/// The full decompile of one function to C, as `unlace decompile` runs it:
/// `pick` is a jump-table switch with calls, `_main` an AArch64 Mach-O caller
/// of six functions, `irreducible` a two-entry loop the structurer must leave
/// a `goto` in.
#[divan::bench(args = [
    ("switch_nop_case_x86_64", "pick"),
    ("xrefpairs_macho_arm64", "_main"),
    ("irreducible_x86_64", "irreducible"),
])]
fn decompile(bencher: divan::Bencher, (binary, function): (&str, &str)) {
    let commands = [
        format!("load function {function}"),
        "decompile".into(),
        "print C".into(),
    ];
    bencher
        .with_inputs(|| {
            let mut status = ConsoleCommands::into_status(commands.to_vec());
            register_decomp_commands(&mut status);
            let data = status
                .get_data_mut(DECOMPILE_MODULE)
                .expect("decompile module");
            let dcp = data
                .as_any_mut()
                .downcast_mut::<IfaceDecompData>()
                .expect("decompile data");
            dcp.conf = Some(load(binary));
            status
        })
        .bench_local_values(|mut status| {
            for _ in 0..commands.len() {
                execute(&mut status);
            }
            assert!(
                status.optr.contains("Decompilation complete"),
                "{binary}:{function} did not decompile:\n{}",
                status.optr
            );
            status
        });
}
