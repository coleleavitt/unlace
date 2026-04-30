// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A840
// Name:            .strrchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A840 jmp     cs:strrchr_ptr
//
// Resolved target: strrchr
// Target address:  0x8D9180
// GOT/IAT slot:    0x8A40C0
// Slot symbol:     strrchr_ptr
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strrchr(/* see target signature */)
{
    // Tail-call to strrchr via GOT/IAT indirection
    return strrchr(/* forwarded args */);
}

