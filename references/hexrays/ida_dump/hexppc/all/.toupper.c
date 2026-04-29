// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C030
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C030 jmp     cs:off_4DB000
//
// Resolved target: toupper
// Target address:  0x4DDA30
// GOT/IAT slot:    0x4DB000
// Slot symbol:     off_4DB000
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

