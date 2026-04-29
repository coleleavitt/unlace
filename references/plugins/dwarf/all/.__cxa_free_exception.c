// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA460
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA460 jmp     cs:off_CA218
//
// Resolved target: __cxa_free_exception
// Target address:  0xD0B50
// GOT/IAT slot:    0xCA218
// Slot symbol:     off_CA218
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

