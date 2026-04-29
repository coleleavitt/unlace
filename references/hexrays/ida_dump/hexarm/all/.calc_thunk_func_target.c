// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DF20
// Name:            .calc_thunk_func_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DF20 jmp     cs:off_4E9778
//
// Resolved target: calc_thunk_func_target
// Target address:  0x4EC190
// GOT/IAT slot:    0x4E9778
// Slot symbol:     off_4E9778
// Target type:     <no type info>
// ============================================================

void .calc_thunk_func_target(/* see target signature */)
{
    // Tail-call to calc_thunk_func_target via GOT/IAT indirection
    return calc_thunk_func_target(/* forwarded args */);
}

