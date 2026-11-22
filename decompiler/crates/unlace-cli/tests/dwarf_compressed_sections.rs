//! Compressed DWARF sections are read, not skipped.
#![cfg(target_os = "linux")]

use crate::common;
use common::process;
use std::process::Command;

const SOURCE: &str = "static int counter;\nint bump(int k) { counter += k; return counter; }\n\
void _start(void) { for (;;) bump(1); }\n";

#[test]
fn compressed_debug_info_names_and_types_the_program() {
    let root = common::scratch_file("dwarf-compressed", "dir");
    std::fs::create_dir_all(&root).unwrap();
    let source = root.join("sample.c");
    std::fs::write(&source, SOURCE).unwrap();
    let common_args = ["-O1", "-gdwarf-4", "-ffreestanding", "-fno-pic", "-nostdlib", "-no-pie"];
    let builds: [(&str, &str, &[&str]); 3] = [
        ("gcc", "-gz", &["-static", "-Wl,--discard-all"]),
        ("clang", "-gz=zlib", &["-fuse-ld=lld", "-Wl,--no-dynamic-linker", "-Wl,--discard-all"]),
        ("clang", "-gz=zstd", &["-fuse-ld=lld", "-Wl,--no-dynamic-linker", "-Wl,--discard-all"]),
    ];
    for (cc, compression, link) in builds {
        if process::optional_output(Command::new(cc).arg("--version")).is_none() {
            continue;
        }
        let binary = root.join(format!("{cc}{compression}"));
        process::required_output(
            Command::new(cc)
                .args(common_args)
                .arg(compression)
                .args(link)
                .arg(&source)
                .arg("-o")
                .arg(&binary),
        );
        let (body, err, status) = common::run_kuna(&["decompile", binary.to_str().unwrap(), "bump"]);
        assert_eq!(status, 0, "{cc} {compression}: {err}");
        assert!(
            body.contains("int bump(int k)") && body.contains("counter"),
            "{cc} {compression}:\n{body}"
        );
    }
    std::fs::remove_dir_all(root).unwrap();
}
