// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A79B0
// Name:            .syscall
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A79B0 jmp     cs:off_2C794C0
//
// Resolved target: syscall
// Target address:  0x2D11450
// GOT/IAT slot:    0x2C794C0
// Slot symbol:     off_2C794C0
// Target type:     __int64(__int64 sysno, ...)
// ============================================================

/* see target sig */ .syscall(/* see target signature */)
{
    // Tail-call to syscall via GOT/IAT indirection
    return syscall(/* forwarded args */);
}

