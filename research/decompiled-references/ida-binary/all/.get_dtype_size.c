// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A2B0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A2B0 jmp     cs:get_dtype_size_ptr
//
// Resolved target: get_dtype_size
// Target address:  0x8D8DA0
// GOT/IAT slot:    0x8A3DF8
// Slot symbol:     get_dtype_size_ptr
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

