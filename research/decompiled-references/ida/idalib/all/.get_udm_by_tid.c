// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD530
// Name:            .get_udm_by_tid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD530 jmp     cs:off_2C7C280
//
// Resolved target: get_udm_by_tid
// Target address:  0x6BE300
// GOT/IAT slot:    0x2C7C280
// Slot symbol:     off_2C7C280
// Target type:     <no type info>
// ============================================================

void .get_udm_by_tid(/* see target signature */)
{
    // Tail-call to get_udm_by_tid via GOT/IAT indirection
    return get_udm_by_tid(/* forwarded args */);
}

