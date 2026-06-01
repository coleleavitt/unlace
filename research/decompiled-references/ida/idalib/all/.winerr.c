// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A83B0
// Name:            .winerr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A83B0 jmp     cs:off_2C799C0
//
// Resolved target: winerr
// Target address:  0x841830
// GOT/IAT slot:    0x2C799C0
// Slot symbol:     off_2C799C0
// Target type:     __int64 __fastcall(int errnum)
// ============================================================

/* see target sig */ .winerr(/* see target signature */)
{
    // Tail-call to winerr via GOT/IAT indirection
    return winerr(/* forwarded args */);
}

