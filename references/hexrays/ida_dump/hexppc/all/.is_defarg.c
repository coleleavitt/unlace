// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE40
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE40 jmp     cs:off_4DA708
//
// Resolved target: is_defarg
// Target address:  0x4DD100
// GOT/IAT slot:    0x4DA708
// Slot symbol:     off_4DA708
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

