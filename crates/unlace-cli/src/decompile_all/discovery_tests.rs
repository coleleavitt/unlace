use super::*;
use std::sync::atomic::{AtomicU64, Ordering};

static TEMP_ID: AtomicU64 = AtomicU64::new(0);

/// A minimal ELF64 executable: one `PF_X` `PT_LOAD` and NO section table —
/// the section-header-stripped PIE shape of the witness binary, where the
/// program header is the only evidence the image holds code.
fn stripped_executable(payload: &[u8]) -> Vec<u8> {
    const EHDR: usize = 64;
    const PHDR: usize = 56;
    let mut out = vec![0u8; EHDR + PHDR + payload.len()];
    out[..4].copy_from_slice(b"\x7fELF");
    out[4] = 2; // ELFCLASS64
    out[5] = 1; // ELFDATA2LSB
    out[6] = 1; // EV_CURRENT
    out[16..18].copy_from_slice(&2u16.to_le_bytes()); // e_type = ET_EXEC
    out[18..20].copy_from_slice(&62u16.to_le_bytes()); // e_machine = EM_X86_64
    out[20..24].copy_from_slice(&1u32.to_le_bytes()); // e_version
    out[32..40].copy_from_slice(&(EHDR as u64).to_le_bytes()); // e_phoff
    out[52..54].copy_from_slice(&(EHDR as u16).to_le_bytes()); // e_ehsize
    out[54..56].copy_from_slice(&(PHDR as u16).to_le_bytes()); // e_phentsize
    out[56..58].copy_from_slice(&1u16.to_le_bytes()); // e_phnum
    let total = (EHDR + PHDR + payload.len()) as u64;
    let p = EHDR;
    out[p..p + 4].copy_from_slice(&1u32.to_le_bytes()); // p_type = PT_LOAD
    out[p + 4..p + 8].copy_from_slice(&5u32.to_le_bytes()); // p_flags = PF_R|PF_X
    out[p + 16..p + 24].copy_from_slice(&0x40_0000u64.to_le_bytes()); // p_vaddr
    out[p + 32..p + 40].copy_from_slice(&total.to_le_bytes()); // p_filesz
    out[p + 40..p + 48].copy_from_slice(&total.to_le_bytes()); // p_memsz
    out[p + 48..p + 56].copy_from_slice(&0x1000u64.to_le_bytes()); // p_align
    out[EHDR + PHDR..].copy_from_slice(payload);
    out
}

/// A minimal ET_REL ELF64 whose only allocated section is `.data` — an
/// object file that legitimately holds no functions at all.
fn data_only_object() -> Vec<u8> {
    const EHDR: usize = 64;
    const SHDR: usize = 64;
    let names: &[u8] = b"\0.data\0.shstrtab\0";
    let shoff = EHDR;
    let names_off = shoff + 3 * SHDR;
    let data_off = names_off + names.len();
    let mut out = vec![0u8; data_off + 4];
    out[..4].copy_from_slice(b"\x7fELF");
    out[4] = 2;
    out[5] = 1;
    out[6] = 1;
    out[16..18].copy_from_slice(&1u16.to_le_bytes()); // e_type = ET_REL
    out[18..20].copy_from_slice(&62u16.to_le_bytes());
    out[20..24].copy_from_slice(&1u32.to_le_bytes());
    out[40..48].copy_from_slice(&(shoff as u64).to_le_bytes()); // e_shoff
    out[52..54].copy_from_slice(&(EHDR as u16).to_le_bytes());
    out[58..60].copy_from_slice(&(SHDR as u16).to_le_bytes()); // e_shentsize
    out[60..62].copy_from_slice(&3u16.to_le_bytes()); // e_shnum
    out[62..64].copy_from_slice(&2u16.to_le_bytes()); // e_shstrndx
    out[names_off..data_off].copy_from_slice(names);

    fn shdr(out: &mut [u8], at: usize, name: u32, kind: u32, flags: u64, off: u64, size: u64) {
        out[at..at + 4].copy_from_slice(&name.to_le_bytes());
        out[at + 4..at + 8].copy_from_slice(&kind.to_le_bytes());
        out[at + 8..at + 16].copy_from_slice(&flags.to_le_bytes());
        out[at + 24..at + 32].copy_from_slice(&off.to_le_bytes());
        out[at + 32..at + 40].copy_from_slice(&size.to_le_bytes());
    }
    // `.data`: SHT_PROGBITS, SHF_ALLOC|SHF_WRITE — allocated, never executed.
    shdr(&mut out, shoff + SHDR, 1, 1, 0x3, data_off as u64, 4);
    shdr(
        &mut out,
        shoff + 2 * SHDR,
        7,
        3,
        0,
        names_off as u64,
        names.len() as u64,
    );
    out
}

