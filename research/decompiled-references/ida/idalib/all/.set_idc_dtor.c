// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB7A0
// Name:            .set_idc_dtor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB7A0 jmp     cs:off_2C7B3B8
//
// Resolved target: set_idc_dtor
// Target address:  0x78DD80
// GOT/IAT slot:    0x2C7B3B8
// Slot symbol:     off_2C7B3B8
// Target type:     <no type info>
// ============================================================

void .set_idc_dtor(/* see target signature */)
{
    // Tail-call to set_idc_dtor via GOT/IAT indirection
    return set_idc_dtor(/* forwarded args */);
}

