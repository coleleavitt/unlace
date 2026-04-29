// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3F0
// Name:            .set_idc_dtor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3F0 jmp     cs:off_4ED1E0
//
// Resolved target: set_idc_dtor
// Target address:  0x4F14D8
// GOT/IAT slot:    0x4ED1E0
// Slot symbol:     off_4ED1E0
// Target type:     <no type info>
// ============================================================

void .set_idc_dtor(/* see target signature */)
{
    // Tail-call to set_idc_dtor via GOT/IAT indirection
    return set_idc_dtor(/* forwarded args */);
}

