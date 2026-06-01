// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7920
// Name:            .qlocaltime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7920 jmp     cs:off_2C79478
//
// Resolved target: qlocaltime
// Target address:  0x8411D0
// GOT/IAT slot:    0x2C79478
// Slot symbol:     off_2C79478
// Target type:     __int64 __fastcall(struct tm *tp)
// ============================================================

/* see target sig */ .qlocaltime(/* see target signature */)
{
    // Tail-call to qlocaltime via GOT/IAT indirection
    return qlocaltime(/* forwarded args */);
}

