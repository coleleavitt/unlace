// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F00
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F00 jmp     cs:off_2C79768
//
// Resolved target: remember_problem
// Target address:  0x4F2E40
// GOT/IAT slot:    0x2C79768
// Slot symbol:     off_2C79768
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}

