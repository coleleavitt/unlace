// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B7D0
// Name:            .getpid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B7D0 jmp     cs:getpid_ptr
//
// Resolved target: getpid
// Target address:  0x8D9B20
// GOT/IAT slot:    0x8A4888
// Slot symbol:     getpid_ptr
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ .getpid(/* see target signature */)
{
    // Tail-call to getpid via GOT/IAT indirection
    return getpid(/* forwarded args */);
}

