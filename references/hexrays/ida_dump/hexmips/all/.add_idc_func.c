// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C210
// Name:            .add_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C210 jmp     cs:off_4CE0F0
//
// Resolved target: add_idc_func
// Target address:  0x4D0B50
// GOT/IAT slot:    0x4CE0F0
// Slot symbol:     off_4CE0F0
// Target type:     <no type info>
// ============================================================

void .add_idc_func(/* see target signature */)
{
    // Tail-call to add_idc_func via GOT/IAT indirection
    return add_idc_func(/* forwarded args */);
}

