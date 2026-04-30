// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112210
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112210 jmp     cs:bookmarks_t_get_desc_ptr
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x8D3C00
// GOT/IAT slot:    0x89FDA8
// Slot symbol:     bookmarks_t_get_desc_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

