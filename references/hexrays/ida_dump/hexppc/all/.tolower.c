// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B930
// Name:            .tolower
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B930 jmp     cs:off_4DAC80
//
// Resolved target: tolower
// Target address:  0x4DD698
// GOT/IAT slot:    0x4DAC80
// Slot symbol:     off_4DAC80
// Target type:     int(int c)
// ============================================================

/* see target sig */ .tolower(/* see target signature */)
{
    // Tail-call to tolower via GOT/IAT indirection
    return tolower(/* forwarded args */);
}

