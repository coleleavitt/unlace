// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A200
// Name:            .get_dtype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A200 jmp     cs:off_4B98E8
//
// Resolved target: get_dtype_by_size
// Target address:  0x4BC2E8
// GOT/IAT slot:    0x4B98E8
// Slot symbol:     off_4B98E8
// Target type:     <no type info>
// ============================================================

void .get_dtype_by_size(/* see target signature */)
{
    // Tail-call to get_dtype_by_size via GOT/IAT indirection
    return get_dtype_by_size(/* forwarded args */);
}

