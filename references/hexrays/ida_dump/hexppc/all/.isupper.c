// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD0
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD0 jmp     cs:off_4DA650
//
// Resolved target: isupper
// Target address:  0x4DD048
// GOT/IAT slot:    0x4DA650
// Slot symbol:     off_4DA650
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

