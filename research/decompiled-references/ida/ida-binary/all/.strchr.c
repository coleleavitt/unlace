// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1188D0
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1188D0 jmp     cs:strchr_ptr
//
// Resolved target: strchr
// Target address:  0x8D7D68
// GOT/IAT slot:    0x8A3108
// Slot symbol:     strchr_ptr
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

