//! `typelib`: the prebuilt type library declares the libc imports of an
//! x86-64 Linux image, and the Windows API imports of a PE, that no built-in
//! table declares.
//!
//! `fixtures/typelib_x86_64` is `typelib_x86_64.c` built with
//! `gcc -O1 -fno-inline -o typelib_x86_64 typelib_x86_64.c` (no debug info).
use crate::common::{self, fixture};

fn unlace(args: &[&str]) -> String {
    let (out, stderr, code) = common::run_unlace(args);
    assert_eq!(code, 0, "{args:?}: {stderr}");
    out
}

#[test]
fn an_import_no_table_declares_takes_the_library_declaration() {
    let image = fixture("typelib_x86_64");
    let off = unlace(&[
        "decompile",
        &image,
        "wait_readable",
        "--option",
        "typelib",
        "off",
    ]);
    assert!(off.contains("(int)poll(&v1,1,a1)"), "{off}");
    assert!(off.contains("return v3 & 1;"), "{off}");

    let auto = unlace(&["decompile", &image, "wait_readable"]);
    assert!(auto.contains("pollfd v1;"), "{auto}");
    assert!(auto.contains("v1.events = 1;"), "{auto}");
    assert!(auto.contains("if (poll(&v1,1,a1) <= 0)"), "{auto}");
    assert!(auto.contains("return v1.revents & 1;"), "{auto}");
}

#[test]
fn a_library_file_replaces_the_built_in_one() {
    let image = fixture("typelib_x86_64");
    let library = fixture("typelib_custom.ktl");
    let c = unlace(&[
        "decompile",
        &image,
        "wait_readable",
        "--option",
        "typelib",
        &library,
    ]);
    assert!(c.contains("return v1.got & 1;"), "{c}");
    let rlimit = unlace(&[
        "decompile",
        &image,
        "raise_files",
        "--option",
        "typelib",
        &library,
    ]);
    assert!(!rlimit.contains("rlim_cur"), "{rlimit}");
}

/// `struct rusage` is laid out differently by glibc, so only an image that
/// names musl is offered the members.
#[test]
fn a_musl_image_takes_the_entries_glibc_declares_differently() {
    let image = fixture("typelib_musl_x86_64");
    let c = unlace(&["decompile", &image, "max_rss"]);
    assert!(c.contains("rusage v2;"), "{c}");
    assert!(c.contains("v2.ru_utime.tv_sec + v2.ru_maxrss"), "{c}");
    let off = unlace(&["decompile", &image, "max_rss", "--option", "typelib", "off"]);
    assert!(off.contains("long v2 [4];"), "{off}");
}

#[test]
fn a_file_that_is_not_a_library_is_refused() {
    let image = fixture("typelib_x86_64");
    let source = fixture("typelib_x86_64.c");
    let (_, stderr, code) = common::run_unlace(&[
        "decompile",
        &image,
        "wait_readable",
        "--option",
        "typelib",
        &source,
    ]);
    assert_ne!(code, 0);
    assert!(stderr.contains("is not a type library"), "{stderr}");
}

/// A declared `qsort`, `signal` or `glob` still hands its callback slot's
/// prototype to the function passed there.
#[test]
fn a_declared_callback_slot_still_declares_its_callback() {
    let image = fixture("callbacktype_x86_64");
    let off = unlace(&["decompile-all", &image, "--option", "typelib", "off"]);
    let auto = unlace(&["decompile-all", &image]);
    assert!(
        auto.contains("void qsort(void *a0,size_t a1,size_t a2,int (*a3)(void *,void *))"),
        "{auto}"
    );
    assert!(auto.contains("glob(\"/tmp/*\",0,warn_path,&v8);"), "{auto}");
    for declared in [
        "int by_key(void *a0,void *a1)",
        "void on_int(int a0)",
        "int warn_path(char *a0,int a1)",
    ] {
        assert!(off.contains(declared), "{declared}: {off}");
        assert!(auto.contains(declared), "{declared}: {auto}");
    }
}

#[test]
fn an_image_of_another_target_is_unchanged() {
    for name in ["libctypes_mips32_glibc_le32", "libctypes_widths_i386"] {
        let image = fixture(name);
        let auto = unlace(&["decompile-all", &image]);
        let off = unlace(&["decompile-all", &image, "--option", "typelib", "off"]);
        assert_eq!(auto, off, "{name}");
    }
}

/// A PE reads the built-in Windows API library for its pointer width without
/// a complaint: the library parses and names the image's own target.
#[test]
fn a_pe_reads_the_built_in_windows_library() {
    let image = fixture("pe_imports.exe");
    let (_, stderr, code) = common::run_unlace(&["decompile-all", &image]);
    assert_eq!(code, 0, "{stderr}");
    assert!(!stderr.contains("[kuna typelib]"), "{stderr}");
}

/// One IDA type-library entry (format 0x12, 32-bit ordinal).
fn til_entry(name: &str, ordinal: u32, tinfo: &[u8], names: &[&str]) -> Vec<u8> {
    let mut e = 0x7fff_ffffu32.to_le_bytes().to_vec();
    e.extend_from_slice(name.as_bytes());
    e.push(0);
    e.extend(ordinal.to_le_bytes());
    e.extend_from_slice(tinfo);
    e.extend([0, 0]);
    for n in names {
        e.push(u8::try_from(n.len() + 1).unwrap());
        e.extend_from_slice(n.as_bytes());
    }
    e.extend([0, 0, 0]);
    e
}

fn til_bucket(entries: &[Vec<u8>]) -> Vec<u8> {
    let data = entries.concat();
    let mut b = u32::try_from(entries.len()).unwrap().to_le_bytes().to_vec();
    b.extend(u32::try_from(data.len()).unwrap().to_le_bytes());
    b.extend(data);
    b
}

/// An IDA type library declaring `poll` over a `pollfd` whose members are
/// renamed, the `.til` twin of `typelib_custom.ktl`.
fn pollfd_til() -> Vec<u8> {
    let pollfd = [0x0d, (3 << 3) + 1, 0x14, 0x13, 0x13];
    let mut poll = vec![0x0c, 0x30, 0x17, 4, 0x0a, 0x3d, 7];
    poll.extend_from_slice(b"pollfd");
    poll.extend([0x25, 0x17]);
    let mut b = b"IDATIL".to_vec();
    b.extend(0x12u32.to_le_bytes());
    b.extend(0u32.to_le_bytes());
    b.push(4);
    b.extend_from_slice(b"test");
    b.push(0);
    b.extend([6, 0x31, 4, 1, 4, 0]);
    b.extend(til_bucket(&[til_entry(
        "poll",
        2,
        &poll,
        &["fds", "nfds", "timeout"],
    )]));
    b.extend(til_bucket(&[til_entry(
        "pollfd",
        1,
        &pollfd,
        &["descriptor", "wanted", "got"],
    )]));
    b
}

#[test]
fn an_ida_type_library_is_read_like_a_library_file() {
    let image = fixture("typelib_x86_64");
    let til = common::scratch_file("pollfd", "til");
    std::fs::write(&til, pollfd_til()).unwrap();
    let c = unlace(&[
        "decompile",
        &image,
        "wait_readable",
        "--option",
        "typelib",
        til.to_str().unwrap(),
    ]);
    assert!(c.contains("return v1.got & 1;"), "{c}");
}
