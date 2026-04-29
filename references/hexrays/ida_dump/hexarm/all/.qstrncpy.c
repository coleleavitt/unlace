// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EFD0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EFD0 jmp     cs:off_4E9FD0
//
// Resolved target: qstrncpy
// Target address:  0x4ECA20
// GOT/IAT slot:    0x4E9FD0
// Slot symbol:     off_4E9FD0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

