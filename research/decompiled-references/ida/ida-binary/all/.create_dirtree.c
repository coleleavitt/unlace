// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119020
// Name:            .create_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119020 jmp     cs:create_dirtree_ptr
//
// Resolved target: create_dirtree
// Target address:  0x8D81E0
// GOT/IAT slot:    0x8A34B0
// Slot symbol:     create_dirtree_ptr
// Target type:     <no type info>
// ============================================================

void .create_dirtree(/* see target signature */)
{
    // Tail-call to create_dirtree via GOT/IAT indirection
    return create_dirtree(/* forwarded args */);
}

