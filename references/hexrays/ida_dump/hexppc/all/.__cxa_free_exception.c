// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC60
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC60 jmp     cs:off_4DA618
//
// Resolved target: __cxa_free_exception
// Target address:  0x4DD010
// GOT/IAT slot:    0x4DA618
// Slot symbol:     off_4DA618
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

