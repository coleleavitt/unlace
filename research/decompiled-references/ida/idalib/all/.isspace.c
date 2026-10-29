// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A92E0
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A92E0 jmp     cs:off_2C7A158
//
// Resolved target: isspace
// Target address:  0x2D11728
// GOT/IAT slot:    0x2C7A158
// Slot symbol:     off_2C7A158
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

