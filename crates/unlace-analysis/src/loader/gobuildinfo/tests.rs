use super::*;

fn blob(version: &str, flags: u8) -> Vec<u8> {
    let mut b = Vec::new();
    b.extend_from_slice(MAGIC);
    b.push(8); // ptr size
    b.push(flags);
    b.resize(32, 0);
    b.push(u8::try_from(version.len()).unwrap()); // uvarint (short)
    b.extend_from_slice(version.as_bytes());
    b
}

fn unmapped(_: u64, _: usize) -> Option<&'static [u8]> {
    None
}

#[test]
fn only_a_complete_header_is_buildinfo() {
    assert!(blob_is_buildinfo(&blob("go1.21.3", 2), unmapped));
    assert!(blob_is_buildinfo(
        &blob("devel go1.23-0a1b2c3", 2),
        unmapped
    ));
    let mut ptr4 = blob("go1.22.1", 2);
    ptr4[14] = 4;
    assert!(blob_is_buildinfo(&ptr4, unmapped));

    let bare: Vec<u8> = MAGIC.iter().copied().chain([0u8; 18]).collect();
    assert!(
        !blob_is_buildinfo(&bare, unmapped),
        "the magic string alone"
    );
    let mut bad = blob("go1.21.3", 2);
    bad[14] = 3;
    assert!(!blob_is_buildinfo(&bad, unmapped), "pointer size 3");
    let mut bad = blob("go1.21.3", 2);
    bad[15] = 0x12;
    assert!(!blob_is_buildinfo(&bad, unmapped), "unknown flag bits");
    let mut bad = blob("go1.21.3", 2);
    bad[20] = 1;
    assert!(!blob_is_buildinfo(&bad, unmapped), "nonzero header padding");
    assert!(!blob_is_buildinfo(&blob("", 2), unmapped), "empty version");
    assert!(
        !blob_is_buildinfo(&blob("v1.2.3", 2), unmapped),
        "not a toolchain version"
    );
    assert!(
        !blob_is_buildinfo(&blob("go1\x01", 2), unmapped),
        "control bytes"
    );
    let mut cut = blob("go1.21.3", 2);
    cut.truncate(36);
    assert!(
        !blob_is_buildinfo(&cut, unmapped),
        "version runs off the end"
    );
    assert!(
        !blob_is_buildinfo(&MAGIC[..], unmapped),
        "short of a header"
    );
}

#[test]
fn pointer_form_resolves_its_version_string() {
    let mut b = Vec::new();
    b.extend_from_slice(MAGIC);
    b.extend_from_slice(&[8, 0]);
    b.extend_from_slice(&0x5000u64.to_le_bytes());
    b.extend_from_slice(&0x6000u64.to_le_bytes());
    let header: Vec<u8> = [0x7000u64.to_le_bytes(), 9u64.to_le_bytes()].concat();
    let text = b"go1.16.15".to_vec();
    let read = |vma: u64, len: usize| match vma {
        0x5000 => header.get(..len),
        0x7000 => text.get(..len),
        _ => None,
    };
    assert!(blob_is_buildinfo(&b, read));
    assert_eq!(stated_release(&b, read), Some(Some((1, 16))));
    assert_eq!(go_version(&b, read), Some((1, 16)));
    let dangling = |vma: u64, len: usize| {
        if vma == 0x5000 {
            header.get(..len)
        } else {
            None
        }
    };
    assert!(
        !blob_is_buildinfo(&b, dangling),
        "the version pointer leads nowhere"
    );
    assert!(!blob_is_buildinfo(&b, unmapped));
}

#[test]
fn inline_blob_parses_and_old_forms_refuse() {
    assert_eq!(version_from_blob(&blob("go1.22.10", 2)), Some((1, 22)));
    assert_eq!(version_from_blob(&blob("go1.25.3", 2)), Some((1, 25)));
    assert_eq!(version_from_blob(&blob("go1.25rc1", 2)), Some((1, 25)));
    // the pointer-indirection form (pre-1.18) needs the image
    assert_eq!(version_from_blob(&blob("go1.16.5", 0)), None);
    // wrong magic / truncation / junk
    assert_eq!(version_from_blob(b"not a blob"), None);
    assert_eq!(version_from_blob(&blob("devel +abc", 2)), None);
    assert_eq!(version_from_blob(&[]), None);
}

#[test]
fn corpus_binaries_state_their_toolchains() {
    // The campaign corpus carries both eras; missing files skip (the
    // corpus is machine-local state, not a repo fixture).
    for (p, want) in [("/home/mahaloz/kwt/multilang/corpus/go/hello", (1u16, 22u16))] {
        if let Ok(bytes) = std::fs::read(p) {
            assert_eq!(go_toolchain_version(&bytes), Some(want), "{p}");
        }
    }
}
