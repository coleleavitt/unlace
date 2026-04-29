// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41A0
// Name:            .Z3_solver_dec_ref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41A0 jmp     cs:off_4E0B8
//
// Resolved target: Z3_solver_dec_ref
// Target address:  0x4F6C0
// GOT/IAT slot:    0x4E0B8
// Slot symbol:     off_4E0B8
// Target type:     <no type info>
// ============================================================

void .Z3_solver_dec_ref(/* see target signature */)
{
    // Tail-call to Z3_solver_dec_ref via GOT/IAT indirection
    return Z3_solver_dec_ref(/* forwarded args */);
}

