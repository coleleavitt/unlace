// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A030
// Name:            .strcmp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A030 jmp     cs:strcmp_ptr
//
// Resolved target: strcmp
// Target address:  0x8D8C30
// GOT/IAT slot:    0x8A3CB8
// Slot symbol:     strcmp_ptr
// Target type:     int(const char *s1, const char *s2)
// ============================================================

/* see target sig */ .strcmp(/* see target signature */)
{
    // Tail-call to strcmp via GOT/IAT indirection
    return strcmp(/* forwarded args */);
}

