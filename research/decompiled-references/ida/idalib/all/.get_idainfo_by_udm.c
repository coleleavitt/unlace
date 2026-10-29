// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA70
// Name:            .get_idainfo_by_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA70 jmp     cs:off_2C7AD20
//
// Resolved target: get_idainfo_by_udm
// Target address:  0x6BEFD0
// GOT/IAT slot:    0x2C7AD20
// Slot symbol:     off_2C7AD20
// Target type:     <no type info>
// ============================================================

void .get_idainfo_by_udm(/* see target signature */)
{
    // Tail-call to get_idainfo_by_udm via GOT/IAT indirection
    return get_idainfo_by_udm(/* forwarded args */);
}

