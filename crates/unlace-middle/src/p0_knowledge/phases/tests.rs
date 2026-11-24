//! Unit tests for the unlace phase registry (`phases.rs`).
//!
//! Parity targets (origin: `decompiler/cpp/unlace_stages.cc`, since grown):
//! group/subphase/surface/settable counts read from `phases.toml` itself, plus the phase-code
//! helpers, the lookup API, the typed `OptionValues` defaults, and the
//! catalog emitter.

use super::*;

#[test]
fn github_anchor_matches_rendered_heading_text() {
    let cases = [
        (
            "`objc` -- on | off, default `off`",
            "objc----on--off-default-off",
        ),
        (
            "`returnpair` -- pair | single, default `pair` (destructive opt-in)",
            "returnpair----pair--single-default-pair-destructive-opt-in",
        ),
        (
            "`fooopt` -- off | 0 | 1 | <n>, default `2`",
            "fooopt----off--0--1---default-2",
        ),
    ];
    for (heading, anchor) in cases {
        assert_eq!(github_anchor(heading), anchor, "{heading}");
    }
}

/// The registry the tables are generated from. Every count here is read from it,
/// so a row another branch adds moves the expectation with it, and the tables
/// are checked against an independent parse of the same file.
mod registry {
    use serde::Deserialize;
    use serde::de::IgnoredAny;

    #[derive(Deserialize)]
    pub struct Registry {
        pub group: Vec<IgnoredAny>,
        pub subphase: Vec<IgnoredAny>,
        pub surface: Vec<IgnoredAny>,
        pub settable: Vec<Settable>,
    }

    #[derive(Deserialize)]
    pub struct Settable {
        pub option: String,
        pub tier: String,
        pub live_field: Option<String>,
    }

    pub fn load() -> Registry {
        toml::from_str(include_str!("../../../../unlace-decomp/phases.toml"))
            .expect("phases.toml parses")
    }
}

#[test]
fn table_counts_match_the_registry() {
    let reg = registry::load();
    assert_eq!(unlace_num_groups(), reg.group.len());
    assert_eq!(GROUP_TABLE.len(), reg.group.len());
    assert_eq!(unlace_num_subphases(), reg.subphase.len());
    assert_eq!(SUBPHASE_TABLE.len(), reg.subphase.len());
    assert_eq!(unlace_num_surfaces(), reg.surface.len());
    assert_eq!(SURFACE_TABLE.len(), reg.surface.len());
    assert_eq!(unlace_num_settables(), reg.settable.len());
    assert_eq!(SETTABLE_TABLE.len(), reg.settable.len());
    let options: Vec<&str> = SETTABLE_TABLE.iter().map(|s| s.option).collect();
    let rows: Vec<&str> = reg.settable.iter().map(|s| s.option.as_str()).collect();
    assert_eq!(
        options, rows,
        "the settable table keeps the registry's order"
    );
}

#[test]
fn every_settable_has_a_valid_tier_matching_the_registry() {
    let reg = registry::load();
    for (s, row) in SETTABLE_TABLE.iter().zip(&reg.settable) {
        assert!(
            matches!(s.tier, "core" | "transform" | "analysis"),
            "invalid tier {:?} on {}",
            s.tier,
            s.option
        );
        assert_eq!(s.tier, row.tier, "tier of {}", s.option);
    }
}

#[test]
fn noreturn_family_is_all_transform_tier() {
    // The whole family can remove code at call sites, so it sits in the
    // control-surface tier regardless of which tier mechanically hosts it.
    for s in SETTABLE_TABLE
        .iter()
        .filter(|s| s.option.starts_with("noreturn_"))
    {
        assert_eq!(
            s.tier, "transform",
            "{} must sit in the transform tier",
            s.option
        );
    }
}

// --- Stage helpers (unlaceStageCode/Name/Artifact/InBandB/FromCode) ------------

#[test]
fn stage_codes() {
    assert_eq!(UnlacePhase::P0.code(), "P0");
    assert_eq!(UnlacePhase::P1.code(), "P1");
    assert_eq!(UnlacePhase::P9.code(), "P9");
    // C++ STAGE_CODES[10] for infra.
    assert_eq!(UnlacePhase::Infra.code(), "--");
}

