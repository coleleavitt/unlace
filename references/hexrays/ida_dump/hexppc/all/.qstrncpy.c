// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF90
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF90 jmp     cs:off_4DAFB0
//
// Resolved target: qstrncpy
// Target address:  0x4DD9E0
// GOT/IAT slot:    0x4DAFB0
// Slot symbol:     off_4DAFB0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

