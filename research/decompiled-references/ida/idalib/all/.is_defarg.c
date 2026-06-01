// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8FD0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8FD0 jmp     cs:off_2C79FD0
//
// Resolved target: is_defarg
// Target address:  0x3C4750
// GOT/IAT slot:    0x2C79FD0
// Slot symbol:     off_2C79FD0
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

