// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B940
// Name:            .getpagesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B940 jmp     cs:getpagesize_ptr
//
// Resolved target: getpagesize
// Target address:  0x8D9C00
// GOT/IAT slot:    0x8A4940
// Slot symbol:     getpagesize_ptr
// Target type:     int(void)
// ============================================================

/* see target sig */ .getpagesize(/* see target signature */)
{
    // Tail-call to getpagesize via GOT/IAT indirection
    return getpagesize(/* forwarded args */);
}

