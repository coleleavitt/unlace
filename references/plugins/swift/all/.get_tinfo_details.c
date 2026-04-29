// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4590
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4590 jmp     cs:off_282B0
//
// Resolved target: get_tinfo_details
// Target address:  0x29C48
// GOT/IAT slot:    0x282B0
// Slot symbol:     off_282B0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

