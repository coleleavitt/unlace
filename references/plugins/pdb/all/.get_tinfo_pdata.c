// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D350
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D350 jmp     cs:off_B3190
//
// Resolved target: get_tinfo_pdata
// Target address:  0xB3928
// GOT/IAT slot:    0xB3190
// Slot symbol:     off_B3190
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

