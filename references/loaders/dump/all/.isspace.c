// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1040
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1040 jmp     cs:off_5008
//
// Resolved target: isspace
// Target address:  0x5348
// GOT/IAT slot:    0x5008
// Slot symbol:     off_5008
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

