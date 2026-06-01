// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117600
// Name:            .get_idasgn_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117600 jmp     cs:get_idasgn_desc_ptr
//
// Resolved target: get_idasgn_desc
// Target address:  0x8D71C0
// GOT/IAT slot:    0x8A27A0
// Slot symbol:     get_idasgn_desc_ptr
// Target type:     <no type info>
// ============================================================

void .get_idasgn_desc(/* see target signature */)
{
    // Tail-call to get_idasgn_desc via GOT/IAT indirection
    return get_idasgn_desc(/* forwarded args */);
}

