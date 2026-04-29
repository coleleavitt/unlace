// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5350
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5350 jmp     cs:off_15190
//
// Resolved target: get_func
// Target address:  0x16220
// GOT/IAT slot:    0x15190
// Slot symbol:     off_15190
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

