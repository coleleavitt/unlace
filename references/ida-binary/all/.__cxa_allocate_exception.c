// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1182D0
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1182D0 jmp     cs:__cxa_allocate_exception_ptr
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x8D79D8
// GOT/IAT slot:    0x8A2E08
// Slot symbol:     __cxa_allocate_exception_ptr
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

