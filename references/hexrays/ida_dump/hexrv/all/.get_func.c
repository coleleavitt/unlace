// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE50
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE50 jmp     cs:off_4BF710
//
// Resolved target: get_func
// Target address:  0x4C2C00
// GOT/IAT slot:    0x4BF710
// Slot symbol:     off_4BF710
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

