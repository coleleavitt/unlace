// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B50
// Name:            .get_dtype_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B50 jmp     cs:off_2C79590
//
// Resolved target: get_dtype_flag
// Target address:  0x579AF0
// GOT/IAT slot:    0x2C79590
// Slot symbol:     off_2C79590
// Target type:     <no type info>
// ============================================================

void .get_dtype_flag(/* see target signature */)
{
    // Tail-call to get_dtype_flag via GOT/IAT indirection
    return get_dtype_flag(/* forwarded args */);
}

