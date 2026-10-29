// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7830
// Name:            .find_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7830 jmp     cs:off_2C79400
//
// Resolved target: find_idc_class
// Target address:  0x78DA10
// GOT/IAT slot:    0x2C79400
// Slot symbol:     off_2C79400
// Target type:     <no type info>
// ============================================================

void .find_idc_class(/* see target signature */)
{
    // Tail-call to find_idc_class via GOT/IAT indirection
    return find_idc_class(/* forwarded args */);
}

