// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A000
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A000 jmp     cs:strtoull_ptr
//
// Resolved target: strtoull
// Target address:  0x8D8C08
// GOT/IAT slot:    0x8A3CA0
// Slot symbol:     strtoull_ptr
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

