// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C70
// Name:            .forget_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C70 jmp     cs:forget_problem_ptr
//
// Resolved target: forget_problem
// Target address:  0x8D42C8
// GOT/IAT slot:    0x8A02D8
// Slot symbol:     forget_problem_ptr
// Target type:     <no type info>
// ============================================================

void .forget_problem(/* see target signature */)
{
    // Tail-call to forget_problem via GOT/IAT indirection
    return forget_problem(/* forwarded args */);
}

