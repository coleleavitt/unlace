// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114CC0
// Name:            .get_possible_item_varsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114CC0 jmp     cs:get_possible_item_varsize_ptr
//
// Resolved target: get_possible_item_varsize
// Target address:  0x8D57F0
// GOT/IAT slot:    0x8A1300
// Slot symbol:     get_possible_item_varsize_ptr
// Target type:     <no type info>
// ============================================================

void .get_possible_item_varsize(/* see target signature */)
{
    // Tail-call to get_possible_item_varsize via GOT/IAT indirection
    return get_possible_item_varsize(/* forwarded args */);
}

