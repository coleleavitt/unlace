// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9B30
// Name:            .hexplace_t__copyfrom
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9B30 jmp     cs:off_2C7A580
//
// Resolved target: hexplace_t__copyfrom
// Target address:  0x425030
// GOT/IAT slot:    0x2C7A580
// Slot symbol:     off_2C7A580
// Target type:     <no type info>
// ============================================================

void .hexplace_t__copyfrom(/* see target signature */)
{
    // Tail-call to hexplace_t__copyfrom via GOT/IAT indirection
    return hexplace_t__copyfrom(/* forwarded args */);
}

