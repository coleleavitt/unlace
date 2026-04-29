// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8750
// Name:            .is_problem_present
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8750 jmp     cs:off_2A390
//
// Resolved target: is_problem_present
// Target address:  0x2A918
// GOT/IAT slot:    0x2A390
// Slot symbol:     off_2A390
// Target type:     <no type info>
// ============================================================

void .is_problem_present(/* see target signature */)
{
    // Tail-call to is_problem_present via GOT/IAT indirection
    return is_problem_present(/* forwarded args */);
}

