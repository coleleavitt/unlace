// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF70
// Name:            .calc_thunk_func_target
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF70 jmp     cs:off_4ED7A0
//
// Resolved target: calc_thunk_func_target
// Target address:  0x4F1AB0
// GOT/IAT slot:    0x4ED7A0
// Slot symbol:     off_4ED7A0
// Target type:     <no type info>
// ============================================================

void .calc_thunk_func_target(/* see target signature */)
{
    // Tail-call to calc_thunk_func_target via GOT/IAT indirection
    return calc_thunk_func_target(/* forwarded args */);
}

