// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114770
// Name:            .is_problem_present
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114770 jmp     cs:is_problem_present_ptr
//
// Resolved target: is_problem_present
// Target address:  0x8D5410
// GOT/IAT slot:    0x8A1058
// Slot symbol:     is_problem_present_ptr
// Target type:     <no type info>
// ============================================================

void .is_problem_present(/* see target signature */)
{
    // Tail-call to is_problem_present via GOT/IAT indirection
    return is_problem_present(/* forwarded args */);
}

