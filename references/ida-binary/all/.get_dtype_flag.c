// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112130
// Name:            .get_dtype_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112130 jmp     cs:get_dtype_flag_ptr
//
// Resolved target: get_dtype_flag
// Target address:  0x8D3B80
// GOT/IAT slot:    0x89FD38
// Slot symbol:     get_dtype_flag_ptr
// Target type:     <no type info>
// ============================================================

void .get_dtype_flag(/* see target signature */)
{
    // Tail-call to get_dtype_flag via GOT/IAT indirection
    return get_dtype_flag(/* forwarded args */);
}

