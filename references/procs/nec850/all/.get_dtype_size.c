// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92D0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92D0 jmp     cs:off_2E150
//
// Resolved target: get_dtype_size
// Target address:  0x2E7C0
// GOT/IAT slot:    0x2E150
// Slot symbol:     off_2E150
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

