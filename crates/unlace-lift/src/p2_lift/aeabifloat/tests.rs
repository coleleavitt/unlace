use super::{fixups, payload_xml};

#[test]
fn each_helper_is_targeted_once_per_byte_order() {
    for big_endian in [false, true] {
        let mut names: Vec<String> = fixups(big_endian).into_iter().map(|(n, _)| n).collect();
        let len = names.len();
        names.sort_unstable();
        names.dedup();
        assert_eq!(names.len(), len);
        assert_eq!(len, 36);
        assert!(
            names
                .iter()
                .all(|n| !n.ends_with("ulz") && !n.starts_with("ul2"))
        );
    }
}

#[test]
fn a_helper_also_targets_the_libgcc_routine_it_is() {
    let dmul = payload_xml(false)
        .into_iter()
        .find(|x| x.contains("unlace_aeabifloat_dmul"))
        .unwrap();
    for t in ["__aeabi_dmul", "___aeabi_dmul", "__muldf3", "___muldf3"] {
        assert!(dmul.contains(&format!("<target name=\"{t}\"/>")), "{dmul}");
    }
    assert!(
        super::LIBGCC
            .iter()
            .all(|(h, _)| fixups(false).iter().any(|(n, _)| n == h))
    );
}

#[test]
fn a_big_endian_double_takes_its_high_word_from_r0() {
    let dadd = payload_xml(true)
        .into_iter()
        .find(|x| x.contains("__aeabi_dadd"))
        .unwrap();
    assert!(
        dadd.contains("a:8 = (zext(r0) << 32) | zext(r1);"),
        "{dadd}"
    );
    assert!(dadd.contains("r1 = r:4; r0 = r(4);"), "{dadd}");
    let drsub = payload_xml(false)
        .into_iter()
        .find(|x| x.contains("__aeabi_drsub"))
        .unwrap();
    assert!(drsub.contains("r:8 = b f- a;"), "{drsub}");
}
