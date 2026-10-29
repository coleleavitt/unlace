// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114C60
// Name:            .dirtree_set_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114C60 jmp     cs:dirtree_set_id_ptr
//
// Resolved target: dirtree_set_id
// Target address:  0x8D57A8
// GOT/IAT slot:    0x8A12D0
// Slot symbol:     dirtree_set_id_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_set_id(/* see target signature */)
{
    // Tail-call to dirtree_set_id via GOT/IAT indirection
    return dirtree_set_id(/* forwarded args */);
}

