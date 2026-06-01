// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113110
// Name:            .bookmarks_t_get_dirtree_id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113110 jmp     cs:bookmarks_t_get_dirtree_id_ptr
//
// Resolved target: bookmarks_t_get_dirtree_id
// Target address:  0x8D45D0
// GOT/IAT slot:    0x8A0528
// Slot symbol:     bookmarks_t_get_dirtree_id_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_dirtree_id(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_dirtree_id via GOT/IAT indirection
    return bookmarks_t_get_dirtree_id(/* forwarded args */);
}

