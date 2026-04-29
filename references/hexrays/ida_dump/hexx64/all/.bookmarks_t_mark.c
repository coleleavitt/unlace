// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C5A0
// Name:            .bookmarks_t_mark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C5A0 jmp     cs:off_4EDAB8
//
// Resolved target: bookmarks_t_mark
// Target address:  0x4F1DE0
// GOT/IAT slot:    0x4EDAB8
// Slot symbol:     off_4EDAB8
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_mark(/* see target signature */)
{
    // Tail-call to bookmarks_t_mark via GOT/IAT indirection
    return bookmarks_t_mark(/* forwarded args */);
}

