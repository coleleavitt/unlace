// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C1C0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C1C0 jmp     cs:off_4ED8C8
//
// Resolved target: get_item_end
// Target address:  0x4F1BE8
// GOT/IAT slot:    0x4ED8C8
// Slot symbol:     off_4ED8C8
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

