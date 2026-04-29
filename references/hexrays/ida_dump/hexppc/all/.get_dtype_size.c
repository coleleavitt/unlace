// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A0 jmp     cs:off_4DA4B8
//
// Resolved target: get_dtype_size
// Target address:  0x4DCEA0
// GOT/IAT slot:    0x4DA4B8
// Slot symbol:     off_4DA4B8
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

