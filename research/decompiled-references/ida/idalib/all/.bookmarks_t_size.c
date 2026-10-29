// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD4D0
// Name:            .bookmarks_t_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD4D0 jmp     cs:off_2C7C250
//
// Resolved target: bookmarks_t_size
// Target address:  0x4B81D0
// GOT/IAT slot:    0x2C7C250
// Slot symbol:     off_2C7C250
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_size(/* see target signature */)
{
    // Tail-call to bookmarks_t_size via GOT/IAT indirection
    return bookmarks_t_size(/* forwarded args */);
}

