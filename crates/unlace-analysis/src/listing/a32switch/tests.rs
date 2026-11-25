use super::*;

#[test]
fn branch_slots_follow_the_default_branch() {
    assert_eq!(
        branch_slots(0x1008, 3, 0x1000, &[(0x1000, 0x1100)]),
        vec![0x1008, 0x100c, 0x1010]
    );
}

#[test]
fn branch_slots_past_the_section_read_nothing() {
    assert!(branch_slots(0x10f8, 4, 0x1000, &[(0x1000, 0x1100)]).is_empty());
}
