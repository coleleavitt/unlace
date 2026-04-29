// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CC90
// Name:            .add_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CC90 jmp     cs:off_4EDE30
//
// Resolved target: add_idc_class
// Target address:  0x4F2170
// GOT/IAT slot:    0x4EDE30
// Slot symbol:     off_4EDE30
// Target type:     <no type info>
// ============================================================

void .add_idc_class(/* see target signature */)
{
    // Tail-call to add_idc_class via GOT/IAT indirection
    return add_idc_class(/* forwarded args */);
}

