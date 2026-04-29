// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA30
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA30 jmp     cs:off_4ED500
//
// Resolved target: get_tinfo_pdata
// Target address:  0x4F1800
// GOT/IAT slot:    0x4ED500
// Slot symbol:     off_4ED500
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

