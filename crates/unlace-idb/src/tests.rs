use super::*;

const FIXTURE: &str = concat!(
    env!("CARGO_MANIFEST_DIR"),
    "/../unlace-cli/tests/fixtures/idb/cat.i64"
);

#[test]
fn reads_the_fixture() {
    let db = Database::open(FIXTURE, Load { memory: true }).expect("the fixture reads");
    assert_eq!(db.info.processor, "metapc");
    assert_eq!(db.info.address_bits, 64);
    assert_eq!(db.info.bitness, 64);
    assert_eq!(db.info.file_format, "Elf");
    assert_eq!(db.info.image_base, Some(0x400000));
    assert_eq!(db.segments.len(), 23);
    assert_eq!(db.functions.len(), 209);
    assert!(db.til.as_deref().is_some_and(|t| t.starts_with(b"IDATIL")));
    let main = db
        .functions
        .iter()
        .find(|f| f.name == "main")
        .expect("main");
    assert!(main.type_info.is_some());
    assert!(
        db.functions
            .iter()
            .any(|f| f.no_return && f.name == ".abort")
    );
    assert!(db.functions.windows(2).all(|p| p[0].start < p[1].start));
    assert!(db.memory.iter().any(|run| run.perms.execute
        && run.start <= main.start
        && main.start < run.start + run.bytes.len() as u64));
    assert!(!db.names.is_empty());
    assert!(!db.comments.is_empty());
    assert!(db.errors.is_empty(), "{:?}", db.errors);
}

#[test]
fn recognizes_the_magic() {
    assert!(Database::is_database(b"IDA1\0\0"));
    assert!(Database::is_database(b"IDA2"));
    assert!(!Database::is_database(b"\x7fELF"));
    assert!(!Database::is_database(b"ID"));
}

#[test]
fn malformed_input_is_an_error_not_a_panic() {
    let data = std::fs::read(FIXTURE).expect("the fixture");
    for len in [
        0,
        3,
        4,
        6,
        26,
        40,
        64,
        200,
        4096,
        data.len() / 3,
        data.len() / 2,
        data.len() - 1,
    ] {
        let _ = Database::from_bytes(&data[..len.min(data.len())], Load { memory: true });
    }
    let mut flipped = data.clone();
    for i in (0..flipped.len()).step_by(997) {
        flipped[i] ^= 0x5a;
    }
    let _ = Database::from_bytes(&flipped, Load { memory: true });
    assert!(Database::from_bytes(b"IDA2\0\0", Load::default()).is_err());
}
