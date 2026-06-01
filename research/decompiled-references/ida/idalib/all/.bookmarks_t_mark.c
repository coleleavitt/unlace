// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A93D0
// Name:            .bookmarks_t_mark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A93D0 jmp     cs:off_2C7A1D0
//
// Resolved target: bookmarks_t_mark
// Target address:  0x4BB210
// GOT/IAT slot:    0x2C7A1D0
// Slot symbol:     off_2C7A1D0
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_mark(/* see target signature */)
{
    // Tail-call to bookmarks_t_mark via GOT/IAT indirection
    return bookmarks_t_mark(/* forwarded args */);
}

