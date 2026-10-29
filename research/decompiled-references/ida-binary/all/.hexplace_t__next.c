// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119910
// Name:            .hexplace_t__next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119910 jmp     cs:hexplace_t__next_ptr
//
// Resolved target: hexplace_t__next
// Target address:  0x8D87B8
// GOT/IAT slot:    0x8A3928
// Slot symbol:     hexplace_t__next_ptr
// Target type:     <no type info>
// ============================================================

void .hexplace_t__next(/* see target signature */)
{
    // Tail-call to hexplace_t__next via GOT/IAT indirection
    return hexplace_t__next(/* forwarded args */);
}

