// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DF80
// Name:            .set_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DF80 jmp     cs:off_4E97A8
//
// Resolved target: set_item_color
// Target address:  0x4EC1C0
// GOT/IAT slot:    0x4E97A8
// Slot symbol:     off_4E97A8
// Target type:     <no type info>
// ============================================================

void .set_item_color(/* see target signature */)
{
    // Tail-call to set_item_color via GOT/IAT indirection
    return set_item_color(/* forwarded args */);
}

