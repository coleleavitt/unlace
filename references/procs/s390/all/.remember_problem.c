// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10250
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10250 jmp     cs:off_2E110
//
// Resolved target: remember_problem
// Target address:  0x36D88
// GOT/IAT slot:    0x2E110
// Slot symbol:     off_2E110
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}

