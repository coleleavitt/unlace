//! DWARF global-variable locations name the data they describe on every byte
//! order and DWARF version.
#![cfg(target_os = "linux")]

use crate::common;
use common::process;
use std::process::Command;

const SOURCE: &str = "static int counter;\nstatic int table[4] = {1, 2, 3, 4};\n\
int bump(int k) { counter += table[k & 3]; table[k & 3] = counter; return counter; }\n\
void _start(void) { for (;;) bump(1); }\n";

#[test]
fn static_globals_take_their_dwarf_names() {
    if process::optional_output(Command::new("clang").arg("--version")).is_none() {
        return;
    }
    let root = common::scratch_file("dwarf-global-addresses", "dir");
    std::fs::create_dir_all(&root).unwrap();
    let source = root.join("sample.c");
    std::fs::write(&source, SOURCE).unwrap();
    for target in ["x86_64-linux-gnu", "aarch64_be-linux-gnu", "armeb-linux-gnueabi"] {
        for version in ["-gdwarf-4", "-gdwarf-5"] {
            let binary = root.join(format!("{target}{version}"));
            process::required_output(
                Command::new("clang")
                    .arg(format!("--target={target}"))
                    .args(["-O1", version, "-ffreestanding", "-fno-pic", "-nostdlib", "-no-pie"])
                    .args(["-fuse-ld=lld", "-Wl,--no-dynamic-linker", "-Wl,--discard-all"])
                    .arg(&source)
                    .arg("-o")
                    .arg(&binary),
            );
            let (body, err, status) =
                common::run_kuna(&["decompile", binary.to_str().unwrap(), "bump"]);
            assert_eq!(status, 0, "{target} {version}: {err}");
            assert!(
                body.contains("counter") && body.contains("table"),
                "{target} {version}:\n{body}"
            );
        }
    }
    std::fs::remove_dir_all(root).unwrap();
}
