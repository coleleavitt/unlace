// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9550
// Name:            .get_item_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9550 jmp     cs:off_2C7A290
//
// Resolved target: get_item_flag
// Target address:  0x4CA300
// GOT/IAT slot:    0x2C7A290
// Slot symbol:     off_2C7A290
// Target type:     <no type info>
// ============================================================

void .get_item_flag(/* see target signature */)
{
    // Tail-call to get_item_flag via GOT/IAT indirection
    return get_item_flag(/* forwarded args */);
}

