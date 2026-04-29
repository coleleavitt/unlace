// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C310
// Name:            .get_prev_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C310 jmp     cs:off_4ED970
//
// Resolved target: get_prev_func
// Target address:  0x4F1C90
// GOT/IAT slot:    0x4ED970
// Slot symbol:     off_4ED970
// Target type:     <no type info>
// ============================================================

void .get_prev_func(/* see target signature */)
{
    // Tail-call to get_prev_func via GOT/IAT indirection
    return get_prev_func(/* forwarded args */);
}

