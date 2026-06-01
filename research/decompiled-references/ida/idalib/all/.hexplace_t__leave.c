// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7540
// Name:            .hexplace_t__leave
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7540 jmp     cs:off_2C79288
//
// Resolved target: hexplace_t__leave
// Target address:  0x425480
// GOT/IAT slot:    0x2C79288
// Slot symbol:     off_2C79288
// Target type:     <no type info>
// ============================================================

void .hexplace_t__leave(/* see target signature */)
{
    // Tail-call to hexplace_t__leave via GOT/IAT indirection
    return hexplace_t__leave(/* forwarded args */);
}

