// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B930
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B930 jmp     cs:off_4BFC80
//
// Resolved target: tolower
// Target address:  0x4C3190
// GOT/IAT slot:    0x4BFC80
// Slot symbol:     off_4BFC80
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

