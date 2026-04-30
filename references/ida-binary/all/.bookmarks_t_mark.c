// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1146B0
// Name:            .bookmarks_t_mark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1146B0 jmp     cs:bookmarks_t_mark_ptr
//
// Resolved target: bookmarks_t_mark
// Target address:  0x8D53A0
// GOT/IAT slot:    0x8A0FF8
// Slot symbol:     bookmarks_t_mark_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_mark(/* see target signature */)
{
    // Tail-call to bookmarks_t_mark via GOT/IAT indirection
    return bookmarks_t_mark(/* forwarded args */);
}

