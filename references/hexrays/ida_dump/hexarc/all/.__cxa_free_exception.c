// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29C60
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29C60 jmp     cs:off_4B9618
//
// Resolved target: __cxa_free_exception
// Target address:  0x4BC010
// GOT/IAT slot:    0x4B9618
// Slot symbol:     off_4B9618
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

