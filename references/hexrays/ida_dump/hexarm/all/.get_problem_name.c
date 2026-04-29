// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DBE0
// Name:            .get_problem_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DBE0 jmp     cs:off_4E95D8
//
// Resolved target: get_problem_name
// Target address:  0x4EBFE8
// GOT/IAT slot:    0x4E95D8
// Slot symbol:     off_4E95D8
// Target type:     <no type info>
// ============================================================

void .get_problem_name(/* see target signature */)
{
    // Tail-call to get_problem_name via GOT/IAT indirection
    return get_problem_name(/* forwarded args */);
}

