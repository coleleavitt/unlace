// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D00
// Name:            .get_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D00 jmp     cs:off_2C79668
//
// Resolved target: get_item_color
// Target address:  0x59CFC0
// GOT/IAT slot:    0x2C79668
// Slot symbol:     off_2C79668
// Target type:     <no type info>
// ============================================================

void .get_item_color(/* see target signature */)
{
    // Tail-call to get_item_color via GOT/IAT indirection
    return get_item_color(/* forwarded args */);
}

