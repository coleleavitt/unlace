// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114030
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114030 jmp     cs:is_defarg_ptr
//
// Resolved target: is_defarg
// Target address:  0x8D4F90
// GOT/IAT slot:    0x8A0CB8
// Slot symbol:     is_defarg_ptr
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

