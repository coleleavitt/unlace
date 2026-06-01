// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A72A0
// Name:            .fdopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A72A0 jmp     cs:off_2C79138
//
// Resolved target: fdopen
// Target address:  0x2D11378
// GOT/IAT slot:    0x2C79138
// Slot symbol:     off_2C79138
// Target type:     FILE *(int fd, const char *modes)
// ============================================================

/* see target sig */ .fdopen(/* see target signature */)
{
    // Tail-call to fdopen via GOT/IAT indirection
    return fdopen(/* forwarded args */);
}

