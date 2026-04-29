// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F150
// Name:            .get_item_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F150 jmp     cs:off_4EA090
//
// Resolved target: get_item_flag
// Target address:  0x4ECAE8
// GOT/IAT slot:    0x4EA090
// Slot symbol:     off_4EA090
// Target type:     <no type info>
// ============================================================

void .get_item_flag(/* see target signature */)
{
    // Tail-call to get_item_flag via GOT/IAT indirection
    return get_item_flag(/* forwarded args */);
}

