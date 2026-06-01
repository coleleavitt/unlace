// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB7B0
// Name:            .hexplace_t__ending
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB7B0 jmp     cs:off_2C7B3C0
//
// Resolved target: hexplace_t__ending
// Target address:  0x425280
// GOT/IAT slot:    0x2C7B3C0
// Slot symbol:     off_2C7B3C0
// Target type:     <no type info>
// ============================================================

void .hexplace_t__ending(/* see target signature */)
{
    // Tail-call to hexplace_t__ending via GOT/IAT indirection
    return hexplace_t__ending(/* forwarded args */);
}

