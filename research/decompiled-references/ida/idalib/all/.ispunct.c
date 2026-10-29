// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB120
// Name:            .ispunct
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB120 jmp     cs:off_2C7B078
//
// Resolved target: ispunct
// Target address:  0x2D11AF8
// GOT/IAT slot:    0x2C7B078
// Slot symbol:     off_2C7B078
// Target type:     int(int)
// ============================================================

/* see target sig */ .ispunct(/* see target signature */)
{
    // Tail-call to ispunct via GOT/IAT indirection
    return ispunct(/* forwarded args */);
}

