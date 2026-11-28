use super::*;

fn rec(full: u64, spec: u64, cus: i16, addl: u8, name: &str) -> FidRecord {
    FidRecord {
        full_hash: full,
        specific_hash: spec,
        code_unit_size: cus,
        specific_addl: addl,
        flags: FLAG_HAS_TERMINATOR,
        name: name.to_string(),
        prototype: None,
        typedefs: Default::default(),
    }
}

#[test]
fn prototypes_and_typedefs_round_trip_in_version_2() {
    let mut described = rec(2, 20, 5, 0, "parse_header");
    described.prototype = Some("int parse_header(unsigned char *buf,hdr *out)".into());
    described.typedefs = vec![
        "typedef struct hdr hdr;".to_string(),
        "struct hdr { unsigned int magic; };".into(),
    ]
    .into();
    let mut shares = rec(3, 30, 5, 0, "other");
    shares.typedefs = described.typedefs.clone();
    let records = vec![rec(1, 10, 4, 0, "plain"), described, shares];
    let bytes = FidDb::from_records("L", "C", records.clone()).serialize();
    assert_eq!(bytes[4..8], FID_DB_VERSION.to_le_bytes());
    assert_eq!(
        bytes.windows(11).filter(|w| *w == b"struct hdr ").count(),
        2
    );
    let table = 22 + 3 * 36;
    assert_eq!(
        bytes[table..table + 12],
        [2, 0, 0, 0, 65, 0, 0, 0, 89, 0, 0, 0]
    );
    let back = FidDb::load(&bytes).unwrap();
    let got: Vec<FidRecord> = back.records().into_iter().cloned().collect();
    assert_eq!(got, records);
    for cut in 0..bytes.len() {
        let _ = FidDb::load(&bytes[..cut]);
    }
    let mut bad = bytes.clone();
    let proto_off = 22 + 36 + 24;
    bad[proto_off..proto_off + 4].copy_from_slice(&0x7fff_ffffu32.to_le_bytes());
    assert!(FidDb::load(&bad).is_err());
    let mut bad = bytes.clone();
    bad[proto_off + 8..proto_off + 12].copy_from_slice(&3u32.to_le_bytes());
    assert!(FidDb::load(&bad).is_err());
}

#[test]
fn a_database_without_prototypes_is_written_as_version_1() {
    let bytes = FidDb::from_records("L", "C", vec![rec(1, 10, 4, 0, "plain")]).serialize();
    assert_eq!(bytes[4..8], FID_DB_VERSION_NAMES.to_le_bytes());
    assert_eq!(bytes.len(), 22 + 24 + 6);
}

#[test]
fn round_trip_preserves_records_and_index() {
    // Build a DB in memory, serialize, re-load, and assert the records +
    // find_by_full_hash match (the §-Tests round-trip gate).
    let records = vec![
        rec(0x1111_1111_1111_1111, 0xaaaa, 10, 3, "unlace_crc32"),
        rec(0x2222_2222_2222_2222, 0xbbbb, 7, 1, "unlace_strlen"),
        rec(0x3333_3333_3333_3333, 0xcccc, 5, 0, "unlace_memset"),
    ];
    let db = FidDb::from_records("x86:LE:64:default", "gcc", records.clone());

    let bytes = db.serialize();
    let back = FidDb::load(&bytes).expect("round-trip load");

    // Header fields survive.
    assert_eq!(back.lang_id(), "x86:LE:64:default");
    assert_eq!(back.cspec_id(), "gcc");
    assert_eq!(back.record_count(), 3);

    // Each record is found by its full hash with all fields intact.
    for want in &records {
        let got = back.find_by_full_hash(want.full_hash);
        assert_eq!(got.len(), 1, "one record per distinct full hash");
        assert_eq!(&got[0], want, "record survives round-trip byte-for-byte");
    }

    // A hash that is not present yields no records (no panic, empty slice).
    assert!(back.find_by_full_hash(0xdead_beef).is_empty());
}

