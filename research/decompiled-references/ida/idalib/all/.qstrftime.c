// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7BA0
// Name:            .qstrftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7BA0 jmp     cs:off_2C795B8
//
// Resolved target: qstrftime
// Target address:  0x8413A0
// GOT/IAT slot:    0x2C795B8
// Slot symbol:     off_2C795B8
// Target type:     __int64 __fastcall(char *s, size_t maxsize, char *format)
// ============================================================

/* see target sig */ .qstrftime(/* see target signature */)
{
    // Tail-call to qstrftime via GOT/IAT indirection
    return qstrftime(/* forwarded args */);
}

