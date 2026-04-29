// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6B0
// Name:            .Clp_initialPrimalSolve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6B0 jmp     cs:off_4ED340
//
// Resolved target: Clp_initialPrimalSolve
// Target address:  0x4F1638
// GOT/IAT slot:    0x4ED340
// Slot symbol:     off_4ED340
// Target type:     <no type info>
// ============================================================

void .Clp_initialPrimalSolve(/* see target signature */)
{
    // Tail-call to Clp_initialPrimalSolve via GOT/IAT indirection
    return Clp_initialPrimalSolve(/* forwarded args */);
}

