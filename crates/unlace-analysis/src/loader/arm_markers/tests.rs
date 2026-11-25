use super::*;

/// The bare ARM Thumb `.o` fixture (ET_REL parses fine; the e2e on a LINKED
/// exe is a documented follow-up — no ARM linker on the build host).
fn arm_thumb_o() -> Vec<u8> {
    let path = concat!(
        env!("CARGO_MANIFEST_DIR"),
        "/tests/fixtures/arm_thumb_le32.o"
    );
    std::fs::read(path).expect("read arm_thumb_le32.o fixture")
}

fn paints_at(out: &AnalysisOutput, addr: u64) -> Vec<u32> {
    out.context_paints
        .iter()
        .filter(|p| p.addr == addr && p.var == TMODE)
        .map(|p| p.value)
        .collect()
}

#[test]
fn marker_name_classification() {
    assert!(is_thumb_marker("$t"));
    assert!(is_thumb_marker("$t.0"));
    assert!(is_thumb_marker("$t.17"));
    assert!(!is_thumb_marker("$td"));
    assert!(is_arm_marker("$a"));
    assert!(is_arm_marker("$a.1"));
    // data / non-markers classify as neither.
    assert!(!is_thumb_marker("$d"));
    assert!(!is_arm_marker("$d.0"));
    assert!(!is_thumb_marker("thumb_add"));
    assert!(!is_arm_marker("main"));
}

/// The merge-blocking gate: the pass over the bare ARM `.o` must emit a Thumb
/// (`TMode=1`) paint for the `$t.0` mapping symbol AND for each STT_FUNC whose
/// `st_value & 1` (`thumb_add`@0x1, `_start`@0x15), with the function address
/// normalized to even (0x0, 0x14). Pins the fixture's VMAs.
#[test]
fn arm_markers_emit_thumb_facts() {
    let bytes = arm_thumb_o();
    let file = object::File::parse(bytes.as_slice()).expect("parse arm_thumb_le32.o");
    let out = scan_arm_markers(&file);

    // Every paint is TMode and on this all-Thumb fixture is value 1.
    assert!(
        !out.context_paints.is_empty(),
        "must emit at least one TMode paint"
    );
    for p in &out.context_paints {
        assert_eq!(p.var, TMODE, "only TMode is painted");
        assert_eq!(p.value, 1, "all-Thumb fixture paints TMode=1 everywhere");
        assert_eq!(
            p.end, None,
            "v1 emits point sets (paint-to-next-change-point)"
        );
    }

    // (1) The `$t.0` mapping symbol at .text+0x0 → TMode=1.
    assert!(
        paints_at(&out, 0x0).contains(&1),
        "$t.0 must paint TMode=1 at 0x0"
    );

    // (2) STT_FUNC LSB convention: thumb_add@0x1 → normalized 0x0, _start@0x15
    // → normalized 0x14, both TMode=1.
    assert!(
        paints_at(&out, 0x0).contains(&1),
        "thumb_add@0x1 must paint TMode=1 at normalized 0x0"
    );
    assert!(
        paints_at(&out, 0x14).contains(&1),
        "_start@0x15 must paint TMode=1 at normalized 0x14"
    );

    // No odd address is ever painted (LSB always masked off).
    assert!(
        out.context_paints.iter().all(|p| p.addr & 1 == 0),
        "function addresses must be normalized to even (LSB masked)"
    );

    // Thumb-FUNC re-home: each LSB-set STT_FUNC also surfaces as a Function
    // SymFact at the NORMALIZED even entry (thumb_add@0x1 -> 0x0, _start@0x15 ->
    // 0x14), so `load function <name>` resolves at the even decode address.
    let homed = |a: u64, n: &str| {
        out.symbols
            .iter()
            .any(|s| s.addr == a && s.name == n && s.kind == SymKind::Function)
    };
    assert!(homed(0x0, "thumb_add"), "thumb_add re-homed to even 0x0");
    assert!(homed(0x14, "_start"), "_start re-homed to even 0x14");
    // Every re-homed function symbol is at an even address.
    assert!(
        out.symbols.iter().all(|s| s.addr & 1 == 0),
        "re-homed function symbols must be at even addresses"
    );
}

/// A non-ARM object must emit ZERO paints — the `canAnalyze == processor==ARM`
/// gate. This is the regression guard: without it, a `TMode` paint on a
/// non-ARM language would reach the commit boundary (which must also no-op, but the
/// pass-level gate is the first line). Driven over the x86-64 fauxware fixture.
#[test]
fn non_arm_object_emits_nothing() {
    let path = concat!(env!("CARGO_MANIFEST_DIR"), "/tests/fixtures/fauxware");
    let bytes = std::fs::read(path).expect("read fauxware fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fauxware");
    assert_ne!(file.architecture(), object::Architecture::Arm);
    let out = scan_arm_markers(&file);
    assert!(
        out.context_paints.is_empty(),
        "a non-ARM object must emit no TMode paints (canAnalyze gate)"
    );
}
