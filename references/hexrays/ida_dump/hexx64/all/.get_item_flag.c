// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D280
// Name:            .get_item_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D280 jmp     cs:off_4EE128
//
// Resolved target: get_item_flag
// Target address:  0x4F2480
// GOT/IAT slot:    0x4EE128
// Slot symbol:     off_4EE128
// Target type:     <no type info>
// ============================================================

void .get_item_flag(/* see target signature */)
{
    // Tail-call to get_item_flag via GOT/IAT indirection
    return get_item_flag(/* forwarded args */);
}

