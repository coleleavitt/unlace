// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3340
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3340 jmp     cs:off_20188
//
// Resolved target: get_item_end
// Target address:  0x21AA8
// GOT/IAT slot:    0x20188
// Slot symbol:     off_20188
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

