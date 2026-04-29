// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1E0
// Name:            .Clp_primalColumnSolution
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1E0 jmp     cs:off_4EE0D8
//
// Resolved target: Clp_primalColumnSolution
// Target address:  0x4F2428
// GOT/IAT slot:    0x4EE0D8
// Slot symbol:     off_4EE0D8
// Target type:     <no type info>
// ============================================================

void .Clp_primalColumnSolution(/* see target signature */)
{
    // Tail-call to Clp_primalColumnSolution via GOT/IAT indirection
    return Clp_primalColumnSolution(/* forwarded args */);
}

