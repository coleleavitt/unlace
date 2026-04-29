// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B250
// Name:            .get_prev_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B250 jmp     cs:off_4C0910
//
// Resolved target: get_prev_func
// Target address:  0x4C3908
// GOT/IAT slot:    0x4C0910
// Slot symbol:     off_4C0910
// Target type:     <no type info>
// ============================================================

void .get_prev_func(/* see target signature */)
{
    // Tail-call to get_prev_func via GOT/IAT indirection
    return get_prev_func(/* forwarded args */);
}

