use super::{registry_crates, split_crate};

#[test]
fn crate_directories_split_at_the_version() {
    assert_eq!(split_crate(b"memchr-2.7.4"), Some(("memchr", "2.7.4")));
    assert_eq!(split_crate(b"sha-1-0.10.1"), Some(("sha-1", "0.10.1")));
    assert_eq!(
        split_crate(b"clap-4.0.0-rc.1"),
        Some(("clap", "4.0.0-rc.1"))
    );
    assert_eq!(
        split_crate(b"libz-sys-1.1.8+zlib.1.2.12"),
        Some(("libz-sys", "1.1.8+zlib.1.2.12"))
    );
    assert_eq!(
        split_crate(b"wasi-0.11.0+wasi-snapshot-preview1"),
        Some(("wasi", "0.11.0+wasi-snapshot-preview1"))
    );
    for dir in [
        &b"memchr"[..],
        b"memchr-2.7",
        b"-1.0.0",
        b"mem chr-1.0.0",
        b"memchr-1.0.0 x",
        b"",
    ] {
        assert_eq!(split_crate(dir), None, "{dir:?}");
    }
}

#[test]
fn registry_paths_list_each_crate_once() {
    let image = [
            &b"\0/home/u/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/memchr-2.7.4/src/memmem/mod.rs\0"[..],
            b"/usr/local/cargo/registry/src/index.crates.io-6f17d22bba15001f/itoa-1.0.11/src/lib.rs\0",
            b"C:\\Users\\u\\.cargo\\registry\\src\\github.com-1ecc6299db9ec823\\cfg-if-1.0.0\\src\\lib.rs\0",
            b"/home/u/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/memchr-2.7.4/src/lib.rs\0",
            b"/home/u/.cargo/registry/src/not-an-index/serde-1.0.0/src/lib.rs\0",
            b"/home/u/.cargo/registry/cache/index.crates.io-1949cf8c6b5b557f/serde-1.0.0.crate\0",
            b"/home/u/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/truncated-1.0.0",
        ]
        .concat();
    let pair = |name: &str, version: &str| (name.to_string(), version.to_string());
    assert_eq!(
        registry_crates(&image),
        [
            pair("cfg-if", "1.0.0"),
            pair("itoa", "1.0.11"),
            pair("memchr", "2.7.4")
        ]
    );
    assert!(registry_crates(b"registry/src/").is_empty());
    assert!(registry_crates(b"registry").is_empty());
}
