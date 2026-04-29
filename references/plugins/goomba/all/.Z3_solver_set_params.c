// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4160
// Name:            .Z3_solver_set_params
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4160 jmp     cs:off_4E098
//
// Resolved target: Z3_solver_set_params
// Target address:  0x4F6A0
// GOT/IAT slot:    0x4E098
// Slot symbol:     off_4E098
// Target type:     <no type info>
// ============================================================

void .Z3_solver_set_params(/* see target signature */)
{
    // Tail-call to Z3_solver_set_params via GOT/IAT indirection
    return Z3_solver_set_params(/* forwarded args */);
}

