use super::*;

fn paints(fixture: &str) -> Vec<(u64, Option<u64>, u32)> {
    let path = format!("{}/tests/fixtures/{fixture}", env!("CARGO_MANIFEST_DIR"));
    let bytes = std::fs::read(&path).expect("read fixture");
    let file = object::File::parse(bytes.as_slice()).expect("parse fixture");
    let out = arm_func_mode_paints(&file);
    assert!(out.iter().all(|p| p.var == TMODE));
    out.iter().map(|p| (p.addr, p.end, p.value)).collect()
}

#[test]
fn even_function_symbols_after_a_thumb_symbol_are_a32_over_their_size() {
    let expected = vec![(0x0200_0080, Some(0x0200_0088), 0), (0x0200_0088, None, 1)];
    assert_eq!(paints("arm_funcmode_le32"), expected);
    assert_eq!(paints("arm_funcmode_nocall_le32"), expected);
}

#[test]
fn a_direct_a32_branch_past_the_extent_keeps_its_target_a32() {
    let paints = paints("arm_funcmode_helper_o2_le32.so");
    let a32 = paints.iter().find(|(addr, ..)| *addr == 0x101f8).copied();
    assert!(
        a32.is_some_and(|(_, end, value)| value == 0 && end.is_some_and(|end| end > 0x1020c)),
        "{paints:x?}"
    );
}

#[test]
fn a32_growth_stops_at_noreturn_calls_runs_without_a_stop_and_literal_pools() {
    for (fixture, thumb) in [
        ("arm_funcmode_noreturn_le32.so", 0x10290),
        ("arm_funcmode_stackprot_le32.so", 0x103e0),
        ("arm_funcmode_pool_le32", 0x0200_0094),
    ] {
        let paints = paints(fixture);
        let covered = paints.iter().any(|&(addr, end, value)| {
            value == 0 && addr <= thumb && end.is_some_and(|end| thumb < end)
        });
        assert!(!covered, "{fixture}: {paints:x?}");
    }
}

#[test]
fn size_zero_symbols_are_skipped() {
    assert!(paints("arm_funcmode_sizes_le32").is_empty());
}

#[test]
fn all_even_function_symbols_paint_nothing() {
    assert!(paints("arm_interwork_stubs_o0_le32").is_empty());
}

#[test]
fn mapping_symbols_relocatable_objects_and_other_architectures_paint_nothing() {
    assert!(paints("arm_funcmode_mapsyms_le32").is_empty());
    assert!(paints("arm_thumb_le32.o").is_empty());
    assert!(paints("fauxware").is_empty());
}
