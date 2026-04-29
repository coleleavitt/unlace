// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B700
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B700 jmp     cs:off_4BFB68
//
// Resolved target: get_tinfo_details
// Target address:  0x4C3068
// GOT/IAT slot:    0x4BFB68
// Slot symbol:     off_4BFB68
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

