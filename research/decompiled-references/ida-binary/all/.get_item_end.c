// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116670
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116670 jmp     cs:get_item_end_ptr
//
// Resolved target: get_item_end
// Target address:  0x8D67C8
// GOT/IAT slot:    0x8A1FD8
// Slot symbol:     get_item_end_ptr
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}