#[test]
fn stage_names_and_artifacts() {
    assert_eq!(UnlacePhase::P0.name(), "Knowledge & Configuration Plane");
    assert_eq!(UnlacePhase::P9.name(), "Surface Rendering & Refinement");
    assert_eq!(UnlacePhase::Infra.name(), "Infrastructure / orchestration");
    assert_eq!(
        UnlacePhase::P7.artifact(),
        "region tree (sblocks - physically distinct from the CFG)"
    );
    assert_eq!(
        UnlacePhase::Infra.artifact(),
        "(none - schedule/termination policy only)"
    );
}

#[test]
fn band_b_membership() {
    // C++ unlaceStageInBandB: S3..S6 only.
    assert!(!UnlacePhase::P0.in_band_b());
    assert!(!UnlacePhase::P1.in_band_b());
    assert!(!UnlacePhase::P2.in_band_b());
    assert!(UnlacePhase::P3.in_band_b());
    assert!(UnlacePhase::P4.in_band_b());
    assert!(UnlacePhase::P5.in_band_b());
    assert!(UnlacePhase::P6.in_band_b());
    assert!(!UnlacePhase::P7.in_band_b());
    assert!(!UnlacePhase::P8.in_band_b());
    assert!(!UnlacePhase::P9.in_band_b());
    assert!(!UnlacePhase::Infra.in_band_b());
}

#[test]
fn stage_from_code() {
    // C++ unlaceStageFromCode: P0/p0, S1..S9/s1..s9; everything else fails.
    assert_eq!(UnlacePhase::from_code("P0"), Some(UnlacePhase::P0));
    assert_eq!(UnlacePhase::from_code("p0"), Some(UnlacePhase::P0));
    assert_eq!(UnlacePhase::from_code("S3"), Some(UnlacePhase::P3));
    assert_eq!(UnlacePhase::from_code("s3"), Some(UnlacePhase::P3));
    assert_eq!(UnlacePhase::from_code("S9"), Some(UnlacePhase::P9));
    // Failures.
    assert_eq!(UnlacePhase::from_code("P3"), Some(UnlacePhase::P3));
    assert_eq!(UnlacePhase::from_code("p9"), Some(UnlacePhase::P9));
    assert_eq!(UnlacePhase::from_code("S0"), None);
    assert_eq!(UnlacePhase::from_code("P0"), Some(UnlacePhase::P0));
    assert_eq!(UnlacePhase::from_code("X3"), None);
    assert_eq!(UnlacePhase::from_code("S"), None);
    assert_eq!(UnlacePhase::from_code("S33"), None);
    assert_eq!(UnlacePhase::from_code(""), None);
    assert_eq!(UnlacePhase::from_code("--"), None);
}

#[test]
fn stage_index_matches_cpp_enum() {
    // C++ enum: kstage_infra=-1, kstage_p0=0, kstage_s1=1 .. kstage_s9=9.
    assert_eq!(UnlacePhase::Infra.index(), -1);
    assert_eq!(UnlacePhase::P0.index(), 0);
    assert_eq!(UnlacePhase::P1.index(), 1);
    assert_eq!(UnlacePhase::P9.index(), 9);
}

// --- Lookup API (unlaceLookup*) ------------------------------------------------

#[test]
fn lookup_group_parity() {
    // Every group in the table is findable by name and round-trips by index.
    for i in 0..unlace_num_groups() {
        let e = unlace_group_by_index(i);
        let found = lookup_group(e.group).expect("group findable by name");
        assert_eq!(found.group, e.group);
        assert_eq!(found.phase, e.phase);
    }
    // A couple of known entries (transcribed from groupTable).
    assert_eq!(lookup_group("base").unwrap().phase, UnlacePhase::Infra);
    assert_eq!(lookup_group("analysis").unwrap().phase, UnlacePhase::P3);
    assert_eq!(lookup_group("casts").unwrap().phase, UnlacePhase::P9);
    assert!(lookup_group("nonexistent").is_none());
}

