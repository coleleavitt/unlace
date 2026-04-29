// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2E0
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2E0 jmp     cs:off_CA158
//
// Resolved target: __cxa_allocate_exception
// Target address:  0xD0A88
// GOT/IAT slot:    0xCA158
// Slot symbol:     off_CA158
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

