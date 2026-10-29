// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A94B0
// Name:            .get_hidden_range_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A94B0 jmp     cs:off_2C7A240
//
// Resolved target: get_hidden_range_qty
// Target address:  0x3C7670
// GOT/IAT slot:    0x2C7A240
// Slot symbol:     off_2C7A240
// Target type:     <no type info>
// ============================================================

void .get_hidden_range_qty(/* see target signature */)
{
    // Tail-call to get_hidden_range_qty via GOT/IAT indirection
    return get_hidden_range_qty(/* forwarded args */);
}

