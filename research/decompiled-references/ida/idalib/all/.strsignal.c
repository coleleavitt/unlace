// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE70
// Name:            .strsignal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE70 jmp     cs:off_2C7B720
//
// Resolved target: strsignal
// Target address:  0x2D11CD0
// GOT/IAT slot:    0x2C7B720
// Slot symbol:     off_2C7B720
// Target type:     char *(int sig)
// ============================================================

/* see target sig */ .strsignal(/* see target signature */)
{
    // Tail-call to strsignal via GOT/IAT indirection
    return strsignal(/* forwarded args */);
}

