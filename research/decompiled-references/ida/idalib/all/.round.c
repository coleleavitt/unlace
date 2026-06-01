// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A99B0
// Name:            .round
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A99B0 jmp     cs:off_2C7A4C0
//
// Resolved target: round
// Target address:  0x2D11820
// GOT/IAT slot:    0x2C7A4C0
// Slot symbol:     off_2C7A4C0
// Target type:     double(double x)
// ============================================================

/* see target sig */ .round(/* see target signature */)
{
    // Tail-call to round via GOT/IAT indirection
    return round(/* forwarded args */);
}

