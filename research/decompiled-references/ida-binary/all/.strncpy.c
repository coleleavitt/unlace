// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111B20
// Name:            .strncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111B20 jmp     cs:strncpy_ptr
//
// Resolved target: strncpy
// Target address:  0x8D37B0
// GOT/IAT slot:    0x89FA30
// Slot symbol:     strncpy_ptr
// Target type:     char *(char *dest, const char *src, size_t n)
// ============================================================

/* see target sig */ .strncpy(/* see target signature */)
{
    // Tail-call to strncpy via GOT/IAT indirection
    return strncpy(/* forwarded args */);
}

