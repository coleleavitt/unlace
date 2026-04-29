// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE50
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE50 jmp     cs:off_4CD710
//
// Resolved target: get_func
// Target address:  0x4D0128
// GOT/IAT slot:    0x4CD710
// Slot symbol:     off_4CD710
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

