// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B940
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B940 jmp     cs:off_4CDC88
//
// Resolved target: tolower
// Target address:  0x4D06C0
// GOT/IAT slot:    0x4CDC88
// Slot symbol:     off_4CDC88
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

