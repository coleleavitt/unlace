// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B5F0
// Name:            .is_varsize_item
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B5F0 jmp     cs:is_varsize_item_ptr
//
// Resolved target: is_varsize_item
// Target address:  0x8D99F8
// GOT/IAT slot:    0x8A4798
// Slot symbol:     is_varsize_item_ptr
// Target type:     <no type info>
// ============================================================

void .is_varsize_item(/* see target signature */)
{
    // Tail-call to is_varsize_item via GOT/IAT indirection
    return is_varsize_item(/* forwarded args */);
}

