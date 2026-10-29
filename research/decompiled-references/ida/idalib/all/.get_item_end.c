// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA6A0
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA6A0 jmp     cs:off_2C7AB38
//
// Resolved target: get_item_end
// Target address:  0x3C20E0
// GOT/IAT slot:    0x2C7AB38
// Slot symbol:     off_2C7AB38
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

