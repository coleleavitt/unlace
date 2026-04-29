// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20AC0
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20AC0 jmp     cs:off_95548
//
// Resolved target: get_tinfo_details
// Target address:  0x95F80
// GOT/IAT slot:    0x95548
// Slot symbol:     off_95548
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

