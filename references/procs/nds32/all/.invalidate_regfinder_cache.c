// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83A0
// Name:            .invalidate_regfinder_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83A0 jmp     cs:off_2A1B8
//
// Resolved target: invalidate_regfinder_cache
// Target address:  0x2A728
// GOT/IAT slot:    0x2A1B8
// Slot symbol:     off_2A1B8
// Target type:     <no type info>
// ============================================================

void .invalidate_regfinder_cache(/* see target signature */)
{
    // Tail-call to invalidate_regfinder_cache via GOT/IAT indirection
    return invalidate_regfinder_cache(/* forwarded args */);
}

