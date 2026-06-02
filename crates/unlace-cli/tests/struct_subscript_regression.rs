//! Regression gate for the C-printer structural-correctness fixes (t70).
//!
//! A series of fixes (commits 6f866977a1 … 8d41e457a0) eliminated every
//! uncompilable struct-field / array-subscript form in the emitted C across the
//! whole fixture corpus by routing them through the IR-faithful raw
//! `*(T *)(addr)` deref when the base cannot be validly subscripted/arrowed (a
//! deref value, a frame pointer, or a scalar `Load` output). A full
//! `gcc -fsyntax-only` scan of the 211-file corpus went from 5 structural
//! errors to 0.
//!
//! Those fixes had no test gate — a future printer change could silently
//! reintroduce the bug. This test pins the absence of the three uncompilable
//! patterns in the whole-program C output of the fixtures that exercised them
//! (and a few others), so a regression is caught without needing a C compiler
//! in CI.
//!
//! The patterns are *definitely-invalid* C, never legitimate output:
//!   * `*(_T *)(expr)[i]` — cast-then-subscript (the cast binds looser than
//!     `[]`, so this indexes the pre-cast value). Fixed by `paren_if_non_atomic`
//!     + the deref-base bail.
//!   * `<expr>)->field` / `<digit>->field` — `->` on a parenthesised arithmetic
//!     or numeric base (the base is a scalar, not a pointer). Fixed by the
//!     frame-relative `->` bail.
//!   * `vN[i]` / `cN[i]` / `aN[i]` — an array subscript on a scalar-named local
//!     (a frame pointer, a loaded scalar, …). Fixed by the frame-base /
//!     scalar-Load-output / deref-base subscript bails. No fixture legitimately
//!     emits this form today (real arrays render as `name[i]` with a declared
//!     array/pointer name, not a bare `vN`/`cN`/`aN`).

use std::process::Command;

fn unlace_bin() -> Command {
    let mut cmd = Command::new(env!("CARGO_BIN_EXE_unlace"));
    cmd.env_remove("RUST_LOG");
    cmd.env_remove("UNLACE_VALIDATE_PIPELINE");
    cmd
}

fn fixture(name: &str) -> String {
    let manifest = env!("CARGO_MANIFEST_DIR");
    format!("{manifest}/../../fixtures/{name}")
}

/// Decompile a whole fixture program to C and return the emitted source.
fn decompile_program(fixture_file: &str) -> String {
    let path = fixture(fixture_file);
    let output = unlace_bin()
        .args(["decompile", "--emit", "c"])
        .arg(&path)
        .output()
        .unwrap_or_else(|e| panic!("failed to run unlace on {fixture_file}: {e}"));
    assert!(
        output.status.success(),
        "decompile of {fixture_file} failed: {}",
        String::from_utf8_lossy(&output.stderr)
    );
    String::from_utf8_lossy(&output.stdout).into_owned()
}

/// Lines that exhibit an uncompilable structural form. Returns the offending
/// lines (trimmed) for a precise failure message.
fn structural_violations(c: &str) -> Vec<String> {
    let mut hits = Vec::new();
    for line in c.lines() {
        let trimmed = line.trim();
        // Skip comment lines (the prelude/`#define`s never contain these forms,
        // but a comment mentioning them must not trip the gate).
        if trimmed.starts_with("//") || trimmed.starts_with('#') {
            continue;
        }

        // Pattern A: cast-then-subscript `*(_T *)(...)[`.
        if line.contains(")[") && contains_cast_then_subscript(line) {
            hits.push(trimmed.to_string());
            continue;
        }
        // Pattern B: `)->field` (arrow on a parenthesised arithmetic base) or
        // `<digit>->field` (arrow on a numeric literal).
        if contains_invalid_arrow(line) {
            hits.push(trimmed.to_string());
            continue;
        }
        // Pattern C: `vN[i]` / `cN[i]` / `aN[i]` — subscript on a scalar-named
        // local. No fixture legitimately emits this.
        if contains_scalar_local_subscript(line) {
            hits.push(trimmed.to_string());
            continue;
        }
    }
    hits
}

fn contains_cast_then_subscript(line: &str) -> bool {
    // `*(_QWORD *)(...)[` — a deref-cast immediately subscripted.
    let bytes = line.as_bytes();
    let mut i = 0;
    while let Some(pos) = line[i..].find(")[") {
        let close = i + pos;
        // Walk back to the matching '(' and check it's preceded by a `*)` cast.
        let mut depth = 0i32;
        let mut j = close;
        loop {
            match bytes.get(j) {
                Some(b')') => depth += 1,
                Some(b'(') => {
                    depth -= 1;
                    if depth == 0 {
                        break;
                    }
                }
                None => break,
                _ => {}
            }
            if j == 0 {
                break;
            }
            j -= 1;
        }
        // The text just before the matching '(' is the cast/base; a cast looks
        // like `*(_T *)`. Detect `*)` shortly before `j`.
        let prefix = &line[..j];
        if prefix.trim_end().ends_with("*)") {
            return true;
        }
        i = close + 1;
    }
    false
}

