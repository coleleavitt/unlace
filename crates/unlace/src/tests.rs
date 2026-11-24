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
