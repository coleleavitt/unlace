// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119410
// Name:            .can_define_item
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119410 jmp     cs:can_define_item_ptr
//
// Resolved target: can_define_item
// Target address:  0x8D8460
// GOT/IAT slot:    0x8A36A8
// Slot symbol:     can_define_item_ptr
// Target type:     <no type info>
// ============================================================

void .can_define_item(/* see target signature */)
{
    // Tail-call to can_define_item via GOT/IAT indirection
    return can_define_item(/* forwarded args */);
}

