// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D0E0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D0E0 jmp     cs:off_4EE058
//
// Resolved target: qstrncpy
// Target address:  0x4F23A8
// GOT/IAT slot:    0x4EE058
// Slot symbol:     off_4EE058
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

