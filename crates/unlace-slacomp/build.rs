//! Fingerprint the SLEIGH compiler: a hash of the Rust sources that decide what a `.sla` image
//! holds (this crate, the runtime it encodes with, and the base/num crates under both). The
//! `.sla` cache (`src/slacache.rs`) keys every image by it, so a compiler change never reuses an
//! image an older compiler wrote.

use std::fs;
use std::path::{Path, PathBuf};

const FNV_OFFSET: u64 = 0xcbf2_9ce4_8422_2325;
const FNV_PRIME: u64 = 0x0000_0100_0000_01b3;

fn fnv(mut hash: u64, bytes: &[u8]) -> u64 {
    for &b in bytes {
        hash ^= u64::from(b);
        hash = hash.wrapping_mul(FNV_PRIME);
    }
    hash
}

fn collect(dir: &Path, out: &mut Vec<PathBuf>) {
    let Ok(entries) = fs::read_dir(dir) else {
        return;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        if path.is_dir() {
            collect(&path, out);
        } else if path.extension().is_some_and(|e| e == "rs") {
            out.push(path);
        }
    }
}

fn main() {
    let manifest =
        PathBuf::from(std::env::var_os("CARGO_MANIFEST_DIR").expect("CARGO_MANIFEST_DIR"));
    let crates = manifest.join("..");
    let mut files = Vec::new();
    for krate in [
        "unlace-slacomp",
        "unlace-sleigh",
        "unlace-base",
        "unlace-num",
    ] {
        let src = crates.join(krate).join("src");
        println!("cargo:rerun-if-changed={}", src.display());
        collect(&src, &mut files);
    }
    files.sort();
    let mut hash = FNV_OFFSET;
    for file in &files {
        let rel = file.strip_prefix(&crates).unwrap_or(file);
        hash = fnv(hash, rel.to_string_lossy().as_bytes());
        hash = fnv(hash, &fs::read(file).unwrap_or_default());
    }
    println!("cargo:rustc-env=UNLACE_SLACOMP_FINGERPRINT={hash:016x}");
}
