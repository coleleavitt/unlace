// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117810
// Name:            .dirtree_link_inode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117810 jmp     cs:dirtree_link_inode_ptr
//
// Resolved target: dirtree_link_inode
// Target address:  0x8D7300
// GOT/IAT slot:    0x8A28A8
// Slot symbol:     dirtree_link_inode_ptr
// Target type:     <no type info>
// ============================================================

void .dirtree_link_inode(/* see target signature */)
{
    // Tail-call to dirtree_link_inode via GOT/IAT indirection
    return dirtree_link_inode(/* forwarded args */);
}

