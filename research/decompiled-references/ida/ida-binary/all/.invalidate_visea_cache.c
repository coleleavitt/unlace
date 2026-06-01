// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A760
// Name:            .invalidate_visea_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A760 jmp     cs:invalidate_visea_cache_ptr
//
// Resolved target: invalidate_visea_cache
// Target address:  0x8D90E8
// GOT/IAT slot:    0x8A4050
// Slot symbol:     invalidate_visea_cache_ptr
// Target type:     <no type info>
// ============================================================

void .invalidate_visea_cache(/* see target signature */)
{
    // Tail-call to invalidate_visea_cache via GOT/IAT indirection
    return invalidate_visea_cache(/* forwarded args */);
}

