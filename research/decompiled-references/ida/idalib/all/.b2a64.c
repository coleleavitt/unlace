// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC340
// Name:            .b2a64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC340 jmp     cs:off_2C7B988
//
// Resolved target: b2a64
// Target address:  0x588630
// GOT/IAT slot:    0x2C7B988
// Slot symbol:     off_2C7B988
// Target type:     __int64 __fastcall(void *s)
// ============================================================

/* see target sig */ .b2a64(/* see target signature */)
{
    // Tail-call to b2a64 via GOT/IAT indirection
    return b2a64(/* forwarded args */);
}

