// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD510
// Name:            .qsetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD510 jmp     cs:off_2C7C270
//
// Resolved target: qsetenv
// Target address:  0x843580
// GOT/IAT slot:    0x2C7C270
// Slot symbol:     off_2C7C270
// Target type:     __int64 __fastcall(char *name, char *value)
// ============================================================

/* see target sig */ .qsetenv(/* see target signature */)
{
    // Tail-call to qsetenv via GOT/IAT indirection
    return qsetenv(/* forwarded args */);
}