fn temp_image(tag: &str, bytes: &[u8]) -> std::path::PathBuf {
    let id = TEMP_ID.fetch_add(1, Ordering::Relaxed);
    let path = std::env::temp_dir().join(format!(
        "unlace-discovery-{tag}-{}-{id}.bin",
        std::process::id()
    ));
    std::fs::write(&path, bytes).expect("write the discovery fixture");
    path
}

#[test]
fn the_upx_magic_is_recognized_and_nothing_else_is() {
    assert_eq!(detect_packer(b"....UPX!....."), Some("UPX"));
    assert_eq!(detect_packer(b"UPX!"), Some("UPX"));
    assert_eq!(detect_packer(b"a plain unpacked image, UPX-free"), None);
    assert_eq!(detect_packer(b"UPX"), None, "the magic is four bytes");
    assert_eq!(detect_packer(b""), None);
}

/// A section-header-stripped executable still shows its code through the
/// program headers, so zero functions there is a failure — and a packed one
/// is named, because that is the cause the caller can act on.
#[test]
fn a_packed_image_names_the_packer_in_the_failure() {
    let packed = temp_image("packed", &stripped_executable(b"UPX!\x00\x00\x00\x00"));
    let message = zero_discovery_error(packed.to_str().unwrap())
        .expect("an executable image that yielded nothing is a failure");
    assert!(message.contains("no functions"), "{message}");
    assert!(message.contains("UPX-packed"), "{message}");
    assert!(message.contains("unlace unpack"), "{message}");
    std::fs::remove_file(packed).expect("remove the discovery fixture");

    let plain = temp_image("plain", &stripped_executable(b"\x55\x48\x89\xe5\x5d\xc3"));
    let message = zero_discovery_error(plain.to_str().unwrap())
        .expect("an executable image that yielded nothing is a failure");
    assert!(message.contains("no functions"), "{message}");
    assert!(
        !message.contains("packed"),
        "no packer, no packer claim: {message}"
    );
    std::fs::remove_file(plain).expect("remove the discovery fixture");
}

/// The legitimate empty case: an image with no executable content has no
/// functions to find, so the empty inventory stays a success.
#[test]
fn an_image_with_no_code_keeps_its_honest_empty_answer() {
    let bytes = data_only_object();
    assert!(matches!(classify_code_evidence(&bytes), CodeEvidence::None));
    let path = temp_image("dataonly", &bytes);
    assert_eq!(zero_discovery_error(path.to_str().unwrap()), None);
    std::fs::remove_file(path).expect("remove the discovery fixture");
}

/// Anything `object` cannot parse is not evidence of innocence: a run that
/// found nothing in it still failed.
#[test]
fn an_unparseable_image_is_still_a_failure() {
    assert!(matches!(
        classify_code_evidence(b"not an object file at all"),
        CodeEvidence::Flagged
    ));
    assert!(matches!(classify_code_evidence(&[]), CodeEvidence::Flagged));
}

