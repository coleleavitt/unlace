use super::*;

#[test]
fn built_ids_read_back_and_every_soft_float_alias_is_the_soft_model() {
    for variant in VARIANTS {
        for (n32, alias, other) in [(false, "n64", "n32"), (true, "n32", "n64")] {
            for hard in [false, true] {
                assert_eq!(hard_float(&language_id(variant, n32, hard)), Some(hard));
            }
            let suffix = if n32 { "-32addr" } else { "" };
            let id = |model: &str| format!("MIPS:BE:64:{variant}{suffix}:{model}");
            assert_eq!(hard_float(&id(alias)), Some(false));
            assert_eq!(hard_float(&id(other)), None);
            assert_eq!(hard_float(&id("unknown")), None);
        }
    }
    for id in [
        "MIPS:BE:64:64-32addr:n32",
        "MIPS:BE:64:default:default",
        "MIPS:LE:64:octeon3:default",
        "x86:LE:64:default:gcc",
    ] {
        assert_eq!(hard_float(id), None);
    }
}
