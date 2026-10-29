// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA990
// Name:            .get_prev_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA990 jmp     cs:off_2C7ACB0
//
// Resolved target: get_prev_func
// Target address:  0x5CAB10
// GOT/IAT slot:    0x2C7ACB0
// Slot symbol:     off_2C7ACB0
// Target type:     <no type info>
// ============================================================

void .get_prev_func(/* see target signature */)
{
    // Tail-call to get_prev_func via GOT/IAT indirection
    return get_prev_func(/* forwarded args */);
}

