// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A280
// Name:            .get_udm_by_fullname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A280 jmp     cs:off_4C0128
//
// Resolved target: get_udm_by_fullname
// Target address:  0x4C30F0
// GOT/IAT slot:    0x4C0128
// Slot symbol:     off_4C0128
// Target type:     <no type info>
// ============================================================

void .get_udm_by_fullname(/* see target signature */)
{
    // Tail-call to get_udm_by_fullname via GOT/IAT indirection
    return get_udm_by_fullname(/* forwarded args */);
}

