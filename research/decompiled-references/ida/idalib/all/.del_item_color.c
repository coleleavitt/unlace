// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD3F0
// Name:            .del_item_color
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD3F0 jmp     cs:off_2C7C1E0
//
// Resolved target: del_item_color
// Target address:  0x59D040
// GOT/IAT slot:    0x2C7C1E0
// Slot symbol:     off_2C7C1E0
// Target type:     <no type info>
// ============================================================

void .del_item_color(/* see target signature */)
{
    // Tail-call to del_item_color via GOT/IAT indirection
    return del_item_color(/* forwarded args */);
}

