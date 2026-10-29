// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1147C0
// Name:            .get_hidden_range_qty
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1147C0 jmp     cs:get_hidden_range_qty_ptr
//
// Resolved target: get_hidden_range_qty
// Target address:  0x8D5440
// GOT/IAT slot:    0x8A1080
// Slot symbol:     get_hidden_range_qty_ptr
// Target type:     <no type info>
// ============================================================

void .get_hidden_range_qty(/* see target signature */)
{
    // Tail-call to get_hidden_range_qty via GOT/IAT indirection
    return get_hidden_range_qty(/* forwarded args */);
}