fn contains_invalid_arrow(line: &str) -> bool {
    for (idx, _) in line.match_indices("->") {
        // Preceding non-space char.
        let prev = line[..idx].trim_end().chars().last();
        match prev {
            // `)->` where the parenthesised group is an arithmetic expression
            // (contains a top-level ` - ` / ` + `): a scalar base.
            Some(')') => {
                if paren_group_is_arithmetic(&line[..idx]) {
                    return true;
                }
            }
            // `<digit>->` — arrow on a numeric literal.
            Some(c) if c.is_ascii_digit() => return true,
            _ => {}
        }
    }
    false
}

/// Whether the parenthesised group ending at `before.len()` (i.e. the `)` just
/// before a `->`) wraps an arithmetic expression like `(c0 - 32)`.
fn paren_group_is_arithmetic(before: &str) -> bool {
    let bytes = before.as_bytes();
    let mut depth = 0i32;
    let mut start = None;
    for (k, &b) in bytes.iter().enumerate().rev() {
        match b {
            b')' => depth += 1,
            b'(' => {
                depth -= 1;
                if depth == 0 {
                    start = Some(k);
                    break;
                }
            }
            _ => {}
        }
    }
    let Some(start) = start else { return false };
    let inner = &before[start + 1..before.len() - 1];
    // Arithmetic if it has a top-level binary ` - ` / ` + ` and is not a cast.
    (inner.contains(" - ") || inner.contains(" + ")) && !inner.contains('*')
}

fn contains_scalar_local_subscript(line: &str) -> bool {
    let bytes = line.as_bytes();
    for (idx, _) in line.match_indices('[') {
        // Identify the identifier immediately preceding `[`.
        let mut j = idx;
        while j > 0 && (bytes[j - 1].is_ascii_alphanumeric() || bytes[j - 1] == b'_') {
            j -= 1;
        }
        let ident = &line[j..idx];
        // Bare `vN` / `cN` / `aN` scalar-local name (single leading letter, rest
        // digits) directly subscripted by an integer literal.
        let is_scalar_local = ident.len() >= 2
            && matches!(ident.as_bytes()[0], b'v' | b'c' | b'a')
            && ident[1..].bytes().all(|b| b.is_ascii_digit());
        if !is_scalar_local {
            continue;
        }
        // The index must be an integer literal (the recovered `[N]` form).
        let rest = &line[idx + 1..];
        let is_int_index = rest
            .find(']')
            .map(|end| {
                let inner = rest[..end].trim();
                !inner.is_empty() && inner.bytes().all(|b| b.is_ascii_digit())
            })
            .unwrap_or(false);
        if is_int_index {
            return true;
        }
    }
    false
}

#[test]
fn corpus_emits_no_uncompilable_struct_or_subscript_forms() {
    // Fixtures that exercised each of the seven fixes, plus a representative
    // cross-section. A regression in any printer path reintroduces a pattern.
    const FIXTURES: &[&str] = &[
        "debug_templates.elf", // *-deref subscript, frame-field
        "x87_math.elf",        // x86 frame-base subscript
        "cpp_exceptions.elf",  // scalar Load-output subscript (vtable pfn)
        "arm64_features.elf",  // AArch64 frame-base subscript
        "mips64_features.elf", // frame-relative `->` and subscript
        "medium.elf",
        "loops.elf",
        "switch_table.elf",
        "cpp_vtable.elf",
    ];
    let mut failures = Vec::new();
    for &fx in FIXTURES {
        let c = decompile_program(fx);
        let hits = structural_violations(&c);
        if !hits.is_empty() {
            failures.push(format!("{fx}:\n    {}", hits.join("\n    ")));
        }
    }
    assert!(
        failures.is_empty(),
        "uncompilable struct/subscript forms reappeared in emitted C \
         (regression of the t70 printer fixes):\n{}",
        failures.join("\n")
    );
}

/// Self-test the detectors against the exact forms the fixes removed, so the
/// gate itself can't silently rot into an always-pass.
#[test]
fn structural_violation_detectors_catch_the_known_bad_forms() {
    assert!(
        structural_violations("    pfn = *(_QWORD *)(v7 + 0x10LL);").is_empty(),
        "the fixed raw-deref form must NOT be flagged"
    );
    // Cast-then-subscript.
    assert!(!structural_violations("    x = *(_QWORD *)(buf + 8)[1];").is_empty());
    // Arrow on arithmetic base.
    assert!(!structural_violations("    (c0 - 32)->field_24 = v5;").is_empty());
    // Arrow on numeric literal.
    assert!(!structural_violations("    x = 32->field_8;").is_empty());
    // Scalar-local subscript.
    assert!(!structural_violations("    _QWORD v8 = v4[1];").is_empty());
    assert!(!structural_violations("    pfn = v7[2];").is_empty());
    // Valid forms must NOT be flagged.
    assert!(structural_violations("    x = *(_QWORD *)(v2 + 0x28LL);").is_empty());
    assert!(structural_violations("    x = buf[i];").is_empty()); // real array local
    assert!(structural_violations("    x = arr2[iv].field_0;").is_empty());
    assert!(structural_violations("    p->field_0 = 1;").is_empty()); // identifier arrow
}
