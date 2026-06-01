// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A670
// Name:            .malloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A670 jmp     cs:malloc_ptr
//
// Resolved target: malloc
// Target address:  0x8D9028
// GOT/IAT slot:    0x8A3FD8
// Slot symbol:     malloc_ptr
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

