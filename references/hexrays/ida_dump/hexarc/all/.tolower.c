// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A910
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A910 jmp     cs:off_4B9C70
//
// Resolved target: tolower
// Target address:  0x4BC688
// GOT/IAT slot:    0x4B9C70
// Slot symbol:     off_4B9C70
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

