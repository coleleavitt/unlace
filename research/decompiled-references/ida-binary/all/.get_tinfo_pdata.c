// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112430
// Name:            .get_tinfo_pdata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112430 jmp     cs:get_tinfo_pdata_ptr
//
// Resolved target: get_tinfo_pdata
// Target address:  0x8D3D78
// GOT/IAT slot:    0x89FEB8
// Slot symbol:     get_tinfo_pdata_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_pdata(/* see target signature */)
{
    // Tail-call to get_tinfo_pdata via GOT/IAT indirection
    return get_tinfo_pdata(/* forwarded args */);
}

