// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD5C0
// Name:            .hexplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD5C0 jmp     cs:off_2C7C2C8
//
// Resolved target: hexplace_t__name
// Target address:  0x425360
// GOT/IAT slot:    0x2C7C2C8
// Slot symbol:     off_2C7C2C8
// Target type:     <no type info>
// ============================================================

void .hexplace_t__name(/* see target signature */)
{
    // Tail-call to hexplace_t__name via GOT/IAT indirection
    return hexplace_t__name(/* forwarded args */);
}

