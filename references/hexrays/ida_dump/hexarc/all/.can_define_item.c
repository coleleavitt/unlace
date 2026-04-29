// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29250
// Name:            .can_define_item
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29250 jmp     cs:off_4B9110
//
// Resolved target: can_define_item
// Target address:  0x4BBAE0
// GOT/IAT slot:    0x4B9110
// Slot symbol:     off_4B9110
// Target type:     <no type info>
// ============================================================

void .can_define_item(/* see target signature */)
{
    // Tail-call to can_define_item via GOT/IAT indirection
    return can_define_item(/* forwarded args */);
}

