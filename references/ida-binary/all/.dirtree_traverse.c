// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB70
// Name:            .dirtree_traverse
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB70 jmp     cs:dirtree_traverse_ptr
//
// Resolved target: dirtree_traverse
// Target address:  0x8D9368
// GOT/IAT slot:    0x8A4258
// Slot symbol:     dirtree_traverse_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_traverse(/* see target signature */)
{
    // Tail-call to dirtree_traverse via GOT/IAT indirection
    return dirtree_traverse(/* forwarded args */);
}

