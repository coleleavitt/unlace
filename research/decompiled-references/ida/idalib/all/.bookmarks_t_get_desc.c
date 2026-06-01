// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C20
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C20 jmp     cs:off_2C795F8
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x4B7F80
// GOT/IAT slot:    0x2C795F8
// Slot symbol:     off_2C795F8
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

