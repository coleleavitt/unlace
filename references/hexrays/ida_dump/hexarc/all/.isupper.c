// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29CD0
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29CD0 jmp     cs:off_4B9650
//
// Resolved target: isupper
// Target address:  0x4BC048
// GOT/IAT slot:    0x4B9650
// Slot symbol:     off_4B9650
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

