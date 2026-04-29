// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C160
// Name:            .Clp_objective
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C160 jmp     cs:off_4ED898
//
// Resolved target: Clp_objective
// Target address:  0x4F1BB8
// GOT/IAT slot:    0x4ED898
// Slot symbol:     off_4ED898
// Target type:     <no type info>
// ============================================================

void .Clp_objective(/* see target signature */)
{
    // Tail-call to Clp_objective via GOT/IAT indirection
    return Clp_objective(/* forwarded args */);
}

