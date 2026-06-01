// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8490
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8490 jmp     cs:off_2C79A30
//
// Resolved target: apply_tinfo
// Target address:  0x6194E0
// GOT/IAT slot:    0x2C79A30
// Slot symbol:     off_2C79A30
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

