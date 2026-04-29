// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_8140
//
// Resolved target: qstrncpy
// Target address:  0x8330
// GOT/IAT slot:    0x8140
// Slot symbol:     off_8140
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

