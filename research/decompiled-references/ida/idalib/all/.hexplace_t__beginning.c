// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA7F0
// Name:            .hexplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA7F0 jmp     cs:off_2C7ABE0
//
// Resolved target: hexplace_t__beginning
// Target address:  0x425240
// GOT/IAT slot:    0x2C7ABE0
// Slot symbol:     off_2C7ABE0
// Target type:     <no type info>
// ============================================================

void .hexplace_t__beginning(/* see target signature */)
{
    // Tail-call to hexplace_t__beginning via GOT/IAT indirection
    return hexplace_t__beginning(/* forwarded args */);
}

