// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A30
// Name:            .realpath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A30 jmp     cs:off_2C79D00
//
// Resolved target: realpath
// Target address:  0x2D11648
// GOT/IAT slot:    0x2C79D00
// Slot symbol:     off_2C79D00
// Target type:     char *(const char *name, char *resolved)
// ============================================================

/* see target sig */ .realpath(/* see target signature */)
{
    // Tail-call to realpath via GOT/IAT indirection
    return realpath(/* forwarded args */);
}

