// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8250
// Name:            .forget_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8250 jmp     cs:off_2C79910
//
// Resolved target: forget_problem
// Target address:  0x4F31E0
// GOT/IAT slot:    0x2C79910
// Slot symbol:     off_2C79910
// Target type:     <no type info>
// ============================================================

void .forget_problem(/* see target signature */)
{
    // Tail-call to forget_problem via GOT/IAT indirection
    return forget_problem(/* forwarded args */);
}

