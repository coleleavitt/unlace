// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABEB0
// Name:            .add_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABEB0 jmp     cs:off_2C7B740
//
// Resolved target: add_idc_class
// Target address:  0x78DBB0
// GOT/IAT slot:    0x2C7B740
// Slot symbol:     off_2C7B740
// Target type:     <no type info>
// ============================================================

void .add_idc_class(/* see target signature */)
{
    // Tail-call to add_idc_class via GOT/IAT indirection
    return add_idc_class(/* forwarded args */);
}

