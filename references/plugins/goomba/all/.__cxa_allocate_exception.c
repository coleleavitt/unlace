// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42D0
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42D0 jmp     cs:off_4E150
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x4F758
// GOT/IAT slot:    0x4E150
// Slot symbol:     off_4E150
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

