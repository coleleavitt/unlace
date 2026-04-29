// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD20
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD20 jmp     cs:off_4ED678
//
// Resolved target: isupper
// Target address:  0x4F1988
// GOT/IAT slot:    0x4ED678
// Slot symbol:     off_4ED678
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

