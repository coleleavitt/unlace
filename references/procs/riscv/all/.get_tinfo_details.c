// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6F0
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6F0 jmp     cs:off_35360
//
// Resolved target: get_tinfo_details
// Target address:  0x359B0
// GOT/IAT slot:    0x35360
// Slot symbol:     off_35360
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

