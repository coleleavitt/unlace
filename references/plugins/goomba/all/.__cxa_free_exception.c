// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43F0
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43F0 jmp     cs:off_4E1E0
//
// Resolved target: __cxa_free_exception
// Target address:  0x4F7F0
// GOT/IAT slot:    0x4E1E0
// Slot symbol:     off_4E1E0
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