#[test]
fn lookup_subphase_parity() {
    for i in 0..unlace_num_subphases() {
        let e = unlace_subphase_by_index(i);
        let found = lookup_subphase(e.name).expect("subphase findable");
        assert_eq!(found.name, e.name);
        assert_eq!(found.phase, e.phase);
        assert_eq!(found.rewind, e.rewind);
    }
    // Known rewind targets (stage-model.md section 12).
    let typ = lookup_subphase("type-propagation").unwrap();
    assert_eq!(typ.phase, UnlacePhase::P5);
    assert_eq!(typ.rewind, UnlacePhase::P5);
    let force = lookup_subphase("edge-virtualization").unwrap();
    assert_eq!(force.phase, UnlacePhase::P7);
    assert_eq!(force.rewind, UnlacePhase::P7);
    // explicit-implied: rewinds to S9 (the only cross-stage rewind in the table).
    let ei = lookup_subphase("explicit-implied").unwrap();
    assert_eq!(ei.phase, UnlacePhase::P6);
    assert_eq!(ei.rewind, UnlacePhase::P9);
    assert!(lookup_subphase("not-a-subphase").is_none());
}

#[test]
fn lookup_surface_parity() {
    for i in 0..unlace_num_surfaces() {
        let e = unlace_surface_by_index(i);
        let found = lookup_surface(e.surface).expect("surface findable by exact string");
        assert_eq!(found.surface, e.surface);
        assert_eq!(found.phase, e.phase);
    }
    assert_eq!(lookup_surface("force goto").unwrap().phase, UnlacePhase::P7);
    assert_eq!(
        lookup_surface("option compareform").unwrap().subphase,
        "comparison-canonicalization"
    );
    assert!(lookup_surface("nope").is_none());
}

#[test]
fn lookup_settable_parity() {
    for i in 0..unlace_num_settables() {
        let e = unlace_settable_by_index(i);
        let found = lookup_settable(e.option).expect("settable findable by option");
        assert_eq!(found.option, e.option);
        assert_eq!(found.shipped, e.shipped);
    }
    assert!(lookup_settable("compareform").is_some());
    assert!(lookup_settable("namestyle").is_some());
    assert!(lookup_settable("not-an-option").is_none());
}

// --- Typed OptionValues defaults == settableTable shipped values -------------

#[test]
fn option_values_defaults_match_shipped() {
    let ov = OptionValues::default();
    for i in 0..unlace_num_settables() {
        let st = unlace_settable_by_index(i);
        let live = ov
            .get(st.option)
            .unwrap_or_else(|| panic!("OptionValues field missing for {}", st.option));
        assert_eq!(
            live, st.shipped,
            "default for {} must equal shipped value",
            st.option
        );
    }
}

#[test]
fn option_values_set_validates_against_values() {
    let mut ov = OptionValues::default();
    // compareform default is "original"; "canonical" is allowed.
    assert_eq!(ov.get("compareform"), Some("original"));
    assert!(ov.set("compareform", "canonical"));
    assert_eq!(ov.get("compareform"), Some("canonical"));
    // An out-of-vocabulary value is rejected and leaves the field unchanged.
    assert!(!ov.set("compareform", "bogus"));
    assert_eq!(ov.get("compareform"), Some("canonical"));
    // Unknown option.
    assert!(!ov.set("not-an-option", "on"));
    assert_eq!(ov.get("not-an-option"), None);
}

#[test]
fn option_values_live_value_exactly_for_live_field_rows() {
    // A row with a `live_field` gets a codegen live reader, whose default is the
    // shipped value; every other row (registered options, load-time gates,
    // multi-valued modes) reports its live state elsewhere and has none.
    let ov = OptionValues::default();
    let reg = registry::load();
    for (i, row) in reg.settable.iter().enumerate() {
        let st = unlace_settable_by_index(i);
        assert_eq!(st.option, row.option);
        match (ov.live_value(st.option), &row.live_field) {
            (Some(v), Some(_)) => {
                assert_eq!(v, st.shipped, "live default == shipped for {}", st.option)
            }
            (None, None) => {}
            (live, field) => panic!(
                "{}: live reader {:?} but live_field {:?}",
                st.option, live, field
            ),
        }
    }
}

