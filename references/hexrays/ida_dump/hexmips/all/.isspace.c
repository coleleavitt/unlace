// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A0F0
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A0F0 jmp     cs:off_4CD060
//
// Resolved target: isspace
// Target address:  0x4CFA50
// GOT/IAT slot:    0x4CD060
// Slot symbol:     off_4CD060
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

