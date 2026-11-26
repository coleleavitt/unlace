//! (unlace `syscallnames`) ARM and AArch64 system calls printed by name.
//!
//! `syscallregs` gives `svc` the registers it reads: the number register first,
//! then the arguments. When the number is a constant, the call prints as the
//! system call it is, with as many arguments as the call takes:
//!
//! - AArch64 `svc #0`, number in `x8`: Linux (`sys_write(1, buf, n)`);
//! - AArch64 `svc #0x80`, number in `x16`: Darwin, a BSD call for a positive
//!   number (`sys_write`) and a Mach trap for a negative one
//!   (`mach_msg_trap(...)`, `task_self_trap()`);
//! - ARM `svc #0`, number in `r7`: Linux EABI.
//!
//! The tables are `syscalltables`. Hex-Rays ARM names the same calls
//! (`linux_syscall`, `linux_eabi_syscall`, `mac_syscall`, and the
//! `svc_codes_t` Mach traps, hexarm.so sub_990E0).

use crate::syscalltables::{DARWIN_BSD, LINUX_AARCH64, LINUX_ARM_EABI, MACH_TRAPS};

/// The name and argument count of the system call the user op `userop` with
/// immediate `imm` makes for `number` (the number register's value,
/// sign-extended from its `size` bytes).
pub fn name_for(userop: &str, imm: u64, number: u64, size: i32) -> Option<(String, Option<u8>)> {
    let bits = (size.clamp(1, 8) * 8) as u32;
    let signed = if bits == 64 {
        number as i64
    } else {
        ((number << (64 - bits)) as i64) >> (64 - bits)
    };
    let find = |table: &'static [(i64, &'static str, Option<u8>)]| {
        table
            .binary_search_by_key(&signed, |e| e.0)
            .ok()
            .map(|i| table[i])
    };
    match (userop, imm) {
        ("CallSupervisor", 0) => find(LINUX_AARCH64).map(|e| (format!("sys_{}", e.1), e.2)),
        ("CallSupervisor", 0x80) if signed < 0 => find(MACH_TRAPS).map(|e| (e.1.to_string(), e.2)),
        ("CallSupervisor", 0x80) => find(DARWIN_BSD).map(|e| (format!("sys_{}", e.1), e.2)),
        ("software_interrupt", 0) => find(LINUX_ARM_EABI).map(|e| (format!("sys_{}", e.1), e.2)),
        _ => None,
    }
}

crate::unlace_flag!(
    /// (unlace `syscallnames`) Print an ARM or AArch64 `svc` whose number is a
    /// constant as the Linux or Darwin system call it is.
    SyscallNames,
    "syscallnames",
    "ARM system-call names",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests;
