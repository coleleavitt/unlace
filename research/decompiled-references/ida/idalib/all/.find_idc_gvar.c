// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A74E0
// Name:            .find_idc_gvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A74E0 jmp     cs:off_2C79258
//
// Resolved target: find_idc_gvar
// Target address:  0x78D580
// GOT/IAT slot:    0x2C79258
// Slot symbol:     off_2C79258
// Target type:     <no type info>
// ============================================================

void .find_idc_gvar(/* see target signature */)
{
    // Tail-call to find_idc_gvar via GOT/IAT indirection
    return find_idc_gvar(/* forwarded args */);
}

