// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACAD0
// Name:            .get_dtype_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACAD0 jmp     cs:off_2C7BD50
//
// Resolved target: get_dtype_size
// Target address:  0x579C20
// GOT/IAT slot:    0x2C7BD50
// Slot symbol:     off_2C7BD50
// Target type:     <no type info>
// ============================================================

void .get_dtype_size(/* see target signature */)
{
    // Tail-call to get_dtype_size via GOT/IAT indirection
    return get_dtype_size(/* forwarded args */);
}

