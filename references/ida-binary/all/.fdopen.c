// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111450
// Name:            .fdopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111450 jmp     cs:fdopen_ptr
//
// Resolved target: fdopen
// Target address:  0x8D3348
// GOT/IAT slot:    0x89F6C8
// Slot symbol:     fdopen_ptr
// Target type:     FILE *(int fd, const char *modes)
// ============================================================

/* see target sig */ .fdopen(/* see target signature */)
{
    // Tail-call to fdopen via GOT/IAT indirection
    return fdopen(/* forwarded args */);
}

