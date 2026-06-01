// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD380
// Name:            .hexplace_t__equals
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD380 jmp     cs:off_2C7C1A8
//
// Resolved target: hexplace_t__equals
// Target address:  0x425420
// GOT/IAT slot:    0x2C7C1A8
// Slot symbol:     off_2C7C1A8
// Target type:     <no type info>
// ============================================================

void .hexplace_t__equals(/* see target signature */)
{
    // Tail-call to hexplace_t__equals via GOT/IAT indirection
    return hexplace_t__equals(/* forwarded args */);
}

