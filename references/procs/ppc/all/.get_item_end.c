// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20840
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20840 jmp     cs:off_95408
//
// Resolved target: get_item_end
// Target address:  0x95E40
// GOT/IAT slot:    0x95408
// Slot symbol:     off_95408
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

