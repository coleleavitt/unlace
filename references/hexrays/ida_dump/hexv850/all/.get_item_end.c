// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B110
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B110 jmp     cs:off_4C0870
//
// Resolved target: get_item_end
// Target address:  0x4C3868
// GOT/IAT slot:    0x4C0870
// Slot symbol:     off_4C0870
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

