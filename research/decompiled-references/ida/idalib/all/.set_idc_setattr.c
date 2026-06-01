// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABCC0
// Name:            .set_idc_setattr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABCC0 jmp     cs:off_2C7B648
//
// Resolved target: set_idc_setattr
// Target address:  0x78DD70
// GOT/IAT slot:    0x2C7B648
// Slot symbol:     off_2C7B648
// Target type:     <no type info>
// ============================================================

void .set_idc_setattr(/* see target signature */)
{
    // Tail-call to set_idc_setattr via GOT/IAT indirection
    return set_idc_setattr(/* forwarded args */);
}

