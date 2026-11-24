use super::*;

fn flag_values(argv: &[String], flag: &str) -> Vec<String> {
    argv.windows(2)
        .filter(|pair| pair[0] == flag)
        .map(|pair| pair[1].clone())
        .collect()
}

#[test]
fn builders_lower_to_the_command_line() {
    let decompiler = Decompiler::from_bytes(b"\x7fELF")
        .unwrap()
        .with_function(0x1000, Some(0x1040), Some("handler"))
        .with_function(0x2000, None, None)
        .with_prototype(0x1000, " int handler(char *buf) ")
        .with_option("ctypes", "on")
        .with_language(Language::C)
        .with_mode("reliable")
        .with_isa("thumb")
        .with_max_fn_seconds(5);
    let argv = decompiler.request.argv();
    assert_eq!(argv[1], "--json");
    assert_eq!(
        flag_values(&argv, "--define-function"),
        ["0x1000-0x1040=handler", "0x2000"]
    );
    assert_eq!(
        flag_values(&argv, "--assert"),
        ["prototype 0x1000 int handler(char *buf)"]
    );
    assert_eq!(flag_values(&argv, "--language"), ["c"]);
    assert_eq!(flag_values(&argv, "--mode"), ["reliable"]);
    assert_eq!(flag_values(&argv, "--isa"), ["thumb"]);
    assert_eq!(flag_values(&argv, "--max-fn-seconds"), ["5"]);
    let option = argv.iter().position(|a| a == "--option").unwrap();
    assert_eq!(argv[option + 1..option + 3], ["ctypes", "on"]);
}

#[test]
fn a_missing_file_is_an_io_error() {
    assert!(matches!(
        Decompiler::open("/nonexistent/unlace-api-test"),
        Err(Error::Io { .. })
    ));
}

#[test]
fn in_memory_bytes_outlive_the_call_and_go_with_the_decompiler() {
    let decompiler = Decompiler::from_bytes(b"bytes").unwrap();
    let path = std::path::PathBuf::from(&decompiler.request.binary);
    assert_eq!(std::fs::read(&path).unwrap(), b"bytes");
    drop(decompiler);
    assert!(!path.exists());
}

#[test]
fn bad_input_is_an_error_not_a_panic() {
    let mut decompiler = Decompiler::from_bytes(b"not a binary")
        .unwrap()
        .with_option("no_such_option_anywhere", "on");
    assert!(matches!(
        decompiler.functions(),
        Err(Error::Request(_) | Error::Load(_))
    ));
    let mut decompiler = Decompiler::from_bytes(b"not a binary")
        .unwrap()
        .with_function(0x2000, Some(0x1000), None);
    assert!(decompiler.decompile(0x2000).is_err());
}

#[test]
fn the_api_types_are_what_the_docs_promise() {
    fn send_sync<T: Send + Sync>() {}
    send_sync::<Error>();
    send_sync::<Decompiled>();
    send_sync::<FunctionInfo>();
    assert_eq!(Target::X86_64.id(), "x86:LE:64:default");
    assert_eq!(Language::Rust.flag_value(), "rust");
}

#[test]
fn raw_input_lowers_to_raw_image_flags() {
    let decompiler = Decompiler::from_raw(vec![0xc3; 16], Target::X86_64, 0x1000, &[], &[0x1000])
        .unwrap()
        .with_entry(0x1008)
        .with_noreturn(0x1004);
    let argv = decompiler.request.argv();
    assert!(argv.iter().any(|a| a == "--raw-image"));
    assert_eq!(flag_values(&argv, "--base"), ["0x1000"]);
    assert_eq!(flag_values(&argv, "--entry"), ["0x1000", "0x1008"]);
    assert_eq!(flag_values(&argv, "--target"), ["x86:LE:64:default"]);
    assert_eq!(decompiler.request.noreturn, [0x1004]);
}

#[test]
fn a_container_entry_is_a_declared_function() {
    let decompiler = Decompiler::from_bytes(b"\x7fELF")
        .unwrap()
        .with_entry(0x401000);
    let argv = decompiler.request.argv();
    assert_eq!(flag_values(&argv, "--define-function"), ["0x401000"]);
    assert!(!argv.iter().any(|a| a == "--entry"));
}

