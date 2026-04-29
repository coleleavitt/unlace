// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB90
// Name:            .add_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB90 jmp     cs:off_4CDDB0
//
// Resolved target: add_idc_class
// Target address:  0x4D07F0
// GOT/IAT slot:    0x4CDDB0
// Slot symbol:     off_4CDDB0
// Target type:     <no type info>
// ============================================================

void .add_idc_class(/* see target signature */)
{
    // Tail-call to add_idc_class via GOT/IAT indirection
    return add_idc_class(/* forwarded args */);
}

