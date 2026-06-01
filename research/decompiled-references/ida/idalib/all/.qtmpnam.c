// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB790
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB790 jmp     cs:off_2C7B3B0
//
// Resolved target: qtmpnam
// Target address:  0x83E190
// GOT/IAT slot:    0x2C7B3B0
// Slot symbol:     off_2C7B3B0
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

