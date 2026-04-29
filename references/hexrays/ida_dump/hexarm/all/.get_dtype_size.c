// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D9C0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D9C0 jmp     cs:off_4E94C8
//
// Resolved target: get_dtype_size
// Target address:  0x4EBED0
// GOT/IAT slot:    0x4E94C8
// Slot symbol:     off_4E94C8
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

