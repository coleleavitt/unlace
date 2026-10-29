// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7910
// Name:            .qvsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7910 jmp     cs:off_2C79470
//
// Resolved target: qvsscanf
// Target address:  0x84E360
// GOT/IAT slot:    0x2C79470
// Slot symbol:     off_2C79470
// Target type:     __int64 __fastcall(char *s, char *, __gnuc_va_list arg)
// ============================================================

/* see target sig */ .qvsscanf(/* see target signature */)
{
    // Tail-call to qvsscanf via GOT/IAT indirection
    return qvsscanf(/* forwarded args */);
}

