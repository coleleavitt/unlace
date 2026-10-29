// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D00
// Name:            .get_idainfo_by_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D00 jmp     cs:get_idainfo_by_udm_ptr
//
// Resolved target: get_idainfo_by_udm
// Target address:  0x8D6C08
// GOT/IAT slot:    0x8A2320
// Slot symbol:     get_idainfo_by_udm_ptr
// Target type:     <no type info>
// ============================================================

void .get_idainfo_by_udm(/* see target signature */)
{
    // Tail-call to get_idainfo_by_udm via GOT/IAT indirection
    return get_idainfo_by_udm(/* forwarded args */);
}

