// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3F0
// Name:            .set_idc_dtor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3F0 jmp     cs:off_4E91E0
//
// Resolved target: set_idc_dtor
// Target address:  0x4EBBD0
// GOT/IAT slot:    0x4E91E0
// Slot symbol:     off_4E91E0
// Target type:     <no type info>
// ============================================================

void .set_idc_dtor(/* see target signature */)
{
    // Tail-call to set_idc_dtor via GOT/IAT indirection
    return set_idc_dtor(/* forwarded args */);
}

