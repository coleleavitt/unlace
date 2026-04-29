// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC10
// Name:            .get_problem_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC10 jmp     cs:off_4ED5F0
//
// Resolved target: get_problem_name
// Target address:  0x4F18F8
// GOT/IAT slot:    0x4ED5F0
// Slot symbol:     off_4ED5F0
// Target type:     <no type info>
// ============================================================

void .get_problem_name(/* see target signature */)
{
    // Tail-call to get_problem_name via GOT/IAT indirection
    return get_problem_name(/* forwarded args */);
}

