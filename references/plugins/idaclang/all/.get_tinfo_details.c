// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_29198
//
// Resolved target: get_tinfo_details
// Target address:  0x29548
// GOT/IAT slot:    0x29198
// Slot symbol:     off_29198
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

