// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E80
// Name:            .get_dtype_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E80 jmp     cs:off_4B9728
//
// Resolved target: get_dtype_flag
// Target address:  0x4BC120
// GOT/IAT slot:    0x4B9728
// Slot symbol:     off_4B9728
// Target type:     <no type info>
// ============================================================

void .get_dtype_flag(/* see target signature */)
{
    // Tail-call to get_dtype_flag via GOT/IAT indirection
    return get_dtype_flag(/* forwarded args */);
}

