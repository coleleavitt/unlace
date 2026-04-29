// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE20
// Name:            .find_idc_class
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE20 jmp     cs:off_4E96F8
//
// Resolved target: find_idc_class
// Target address:  0x4EC110
// GOT/IAT slot:    0x4E96F8
// Slot symbol:     off_4E96F8
// Target type:     <no type info>
// ============================================================

void .find_idc_class(/* see target signature */)
{
    // Tail-call to find_idc_class via GOT/IAT indirection
    return find_idc_class(/* forwarded args */);
}

