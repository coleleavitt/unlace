//! `unlace-fuzz` binary: reads one input from stdin, runs the pipeline, and
//! prints the `FuzzResult` variant. It exits non-zero only on a caught panic.
//!
//! An AFL-style runner detects a crash from the exit code alone, while manual
//! runs (`unlace-fuzz < corpus/seed_hello_world.elf`) stay readable.
//!
//! `unlace-fuzz --minimise <crash-corpus-dir> < crash.bin` turns a panicking input
//! into a regression fixture: it writes `inputs/crash_<hash>.bin` and
//! `reports/crash_<hash>.json` under that directory. It exits 3 when the input
//! does not panic, so nothing is written.

use std::io::Read;
use std::path::Path;

use unlace_fuzz::{FuzzResult, crash_fixture, fuzz_iteration};

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    let mut bytes = Vec::with_capacity(64 * 1024);
    if let Err(error) = std::io::stdin().read_to_end(&mut bytes) {
        eprintln!("unlace-fuzz: failed to read stdin: {error}");
        std::process::exit(2);
    }

    if args.first().map(String::as_str) == Some("--minimise") {
        minimise(&bytes, args.get(1).map(String::as_str));
        return;
    }

    match fuzz_iteration(&bytes) {
        FuzzResult::NotBinary => eprintln!("not-binary"),
        FuzzResult::LoadFailed(error) => eprintln!("load-failed: {error}"),
        FuzzResult::Ok {
            functions_decompiled,
        } => eprintln!("ok: {functions_decompiled} functions decompiled"),
        FuzzResult::Panicked { stage, payload } => {
            eprintln!("PANIC in stage `{stage}`: {payload}");
            std::process::exit(1);
        }
    }
}

/// Write the minimised form of a panicking `bytes` into the crash corpus.
fn minimise(bytes: &[u8], dir: Option<&str>) {
    let Some(dir) = dir.map(Path::new) else {
        eprintln!("usage: unlace-fuzz --minimise <crash-corpus-dir> < input");
        std::process::exit(2);
    };
    let Some(fixture) = crash_fixture(bytes) else {
        eprintln!("unlace-fuzz: input does not panic; nothing to minimise");
        std::process::exit(3);
    };

    let input_path = dir.join("inputs").join(&fixture.file_name);
    let report_path = dir
        .join("reports")
        .join(Path::new(&fixture.file_name).with_extension("json"));
    let written = std::fs::create_dir_all(dir.join("inputs"))
        .and_then(|()| std::fs::create_dir_all(dir.join("reports")))
        .and_then(|()| std::fs::write(&input_path, &fixture.bytes))
        .and_then(|()| std::fs::write(&report_path, fixture.sidecar.as_bytes()));
    if let Err(error) = written {
        eprintln!("unlace-fuzz: failed to write the crash fixture: {error}");
        std::process::exit(2);
    }
    println!("{}", input_path.display());
    println!("{}", report_path.display());
}
