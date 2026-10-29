// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA800
// Name:            .set_idc_getattr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA800 jmp     cs:off_2C7ABE8
//
// Resolved target: set_idc_getattr
// Target address:  0x78DD60
// GOT/IAT slot:    0x2C7ABE8
// Slot symbol:     off_2C7ABE8
// Target type:     <no type info>
// ============================================================

void .set_idc_getattr(/* see target signature */)
{
    // Tail-call to set_idc_getattr via GOT/IAT indirection
    return set_idc_getattr(/* forwarded args */);
}

