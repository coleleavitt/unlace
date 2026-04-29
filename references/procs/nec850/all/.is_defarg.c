// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9410
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9410 jmp     cs:off_2E1F0
//
// Resolved target: is_defarg
// Target address:  0x2E860
// GOT/IAT slot:    0x2E1F0
// Slot symbol:     off_2E1F0
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

