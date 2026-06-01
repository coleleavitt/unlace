// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A90C0
// Name:            .set_idc_method
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A90C0 jmp     cs:off_2C7A048
//
// Resolved target: set_idc_method
// Target address:  0x78F4B0
// GOT/IAT slot:    0x2C7A048
// Slot symbol:     off_2C7A048
// Target type:     <no type info>
// ============================================================

void .set_idc_method(/* see target signature */)
{
    // Tail-call to set_idc_method via GOT/IAT indirection
    return set_idc_method(/* forwarded args */);
}

