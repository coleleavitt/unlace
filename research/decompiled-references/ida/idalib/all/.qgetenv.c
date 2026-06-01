// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC40
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC40 jmp     cs:off_2C7B608
//
// Resolved target: qgetenv
// Target address:  0x843620
// GOT/IAT slot:    0x2C7B608
// Slot symbol:     off_2C7B608
// Target type:     __int64 __fastcall(char *name)
// ============================================================

/* see target sig */ .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}

