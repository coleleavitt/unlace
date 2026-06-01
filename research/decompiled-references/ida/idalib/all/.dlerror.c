// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA9D0
// Name:            .dlerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA9D0 jmp     cs:off_2C7ACD0
//
// Resolved target: dlerror
// Target address:  0x2D119D8
// GOT/IAT slot:    0x2C7ACD0
// Slot symbol:     off_2C7ACD0
// Target type:     char *(void)
// ============================================================

/* see target sig */ .dlerror(/* see target signature */)
{
    // Tail-call to dlerror via GOT/IAT indirection
    return dlerror(/* forwarded args */);
}

