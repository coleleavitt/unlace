// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1127F0
// Name:            .calc_thunk_func_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1127F0 jmp     cs:calc_thunk_func_target_ptr
//
// Resolved target: calc_thunk_func_target
// Target address:  0x8D3FF8
// GOT/IAT slot:    0x8A0098
// Slot symbol:     calc_thunk_func_target_ptr
// Target type:     <no type info>
// ============================================================

void .calc_thunk_func_target(/* see target signature */)
{
    // Tail-call to calc_thunk_func_target via GOT/IAT indirection
    return calc_thunk_func_target(/* forwarded args */);
}

