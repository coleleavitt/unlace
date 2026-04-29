// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .__cxa_allocate_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_8078
//
// Resolved target: __cxa_allocate_exception
// Target address:  0x8238
// GOT/IAT slot:    0x8078
// Slot symbol:     off_8078
// Target type:     void *(size_t thrown_size)
// ============================================================

/* see target sig */ .__cxa_allocate_exception(/* see target signature */)
{
    // Tail-call to __cxa_allocate_exception via GOT/IAT indirection
    return __cxa_allocate_exception(/* forwarded args */);
}