#[test]
fn collision_bucket_keeps_all_records() {
    // Two functions sharing a full hash both land in the same bucket and both
    // survive the round-trip.
    let records = vec![rec(0x4242, 0x1, 6, 2, "foo"), rec(0x4242, 0x2, 6, 2, "bar")];
    let db = FidDb::from_records("L", "C", records);
    let back = FidDb::load(&db.serialize()).unwrap();
    assert_eq!(back.record_count(), 2);
    let bucket = back.find_by_full_hash(0x4242);
    assert_eq!(bucket.len(), 2);
    let names: Vec<&str> = bucket.iter().map(|r| r.name.as_str()).collect();
    assert!(names.contains(&"foo") && names.contains(&"bar"));
}

#[test]
fn serialization_interns_names_in_sorted_record_order() {
    let db = FidDb::from_records(
        "L",
        "C",
        vec![
            rec(9, 40, 2, 1, "shared"),
            rec(1, 20, -2, 3, "z"),
            rec(1, 30, i16::MAX, 4, "shared"),
            rec(7, 50, 0, 0, ""),
        ],
    );
    let bytes = db.serialize();
    assert_eq!(
        &bytes[..22],
        b"KFID\x01\0\0\0\x01\0\0\0L\x01\0\0\0C\x04\0\0\0"
    );
    let table = &bytes[22..22 + 4 * 24];
    let fields: Vec<_> = table
        .as_chunks::<24>()
        .0
        .iter()
        .map(|record| {
            (
                u64::from_le_bytes(record[..8].try_into().unwrap()),
                u64::from_le_bytes(record[8..16].try_into().unwrap()),
                u32::from_le_bytes(record[20..24].try_into().unwrap()),
            )
        })
        .collect();
    assert_eq!(fields, [(1, 20, 0), (1, 30, 2), (7, 50, 9), (9, 40, 2)]);
    assert_eq!(&bytes[22 + 4 * 24..], b"z\0shared\0\0");
    assert_eq!(db.serialize(), bytes);
}

#[test]
fn names_are_interned() {
    // Two records with the same name share one blob entry — the serialized
    // size is smaller than if the name were stored twice, and both load back
    // to the same name.
    let dup = vec![rec(0x1, 0, 4, 0, "same"), rec(0x2, 0, 4, 0, "same")];
    let db = FidDb::from_records("L", "C", dup);
    let bytes = db.serialize();
    // "same\0" appears exactly once in the blob.
    let blob_count = bytes.windows(5).filter(|w| *w == b"same\0").count();
    assert_eq!(blob_count, 1, "the shared name is interned once");
    let back = FidDb::load(&bytes).unwrap();
    assert_eq!(back.find_by_full_hash(0x1)[0].name, "same");
    assert_eq!(back.find_by_full_hash(0x2)[0].name, "same");
}

#[test]
fn empty_db_round_trips() {
    let db = FidDb::from_records("x86:LE:64:default", "gcc", vec![]);
    let back = FidDb::load(&db.serialize()).unwrap();
    assert_eq!(back.record_count(), 0);
    assert!(back.find_by_full_hash(0).is_empty());
}

// --- Malformed-input robustness (never panic → Err) ----------------------

#[test]
fn empty_input_is_error_not_panic() {
    assert!(FidDb::load(&[]).is_err());
}

#[test]
fn bad_magic_is_error() {
    let mut bytes = FidDb::from_records("L", "C", vec![]).serialize();
    bytes[0] = b'X';
    assert!(FidDb::load(&bytes).is_err());
}

#[test]
fn wrong_version_is_error() {
    let mut bytes = FidDb::from_records("L", "C", vec![]).serialize();
    // The version u32 starts right after the 4-byte magic.
    bytes[4] = bytes[4].wrapping_add(2);
    assert!(FidDb::load(&bytes).is_err());
}

