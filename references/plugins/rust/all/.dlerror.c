// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .dlerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_A078
//
// Resolved target: dlerror
// Target address:  0xB348
// GOT/IAT slot:    0xA078
// Slot symbol:     off_A078
// Target type:     char *(void)
// ============================================================

/* see target sig */ .dlerror(/* see target signature */)
{
    // Tail-call to dlerror via GOT/IAT indirection
    return dlerror(/* forwarded args */);
}

