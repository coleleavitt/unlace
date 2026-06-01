// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9160
// Name:            .get_encoding_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9160 jmp     cs:off_2C7A098
//
// Resolved target: get_encoding_qty
// Target address:  0x5A9B10
// GOT/IAT slot:    0x2C7A098
// Slot symbol:     off_2C7A098
// Target type:     <no type info>
// ============================================================

void .get_encoding_qty(/* see target signature */)
{
    // Tail-call to get_encoding_qty via GOT/IAT indirection
    return get_encoding_qty(/* forwarded args */);
}

