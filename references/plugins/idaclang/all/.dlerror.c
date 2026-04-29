// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3190
// Name:            .dlerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3190 jmp     cs:off_290B0
//
// Resolved target: dlerror
// Target address:  0x29460
// GOT/IAT slot:    0x290B0
// Slot symbol:     off_290B0
// Target type:     char *(void)
// ============================================================

/* see target sig */ .dlerror(/* see target signature */)
{
    // Tail-call to dlerror via GOT/IAT indirection
    return dlerror(/* forwarded args */);
}

