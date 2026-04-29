// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB00
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB00 jmp     cs:off_4E9D68
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x4EC7A8
// GOT/IAT slot:    0x4E9D68
// Slot symbol:     off_4E9D68
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

