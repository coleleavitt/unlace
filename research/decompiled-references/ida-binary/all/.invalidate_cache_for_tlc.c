// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1135C0
// Name:            .invalidate_cache_for_tlc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1135C0 jmp     cs:invalidate_cache_for_tlc_ptr
//
// Resolved target: invalidate_cache_for_tlc
// Target address:  0x8D48E0
// GOT/IAT slot:    0x8A0780
// Slot symbol:     invalidate_cache_for_tlc_ptr
// Target type:     <no type info>
// ============================================================

void .invalidate_cache_for_tlc(/* see target signature */)
{
    // Tail-call to invalidate_cache_for_tlc via GOT/IAT indirection
    return invalidate_cache_for_tlc(/* forwarded args */);
}

