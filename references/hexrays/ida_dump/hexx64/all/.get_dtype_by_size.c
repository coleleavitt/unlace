// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C2C0
// Name:            .get_dtype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C2C0 jmp     cs:off_4ED948
//
// Resolved target: get_dtype_by_size
// Target address:  0x4F1C68
// GOT/IAT slot:    0x4ED948
// Slot symbol:     off_4ED948
// Target type:     <no type info>
// ============================================================

void .get_dtype_by_size(/* see target signature */)
{
    // Tail-call to get_dtype_by_size via GOT/IAT indirection
    return get_dtype_by_size(/* forwarded args */);
}

