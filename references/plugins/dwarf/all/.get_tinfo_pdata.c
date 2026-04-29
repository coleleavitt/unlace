// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3C0
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3C0 jmp     cs:off_CA1C8
//
// Resolved target: get_tinfo_pdata
// Target address:  0xD0AF8
// GOT/IAT slot:    0xCA1C8
// Slot symbol:     off_CA1C8
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

