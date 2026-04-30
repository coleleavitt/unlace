// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F20
// Name:            .get_problem_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F20 jmp     cs:get_problem_desc_ptr
//
// Resolved target: get_problem_desc
// Target address:  0x8D8138
// GOT/IAT slot:    0x8A3430
// Slot symbol:     get_problem_desc_ptr
// Target type:     <no type info>
// ============================================================

void .get_problem_desc(/* see target signature */)
{
    // Tail-call to get_problem_desc via GOT/IAT indirection
    return get_problem_desc(/* forwarded args */);
}

