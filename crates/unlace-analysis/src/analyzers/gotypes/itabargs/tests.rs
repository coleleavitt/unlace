use super::*;

#[test]
fn writes_of_a_register_or_its_parts_stop_the_walk() {
    assert!(may_write("MOV", "RAX,RBX", "RAX"));
    assert!(may_write("XOR", "EAX,EAX", "RAX"));
    assert!(may_write("MOV", "R8D,0x1", "R8"));
    assert!(!may_write("MOV", "RBX,RAX", "RAX"));
    assert!(!may_write("CMP", "RAX,0x0", "RAX"));
    assert!(may_write("IMUL", "RCX", "RAX"));
    assert!(
        may_write("", "", "RAX"),
        "an unknown instruction is a write"
    );
}

#[test]
fn a_whole_register_copy_carries_the_itab() {
    assert_eq!(copy_of_held("MOV", "RAX,RCX", &["RCX"]), Some("RAX"));
    assert_eq!(copy_of_held("MOV", "EAX,ECX", &["RCX"]), None);
    assert_eq!(
        copy_of_held("MOV", "qword ptr [RSP + 0x78],RCX", &["RCX"]),
        None
    );
    assert_eq!(copy_of_held("MOV", "RAX,RBX", &["RCX"]), None);
}

#[test]
fn lea_targets_read_the_resolved_address() {
    assert_eq!(lea_target("RCX,[0x4cfcc0]"), Some(("RCX", 0x4cfcc0)));
    assert_eq!(lea_target("RAX,[RSP + 0x78]"), None);
    assert_eq!(lea_target("RAX"), None);
}
