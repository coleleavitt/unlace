// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112EE0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112EE0 jmp     cs:strstr_ptr
//
// Resolved target: strstr
// Target address:  0x8D4468
// GOT/IAT slot:    0x8A0410
// Slot symbol:     strstr_ptr
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

