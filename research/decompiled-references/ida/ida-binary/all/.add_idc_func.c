// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1121C0
// Name:            .add_idc_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1121C0 jmp     cs:add_idc_func_ptr
//
// Resolved target: add_idc_func
// Target address:  0x8D3BD8
// GOT/IAT slot:    0x89FD80
// Slot symbol:     add_idc_func_ptr
// Target type:     <no type info>
// ============================================================

void .add_idc_func(/* see target signature */)
{
    // Tail-call to add_idc_func via GOT/IAT indirection
    return add_idc_func(/* forwarded args */);
}

