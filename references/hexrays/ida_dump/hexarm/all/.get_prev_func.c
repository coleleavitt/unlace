// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E280
// Name:            .get_prev_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E280 jmp     cs:off_4E9928
//
// Resolved target: get_prev_func
// Target address:  0x4EC348
// GOT/IAT slot:    0x4E9928
// Slot symbol:     off_4E9928
// Target type:     <no type info>
// ============================================================

void .get_prev_func(/* see target signature */)
{
    // Tail-call to get_prev_func via GOT/IAT indirection
    return get_prev_func(/* forwarded args */);
}

