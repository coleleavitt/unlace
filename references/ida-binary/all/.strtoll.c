// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114610
// Name:            .strtoll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114610 jmp     cs:strtoll_ptr
//
// Resolved target: strtoll
// Target address:  0x8D5348
// GOT/IAT slot:    0x8A0FA8
// Slot symbol:     strtoll_ptr
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoll(/* see target signature */)
{
    // Tail-call to strtoll via GOT/IAT indirection
    return strtoll(/* forwarded args */);
}

