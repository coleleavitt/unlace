use super::{RELEASES, comment_label, from_comment, path_commit, pieces_version, release};

#[test]
fn release_table_is_sorted_and_maps_commits() {
    assert!(RELEASES.windows(2).all(|pair| pair[0].0 < pair[1].0));
    assert_eq!(
        release(b"59807616e1fa2540724bfbac14d7976d7e4a3860"),
        Some((1, 95, 0))
    );
    assert_eq!(
        release(b"01f6ddf7588f42ae2d7eb0a2f21d44e8e96674cf"),
        Some((1, 93, 1))
    );
    assert_eq!(
        release(b"a59de37e99060162a2674e3ff45409ac73595c0e"),
        Some((1, 0, 0))
    );
    assert_eq!(release(b"bf64d66bd58719fac2585eae5e546e5e1d9947f5"), None);
}

#[test]
fn path_commit_requires_one_full_hash() {
    let one = b"x\0/rustc/59807616e1fa2540724bfbac14d7976d7e4a3860/library/core/src/fmt/mod.rs\0";
    assert_eq!(
        path_commit(one),
        Some(b"59807616e1fa2540724bfbac14d7976d7e4a3860")
    );
    let windows = b"/rustc/59807616e1fa2540724bfbac14d7976d7e4a3860\\library\\std\\src\\io.rs";
    assert_eq!(
        path_commit(windows),
        Some(b"59807616e1fa2540724bfbac14d7976d7e4a3860")
    );
    let twice = [&one[..], &one[..]].concat();
    assert_eq!(
        path_commit(&twice),
        Some(b"59807616e1fa2540724bfbac14d7976d7e4a3860")
    );
    let mixed = [
        &one[..],
        b"/rustc/01f6ddf7588f42ae2d7eb0a2f21d44e8e96674cf/library/alloc/src/vec/mod.rs",
    ]
    .concat();
    assert_eq!(path_commit(&mixed), None);
    for bytes in [
        &b"/rustc/59807616e/library/core/src/fmt/mod.rs"[..],
        b"/rustc/59807616E1FA2540724BFBAC14D7976D7E4A3860/library",
        b"/rustc/59807616e1fa2540724bfbac14d7976d7e4a3860",
        b"/rustc/59807616e1fa2540724bfbac14d7976d7e4a38600/library",
        b"/rustc/",
        b"",
    ] {
        assert_eq!(path_commit(bytes), None, "{bytes:?}");
    }
}

#[test]
fn comment_label_keeps_the_prerelease_suffix() {
    assert_eq!(
        comment_label(b"GCC: 12\0rustc version 1.95.0 (59807616e 2026-04-14)\0").as_deref(),
        Some("1.95.0")
    );
    assert_eq!(
        comment_label(b"rustc version 1.89.0-nightly (bf64d66bd 2025-05-21)\0").as_deref(),
        Some("1.89.0-nightly")
    );
    for bytes in [
        &b"rustc version 1.93.1\0rustc version 1.92.0\0"[..],
        b"rustc version unknown\0",
        b"rustc version \0",
        b"GCC: 12\0",
    ] {
        assert_eq!(comment_label(bytes), None, "{bytes:?}");
    }
}

#[test]
fn pieces_layout_requires_a_verified_compiler_build() {
    for bytes in [
        &b"rustc version 1.89.0 (abc 2025-08-07)\0"[..],
        b"rustc version 1.90.0\0rustc version 1.90.0\0",
        b"GCC\0rustc version 1.89.0-nightly (bf64d66bd 2025-05-21)\0",
    ] {
        assert!(pieces_version(bytes), "{bytes:?}");
    }
    for bytes in [
        &b"rustc version 1.89.0-nightly\0"[..],
        b"rustc version 1.89.0-nightly (bc8215286 2025-05-20)\0",
        b"rustc version 1.89.0-nightly (bf64d66bd 2025-05-22)\0",
        b"rustc version 1.89.0-nightly (bf64d66bd 2025-05-21) extra\0",
        b"rustc version 1.89.0\0rustc version 1.90.0\0",
        b"rustc version 1.89.0\0rustc version unknown\0",
        b"rustc version 1.89.0-nightly (bf64d66bd 2025-05-21)\0rustc version 1.89.0\0",
        b"rustc version 1.89.1\0",
        b"rustc version 1.93.1\0",
        b"GCC\0",
    ] {
        assert!(!pieces_version(bytes), "{bytes:?}");
    }
}

#[test]
fn stable_version_requires_unambiguous_records() {
    assert_eq!(
        from_comment(b"GCC: 12\0rustc version 1.93.1 (abc 2026-02-11)\0"),
        Some((1, 93, 1))
    );
    assert_eq!(
        from_comment(b"rustc version 1.93.1\0rustc version 1.93.1\0"),
        Some((1, 93, 1))
    );
    for bytes in [
        &b"rustc version 1.93.0-nightly\0"[..],
        b"rustc version 1.93.1\0rustc version 1.92.0\0",
        b"rustc version 1.93.1\0rustc version unknown\0",
        b"rustc version 1.93\0",
        b"rustc version 1.93.1.0\0",
        b"rustc version 1.93.1+local\0",
        b"rustc version 1.93.65536\0",
        b"GCC: 12\0",
        b"rustc version \0",
    ] {
        assert_eq!(from_comment(bytes), None, "{bytes:?}");
    }
}
