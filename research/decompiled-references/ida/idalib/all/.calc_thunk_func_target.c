// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F20
// Name:            .calc_thunk_func_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F20 jmp     cs:off_2C79778
//
// Resolved target: calc_thunk_func_target
// Target address:  0x5C76B0
// GOT/IAT slot:    0x2C79778
// Slot symbol:     off_2C79778
// Target type:     <no type info>
// ============================================================

void .calc_thunk_func_target(/* see target signature */)
{
    // Tail-call to calc_thunk_func_target via GOT/IAT indirection
    return calc_thunk_func_target(/* forwarded args */);
}

