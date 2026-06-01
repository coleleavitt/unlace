// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7CF0
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7CF0 jmp     cs:off_2C79660
//
// Resolved target: get_tinfo_pdata
// Target address:  0x550AB0
// GOT/IAT slot:    0x2C79660
// Slot symbol:     off_2C79660
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