/// The packer shape: nothing flagged executable anywhere, and the entry
/// point in one of those data sections. Reporting `count: 0` in a
/// successful run's voice there is the thing this must not do — the image
/// says where execution starts, so the run failed.
#[test]
fn an_entry_point_in_a_data_section_is_still_executable_content() {
    let fixture = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-analysis/tests/fixtures/pe_datasection_entry_i386.exe");
    let bytes = std::fs::read(&fixture).expect("the fixture is checked in");
    let CodeEvidence::EntryPointOnly { entry, section } = classify_code_evidence(&bytes) else {
        panic!("an all-data PE with an entry point is not the honest empty case");
    };
    assert_eq!(entry, 0x402001);
    assert_eq!(section, "section .stub");

    let message = zero_discovery_error(fixture.to_str().unwrap())
        .expect("an image that declares an entry point and yielded nothing is a failure");
    assert!(message.contains("no functions"), "{message}");
    assert!(message.contains("0x402001"), "{message}");
    assert!(message.contains("--define-function"), "{message}");
}

/// The checked-in x86-64 fixture the acceptance probes use: real code, real
/// sections — the shape that must fail loudly if discovery ever returns
/// nothing for it.
#[test]
fn a_real_fixture_carries_executable_content() {
    let fixture = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-analysis/tests/fixtures/aif_gap_x86_64");
    let bytes = std::fs::read(fixture).expect("the fixture is checked in");
    assert!(matches!(
        classify_code_evidence(&bytes),
        CodeEvidence::Flagged
    ));
    assert_eq!(detect_packer(&bytes), None);
}

/// The run-level `error` field is present on every document, so a consumer
/// reads it unconditionally rather than inferring failure from `count`.
#[test]
fn the_run_level_error_field_is_always_present() {
    let healthy = functions_json(
        "fixture",
        &[],
        0,
        None,
        None,
        &|address| address,
        &Default::default(),
    );
    assert!(healthy.contains("\"error\": null"), "{healthy}");
    let failed = functions_json(
        "fixture",
        &[],
        0,
        Some("no functions discovered in fixture"),
        None,
        &|address| address,
        &Default::default(),
    );
    assert!(
        failed.contains("\"error\": \"no functions discovered in fixture\""),
        "{failed}"
    );
    let decompiled = render_result_json(
        "fixture",
        &[],
        &[],
        Some("boom"),
        &[],
        &Default::default(),
        &Default::default(),
        Default::default(),
        Default::default(),
        None,
    );
    assert!(decompiled.contains("\"error\": \"boom\""), "{decompiled}");
    assert!(
        render_result_json(
            "fixture",
            &[],
            &[],
            None,
            &[],
            &Default::default(),
            &Default::default(),
            Default::default(),
            Default::default(),
            None,
        )
        .contains("\"error\": null")
    );
}

/// `--language` reaches the document through the same last-write-wins lookup
/// every other option uses.
#[test]
fn the_document_reports_the_selected_language() {
    let options = vec![
        ("setlanguage".into(), "rust-language".into()),
        ("setlanguage".into(), "c-language".into()),
    ];
    assert!(
        render_result_json(
            "f",
            &[],
            &options,
            None,
            &[],
            &Default::default(),
            &Default::default(),
            Default::default(),
            Default::default(),
            None,
        )
        .contains("\"c-language\"")
    );
    assert!(
        render_result_json(
            "f",
            &[],
            &[],
            None,
            &[],
            &Default::default(),
            &Default::default(),
            Default::default(),
            Default::default(),
            None,
        )
        .contains("\"c-language\"")
    );
    let mut aliases = options.clone();
    aliases.push(("outlang".into(), "go".into()));
    assert!(
        render_result_json(
            "f",
            &[],
            &aliases,
            None,
            &[],
            &Default::default(),
            &Default::default(),
            Default::default(),
            Default::default(),
            None,
        )
        .contains("\"go-language\"")
    );
    aliases.push(("setlanguage".into(), "rust-language".into()));
    assert!(
        render_result_json(
            "f",
            &[],
            &aliases,
            None,
            &[],
            &Default::default(),
            &Default::default(),
            Default::default(),
            Default::default(),
            None,
        )
        .contains("\"rust-language\"")
    );
}
