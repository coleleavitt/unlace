// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAD0
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAD0 jmp     cs:off_4CDD50
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x4D0790
// GOT/IAT slot:    0x4CDD50
// Slot symbol:     off_4CDD50
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

