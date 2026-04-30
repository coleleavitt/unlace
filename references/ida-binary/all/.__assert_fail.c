// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111BD0
// Name:            .__assert_fail
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111BD0 jmp     cs:__assert_fail_ptr
//
// Resolved target: __assert_fail
// Target address:  0x8D3828
// GOT/IAT slot:    0x89FA88
// Slot symbol:     __assert_fail_ptr
// Target type:     void __noreturn(const char *assertion, const char *file, unsigned int line, const char *function)
// ============================================================

/* see target sig */ .__assert_fail(/* see target signature */)
{
    // Tail-call to __assert_fail via GOT/IAT indirection
    return __assert_fail(/* forwarded args */);
}

