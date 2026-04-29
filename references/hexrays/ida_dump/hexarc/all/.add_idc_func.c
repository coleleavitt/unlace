// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1E0
// Name:            .add_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1E0 jmp     cs:off_4BA0D8
//
// Resolved target: add_idc_func
// Target address:  0x4BCB18
// GOT/IAT slot:    0x4BA0D8
// Slot symbol:     off_4BA0D8
// Target type:     <no type info>
// ============================================================

void .add_idc_func(/* see target signature */)
{
    // Tail-call to add_idc_func via GOT/IAT indirection
    return add_idc_func(/* forwarded args */);
}

