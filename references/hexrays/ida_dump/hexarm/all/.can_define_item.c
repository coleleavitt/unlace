// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D250
// Name:            .can_define_item
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D250 jmp     cs:off_4E9110
//
// Resolved target: can_define_item
// Target address:  0x4EBB00
// GOT/IAT slot:    0x4E9110
// Slot symbol:     off_4E9110
// Target type:     <no type info>
// ============================================================

void .can_define_item(/* see target signature */)
{
    // Tail-call to can_define_item via GOT/IAT indirection
    return can_define_item(/* forwarded args */);
}

