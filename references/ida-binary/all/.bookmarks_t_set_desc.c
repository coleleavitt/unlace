// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115350
// Name:            .bookmarks_t_set_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115350 jmp     cs:bookmarks_t_set_desc_ptr
//
// Resolved target: bookmarks_t_set_desc
// Target address:  0x8D5BF8
// GOT/IAT slot:    0x8A1648
// Slot symbol:     bookmarks_t_set_desc_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_set_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_set_desc via GOT/IAT indirection
    return bookmarks_t_set_desc(/* forwarded args */);
}

