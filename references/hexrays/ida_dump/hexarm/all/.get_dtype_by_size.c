// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E230
// Name:            .get_dtype_by_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E230 jmp     cs:off_4E9900
//
// Resolved target: get_dtype_by_size
// Target address:  0x4EC320
// GOT/IAT slot:    0x4E9900
// Slot symbol:     off_4E9900
// Target type:     <no type info>
// ============================================================

void .get_dtype_by_size(/* see target signature */)
{
    // Tail-call to get_dtype_by_size via GOT/IAT indirection
    return get_dtype_by_size(/* forwarded args */);
}

