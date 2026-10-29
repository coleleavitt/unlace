// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A220
// Name:            .bookmarks_t_erase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A220 jmp     cs:bookmarks_t_erase_ptr
//
// Resolved target: bookmarks_t_erase
// Target address:  0x8D8D58
// GOT/IAT slot:    0x8A3DB0
// Slot symbol:     bookmarks_t_erase_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_erase(/* see target signature */)
{
    // Tail-call to bookmarks_t_erase via GOT/IAT indirection
    return bookmarks_t_erase(/* forwarded args */);
}

