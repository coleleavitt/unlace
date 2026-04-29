// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4D0
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4D0 jmp     cs:off_48268
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x48538
// GOT/IAT slot:    0x48268
// Slot symbol:     off_48268
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

