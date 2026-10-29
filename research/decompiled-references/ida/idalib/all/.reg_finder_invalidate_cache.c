// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD30
// Name:            .reg_finder_invalidate_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD30 jmp     cs:off_2C7BE80
//
// Resolved target: reg_finder_invalidate_cache
// Target address:  0x5009E0
// GOT/IAT slot:    0x2C7BE80
// Slot symbol:     off_2C7BE80
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .reg_finder_invalidate_cache(/* see target signature */)
{
    // Tail-call to reg_finder_invalidate_cache via GOT/IAT indirection
    return reg_finder_invalidate_cache(/* forwarded args */);
}

