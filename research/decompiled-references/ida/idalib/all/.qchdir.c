// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAFD0
// Name:            .qchdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAFD0 jmp     cs:off_2C7AFD0
//
// Resolved target: qchdir
// Target address:  0x83E3D0
// GOT/IAT slot:    0x2C7AFD0
// Slot symbol:     off_2C7AFD0
// Target type:     int(const char *path)
// ============================================================

/* see target sig */ .qchdir(/* see target signature */)
{
    // Tail-call to qchdir via GOT/IAT indirection
    return qchdir(/* forwarded args */);
}

