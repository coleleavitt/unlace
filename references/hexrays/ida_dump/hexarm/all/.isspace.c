// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D0F0
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D0F0 jmp     cs:off_4E9060
//
// Resolved target: isspace
// Target address:  0x4EBA50
// GOT/IAT slot:    0x4E9060
// Slot symbol:     off_4E9060
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

