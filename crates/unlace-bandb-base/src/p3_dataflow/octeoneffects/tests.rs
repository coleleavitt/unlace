use super::*;

#[test]
fn modes_parse_and_print() {
    for mode in [
        OcteonEffectsMode::Off,
        OcteonEffectsMode::Atomic,
        OcteonEffectsMode::Ordered,
    ] {
        assert_eq!(OcteonEffectsMode::parse(mode.as_str()).unwrap().0, mode);
    }
    assert!(OcteonEffectsMode::parse("writes").is_err());
    assert_eq!(OcteonEffectsMode::default(), OcteonEffectsMode::Atomic);
}

#[test]
fn every_operation_but_an_ordering_one_is_addressed() {
    let ordering: Vec<&str> = OPERATIONS
        .iter()
        .filter(|(_, e)| !e.addressed())
        .map(|(n, _)| *n)
        .collect();
    assert!(ordering.iter().all(|n| n.starts_with("octeon_sync")));
    assert_eq!(ordering.len(), 6);
    assert!(
        OPERATIONS
            .iter()
            .filter(|(_, e)| e.kind == Kind::Order)
            .all(|(_, e)| e.width == 0)
    );
    assert!(
        OPERATIONS
            .iter()
            .filter(|(_, e)| e.kind == Kind::ZeroBlock)
            .all(|(_, e)| e.width == 0)
    );
}

#[test]
fn off_keeps_only_reservations_that_upstream_lifting_could_not_replace() {
    use crate::userop::UserPcodeOp;
    let mut userops = UserOpManage::new();
    userops
        .register_op(UserPcodeOp::new_unspecialized(b"octeon_load_linked32", 0))
        .unwrap();
    userops
        .register_op(UserPcodeOp::new_injected(
            b"octeon_store_conditional32",
            1,
            7,
        ))
        .unwrap();
    userops
        .register_op(UserPcodeOp::new_unspecialized(b"octeon_syncw", 2))
        .unwrap();
    userops
        .register_op(UserPcodeOp::new_unspecialized(b"octeon_fetch_add32", 3))
        .unwrap();
    let ids = |mode, ours: &[int4]| -> Vec<u32> {
        let mut ids: Vec<u32> = userop_ids(&userops, mode, ours)
            .into_iter()
            .map(|(id, _)| id)
            .collect();
        ids.sort();
        ids
    };
    assert_eq!(ids(OcteonEffectsMode::Off, &[7]), vec![0]);
    assert_eq!(ids(OcteonEffectsMode::Off, &[]), vec![0]);
    assert_eq!(ids(OcteonEffectsMode::Atomic, &[7]), vec![0, 1, 2, 3]);
    assert_eq!(ids(OcteonEffectsMode::Atomic, &[]), vec![0, 2, 3]);
    assert_eq!(ids(OcteonEffectsMode::Ordered, &[7]), vec![0, 1, 2, 3]);
}

#[test]
fn a_block_fixed_at_entry_reaches_only_the_top_cache_block_of_the_frame() {
    let at = |offset: i64| offset as u64;
    assert!(near_entry(at(-8), 8, 8));
    assert!(near_entry(at(-128), 8, 8));
    assert!(!near_entry(at(-136), 8, 8));
    assert!(!near_entry(at(-248), 8, 8));
    assert!(near_entry(at(16), 8, 8));
    assert!(near_entry(at(-128) & 0xffff_ffff, 4, 4));
    assert!(!near_entry(at(-132) & 0xffff_ffff, 4, 4));
}

#[test]
fn upstream_fixups_cover_only_reservations_and_barriers() {
    for fixup in UPSTREAM {
        let name = std::str::from_utf8(fixup.name).unwrap();
        let (_, effect) = OPERATIONS
            .iter()
            .find(|(n, _)| *n == name)
            .expect("fixup names an operation");
        assert!(
            matches!(
                effect.kind,
                Kind::LoadLinked | Kind::StoreConditional | Kind::Order
            ),
            "{name}"
        );
    }
    assert_eq!(UPSTREAM.len(), 10);
}
