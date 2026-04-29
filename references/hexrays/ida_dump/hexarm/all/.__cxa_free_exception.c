// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC80
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC80 jmp     cs:off_4E9628
//
// Resolved target: __cxa_free_exception
// Target address:  0x4EC040
// GOT/IAT slot:    0x4E9628
// Slot symbol:     off_4E9628
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

