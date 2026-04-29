// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C040
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C040 jmp     cs:off_4C1008
//
// Resolved target: toupper
// Target address:  0x4C4030
// GOT/IAT slot:    0x4C1008
// Slot symbol:     off_4C1008
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

