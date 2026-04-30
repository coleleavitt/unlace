// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111AE0
// Name:            .__ctype_b_loc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111AE0 jmp     cs:__ctype_b_loc_ptr
//
// Resolved target: __ctype_b_loc
// Target address:  0x8D3788
// GOT/IAT slot:    0x89FA10
// Slot symbol:     __ctype_b_loc_ptr
// Target type:     const unsigned __int16 **(void)
// ============================================================

/* see target sig */ .__ctype_b_loc(/* see target signature */)
{
    // Tail-call to __ctype_b_loc via GOT/IAT indirection
    return __ctype_b_loc(/* forwarded args */);
}

