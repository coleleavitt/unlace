// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AA40
// Name:            .bookmarks_t_get_by_inode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AA40 jmp     cs:bookmarks_t_get_by_inode_ptr
//
// Resolved target: bookmarks_t_get_by_inode
// Target address:  0x8D92C0
// GOT/IAT slot:    0x8A41C0
// Slot symbol:     bookmarks_t_get_by_inode_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_by_inode(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_by_inode via GOT/IAT indirection
    return bookmarks_t_get_by_inode(/* forwarded args */);
}

