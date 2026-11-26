use super::*;

#[test]
fn tables() {
    assert_eq!(
        name_for("CallSupervisor", 0, 64, 8),
        Some(("sys_write".into(), Some(3)))
    );
    assert_eq!(
        name_for("CallSupervisor", 0x80, 4, 8)
            .map(|x| x.0)
            .as_deref(),
        Some("sys_write")
    );
    assert_eq!(
        name_for("CallSupervisor", 0x80, (-31i64) as u64, 8)
            .map(|x| x.0)
            .as_deref(),
        Some("mach_msg_trap")
    );
    assert_eq!(
        name_for("CallSupervisor", 0x80, 0xffff_ffe4, 4)
            .map(|x| x.0)
            .as_deref(),
        Some("task_self_trap")
    );
    assert_eq!(
        name_for("software_interrupt", 0, 4, 4)
            .map(|x| x.0)
            .as_deref(),
        Some("sys_write")
    );
    assert_eq!(name_for("CallSupervisor", 1, 64, 8), None);
}
