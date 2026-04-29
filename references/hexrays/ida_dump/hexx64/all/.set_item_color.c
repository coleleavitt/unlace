// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFD0
// Name:            .set_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFD0 jmp     cs:off_4ED7D0
//
// Resolved target: set_item_color
// Target address:  0x4F1AE0
// GOT/IAT slot:    0x4ED7D0
// Slot symbol:     off_4ED7D0
// Target type:     <no type info>
// ============================================================

void .set_item_color(/* see target signature */)
{
    // Tail-call to set_item_color via GOT/IAT indirection
    return set_item_color(/* forwarded args */);
}

