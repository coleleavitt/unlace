// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD0
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD0 jmp     cs:off_4BF650
//
// Resolved target: isupper
// Target address:  0x4C2B40
// GOT/IAT slot:    0x4BF650
// Slot symbol:     off_4BF650
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

