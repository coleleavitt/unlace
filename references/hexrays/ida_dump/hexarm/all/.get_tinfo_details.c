// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E740
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E740 jmp     cs:off_4E9B88
//
// Resolved target: get_tinfo_details
// Target address:  0x4EC5B0
// GOT/IAT slot:    0x4E9B88
// Slot symbol:     off_4E9B88
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

