// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A100
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A100 jmp     cs:off_4B9868
//
// Resolved target: get_item_end
// Target address:  0x4BC268
// GOT/IAT slot:    0x4B9868
// Slot symbol:     off_4B9868
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

