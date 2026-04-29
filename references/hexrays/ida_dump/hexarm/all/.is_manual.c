// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF60
// Name:            .is_manual
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF60 jmp     cs:off_4E9F98
//
// Resolved target: is_manual
// Target address:  0x4EC9E8
// GOT/IAT slot:    0x4E9F98
// Slot symbol:     off_4E9F98
// Target type:     <no type info>
// ============================================================

void .is_manual(/* see target signature */)
{
    // Tail-call to is_manual via GOT/IAT indirection
    return is_manual(/* forwarded args */);
}

