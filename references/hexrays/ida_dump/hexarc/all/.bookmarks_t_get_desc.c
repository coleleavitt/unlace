// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA0
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA0 jmp     cs:off_4B9D38
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x4BC758
// GOT/IAT slot:    0x4B9D38
// Slot symbol:     off_4B9D38
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

