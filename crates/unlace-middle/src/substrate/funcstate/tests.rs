use super::*;

#[derive(Default)]
struct Kept(u32);
crate::unlace_func_state!(Kept, keep_across_clear: true);

#[derive(Default)]
struct Dropped(Vec<u32>);
crate::unlace_func_state!(Dropped, keep_across_clear: false);

#[test]
fn a_slot_starts_at_its_default_and_a_clear_drops_only_the_unkept_ones() {
    let mut states = FuncStates::default();
    assert!(!states.has::<Kept>());
    assert_eq!(states.get::<Kept>().0, 0);
    states.get_mut::<Kept>().0 = 7;
    states.get_mut::<Dropped>().0.push(3);
    assert_eq!(states.get::<Dropped>().0, vec![3]);
    states.clear();
    assert_eq!(states.get::<Kept>().0, 7);
    assert!(!states.has::<Dropped>());
    assert!(states.get::<Dropped>().0.is_empty());
}
