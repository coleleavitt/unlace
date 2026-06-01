// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A90D0
// Name:            .get_dtype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A90D0 jmp     cs:off_2C7A050
//
// Resolved target: get_dtype_by_size
// Target address:  0x579D90
// GOT/IAT slot:    0x2C7A050
// Slot symbol:     off_2C7A050
// Target type:     <no type info>
// ============================================================

void .get_dtype_by_size(/* see target signature */)
{
    // Tail-call to get_dtype_by_size via GOT/IAT indirection
    return get_dtype_by_size(/* forwarded args */);
}

