// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A90F0
// Name:            .add_idc_gvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A90F0 jmp     cs:off_2C7A060
//
// Resolved target: add_idc_gvar
// Target address:  0x78D890
// GOT/IAT slot:    0x2C7A060
// Slot symbol:     off_2C7A060
// Target type:     <no type info>
// ============================================================

void .add_idc_gvar(/* see target signature */)
{
    // Tail-call to add_idc_gvar via GOT/IAT indirection
    return add_idc_gvar(/* forwarded args */);
}

