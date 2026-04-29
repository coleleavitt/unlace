// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4F0
// Name:            .invalidate_regfinder_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4F0 jmp     cs:off_35260
//
// Resolved target: invalidate_regfinder_cache
// Target address:  0x358B0
// GOT/IAT slot:    0x35260
// Slot symbol:     off_35260
// Target type:     <no type info>
// ============================================================

void .invalidate_regfinder_cache(/* see target signature */)
{
    // Tail-call to invalidate_regfinder_cache via GOT/IAT indirection
    return invalidate_regfinder_cache(/* forwarded args */);
}

