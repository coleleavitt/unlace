use super::*;

#[test]
fn a_reply_is_stripped_and_the_rest_kept_verbatim() {
    let stderr = format!("{REPLY}1.329 (source 00ff)\nUnable to write x\r\ntail");
    let (rest, theirs) = take_reply(&stderr);
    assert_eq!(theirs.as_deref(), Some("1.329 (source 00ff)"));
    assert_eq!(rest, "Unable to write x\r\ntail");
}

#[test]
fn stderr_without_a_reply_is_untouched() {
    let (rest, theirs) = take_reply("  passed.\n0/0 tests passed.\n");
    assert_eq!(theirs, None);
    assert_eq!(rest, "  passed.\n0/0 tests passed.\n");
    assert_eq!(take_reply(""), (String::new(), None));
}

#[test]
fn a_prefix_inside_a_line_is_not_a_reply() {
    let stderr = format!("note: {REPLY}x\n");
    assert_eq!(take_reply(&stderr), (stderr.clone(), None));
}

#[test]
fn the_warning_names_both_builds_and_the_override() {
    let text = mismatch_warning(
        ChildKind::Engine,
        "decomp_dbg",
        Path::new("/opt/unlace-v1.329/decomp_dbg"),
        "1.329 (source 00ff)",
        Some("UNLACE_DECOMP_DBG"),
    );
    let lines: Vec<&str> = text.lines().collect();
    assert_eq!(lines.len(), 3, "{text}");
    assert_eq!(
        lines[0],
        "warning: decomp_dbg is a different build from this unlace"
    );
    assert!(
        lines[1].starts_with("  unlace:     ") && lines[1].contains(identity(ChildKind::Engine)),
        "{text}"
    );
    assert_eq!(
        lines[2],
        "  decomp_dbg: 1.329 (source 00ff) /opt/unlace-v1.329/decomp_dbg, chosen by UNLACE_DECOMP_DBG"
    );
}

#[test]
fn the_identity_carries_the_version_and_a_fingerprint() {
    for kind in [ChildKind::Engine, ChildKind::Harness] {
        let id = identity(kind);
        assert!(id.starts_with(VERSION), "{id}");
        let fp = id
            .strip_prefix(&format!("{VERSION} (source "))
            .and_then(|s| s.strip_suffix(')'));
        assert!(
            fp.is_some_and(|f| f.len() == 16 && f.chars().all(|c| c.is_ascii_hexdigit())),
            "{id}"
        );
    }
}
