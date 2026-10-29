// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1141E0
// Name:            .add_idc_gvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1141E0 jmp     cs:add_idc_gvar_ptr
//
// Resolved target: add_idc_gvar
// Target address:  0x8D5080
// GOT/IAT slot:    0x8A0D90
// Slot symbol:     add_idc_gvar_ptr
// Target type:     <no type info>
// ============================================================

void .add_idc_gvar(/* see target signature */)
{
    // Tail-call to add_idc_gvar via GOT/IAT indirection
    return add_idc_gvar(/* forwarded args */);
}

