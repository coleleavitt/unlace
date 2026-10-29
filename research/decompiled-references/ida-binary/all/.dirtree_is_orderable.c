// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117910
// Name:            .dirtree_is_orderable
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117910 jmp     cs:dirtree_is_orderable_ptr
//
// Resolved target: dirtree_is_orderable
// Target address:  0x8D73A8
// GOT/IAT slot:    0x8A2928
// Slot symbol:     dirtree_is_orderable_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_is_orderable(/* see target signature */)
{
    // Tail-call to dirtree_is_orderable via GOT/IAT indirection
    return dirtree_is_orderable(/* forwarded args */);
}

