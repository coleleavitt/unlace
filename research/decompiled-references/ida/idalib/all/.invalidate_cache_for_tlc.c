// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A88D0
// Name:            .invalidate_cache_for_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A88D0 jmp     cs:off_2C79C50
//
// Resolved target: invalidate_cache_for_tlc
// Target address:  0x55C700
// GOT/IAT slot:    0x2C79C50
// Slot symbol:     off_2C79C50
// Target type:     <no type info>
// ============================================================

void .invalidate_cache_for_tlc(/* see target signature */)
{
    // Tail-call to invalidate_cache_for_tlc via GOT/IAT indirection
    return invalidate_cache_for_tlc(/* forwarded args */);
}

