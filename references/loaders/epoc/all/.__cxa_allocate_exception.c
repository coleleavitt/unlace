// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_13090
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x13778
// GOT/IAT slot:    0x13090
// Slot symbol:     off_13090
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

