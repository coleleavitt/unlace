// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAC0
// Name:            .bookmarks_t_get_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAC0 jmp     cs:off_4DAD48
//
// Resolved target: bookmarks_t_get_desc
// Target address:  0x4DD768
// GOT/IAT slot:    0x4DAD48
// Slot symbol:     off_4DAD48
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get_desc(/* see target signature */)
{
    // Tail-call to bookmarks_t_get_desc via GOT/IAT indirection
    return bookmarks_t_get_desc(/* forwarded args */);
}

