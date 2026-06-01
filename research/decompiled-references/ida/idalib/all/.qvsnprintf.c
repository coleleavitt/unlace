// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A70E0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A70E0 jmp     cs:off_2C79058
//
// Resolved target: qvsnprintf
// Target address:  0x84E1B0
// GOT/IAT slot:    0x2C79058
// Slot symbol:     off_2C79058
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

