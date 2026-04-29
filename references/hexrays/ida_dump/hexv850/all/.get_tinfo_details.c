// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B710
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B710 jmp     cs:off_4C0B70
//
// Resolved target: get_tinfo_details
// Target address:  0x4C3B70
// GOT/IAT slot:    0x4C0B70
// Slot symbol:     off_4C0B70
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

