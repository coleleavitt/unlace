//! `unlace-fuzz` binary: reads one input from stdin, runs the pipeline, and
//! prints the `FuzzResult` variant. It exits non-zero only on a caught panic.
//!
//! An AFL-style runner detects a crash from the exit code alone, while manual
//! runs (`unlace-fuzz < corpus/seed_hello_world.elf`) stay readable.

use std::io::Read;

use unlace_fuzz::{FuzzResult, fuzz_iteration};

fn main() {
    let mut bytes = Vec::with_capacity(64 * 1024);
    if let Err(error) = std::io::stdin().read_to_end(&mut bytes) {
        eprintln!("unlace-fuzz: failed to read stdin: {error}");
        std::process::exit(2);
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
