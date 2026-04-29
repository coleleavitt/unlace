// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_4088
//
// Resolved target: remember_problem
// Target address:  0x41B0
// GOT/IAT slot:    0x4088
// Slot symbol:     off_4088
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}

