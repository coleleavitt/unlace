// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CBC0
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CBC0 jmp     cs:off_4EDDC8
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x4F2108
// GOT/IAT slot:    0x4EDDC8
// Slot symbol:     off_4EDDC8
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

