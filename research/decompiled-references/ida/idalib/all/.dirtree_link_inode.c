// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB0A0
// Name:            .dirtree_link_inode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB0A0 jmp     cs:off_2C7B038
//
// Resolved target: dirtree_link_inode
// Target address:  0x77EFC0
// GOT/IAT slot:    0x2C7B038
// Slot symbol:     off_2C7B038
// Target type:     <no type info>
// ============================================================

void .dirtree_link_inode(/* see target signature */)
{
    // Tail-call to dirtree_link_inode via GOT/IAT indirection
    return dirtree_link_inode(/* forwarded args */);
}

