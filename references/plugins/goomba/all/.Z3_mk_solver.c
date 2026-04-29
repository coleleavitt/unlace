// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x48D0
// Name:            .Z3_mk_solver
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x48D0 jmp     cs:off_4E450
//
// Resolved target: Z3_mk_solver
// Target address:  0x4FA78
// GOT/IAT slot:    0x4E450
// Slot symbol:     off_4E450
// Target type:     <no type info>
// ============================================================

void .Z3_mk_solver(/* see target signature */)
{
    // Tail-call to Z3_mk_solver via GOT/IAT indirection
    return Z3_mk_solver(/* forwarded args */);
}

