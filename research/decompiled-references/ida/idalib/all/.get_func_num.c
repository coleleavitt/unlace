// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD610
// Name:            .get_func_num
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD610 jmp     cs:off_2C7C2F0
//
// Resolved target: get_func_num
// Target address:  0x5CAEA0
// GOT/IAT slot:    0x2C7C2F0
// Slot symbol:     off_2C7C2F0
// Target type:     <no type info>
// ============================================================

void .get_func_num(/* see target signature */)
{
    // Tail-call to get_func_num via GOT/IAT indirection
    return get_func_num(/* forwarded args */);
}

