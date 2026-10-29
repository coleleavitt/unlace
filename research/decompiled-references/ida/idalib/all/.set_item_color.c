// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC030
// Name:            .set_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC030 jmp     cs:off_2C7B800
//
// Resolved target: set_item_color
// Target address:  0x59D0C0
// GOT/IAT slot:    0x2C7B800
// Slot symbol:     off_2C7B800
// Target type:     <no type info>
// ============================================================

void .set_item_color(/* see target signature */)
{
    // Tail-call to set_item_color via GOT/IAT indirection
    return set_item_color(/* forwarded args */);
}

