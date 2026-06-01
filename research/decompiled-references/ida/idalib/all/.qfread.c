// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7EA0
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7EA0 jmp     cs:off_2C79738
//
// Resolved target: qfread
// Target address:  0x83F010
// GOT/IAT slot:    0x2C79738
// Slot symbol:     off_2C79738
// Target type:     __int64 __fastcall(FILE *stream, void *ptr)
// ============================================================

/* see target sig */ .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}

