// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9480
// Name:            .invalidate_regfinder_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9480 jmp     cs:off_2E228
//
// Resolved target: invalidate_regfinder_cache
// Target address:  0x2E898
// GOT/IAT slot:    0x2E228
// Slot symbol:     off_2E228
// Target type:     <no type info>
// ============================================================

void .invalidate_regfinder_cache(/* see target signature */)
{
    // Tail-call to invalidate_regfinder_cache via GOT/IAT indirection
    return invalidate_regfinder_cache(/* forwarded args */);
}

