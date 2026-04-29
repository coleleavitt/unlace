// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6570
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6570 jmp     cs:off_2D2A0
//
// Resolved target: remember_problem
// Target address:  0x2D7A0
// GOT/IAT slot:    0x2D2A0
// Slot symbol:     off_2D2A0
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}

