// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49A0
// Name:            .Z3_solver_assert
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x49A0 jmp     cs:off_4E4B8
//
// Resolved target: Z3_solver_assert
// Target address:  0x4FAF0
// GOT/IAT slot:    0x4E4B8
// Slot symbol:     off_4E4B8
// Target type:     <no type info>
// ============================================================

void .Z3_solver_assert(/* see target signature */)
{
    // Tail-call to Z3_solver_assert via GOT/IAT indirection
    return Z3_solver_assert(/* forwarded args */);
}

