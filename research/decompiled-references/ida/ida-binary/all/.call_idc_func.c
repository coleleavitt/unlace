// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1167E0
// Name:            .call_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1167E0 jmp     cs:call_idc_func_ptr
//
// Resolved target: call_idc_func
// Target address:  0x8D68E0
// GOT/IAT slot:    0x8A2090
// Slot symbol:     call_idc_func_ptr
// Target type:     <no type info>
// ============================================================

void .call_idc_func(/* see target signature */)
{
    // Tail-call to call_idc_func via GOT/IAT indirection
    return call_idc_func(/* forwarded args */);
}

