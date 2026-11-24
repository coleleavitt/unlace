//! The T-Head vendor extensions (XTheadBa/Bb/Bs/CondMov/Mac/MemPair/MemIdx/
//! FMemIdx/Cmo/Sync) decode in the `RISCV:LE:64:XThead` and `RISCV:LE:32:XThead`
//! languages as LLVM names them, and compiler-selected uses lift; before, every
//! custom-0 word was an opaque `custom0` placeholder.
use crate::common;
use common::{repo_root, run_unlace};

fn fixture(name: &str) -> String {
    repo_root()
        .join("crates/unlace-cli/tests/fixtures/riscv_xthead")
        .join(name)
        .to_str()
        .unwrap()
        .to_owned()
}

fn rows(stdout: &str) -> Vec<String> {
    stdout
        .lines()
        .filter(|line| !line.starts_with('#') && !line.is_empty())
        .map(|line| {
            line.split_whitespace()
                .skip(2)
                .collect::<Vec<_>>()
                .join(" ")
        })
        .collect()
}

fn decompile(args: &[&str]) -> String {
    let (stdout, stderr, code) = run_unlace(&[&["decompile"][..], args].concat());
    assert_eq!(code, 0, "unlace decompile {args:?}: {stderr}");
    let lower = stdout.to_lowercase();
    assert!(!lower.contains("unimplemented"), "{args:?}:\n{stdout}");
    assert!(!lower.contains("bad instruction"), "{args:?}:\n{stdout}");
    stdout
}

const LANGUAGES: [(&str, &str, &str); 2] = [
    ("xthead64.elf", "probe64.txt", "RISCV:LE:64:XThead"),
    ("xthead32.elf", "probe32.txt", "RISCV:LE:32:XThead"),
];

#[test]
fn every_xthead_encoding_decodes_as_llvm_names_it() {
    for (elf, expected, target) in LANGUAGES {
        let (stdout, stderr, code) =
            run_unlace(&["disassemble", &fixture(elf), "probe", "--target", target]);
        assert_eq!(code, 0, "{elf}: {stderr}");
        let want = std::fs::read_to_string(fixture(expected)).unwrap();
        let want: Vec<&str> = want.lines().collect();
        assert_eq!(rows(&stdout), want, "{elf}");
    }
}

#[test]
fn compiler_selected_xthead_instructions_lift() {
    for (elf, _, target) in LANGUAGES {
        let elf = fixture(elf);
        let mac = decompile(&[&elf, "mac", "--target", target]);
        assert!(mac.contains("return a0 + a1 * a2;"), "{mac}");
        let field = decompile(&[&elf, "field", "--target", target]);
        assert!(field.contains("(a0 & 0xfffff) >> 8"), "{field}");
        let pick = decompile(&[&elf, "pick", "--target", target]);
        assert!(pick.contains("if (a0)"), "{pick}");
        decompile(&[&elf, "scaled_index", "--target", target]);
        decompile(&[&elf, "probe", "--target", target]);
    }
}

#[test]
fn raw_indexed_load_and_multiply_accumulate() {
    let c = decompile(&[
        &fixture("xthead64.bin"),
        "0x1000",
        "--raw-image",
        "--target",
        "RISCV:LE:64:XThead",
        "--base",
        "0x1000",
    ]);
    assert!(
        c.contains("return *(long *)(a0 + a1 * 8) + a2 * a3;"),
        "{c}"
    );
}
