// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D450
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D450 jmp     cs:off_B3210
//
// Resolved target: __cxa_free_exception
// Target address:  0xB39B0
// GOT/IAT slot:    0xB3210
// Slot symbol:     off_B3210
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

