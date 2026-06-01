// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA8B0
// Name:            .fwritebytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA8B0 jmp     cs:off_2C7AC40
//
// Resolved target: fwritebytes
// Target address:  0x83F660
// GOT/IAT slot:    0x2C7AC40
// Slot symbol:     off_2C7AC40
// Target type:     __int64 __fastcall(FILE *s)
// ============================================================

/* see target sig */ .fwritebytes(/* see target signature */)
{
    // Tail-call to fwritebytes via GOT/IAT indirection
    return fwritebytes(/* forwarded args */);
}

