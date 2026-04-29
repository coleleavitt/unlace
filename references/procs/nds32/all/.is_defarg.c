// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8350
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8350 jmp     cs:off_2A190
//
// Resolved target: is_defarg
// Target address:  0x2A700
// GOT/IAT slot:    0x2A190
// Slot symbol:     off_2A190
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

