// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E10
// Name:            .syscall
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E10 jmp     cs:syscall_ptr
//
// Resolved target: syscall
// Target address:  0x8D39A8
// GOT/IAT slot:    0x89FBA8
// Slot symbol:     syscall_ptr
// Target type:     __int64(__int64 sysno, ...)
// ============================================================

/* see target sig */ .syscall(/* see target signature */)
{
    // Tail-call to syscall via GOT/IAT indirection
    return syscall(/* forwarded args */);
}

