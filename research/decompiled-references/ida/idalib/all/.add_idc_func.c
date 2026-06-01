// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7BD0
// Name:            .add_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7BD0 jmp     cs:off_2C795D0
//
// Resolved target: add_idc_func
// Target address:  0x78DE20
// GOT/IAT slot:    0x2C795D0
// Slot symbol:     off_2C795D0
// Target type:     <no type info>
// ============================================================

void .add_idc_func(/* see target signature */)
{
    // Tail-call to add_idc_func via GOT/IAT indirection
    return add_idc_func(/* forwarded args */);
}

