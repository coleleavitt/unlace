// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD8D0
// Name:            .getpid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD8D0 jmp     cs:off_2C7C450
//
// Resolved target: getpid
// Target address:  0x2D12050
// GOT/IAT slot:    0x2C7C450
// Slot symbol:     off_2C7C450
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ .getpid(/* see target signature */)
{
    // Tail-call to getpid via GOT/IAT indirection
    return getpid(/* forwarded args */);
}

