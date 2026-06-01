// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D70
// Name:            .get_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D70 jmp     cs:off_2C79EA0
//
// Resolved target: get_problem
// Target address:  0x4F2DD0
// GOT/IAT slot:    0x2C79EA0
// Slot symbol:     off_2C79EA0
// Target type:     <no type info>
// ============================================================

void .get_problem(/* see target signature */)
{
    // Tail-call to get_problem via GOT/IAT indirection
    return get_problem(/* forwarded args */);
}

