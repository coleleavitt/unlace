// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADAC0
// Name:            .tcgetsid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADAC0 jmp     cs:off_2C7C548
//
// Resolved target: tcgetsid
// Target address:  0x2D120A0
// GOT/IAT slot:    0x2C7C548
// Slot symbol:     off_2C7C548
// Target type:     __pid_t(int fd)
// ============================================================

/* see target sig */ .tcgetsid(/* see target signature */)
{
    // Tail-call to tcgetsid via GOT/IAT indirection
    return tcgetsid(/* forwarded args */);
}

