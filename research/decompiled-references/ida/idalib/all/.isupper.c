// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF60
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF60 jmp     cs:off_2C7BF98
//
// Resolved target: isupper
// Target address:  0x2D11F20
// GOT/IAT slot:    0x2C7BF98
// Slot symbol:     off_2C7BF98
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

