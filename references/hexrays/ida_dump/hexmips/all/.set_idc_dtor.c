// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A3E0
// Name:            .set_idc_dtor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A3E0 jmp     cs:off_4CD1D8
//
// Resolved target: set_idc_dtor
// Target address:  0x4CFBC8
// GOT/IAT slot:    0x4CD1D8
// Slot symbol:     off_4CD1D8
// Target type:     <no type info>
// ============================================================

void .set_idc_dtor(/* see target signature */)
{
    // Tail-call to set_idc_dtor via GOT/IAT indirection
    return set_idc_dtor(/* forwarded args */);
}

