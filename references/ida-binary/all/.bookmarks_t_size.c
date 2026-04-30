// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0B0
// Name:            .bookmarks_t_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0B0 jmp     cs:bookmarks_t_size_ptr
//
// Resolved target: bookmarks_t_size
// Target address:  0x8D9690
// GOT/IAT slot:    0x8A44F8
// Slot symbol:     bookmarks_t_size_ptr
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_size(/* see target signature */)
{
    // Tail-call to bookmarks_t_size via GOT/IAT indirection
    return bookmarks_t_size(/* forwarded args */);
}

