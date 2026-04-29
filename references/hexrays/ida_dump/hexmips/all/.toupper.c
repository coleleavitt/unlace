// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C040
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C040 jmp     cs:off_4CE008
//
// Resolved target: toupper
// Target address:  0x4D0A58
// GOT/IAT slot:    0x4CE008
// Slot symbol:     off_4CE008
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

