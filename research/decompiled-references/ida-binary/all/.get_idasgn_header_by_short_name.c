// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1199D0
// Name:            .get_idasgn_header_by_short_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1199D0 jmp     cs:get_idasgn_header_by_short_name_ptr
//
// Resolved target: get_idasgn_header_by_short_name
// Target address:  0x8D8840
// GOT/IAT slot:    0x8A3988
// Slot symbol:     get_idasgn_header_by_short_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_idasgn_header_by_short_name(/* see target signature */)
{
    // Tail-call to get_idasgn_header_by_short_name via GOT/IAT indirection
    return get_idasgn_header_by_short_name(/* forwarded args */);
}

