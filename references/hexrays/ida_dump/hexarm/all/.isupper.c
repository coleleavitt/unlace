// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DCF0
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DCF0 jmp     cs:off_4E9660
//
// Resolved target: isupper
// Target address:  0x4EC078
// GOT/IAT slot:    0x4E9660
// Slot symbol:     off_4E9660
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

