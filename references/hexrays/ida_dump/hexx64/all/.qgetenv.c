// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B970
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B970 jmp     cs:off_4ED4A0
//
// Resolved target: qgetenv
// Target address:  0x4F17A0
// GOT/IAT slot:    0x4ED4A0
// Slot symbol:     off_4ED4A0
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

