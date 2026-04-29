// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x53C0
// Name:            .remember_problem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x53C0 jmp     cs:off_1A1C8
//
// Resolved target: remember_problem
// Target address:  0x1A550
// GOT/IAT slot:    0x1A1C8
// Slot symbol:     off_1A1C8
// Target type:     <no type info>
// ============================================================

void .remember_problem(/* see target signature */)
{
    // Tail-call to remember_problem via GOT/IAT indirection
    return remember_problem(/* forwarded args */);
}

