use super::*;

#[test]
fn arm64_payload_covers_every_helper_and_register() {
    let xml = payload_xml_aarch64();
    for t in PASS_THROUGH.iter().chain(DROPPED.iter()) {
        assert!(xml.contains(&format!("<target name=\"{t}\"/>")), "{t}");
    }
    assert!(xml.contains("*:8 x0 = x1;"));
    assert!(xml.contains("<target name=\"objc_retain_x28\"/>"));
    assert!(xml.contains("<target name=\"objc_release_x19\"/>"));
    assert!(!xml.contains("objc_retain_x29"));
    assert_eq!(
        xml.matches("<callfixup name=").count(),
        3 + 2 * (MAX_OUTLINED_REG as usize + 1)
    );
}

#[test]
fn language_guard_picks_the_payload() {
    let arm = |r: &[u8]| r.starts_with(b"x");
    assert!(payload_xml(&arm, 8).unwrap().contains("x0 = x0;"));
    assert!(payload_xml(&arm, 4).is_none());
    let x64 = |r: &[u8]| matches!(r, b"RAX" | b"RDI" | b"RSI" | b"RSP");
    assert!(
        payload_xml(&x64, 8)
            .unwrap()
            .contains("RSP = RSP + 8; RAX = RDI;")
    );
    assert!(payload_xml(&|_| false, 8).is_none());
}

#[test]
fn payload_parses_as_one_element_per_fixup() {
    let mut n = 0;
    decode_payload(&payload_xml_x86_64(), &mut |root| {
        assert_eq!(root.get_name(), "callfixup");
        n += 1;
        Ok(())
    })
    .unwrap();
    assert_eq!(n, 3);
}
