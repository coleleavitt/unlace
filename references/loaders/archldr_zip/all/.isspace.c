// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2040
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2040 jmp     cs:off_8008
//
// Resolved target: isspace
// Target address:  0x81C8
// GOT/IAT slot:    0x8008
// Slot symbol:     off_8008
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

