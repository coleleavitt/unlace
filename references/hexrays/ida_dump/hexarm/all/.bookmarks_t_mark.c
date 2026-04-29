// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E520
// Name:            .bookmarks_t_mark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E520 jmp     cs:off_4E9A78
//
// Resolved target: bookmarks_t_mark
// Target address:  0x4EC498
// GOT/IAT slot:    0x4E9A78
// Slot symbol:     off_4E9A78
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_mark(/* see target signature */)
{
    // Tail-call to bookmarks_t_mark via GOT/IAT indirection
    return bookmarks_t_mark(/* forwarded args */);
}

