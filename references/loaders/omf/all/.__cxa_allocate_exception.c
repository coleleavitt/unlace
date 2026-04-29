// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31B0
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31B0 jmp     cs:off_140C0
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x146A8
// GOT/IAT slot:    0x140C0
// Slot symbol:     off_140C0
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