#[test]
fn segments_are_carved_out_of_the_bytes_and_checked() {
    let bytes: Vec<u8> = (0..0x40).collect();
    let segments = [
        Segment::new(0x1020, 0x10, Perms::R),
        Segment::new(0x1000, 0x10, Perms::RX),
    ];
    let decompiler =
        Decompiler::from_raw(&bytes, Target::X86_64, 0x1000, &segments, &[0x1000]).unwrap();
    let raw = decompiler.request.raw.as_ref().unwrap();
    assert_eq!(raw.base, 0x1000);
    let runs = raw.segments.as_ref().unwrap();
    assert_eq!(runs.len(), 2);
    assert_eq!(runs[0].0, 0x1000);
    assert_eq!(runs[0].1, bytes[..0x10]);
    assert_eq!(runs[1].0, 0x1020);
    assert_eq!(runs[1].1, bytes[0x20..0x30]);
    assert_ne!(runs[0].2, runs[1].2, "code and read-only data differ");

    let past_end = [Segment::new(0x1030, 0x20, Perms::RX)];
    let below_base = [Segment::new(0x800, 0x10, Perms::RX)];
    for bad in [&past_end[..], &below_base[..]] {
        assert!(matches!(
            Decompiler::from_raw(&bytes, Target::X86_64, 0x1000, bad, &[]),
            Err(Error::Segments(_))
        ));
    }
    let overlapping = vec![(0x10, vec![1; 8], Perms::RX), (0x14, vec![1; 8], Perms::RX)];
    assert!(matches!(
        Decompiler::from_memory(Target::X86_64, overlapping, &[]),
        Err(Error::Segments(_))
    ));
    assert!(matches!(
        Decompiler::from_memory(Target::X86_64, Vec::new(), &[]),
        Err(Error::Segments(_))
    ));
}

const IDB: &str = concat!(
    env!("CARGO_MANIFEST_DIR"),
    "/../unlace-cli/tests/fixtures/idb/cat.i64"
);

#[test]
fn an_ida_database_loads_as_its_segments_with_its_knowledge() {
    let decompiler = Decompiler::from_idb(IDB).expect("the fixture reads");
    let argv = decompiler.request.argv();
    assert_eq!(flag_values(&argv, "--target"), ["x86:LE:64:default"]);
    assert!(argv.iter().any(|a| a == "--raw-image"));
    let raw = decompiler.request.raw.as_ref().expect("a raw load");
    assert!(raw.segments.as_ref().is_some_and(|runs| !runs.is_empty()));
    assert!(!raw.entries.is_empty());
    let assertions = flag_values(&argv, "--assert");
    assert!(
        assertions
            .iter()
            .any(|d| d.starts_with("function ") && d.ends_with("=main"))
    );
    assert!(assertions.iter().any(|d| d.starts_with("prototype ")));
    assert!(!decompiler.request.noreturn.is_empty());
}

#[test]
fn an_ida_database_of_other_bytes_is_refused() {
    let refused = Decompiler::from_bytes(b"\x7fELF other bytes")
        .unwrap()
        .with_idb(IDB);
    assert!(matches!(refused, Err(Error::Request(_))));
    assert!(matches!(
        Decompiler::from_bytes(b"x")
            .unwrap()
            .with_idb("/nonexistent/db.i64"),
        Err(Error::Io { .. })
    ));
    let raw = Decompiler::from_raw(vec![0xc3; 16], Target::X86_64, 0x401000, &[], &[0x401000])
        .unwrap()
        .with_idb(IDB)
        .expect("a raw input is not checked");
    assert!(
        flag_values(&raw.request.argv(), "--assert")
            .iter()
            .any(|d| d.starts_with("function "))
    );
}

#[test]
fn an_ida_database_decompiles_without_its_binary() {
    let mut decompiler = Decompiler::from_idb(IDB).expect("the fixture reads");
    let main = decompiler.decompile_named("main").expect("main decompiles");
    assert!(!main.c.is_empty());
}
