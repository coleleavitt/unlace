// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84D0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84D0 jmp     cs:off_2A250
//
// Resolved target: get_item_end
// Target address:  0x2BC60
// GOT/IAT slot:    0x2A250
// Slot symbol:     off_2A250
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

