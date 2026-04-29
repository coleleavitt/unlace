// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_81D0
//
// Resolved target: qstrncpy
// Target address:  0x8448
// GOT/IAT slot:    0x81D0
// Slot symbol:     off_81D0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

