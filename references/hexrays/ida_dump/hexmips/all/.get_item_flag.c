// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C120
// Name:            .get_item_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C120 jmp     cs:off_4CE078
//
// Resolved target: get_item_flag
// Target address:  0x4D0AD0
// GOT/IAT slot:    0x4CE078
// Slot symbol:     off_4CE078
// Target type:     <no type info>
// ============================================================

void .get_item_flag(/* see target signature */)
{
    // Tail-call to get_item_flag via GOT/IAT indirection
    return get_item_flag(/* forwarded args */);
}