#[test]
fn live_from_arch_matches_cpp_ternaries() {
    // compareform = present_lessequal ? "original" : "canonical"
    let on = |_f: &str| Some(true);
    let off = |_f: &str| Some(false);
    assert_eq!(
        OptionValues::live_from_arch("compareform", on),
        Some("original")
    );
    assert_eq!(
        OptionValues::live_from_arch("compareform", off),
        Some("canonical")
    );
    // returnpair = return_single ? "single" : "pair"
    assert_eq!(
        OptionValues::live_from_arch("returnpair", on),
        Some("single")
    );
    assert_eq!(
        OptionValues::live_from_arch("returnpair", off),
        Some("pair")
    );
    // a plain on/off option
    assert_eq!(
        OptionValues::live_from_arch("memsetrecover", on),
        Some("on")
    );
    assert_eq!(
        OptionValues::live_from_arch("memsetrecover", off),
        Some("off")
    );
    // no live reader -> None even with a value-producing closure
    assert_eq!(OptionValues::live_from_arch("namestyle", on), None);
    assert_eq!(OptionValues::live_from_arch("stackguard", on), None);
    assert_eq!(OptionValues::live_from_arch("loweredswitch", on), None);
    // unknown flag -> None propagates
    assert_eq!(
        OptionValues::live_from_arch("compareform", |_f: &str| None),
        None
    );
}

// --- Catalog JSON emitter byte-shape (full byte-compat is in the integration
//     test catalog_bytecompat.rs against the C++ binary's captured output) ----

#[test]
fn emit_settable_json_first_row_shape() {
    // The first settable is `compareform`. Emit it with no live value (no
    // program loaded form) and check the leading bytes match unlaceEmitSettableJson.
    let st = lookup_settable("compareform").unwrap();
    let mut out = String::new();
    emit_settable_json(&mut out, st, None);
    assert!(out.starts_with("  {\"option\": \"compareform\", \"values\": [\"canonical\", \"original\"], \"default\": \"original\", \"destructive_as_default\": false, \"phase\": \"P3\""));
    // No `current` field when live is None.
    assert!(!out.contains("\"current\""));
    // ... and the tail order (issue ... change_kind ... tier ... symptoms).
    assert!(out.contains("\"strength\": \"HARD\", \"rewind\": \"P3\", \"issue\": \"GH-558\""));
    assert!(out.contains(
        "\"change_kind\": \"presentation-default\", \"tier\": \"core\", \"symptoms\": [\""
    ));
    assert!(out.ends_with("\"]}"));
}

#[test]
fn every_settable_has_nonempty_symptoms() {
    // C3: every catalog row carries at least one nonempty, output-shaped
    // symptom phrase (pipe-separated in the table, a JSON array in the
    // catalog) so an LLM can grep a natural-language symptom to its option.
    for i in 0..unlace_num_settables() {
        let st = unlace_settable_by_index(i);
        assert!(
            !st.symptoms.is_empty(),
            "settable `{}` has no symptoms",
            st.option
        );
        for phrase in st.symptoms.split('|') {
            assert!(
                !phrase.trim().is_empty(),
                "settable `{}` has an empty symptom phrase",
                st.option
            );
        }
    }
}

#[test]
fn emit_settable_json_includes_current_when_live() {
    let st = lookup_settable("compareform").unwrap();
    let mut out = String::new();
    emit_settable_json(&mut out, st, Some("canonical"));
    // C++ inserts "current" right after "default".
    assert!(out.contains(
        "\"default\": \"original\", \"current\": \"canonical\", \"destructive_as_default\""
    ));
}

#[test]
fn emit_catalog_json_static_form_brackets_and_commas() {
    let json = emit_catalog_json(|_| None);
    assert!(json.starts_with("[\n  {\"option\": \"compareform\""));
    assert!(json.ends_with("}\n]\n"));
    // One row per settable, every one but the last followed by a comma.
    assert_eq!(
        json.matches("},\n").count(),
        registry::load().settable.len() - 1
    );
}

#[test]
fn emit_catalog_json_one_unknown_is_none() {
    assert!(emit_catalog_json_one("bogus", None).is_none());
    let one = emit_catalog_json_one("namestyle", None).unwrap();
    assert!(one.starts_with("  {\"option\": \"namestyle\""));
    assert!(one.ends_with("}\n"));
}

#[test]
fn json_string_escaping() {
    // Direct check of the escape rules (quote, backslash, newline, control).
    let mut out = String::new();
    json_string(&mut out, "a\"b\\c\nd\te");
    // tab (0x09) is a control char < 0x20 and is NOT '\n' -> collapses to space.
    assert_eq!(out, "\"a\\\"b\\\\c\\nd e\"");
}
