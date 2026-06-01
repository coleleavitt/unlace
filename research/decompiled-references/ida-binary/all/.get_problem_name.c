// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A530
// Name:            .get_problem_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A530 jmp     cs:get_problem_name_ptr
//
// Resolved target: get_problem_name
// Target address:  0x8D8F58
// GOT/IAT slot:    0x8A3F38
// Slot symbol:     get_problem_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_problem_name(/* see target signature */)
{
    // Tail-call to get_problem_name via GOT/IAT indirection
    return get_problem_name(/* forwarded args */);
}

