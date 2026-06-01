// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE70
// Name:            .invalidate_visea_cache
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE70 jmp     cs:off_2C7BF20
//
// Resolved target: invalidate_visea_cache
// Target address:  0x3C7CB0
// GOT/IAT slot:    0x2C7BF20
// Slot symbol:     off_2C7BF20
// Target type:     <no type info>
// ============================================================

void .invalidate_visea_cache(/* see target signature */)
{
    // Tail-call to invalidate_visea_cache via GOT/IAT indirection
    return invalidate_visea_cache(/* forwarded args */);
}

