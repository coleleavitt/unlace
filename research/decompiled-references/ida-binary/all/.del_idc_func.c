// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114AA0
// Name:            .del_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114AA0 jmp     cs:del_idc_func_ptr
//
// Resolved target: del_idc_func
// Target address:  0x8D5678
// GOT/IAT slot:    0x8A11F0
// Slot symbol:     del_idc_func_ptr
// Target type:     <no type info>
// ============================================================

void .del_idc_func(/* see target signature */)
{
    // Tail-call to del_idc_func via GOT/IAT indirection
    return del_idc_func(/* forwarded args */);
}

