// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACA80
// Name:            .bookmarks_t_erase
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACA80 jmp     cs:off_2C7BD28
//
// Resolved target: bookmarks_t_erase
// Target address:  0x4BB240
// GOT/IAT slot:    0x2C7BD28
// Slot symbol:     off_2C7BD28
// Target type:     <no type info>
// ============================================================

void .bookmarks_t_erase(/* see target signature */)
{
    // Tail-call to bookmarks_t_erase via GOT/IAT indirection
    return bookmarks_t_erase(/* forwarded args */);
}

