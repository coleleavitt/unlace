// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3190
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3190 jmp     cs:off_130B0
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x13428
// GOT/IAT slot:    0x130B0
// Slot symbol:     off_130B0
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

