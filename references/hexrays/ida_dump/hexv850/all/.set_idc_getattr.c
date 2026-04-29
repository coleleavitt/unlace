// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A420
// Name:            .set_idc_getattr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A420 jmp     cs:off_4C01F8
//
// Resolved target: set_idc_getattr
// Target address:  0x4C31C0
// GOT/IAT slot:    0x4C01F8
// Slot symbol:     off_4C01F8
// Target type:     <no type info>
// ============================================================

void .set_idc_getattr(/* see target signature */)
{
    // Tail-call to set_idc_getattr via GOT/IAT indirection
    return set_idc_getattr(/* forwarded args */);
}

