use super::{MANIFEST_VERSION, Manifest, ManifestEntry, file_name};

#[test]
fn function_files_are_address_prefixed_and_stay_in_the_folder() {
    assert_eq!(file_name(0x401000, "main"), "00401000_main.c");
    assert_eq!(file_name(0x10, "../etc/x y"), "00000010_.._etc_x_y.c");
}

#[test]
fn manifest_is_toml_with_a_table_per_function_and_round_trips() {
    let addr = 0xffff_fff0_0700_4000_u64;
    let entry = ManifestEntry {
        addr,
        name: "f".to_string(),
        file: file_name(addr, "f"),
        status: "ok".to_string(),
    };
    let manifest = Manifest {
        version: MANIFEST_VERSION,
        function: vec![entry.clone()],
    };
    let text = toml::to_string(&manifest).expect("encode");
    assert!(text.contains("[[function]]"), "{text}");
    assert!(text.contains("addr = \"0xfffffff007004000\""), "{text}");
    let back: Manifest = toml::from_str(&text).expect("decode");
    assert_eq!(back.function, vec![entry]);
}
