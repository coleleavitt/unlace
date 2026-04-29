// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29E40
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29E40 jmp     cs:off_4B9708
//
// Resolved target: is_defarg
// Target address:  0x4BC100
// GOT/IAT slot:    0x4B9708
// Slot symbol:     off_4B9708
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

