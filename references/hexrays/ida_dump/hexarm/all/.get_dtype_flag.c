// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DEA0
// Name:            .get_dtype_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DEA0 jmp     cs:off_4E9738
//
// Resolved target: get_dtype_flag
// Target address:  0x4EC150
// GOT/IAT slot:    0x4E9738
// Slot symbol:     off_4E9738
// Target type:     <no type info>
// ============================================================

void .get_dtype_flag(/* see target signature */)
{
    // Tail-call to get_dtype_flag via GOT/IAT indirection
    return get_dtype_flag(/* forwarded args */);
}

