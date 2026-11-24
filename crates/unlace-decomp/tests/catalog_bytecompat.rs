//! Catalog byte-compatibility gate (ADR 0006, item w4-unlace-p0-pack).
//!
//! `phases::emit_catalog_json` is the catalog the LLM control surface reads: an array with one
//! object per settable, fixed keys in a fixed order, and fixed value types. This gate pins that
//! shape against `tests/fixtures/phase_catalog.toml`, the captured `phase catalog` output with
//! no program loaded (so no `current` field), stored as one `[[option]]` table per settable.
//!
//! The comparison is field by field. Each entry must sit at the same index with the same option
//! name, the same field names in the same order, and equal values, so a change to any catalog
//! text, tier, symptom list or entry order fails here with the option and field named. The
//! settable count is not written in this file: the fixture has one table per settable, and
//! `fixture_has_every_settable` checks it against the registry.
//!
//! ## Regenerating the fixture
//!
//! The fixture is the Rust emitter's output (there is no C++ origin left: unlace-native settables
//! such as `realtypes` (DIV-6) are not in any C++ tree). Capture it from `decomp_dbg` with no
//! program loaded, so `unlaceLiveValue` returns `""` and no `current` is emitted, then convert
//! the JSON capture with `scripts/catalog_fixture_toml.py` (it keeps entry order, key order and
//! every value, and re-parses the TOML before writing it):
//!
//! ```sh
//! printf 'openfile write /tmp/cap.json\nphase catalog\nclosefile\nquit\n' \
//!   | target/release/decomp_dbg -s "$PWD/specs" >/dev/null 2>&1
//! python3 scripts/catalog_fixture_toml.py /tmp/cap.json \
//!   > crates/unlace-decomp/tests/fixtures/phase_catalog.toml
//! ```
//!
//! Regenerate it whenever `phases.toml` gains or loses a settable, or a settable's catalog text
//! changes. Never edit it by hand.

use std::collections::BTreeSet;

use serde_json::Value;
use unlace_decomp::phases::{
    emit_catalog_json, emit_catalog_json_one, lookup_settable, unlace_num_settables,
    unlace_settable_by_index,
};

/// The captured `phase catalog` output (no program loaded -> no `current`), as TOML.
const FIXTURE: &str = include_str!("fixtures/phase_catalog.toml");

/// The fixture's entries as JSON objects, in catalog order.
fn fixture_entries() -> Vec<Value> {
    let doc: toml::Table = toml::from_str(FIXTURE).expect("phase_catalog.toml parses as TOML");
    doc.get("option")
        .and_then(toml::Value::as_array)
        .expect("phase_catalog.toml has [[option]] tables")
        .iter()
        .map(|entry| serde_json::to_value(entry).expect("a TOML table converts to JSON"))
        .collect()
}

/// The emitter's full catalog, parsed back from its JSON text, in catalog order.
fn emitted_entries() -> Vec<Value> {
    serde_json::from_str(&emit_catalog_json(|_| None))
        .expect("emit_catalog_json returns a JSON array")
}

fn option_name(entry: &Value) -> &str {
    entry
        .get("option")
        .and_then(Value::as_str)
        .unwrap_or("<unnamed>")
}

/// Asserts that `got` and `want` have the same field names in the same order, with equal values.
fn assert_same_entry(got: &Value, want: &Value, context: &str) {
    let got = got.as_object().expect("an emitted entry is an object");
    let want = want.as_object().expect("a fixture entry is a table");
    assert!(
        got.keys().eq(want.keys()),
        "{context}: field names or their order differ (emitted {:?}, fixture {:?})",
        got.keys().collect::<BTreeSet<_>>(),
        want.keys().collect::<BTreeSet<_>>(),
    );
    for (key, want_value) in want {
        assert_eq!(got.get(key), Some(want_value), "{context}: field `{key}`");
    }
}

#[test]
fn full_catalog_matches_fixture_field_by_field() {
    let emitted = emitted_entries();
    let fixture = fixture_entries();
    assert_eq!(
        emitted.len(),
        fixture.len(),
        "entry count: emitter vs phase_catalog.toml"
    );
    for (index, (got, want)) in emitted.iter().zip(&fixture).enumerate() {
        let name = option_name(want);
        assert_eq!(
            option_name(got),
            name,
            "entry {index}: option name or entry order"
        );
        assert_same_entry(got, want, &format!("option `{name}`"));
    }
}

#[test]
fn fixture_has_no_current_field() {
    // Documents the comparison contract: the captured form has no live values.
    assert!(
        fixture_entries()
            .iter()
            .all(|entry| entry.get("current").is_none()),
        "fixture must be the no-program (no `current`) form"
    );
}

#[test]
fn fixture_has_every_settable() {
    let entries = fixture_entries();
    assert_eq!(
        entries.len(),
        unlace_num_settables(),
        "one [[option]] table per settable"
    );
    for entry in &entries {
        for field in ["option", "tier", "symptoms"] {
            assert!(
                entry.get(field).is_some(),
                "`{}` lacks `{field}`",
                option_name(entry)
            );
        }
    }
}

#[test]
fn single_settable_rows_match_their_slice_of_the_catalog() {
    // `phase catalog <option>` (one-argument form) must emit the same fields and values as that
    // option's entry in the full catalog.
    let fixture = fixture_entries();
    for index in 0..unlace_num_settables() {
        let option = unlace_settable_by_index(index).option;
        let one = emit_catalog_json_one(option, None).expect("known option");
        // The one-row form is the bare object, indented two spaces, plus a single newline.
        assert!(one.starts_with("  {\"option\": "));
        assert!(one.ends_with("}\n"));
        let row: Value =
            serde_json::from_str(one.trim()).expect("the one-row form is a JSON object");
        let want = fixture
            .iter()
            .find(|entry| option_name(entry) == option)
            .unwrap_or_else(|| panic!("`{option}` is missing from phase_catalog.toml"));
        assert_same_entry(&row, want, &format!("one-row form of `{option}`"));
    }
}

#[test]
fn unknown_single_settable_is_none() {
    // C++ throws IfaceExecutionError for an unknown option; the port returns None.
    assert!(emit_catalog_json_one("not-a-real-option", None).is_none());
    assert!(lookup_settable("not-a-real-option").is_none());
}
