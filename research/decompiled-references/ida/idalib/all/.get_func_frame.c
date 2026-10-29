// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC7D0
// Name:            .get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC7D0 jmp     cs:off_2C7BBD0
//
// Resolved target: get_func_frame
// Target address:  0x5B78C0
// GOT/IAT slot:    0x2C7BBD0
// Slot symbol:     off_2C7BBD0
// Target type:     <no type info>
// ============================================================

void .get_func_frame(/* see target signature */)
{
    // Tail-call to get_func_frame via GOT/IAT indirection
    return get_func_frame(/* forwarded args */);
}

