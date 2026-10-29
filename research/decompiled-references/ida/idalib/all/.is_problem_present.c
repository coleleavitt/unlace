// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9460
// Name:            .is_problem_present
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9460 jmp     cs:off_2C7A218
//
// Resolved target: is_problem_present
// Target address:  0x4F2D90
// GOT/IAT slot:    0x2C7A218
// Slot symbol:     off_2C7A218
// Target type:     <no type info>
// ============================================================

void .is_problem_present(/* see target signature */)
{
    // Tail-call to is_problem_present via GOT/IAT indirection
    return is_problem_present(/* forwarded args */);
}

