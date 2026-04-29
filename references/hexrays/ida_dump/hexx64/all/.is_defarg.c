// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEA0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEA0 jmp     cs:off_4ED738
//
// Resolved target: is_defarg
// Target address:  0x4F1A48
// GOT/IAT slot:    0x4ED738
// Slot symbol:     off_4ED738
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

