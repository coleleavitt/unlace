// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F50
// Name:            .strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F50 jmp     cs:strerror_ptr
//
// Resolved target: strerror
// Target address:  0x8D8B98
// GOT/IAT slot:    0x8A3C48
// Slot symbol:     strerror_ptr
// Target type:     char *(int errnum)
// ============================================================

/* see target sig */ .strerror(/* see target signature */)
{
    // Tail-call to strerror via GOT/IAT indirection
    return strerror(/* forwarded args */);
}

