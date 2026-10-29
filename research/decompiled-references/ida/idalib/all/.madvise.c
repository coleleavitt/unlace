// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A88A0
// Name:            .madvise
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A88A0 jmp     cs:off_2C79C38
//
// Resolved target: madvise
// Target address:  0x2D11618
// GOT/IAT slot:    0x2C79C38
// Slot symbol:     off_2C79C38
// Target type:     int(void *addr, size_t len, int advice)
// ============================================================

/* see target sig */ .madvise(/* see target signature */)
{
    // Tail-call to madvise via GOT/IAT indirection
    return madvise(/* forwarded args */);
}

