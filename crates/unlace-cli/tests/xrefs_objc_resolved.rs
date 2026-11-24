//! `unlace xrefs` on an Objective-C image: a message send whose receiver's class
//! the decompiler resolves is an edge to the method (`objcresolve`), which the
//! p-code walk alone reports as a call to the runtime entry point.

use std::path::PathBuf;
use std::process::Command;

fn fixture(name: &str) -> String {
    PathBuf::from(env!("CARGO_MANIFEST_DIR"))
        .join("../..")
        .canonicalize()
        .unwrap()
        .join("crates/unlace-analysis/tests/fixtures")
        .join(name)
        .to_str()
        .unwrap()
        .to_string()
}

fn xrefs(args: &[&str]) -> String {
    let out = Command::new(env!("CARGO_BIN_EXE_unlace"))
        .arg("xrefs")
        .args(args)
        .output()
        .expect("failed to spawn the unlace binary");
    assert!(
        out.status.success(),
        "unlace xrefs {args:?}: {}",
        String::from_utf8_lossy(&out.stderr)
    );
    String::from_utf8_lossy(&out.stdout).into_owned()
}

/// `-[Holder make]` sends `setInner:` to a `[[Base alloc] init]` result through
/// plain `objc_msgSend`; `-[Holder innerCount]` sends `count` to a `Base *` ivar
/// twice. Neither is a direct call, so the walk sees only `objc_msgSend`.
#[test]
fn resolved_sends_are_call_edges_both_ways() {
    let arc = fixture("macho_objc_arc_arm64");
    let to = xrefs(&[&arc, "--to", "-[Base setInner:]", "--option", "objc", "on"]);
    assert!(to.contains("# 1 reference to -[Base setInner:]"), "{to}");
    assert!(
        to.contains("0x1000007d0\tcall\t-[Holder make]+0x38\tobjc_msgSend (resolved)"),
        "{to}"
    );

    let from = xrefs(&[
        &arc,
        "--from",
        "-[Holder make]",
        "--option",
        "objc",
        "on",
        "--kind",
        "call",
    ]);
    assert!(
        from.contains(
            "0x100000744\tcall\t-[Base setInner:]\t@0x1000007d0\tobjc_msgSend (resolved)"
        ),
        "{from}"
    );
    assert!(
        from.contains("objc_msgSend\t@0x1000007d0\tbl"),
        "the runtime edge stays: {from}"
    );

    let types = fixture("macho_objc_types_arm64");
    let to = xrefs(&[&types, "--to", "-[Base count]", "--option", "objc", "on"]);
    assert!(to.contains("# 2 references to -[Base count]"), "{to}");

    let off = xrefs(&[
        &arc,
        "--to",
        "-[Base setInner:]",
        "--option",
        "objc",
        "on",
        "--option",
        "objcresolve",
        "off",
    ]);
    assert!(off.contains("# 0 references to -[Base setInner:]"), "{off}");
}
