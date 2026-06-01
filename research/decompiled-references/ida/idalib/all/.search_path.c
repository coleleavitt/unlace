// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB0C0
// Name:            .search_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB0C0 jmp     cs:off_2C7B048
//
// Resolved target: search_path
// Target address:  0x833EF0
// GOT/IAT slot:    0x2C7B048
// Slot symbol:     off_2C7B048
// Target type:     <no type info>
// ============================================================

void .search_path(/* see target signature */)
{
    // Tail-call to search_path via GOT/IAT indirection
    return search_path(/* forwarded args */);
}

