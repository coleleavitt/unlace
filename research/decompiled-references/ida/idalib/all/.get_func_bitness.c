// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8DF0
// Name:            .get_func_bitness
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8DF0 jmp     cs:off_2C79EE0
//
// Resolved target: get_func_bitness
// Target address:  0x5C9C50
// GOT/IAT slot:    0x2C79EE0
// Slot symbol:     off_2C79EE0
// Target type:     <no type info>
// ============================================================

void .get_func_bitness(/* see target signature */)
{
    // Tail-call to get_func_bitness via GOT/IAT indirection
    return get_func_bitness(/* forwarded args */);
}

