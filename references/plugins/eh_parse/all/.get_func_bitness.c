// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62B0
// Name:            .get_func_bitness
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62B0 jmp     cs:off_2F140
//
// Resolved target: get_func_bitness
// Target address:  0x2F7B0
// GOT/IAT slot:    0x2F140
// Slot symbol:     off_2F140
// Target type:     <no type info>
// ============================================================

void .get_func_bitness(/* see target signature */)
{
    // Tail-call to get_func_bitness via GOT/IAT indirection
    return get_func_bitness(/* forwarded args */);
}

