// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA20
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA20 jmp     cs:off_4EDCF8
//
// Resolved target: tolower
// Target address:  0x4F2030
// GOT/IAT slot:    0x4EDCF8
// Slot symbol:     off_4EDCF8
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

