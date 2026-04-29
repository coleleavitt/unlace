// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE50
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE50 jmp     cs:off_4DA710
//
// Resolved target: get_func
// Target address:  0x4DD108
// GOT/IAT slot:    0x4DA710
// Slot symbol:     off_4DA710
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

