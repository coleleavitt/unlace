// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E720
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E720 jmp     cs:off_4E9B78
//
// Resolved target: qstrftime64
// Target address:  0x4EC5A0
// GOT/IAT slot:    0x4E9B78
// Slot symbol:     off_4E9B78
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

