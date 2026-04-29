// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB80
// Name:            .isalpha
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB80 jmp     cs:off_4CDDA8
//
// Resolved target: isalpha
// Target address:  0x4D07E8
// GOT/IAT slot:    0x4CDDA8
// Slot symbol:     off_4CDDA8
// Target type:     int(int)
// ============================================================

/* see target sig */ .isalpha(/* see target signature */)
{
    // Tail-call to isalpha via GOT/IAT indirection
    return isalpha(/* forwarded args */);
}

