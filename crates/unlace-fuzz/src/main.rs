//! `unlace-fuzz` binary — reads bytes from stdin, runs the pipeline,
//! prints the [`FuzzResult`] variant name, exits non-zero only on
//! caught panic.
//!
//! This shape lets AFL-style runners detect crashes via exit code (the
//! `Panicked` variant is the only one returning non-zero) while still
//! making manual invocation (`unlace-fuzz < corpus/seed_hello.elf`)
//! useful for triage.

use std::io::Read;

use unlace_fuzz::{FuzzResult, fuzz_iteration};

fn main() {
    let mut bytes = Vec::with_capacity(64 * 1024);
    if let Err(e) = std::io::stdin().read_to_end(&mut bytes) {
        eprintln!("unlace-fuzz: failed to read stdin: {e}");
        std::process::exit(2);
    }

    match fuzz_iteration(&bytes) {
        FuzzResult::NotElf => {
            eprintln!("not-elf");
        }
        FuzzResult::LoadFailed(e) => {
            eprintln!("load-failed: {e}");
        }
        FuzzResult::Ok {
            functions_decompiled,
        } => {
            eprintln!("ok: {functions_decompiled} functions decompiled");
        }
        FuzzResult::Panicked { stage, payload } => {
            // Distinct exit code so external runners can detect the
            // bug-finding outcome without scraping stderr.
            eprintln!("PANIC in stage `{stage}`: {payload}");
            std::process::exit(1);
        }
    }
}
