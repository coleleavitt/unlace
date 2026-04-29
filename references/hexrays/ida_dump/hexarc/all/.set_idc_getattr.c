// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29420
// Name:            .set_idc_getattr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29420 jmp     cs:off_4B91F8
//
// Resolved target: set_idc_getattr
// Target address:  0x4BBBC8
// GOT/IAT slot:    0x4B91F8
// Slot symbol:     off_4B91F8
// Target type:     <no type info>
// ============================================================

void .set_idc_getattr(/* see target signature */)
{
    // Tail-call to set_idc_getattr via GOT/IAT indirection
    return set_idc_getattr(/* forwarded args */);
}

