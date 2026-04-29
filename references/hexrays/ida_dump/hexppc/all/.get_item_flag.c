// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C110
// Name:            .get_item_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C110 jmp     cs:off_4DB070
//
// Resolved target: get_item_flag
// Target address:  0x4DDAA8
// GOT/IAT slot:    0x4DB070
// Slot symbol:     off_4DB070
// Target type:     <no type info>
// ============================================================

void .get_item_flag(/* see target signature */)
{
    // Tail-call to get_item_flag via GOT/IAT indirection
    return get_item_flag(/* forwarded args */);
}

