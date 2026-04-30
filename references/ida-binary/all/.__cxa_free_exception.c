// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A4E0
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A4E0 jmp     cs:__cxa_free_exception_ptr
//
// Resolved target: __cxa_free_exception
// Target address:  0x8D8F28
// GOT/IAT slot:    0x8A3F10
// Slot symbol:     __cxa_free_exception_ptr
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

