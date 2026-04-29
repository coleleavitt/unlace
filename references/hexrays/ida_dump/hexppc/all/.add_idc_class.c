// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB80
// Name:            .add_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB80 jmp     cs:off_4DADA8
//
// Resolved target: add_idc_class
// Target address:  0x4DD7C8
// GOT/IAT slot:    0x4DADA8
// Slot symbol:     off_4DADA8
// Target type:     <no type info>
// ============================================================

void .add_idc_class(/* see target signature */)
{
    // Tail-call to add_idc_class via GOT/IAT indirection
    return add_idc_class(/* forwarded args */);
}

