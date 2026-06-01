// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D00
// Name:            .get_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D00 jmp     cs:get_problem_ptr
//
// Resolved target: get_problem
// Target address:  0x8D4D88
// GOT/IAT slot:    0x8A0B20
// Slot symbol:     get_problem_ptr
// Target type:     <no type info>
// ============================================================

void .get_problem(/* see target signature */)
{
    // Tail-call to get_problem via GOT/IAT indirection
    return get_problem(/* forwarded args */);
}

