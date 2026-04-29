// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF00
// Name:            .calc_thunk_func_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF00 jmp     cs:off_4DA768
//
// Resolved target: calc_thunk_func_target
// Target address:  0x4DD160
// GOT/IAT slot:    0x4DA768
// Slot symbol:     off_4DA768
// Target type:     <no type info>
// ============================================================

void .calc_thunk_func_target(/* see target signature */)
{
    // Tail-call to calc_thunk_func_target via GOT/IAT indirection
    return calc_thunk_func_target(/* forwarded args */);
}

