// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_50A8
//
// Resolved target: qstrncpy
// Target address:  0x53F8
// GOT/IAT slot:    0x50A8
// Slot symbol:     off_50A8
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

