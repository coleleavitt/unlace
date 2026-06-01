// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112440
// Name:            .get_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112440 jmp     cs:get_item_color_ptr
//
// Resolved target: get_item_color
// Target address:  0x8D3D88
// GOT/IAT slot:    0x89FEC0
// Slot symbol:     get_item_color_ptr
// Target type:     <no type info>
// ============================================================

void .get_item_color(/* see target signature */)
{
    // Tail-call to get_item_color via GOT/IAT indirection
    return get_item_color(/* forwarded args */);
}

