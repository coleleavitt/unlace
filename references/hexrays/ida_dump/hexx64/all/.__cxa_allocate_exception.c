// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7C0
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7C0 jmp     cs:off_4ED3C8
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x4F16C0
// GOT/IAT slot:    0x4ED3C8
// Slot symbol:     off_4ED3C8
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

