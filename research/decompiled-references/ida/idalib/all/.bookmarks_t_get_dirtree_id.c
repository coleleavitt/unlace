// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8590
// Name:            .bookmarks_t_get_dirtree_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8590 jmp     cs:off_2C79AB0
//
// Resolved target: bookmarks_t_get_dirtree_id
// Target address:  0x4B78D0
// GOT/IAT slot:    0x2C79AB0
// Slot symbol:     off_2C79AB0
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_dirtree_id(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_dirtree_id via GOT/IAT indirection
    return bookmarks_t_get_dirtree_id(/* forwarded args */);
}

