// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_8098
//
// Resolved target: qgetenv
// Target address:  0x82F8
// GOT/IAT slot:    0x8098
// Slot symbol:     off_8098
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

