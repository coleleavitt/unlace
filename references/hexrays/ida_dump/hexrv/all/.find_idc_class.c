// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE00
// Name:            .find_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE00 jmp     cs:off_4BF6E8
//
// Resolved target: find_idc_class
// Target address:  0x4C2BD8
// GOT/IAT slot:    0x4BF6E8
// Slot symbol:     off_4BF6E8
// Target type:     <no type info>
// ============================================================

void .find_idc_class(/* see target signature */)
{
    // Tail-call to find_idc_class via GOT/IAT indirection
    return find_idc_class(/* forwarded args */);
}

