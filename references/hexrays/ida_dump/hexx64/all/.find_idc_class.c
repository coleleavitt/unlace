// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE60
// Name:            .find_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE60 jmp     cs:off_4ED718
//
// Resolved target: find_idc_class
// Target address:  0x4F1A28
// GOT/IAT slot:    0x4ED718
// Slot symbol:     off_4ED718
// Target type:     <no type info>
// ============================================================

void .find_idc_class(/* see target signature */)
{
    // Tail-call to find_idc_class via GOT/IAT indirection
    return find_idc_class(/* forwarded args */);
}

