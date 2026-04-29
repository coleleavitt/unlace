// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E970
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E970 jmp     cs:off_4E9CA0
//
// Resolved target: tolower
// Target address:  0x4EC6D8
// GOT/IAT slot:    0x4E9CA0
// Slot symbol:     off_4E9CA0
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

