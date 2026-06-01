// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113FF0
// Name:            .get_idasgn_title
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113FF0 jmp     cs:get_idasgn_title_ptr
//
// Resolved target: get_idasgn_title
// Target address:  0x8D4F68
// GOT/IAT slot:    0x8A0C98
// Slot symbol:     get_idasgn_title_ptr
// Target type:     <no type info>
// ============================================================

void .get_idasgn_title(/* see target signature */)
{
    // Tail-call to get_idasgn_title via GOT/IAT indirection
    return get_idasgn_title(/* forwarded args */);
}

