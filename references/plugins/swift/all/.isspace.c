// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4040
// Name:            .isspace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4040 jmp     cs:off_28008
//
// Resolved target: isspace
// Target address:  0x29998
// GOT/IAT slot:    0x28008
// Slot symbol:     off_28008
// Target type:     int(int)
// ============================================================

/* see target sig */ .isspace(/* see target signature */)
{
    // Tail-call to isspace via GOT/IAT indirection
    return isspace(/* forwarded args */);
}

