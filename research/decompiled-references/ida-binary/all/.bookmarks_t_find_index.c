// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F70
// Name:            .bookmarks_t_find_index
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F70 jmp     cs:bookmarks_t_find_index_ptr
//
// Resolved target: bookmarks_t_find_index
// Target address:  0x8D8BA8
// GOT/IAT slot:    0x8A3C58
// Slot symbol:     bookmarks_t_find_index_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_find_index(/* see target signature */)
{
    // Tail-call to bookmarks_t_find_index via GOT/IAT indirection
    return bookmarks_t_find_index(/* forwarded args */);
}

