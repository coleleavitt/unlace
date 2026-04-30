// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1159D0
// Name:            .find_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1159D0 jmp     cs:find_idc_func_ptr
//
// Resolved target: find_idc_func
// Target address:  0x8D5FE8
// GOT/IAT slot:    0x8A1988
// Slot symbol:     find_idc_func_ptr
// Target type:     <no type info>
// ============================================================

void .find_idc_func(/* see target signature */)
{
    // Tail-call to find_idc_func via GOT/IAT indirection
    return find_idc_func(/* forwarded args */);
}

