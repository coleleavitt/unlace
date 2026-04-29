// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CEF0
// Name:            .floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CEF0 jmp     cs:off_4EDF60
//
// Resolved target: floor
// Target address:  0x4F22B0
// GOT/IAT slot:    0x4EDF60
// Slot symbol:     off_4EDF60
// Target type:     double(double x)
// ============================================================

/* see target sig */ .floor(/* see target signature */)
{
    // Tail-call to floor via GOT/IAT indirection
    return floor(/* forwarded args */);
}

