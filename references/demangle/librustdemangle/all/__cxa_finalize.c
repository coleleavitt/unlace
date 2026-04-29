// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            __cxa_finalize
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x10A0 endbr64
//   0x10A4 bnd jmp cs:__cxa_finalize_ptr
//
// Resolved target: __imp___cxa_finalize
// Target address:  0x6098
// GOT/IAT slot:    0x5FF8
// Slot symbol:     __cxa_finalize_ptr
// Target type:     int(void *)
// ============================================================

/* see target sig */ __cxa_finalize(/* see target signature */)
{
    // Tail-call to __imp___cxa_finalize via GOT/IAT indirection
    return __imp___cxa_finalize(/* forwarded args */);
}

