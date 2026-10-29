// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F70
// Name:            .set_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F70 jmp     cs:set_item_color_ptr
//
// Resolved target: set_item_color
// Target address:  0x8D8178
// GOT/IAT slot:    0x8A3458
// Slot symbol:     set_item_color_ptr
// Target type:     <no type info>
// ============================================================

void .set_item_color(/* see target signature */)
{
    // Tail-call to set_item_color via GOT/IAT indirection
    return set_item_color(/* forwarded args */);
}

