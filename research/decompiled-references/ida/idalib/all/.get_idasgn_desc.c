// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF90
// Name:            .get_idasgn_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF90 jmp     cs:off_2C7AFB0
//
// Resolved target: get_idasgn_desc
// Target address:  0x688960
// GOT/IAT slot:    0x2C7AFB0
// Slot symbol:     off_2C7AFB0
// Target type:     <no type info>
// ============================================================

void .get_idasgn_desc(/* see target signature */)
{
    // Tail-call to get_idasgn_desc via GOT/IAT indirection
    return get_idasgn_desc(/* forwarded args */);
}

