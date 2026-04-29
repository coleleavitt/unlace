// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D270
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D270 jmp     cs:off_B3120
//
// Resolved target: __cxa_allocate_exception
// Target address:  0xB38A8
// GOT/IAT slot:    0xB3120
// Slot symbol:     off_B3120
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

