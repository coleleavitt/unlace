use super::*;

#[test]
fn pass_identity() {
    let p = FidPass;
    assert_eq!(p.id(), "fid");
    assert_eq!(p.phase(), Phase::P1);
}

fn rec(full: u64, name: &str) -> FidRecord {
    FidRecord {
        full_hash: full,
        specific_hash: 0,
        code_unit_size: 10,
        specific_addl: 0,
        flags: 0,
        name: name.to_string(),
        prototype: None,
        typedefs: Default::default(),
    }
}

fn quad() -> FidHashQuad {
    FidHashQuad {
        code_unit_size: 10,
        full_hash: 0x1234,
        specific_addl_size: 0,
        specific_hash: 0,
    }
}

#[test]
fn unique_single_record_yields_its_name() {
    let recs = [rec(0x1234, "unlace_crc32")];
    assert_eq!(
        pick_unique_name(&recs, &quad()).as_deref(),
        Some("unlace_crc32")
    );
}

#[test]
fn empty_bucket_yields_nothing() {
    assert!(pick_unique_name(&[], &quad()).is_none());
}

#[test]
fn collapsing_aliases_yield_the_shared_name() {
    // Several records that all carry the same name collapse to it (the same
    // function fingerprinted under aliased symbols).
    let recs = [rec(0x1234, "unlace_crc32"), rec(0x1234, "unlace_crc32")];
    assert_eq!(
        pick_unique_name(&recs, &quad()).as_deref(),
        Some("unlace_crc32")
    );
}

#[test]
fn genuine_multi_name_bucket_is_a_tie_no_guess() {
    // Two differently-named functions sharing a full hash → never guess.
    let recs = [rec(0x1234, "foo"), rec(0x1234, "bar")];
    assert!(pick_unique_name(&recs, &quad()).is_none());
}
