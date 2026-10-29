// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA360
// Name:            .hexplace_t__makeplace
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA360 jmp     cs:off_2C7A998
//
// Resolved target: hexplace_t__makeplace
// Target address:  0x4252D0
// GOT/IAT slot:    0x2C7A998
// Slot symbol:     off_2C7A998
// Target type:     <no type info>
// ============================================================

void .hexplace_t__makeplace(/* see target signature */)
{
    // Tail-call to hexplace_t__makeplace via GOT/IAT indirection
    return hexplace_t__makeplace(/* forwarded args */);
}

