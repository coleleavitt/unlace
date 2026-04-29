// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB60
// Name:            .add_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB60 jmp     cs:off_4B9D98
//
// Resolved target: add_idc_class
// Target address:  0x4BC7B8
// GOT/IAT slot:    0x4B9D98
// Slot symbol:     off_4B9D98
// Target type:     <no type info>
// ============================================================

void .add_idc_class(/* see target signature */)
{
    // Tail-call to add_idc_class via GOT/IAT indirection
    return add_idc_class(/* forwarded args */);
}

