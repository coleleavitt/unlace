// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC8C0
// Name:            .strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC8C0 jmp     cs:off_2C7BC48
//
// Resolved target: strerror
// Target address:  0x2D11E18
// GOT/IAT slot:    0x2C7BC48
// Slot symbol:     off_2C7BC48
// Target type:     char *(int errnum)
// ============================================================

/* see target sig */ .strerror(/* see target signature */)
{
    // Tail-call to strerror via GOT/IAT indirection
    return strerror(/* forwarded args */);
}

