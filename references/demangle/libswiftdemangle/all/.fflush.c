// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA730
// Name:            .fflush
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA730 jmp     cs:off_48398
//
// Resolved target: fflush
// Target address:  0x48620
// GOT/IAT slot:    0x48398
// Slot symbol:     off_48398
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fflush(/* see target signature */)
{
    // Tail-call to fflush via GOT/IAT indirection
    return fflush(/* forwarded args */);
}

