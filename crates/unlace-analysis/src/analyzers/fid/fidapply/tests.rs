use super::*;

fn family(processor: &str, size: i32, big: bool) -> LanguageFamily {
    LanguageFamily {
        processor: processor.into(),
        size,
        instruction_big_endian: big,
    }
}

#[test]
fn processor_size_and_instruction_order_decide() {
    let x86_64 = family("x86", 64, false);
    assert!(differences(&x86_64, &family("x86", 64, false)).is_empty());
    assert_eq!(
        differences(&x86_64, &family("x86", 32, false)),
        ["address size"]
    );
    assert_eq!(
        differences(&x86_64, &family("AARCH64", 64, false)),
        ["processor"]
    );
    assert_eq!(
        differences(&family("ARM", 32, false), &family("PowerPC", 64, true)),
        ["processor", "address size", "instruction byte order"]
    );
}

#[test]
fn only_a_loaded_database_is_silent() {
    let mut report = FidDbReport {
        path: "lib.fid".into(),
        status: FidDbStatus::Loaded,
        records: Some(2),
        language: Some("x86:LE:64:default".into()),
        compiler_spec: Some("gcc".into()),
        reason: None,
    };
    assert_eq!(report.warning(), None);
    report.status = FidDbStatus::Missing;
    assert_eq!(
        report.warning().as_deref(),
        Some("FID database lib.fid: no such file; no function was matched against it")
    );
}
