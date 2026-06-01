// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5009E0
// Name:            reg_finder_invalidate_cache
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5009E0 jmp     reg_finder_invalidate_cache_0
//
// Resolved target: reg_finder_invalidate_cache_0
// Target address:  0x5006A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, unsigned __int64, unsigned __int64, unsigned int)
// ============================================================

/* see target sig */ reg_finder_invalidate_cache(/* see target signature */)
{
    // Tail-call to reg_finder_invalidate_cache_0 via direct jump indirection
    return reg_finder_invalidate_cache_0(/* forwarded args */);
}

