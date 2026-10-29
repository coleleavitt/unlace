// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABCF0
// Name:            .get_udm_by_fullname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABCF0 jmp     cs:off_2C7B660
//
// Resolved target: get_udm_by_fullname
// Target address:  0x6BE330
// GOT/IAT slot:    0x2C7B660
// Slot symbol:     off_2C7B660
// Target type:     <no type info>
// ============================================================

void .get_udm_by_fullname(/* see target signature */)
{
    // Tail-call to get_udm_by_fullname via GOT/IAT indirection
    return get_udm_by_fullname(/* forwarded args */);
}

