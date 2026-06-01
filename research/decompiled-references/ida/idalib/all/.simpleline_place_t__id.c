// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8090
// Name:            .simpleline_place_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8090 jmp     cs:off_2C79830
//
// Resolved target: simpleline_place_t__id
// Target address:  0x52AE00
// GOT/IAT slot:    0x2C79830
// Slot symbol:     off_2C79830
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ .simpleline_place_t__id(/* see target signature */)
{
    // Tail-call to simpleline_place_t__id via GOT/IAT indirection
    return simpleline_place_t__id(/* forwarded args */);
}

