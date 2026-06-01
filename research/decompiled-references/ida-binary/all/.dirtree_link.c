// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111740
// Name:            .dirtree_link
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111740 jmp     cs:dirtree_link_ptr
//
// Resolved target: dirtree_link
// Target address:  0x8D3538
// GOT/IAT slot:    0x89F840
// Slot symbol:     dirtree_link_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_link(/* see target signature */)
{
    // Tail-call to dirtree_link via GOT/IAT indirection
    return dirtree_link(/* forwarded args */);
}

