// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD0C0
// Name:            .bookmarks_t_get_by_inode
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD0C0 jmp     cs:off_2C7C048
//
// Resolved target: bookmarks_t_get_by_inode
// Target address:  0x4B96E0
// GOT/IAT slot:    0x2C7C048
// Slot symbol:     off_2C7C048
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_by_inode(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_by_inode via GOT/IAT indirection
    return bookmarks_t_get_by_inode(/* forwarded args */);
}