#[test]
fn truncated_record_table_is_error() {
    let db = FidDb::from_records("L", "C", vec![rec(0x1, 0x2, 4, 0, "x")]);
    let bytes = db.serialize();
    // Lop off the trailing half — the record table / blob is truncated.
    for cut in 1..bytes.len() {
        // Every truncation either errors or (for a prefix that happens to be a
        // valid empty-ish DB) loads — but it must NEVER panic.
        let _ = FidDb::load(&bytes[..cut]);
    }
}

#[test]
fn bad_name_offset_is_error() {
    // Hand-craft a DB whose single record points its name_off past the blob.
    let mut bytes: Vec<u8> = Vec::new();
    bytes.extend_from_slice(FID_DB_MAGIC);
    bytes.extend_from_slice(&FID_DB_VERSION_NAMES.to_le_bytes());
    // lang_id ""  cspec_id ""
    bytes.extend_from_slice(&0u32.to_le_bytes());
    bytes.extend_from_slice(&0u32.to_le_bytes());
    // n_records = 1
    bytes.extend_from_slice(&1u32.to_le_bytes());
    // the record: full|spec|cus|addl|flags|name_off=9999 (no blob follows)
    bytes.extend_from_slice(&0u64.to_le_bytes());
    bytes.extend_from_slice(&0u64.to_le_bytes());
    bytes.extend_from_slice(&0i16.to_le_bytes());
    bytes.push(0);
    bytes.push(0);
    bytes.extend_from_slice(&9999u32.to_le_bytes());
    // (no string blob)
    assert!(FidDb::load(&bytes).is_err());
}

#[test]
fn records_naming_overlapping_runs_stop_at_the_text_budget() {
    let (n, run, len) = (300u32, 300u32, 1024usize);
    let mut bytes: Vec<u8> = Vec::new();
    bytes.extend_from_slice(FID_DB_MAGIC);
    bytes.extend_from_slice(&FID_DB_VERSION.to_le_bytes());
    bytes.extend_from_slice(&0u32.to_le_bytes());
    bytes.extend_from_slice(&0u32.to_le_bytes());
    bytes.extend_from_slice(&n.to_le_bytes());
    for i in 0..n {
        bytes.extend_from_slice(&u64::from(i).to_le_bytes());
        bytes.extend_from_slice(&0u64.to_le_bytes());
        bytes.extend_from_slice(&5i16.to_le_bytes());
        bytes.extend_from_slice(&[0, 0]);
        for word in [0, NO_STRING, i, run] {
            bytes.extend_from_slice(&word.to_le_bytes());
        }
    }
    bytes.extend_from_slice(&(n + run).to_le_bytes());
    for _ in 0..n + run {
        bytes.extend_from_slice(&2u32.to_le_bytes());
    }
    bytes.extend_from_slice(b"f\0");
    bytes.extend(std::iter::repeat_n(b'A', len));
    bytes.push(0);
    assert!(bytes.len() < 16 << 10);
    let err = FidDb::load(&bytes).unwrap_err().explain().to_string();
    assert!(err.contains("expand past"), "{err}");
}

#[test]
fn records_naming_one_run_share_its_text() {
    let decl = |d: &str| d.to_string();
    let mut a = FidRecord {
        full_hash: 1,
        specific_hash: 0,
        code_unit_size: 5,
        specific_addl: 0,
        flags: 0,
        name: "f".into(),
        prototype: Some("s *f(void)".into()),
        typedefs: vec![decl("typedef struct s s;"), decl("struct s { int4 a; };")].into(),
    };
    let mut b = a.clone();
    b.full_hash = 2;
    b.name = "g".into();
    a.prototype = Some("s *g(void)".into());
    let db = FidDb::load(&FidDb::from_records("x86:LE:64:default", "gcc", vec![a, b]).serialize())
        .unwrap();
    let records = db.records();
    assert!(Rc::ptr_eq(&records[0].typedefs, &records[1].typedefs));
}
