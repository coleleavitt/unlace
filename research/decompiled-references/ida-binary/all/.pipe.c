// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1149A0
// Name:            .pipe
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1149A0 jmp     cs:pipe_ptr
//
// Resolved target: pipe
// Target address:  0x8D55C8
// GOT/IAT slot:    0x8A1170
// Slot symbol:     pipe_ptr
// Target type:     int(int pipedes[2])
// ============================================================

/* see target sig */ .pipe(/* see target signature */)
{
    // Tail-call to pipe via GOT/IAT indirection
    return pipe(/* forwarded args */);
}

