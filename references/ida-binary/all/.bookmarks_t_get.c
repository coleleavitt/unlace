// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118850
// Name:            .bookmarks_t_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118850 jmp     cs:bookmarks_t_get_ptr
//
// Resolved target: bookmarks_t_get
// Target address:  0x8D7D20
// GOT/IAT slot:    0x8A30C8
// Slot symbol:     bookmarks_t_get_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get(/* see target signature */)
{
    // Tail-call to bookmarks_t_get via GOT/IAT indirection
    return bookmarks_t_get(/* forwarded args */);
}

