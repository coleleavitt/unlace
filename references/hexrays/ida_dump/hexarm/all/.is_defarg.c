// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE60
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE60 jmp     cs:off_4E9718
//
// Resolved target: is_defarg
// Target address:  0x4EC130
// GOT/IAT slot:    0x4E9718
// Slot symbol:     off_4E9718
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

