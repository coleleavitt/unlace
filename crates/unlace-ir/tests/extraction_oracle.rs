//! Differential conformance oracle: Rust vs the MECHANICALLY-EXTRACTED Coq proof.
//!
//! Unlike `coq_conformance.rs` (which restates each proven law by hand), this
//! test compares the real `KnownBits::{and,or,xor}` against a reference that is
//! the OCaml extracted directly from the proved Coq definitions
//! (`rocq-tests/extraction/Extract.v` → `knownbits_oracle.ml`). The OCaml driver
//! emits a vector file `<w> <xa> <xb> <and_zero> <and_one> <or_zero> <or_one>
//! <xor_zero> <xor_one>`; here we recompute each line with the shipped Rust and
//! assert byte-identical masks. Any divergence between the production Rust and
//! the verified proof fails the test.
//!
//! The vectors are produced by `scripts/extraction_oracle.sh` into
//! `rocq-tests/extraction/oracle_vectors.txt`. If that file is absent (Rocq/
//! OCaml toolchain not installed in this environment), the test is skipped with
//! a notice rather than failing — the property fuzzer in `coq_conformance.rs`
//! still guards the same invariants unconditionally.

use std::path::PathBuf;

use unlace_ir::known_bits::KnownBits;

fn vectors_path() -> PathBuf {
    // crates/unlace-ir/ -> workspace root -> rocq-tests/extraction/...
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../../rocq-tests/extraction/oracle_vectors.txt")
}

#[test]
fn rust_matches_extracted_coq_oracle() {
    let path = vectors_path();
    let Ok(text) = std::fs::read_to_string(&path) else {
        eprintln!(
            "extraction_oracle: SKIP — {} not found (run scripts/extraction_oracle.sh; \
             Rocq+OCaml toolchain required). The coq_conformance fuzzer still guards these laws.",
            path.display()
        );
        return;
    };

    let mut checked = 0usize;
    for (lineno, line) in text.lines().enumerate() {
        let f: Vec<&str> = line.split_whitespace().collect();
        if f.is_empty() {
            continue;
        }
        assert_eq!(f.len(), 9, "malformed oracle vector at line {}", lineno + 1);

        let w: u8 = f[0].parse().unwrap();
        let xa: u64 = f[1].parse().unwrap();
        let xb: u64 = f[2].parse().unwrap();
        let exp_and_zero: u64 = f[3].parse().unwrap();
        let exp_and_one: u64 = f[4].parse().unwrap();
        let exp_or_zero: u64 = f[5].parse().unwrap();
        let exp_or_one: u64 = f[6].parse().unwrap();
        let exp_xor_zero: u64 = f[7].parse().unwrap();
        let exp_xor_one: u64 = f[8].parse().unwrap();

        let a = KnownBits::from_constant(xa, w);
        let b = KnownBits::from_constant(xb, w);

        let and = a.and(&b);
        let or = a.or(&b);
        let xor = a.xor(&b);

        // Compare against the extracted-proof reference, masked to width (the
        // Coq fc_* / transfer cores operate on the width-masked representation).
        assert_eq!(and.zero, exp_and_zero, "and.zero @ {}: {a:?}&{b:?}", lineno + 1);
        assert_eq!(and.one, exp_and_one, "and.one @ {}", lineno + 1);
        assert_eq!(or.zero, exp_or_zero, "or.zero @ {}", lineno + 1);
        assert_eq!(or.one, exp_or_one, "or.one @ {}", lineno + 1);
        assert_eq!(xor.zero, exp_xor_zero, "xor.zero @ {}", lineno + 1);
        assert_eq!(xor.one, exp_xor_one, "xor.one @ {}", lineno + 1);
        checked += 1;
    }

    assert!(checked > 0, "oracle vector file was empty");
    eprintln!("extraction_oracle: OK — {checked} vectors match the extracted Coq proof");
}
