// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x299F0
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x299F0 jmp     cs:off_4B94E0
//
// Resolved target: get_tinfo_pdata
// Target address:  0x4BBEC8
// GOT/IAT slot:    0x4B94E0
// Slot symbol:     off_4B94E0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

