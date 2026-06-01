// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7750
// Name:            .toupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7750 jmp     cs:off_2C79390
//
// Resolved target: toupper
// Target address:  0x2D11408
// GOT/IAT slot:    0x2C79390
// Slot symbol:     off_2C79390
// Target type:     int(int c)
// ============================================================

/* see target sig */ .toupper(/* see target signature */)
{
    // Tail-call to toupper via GOT/IAT indirection
    return toupper(/* forwarded args */);
}

