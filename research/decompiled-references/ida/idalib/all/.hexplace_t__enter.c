// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA5B0
// Name:            .hexplace_t__enter
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA5B0 jmp     cs:off_2C7AAC0
//
// Resolved target: hexplace_t__enter
// Target address:  0x425460
// GOT/IAT slot:    0x2C7AAC0
// Slot symbol:     off_2C7AAC0
// Target type:     <no type info>
// ============================================================

void .hexplace_t__enter(/* see target signature */)
{
    // Tail-call to hexplace_t__enter via GOT/IAT indirection
    return hexplace_t__enter(/* forwarded args */);
}

