// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F0
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F0 jmp     cs:off_4C04E0
//
// Resolved target: get_tinfo_pdata
// Target address:  0x4C34C0
// GOT/IAT slot:    0x4C04E0
// Slot symbol:     off_4C04E0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

