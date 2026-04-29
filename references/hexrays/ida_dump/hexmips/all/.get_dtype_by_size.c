// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B210
// Name:            .get_dtype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B210 jmp     cs:off_4CD8F0
//
// Resolved target: get_dtype_by_size
// Target address:  0x4D0310
// GOT/IAT slot:    0x4CD8F0
// Slot symbol:     off_4CD8F0
// Target type:     <no type info>
// ============================================================

void .get_dtype_by_size(/* see target signature */)
{
    // Tail-call to get_dtype_by_size via GOT/IAT indirection
    return get_dtype_by_size(/* forwarded args */);
}

