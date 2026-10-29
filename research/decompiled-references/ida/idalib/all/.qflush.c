// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD180
// Name:            .qflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD180 jmp     cs:off_2C7C0A8
//
// Resolved target: qflush
// Target address:  0x83F790
// GOT/IAT slot:    0x2C7C0A8
// Slot symbol:     off_2C7C0A8
// Target type:     __int64 __fastcall(FILE *stream)
// ============================================================

/* see target sig */ .qflush(/* see target signature */)
{
    // Tail-call to qflush via GOT/IAT indirection
    return qflush(/* forwarded args */);
}

