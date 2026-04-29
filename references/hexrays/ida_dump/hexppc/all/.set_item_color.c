// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF60
// Name:            .set_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF60 jmp     cs:off_4DA798
//
// Resolved target: set_item_color
// Target address:  0x4DD190
// GOT/IAT slot:    0x4DA798
// Slot symbol:     off_4DA798
// Target type:     <no type info>
// ============================================================

void .set_item_color(/* see target signature */)
{
    // Tail-call to set_item_color via GOT/IAT indirection
    return set_item_color(/* forwarded args */);
}

