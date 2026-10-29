// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B2D0
// Name:            .get_func_num
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B2D0 jmp     cs:get_func_num_ptr
//
// Resolved target: get_func_num
// Target address:  0x8D97D8
// GOT/IAT slot:    0x8A4608
// Slot symbol:     get_func_num_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_num(/* see target signature */)
{
    // Tail-call to get_func_num via GOT/IAT indirection
    return get_func_num(/* forwarded args */);
}

