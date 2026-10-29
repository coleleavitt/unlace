// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACEE0
// Name:            .reg_finder_invalidate_xrefs_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACEE0 jmp     cs:off_2C7BF58
//
// Resolved target: reg_finder_invalidate_xrefs_cache
// Target address:  0x4F5380
// GOT/IAT slot:    0x2C7BF58
// Slot symbol:     off_2C7BF58
// Target type:     <no type info>
// ============================================================

void .reg_finder_invalidate_xrefs_cache(/* see target signature */)
{
    // Tail-call to reg_finder_invalidate_xrefs_cache via GOT/IAT indirection
    return reg_finder_invalidate_xrefs_cache(/* forwarded args */);
}

