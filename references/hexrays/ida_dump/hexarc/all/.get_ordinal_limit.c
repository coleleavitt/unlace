// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29980
// Name:            .get_ordinal_limit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29980 jmp     cs:off_4B94A8
//
// Resolved target: get_ordinal_limit
// Target address:  0x4BBE90
// GOT/IAT slot:    0x4B94A8
// Slot symbol:     off_4B94A8
// Target type:     <no type info>
// ============================================================

void .get_ordinal_limit(/* see target signature */)
{
    // Tail-call to get_ordinal_limit via GOT/IAT indirection
    return get_ordinal_limit(/* forwarded args */);
}

