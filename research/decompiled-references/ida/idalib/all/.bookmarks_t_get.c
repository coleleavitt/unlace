// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB10
// Name:            .bookmarks_t_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB10 jmp     cs:off_2C7B570
//
// Resolved target: bookmarks_t_get
// Target address:  0x4B9540
// GOT/IAT slot:    0x2C7B570
// Slot symbol:     off_2C7B570
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_get(/* see target signature */)
{
    // Tail-call to bookmarks_t_get via GOT/IAT indirection
    return bookmarks_t_get(/* forwarded args */);
}

