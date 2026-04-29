// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4470
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4470 jmp     cs:off_28220
//
// Resolved target: get_item_end
// Target address:  0x29BB8
// GOT/IAT slot:    0x28220
// Slot symbol:     off_28220
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

