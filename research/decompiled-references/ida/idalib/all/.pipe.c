// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A96E0
// Name:            .pipe
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A96E0 jmp     cs:off_2C7A358
//
// Resolved target: pipe
// Target address:  0x2D117A8
// GOT/IAT slot:    0x2C7A358
// Slot symbol:     off_2C7A358
// Target type:     int(int pipedes[2])
// ============================================================

/* see target sig */ .pipe(/* see target signature */)
{
    // Tail-call to pipe via GOT/IAT indirection
    return pipe(/* forwarded args */);
}

