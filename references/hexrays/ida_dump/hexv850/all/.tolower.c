// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B940
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B940 jmp     cs:off_4C0C88
//
// Resolved target: tolower
// Target address:  0x4C3C98
// GOT/IAT slot:    0x4C0C88
// Slot symbol:     off_4C0C88
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

