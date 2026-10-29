// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD950
// Name:            .hexplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD950 jmp     cs:off_2C7C490
//
// Resolved target: hexplace_t__compare
// Target address:  0x4253E0
// GOT/IAT slot:    0x2C7C490
// Slot symbol:     off_2C7C490
// Target type:     <no type info>
// ============================================================

void .hexplace_t__compare(/* see target signature */)
{
    // Tail-call to hexplace_t__compare via GOT/IAT indirection
    return hexplace_t__compare(/* forwarded args */);
}

