// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA710
// Name:            .call_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA710 jmp     cs:off_2C7AB70
//
// Resolved target: call_idc_func
// Target address:  0x79CF40
// GOT/IAT slot:    0x2C7AB70
// Slot symbol:     off_2C7AB70
// Target type:     <no type info>
// ============================================================

void .call_idc_func(/* see target signature */)
{
    // Tail-call to call_idc_func via GOT/IAT indirection
    return call_idc_func(/* forwarded args */);
}

