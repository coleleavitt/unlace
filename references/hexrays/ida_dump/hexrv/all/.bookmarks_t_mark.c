// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4E0
// Name:            .bookmarks_t_mark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4E0 jmp     cs:off_4BFA58
//
// Resolved target: bookmarks_t_mark
// Target address:  0x4C2F50
// GOT/IAT slot:    0x4BFA58
// Slot symbol:     off_4BFA58
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_mark(/* see target signature */)
{
    // Tail-call to bookmarks_t_mark via GOT/IAT indirection
    return bookmarks_t_mark(/* forwarded args */);
}

