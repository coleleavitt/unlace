use super::*;

#[test]
fn import_spellings_reduce_to_the_api_name() {
    assert_eq!(plain_name("CoCreateInstance"), "CoCreateInstance");
    assert_eq!(plain_name("__imp_CoCreateInstance"), "CoCreateInstance");
    assert_eq!(plain_name("_CoCreateInstance@20"), "CoCreateInstance");
    assert_eq!(
        plain_name("ole32.dll::CoGetClassObject"),
        "CoGetClassObject"
    );
    assert_eq!(plain_name("OLE32!CoGetObject"), "CoGetObject");
    assert_eq!(plain_name("@"), "@");
}

#[test]
fn every_request_names_two_distinct_slots() {
    for (name, riid, out) in REQUESTS.iter().chain(MULTI_QI_REQUESTS) {
        assert_ne!(riid, out, "{name}");
        assert!(*riid >= 1 && *out >= 1, "{name}");
    }
    for (name, ..) in MULTI_QI_REQUESTS {
        assert!(REQUESTS.iter().all(|(n, ..)| n != name), "{name}");
    }
}

#[test]
fn signed_reads_the_width() {
    assert_eq!(signed(0xffff_ffd8, 4), -0x28);
    assert_eq!(signed(0xffff_ffff_ffff_ffd8, 8), -0x28);
    assert_eq!(signed(0x28, 4), 0x28);
    assert_eq!(signed(0x80, 1), -0x80);
}
