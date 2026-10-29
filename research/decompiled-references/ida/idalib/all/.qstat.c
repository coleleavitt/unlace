// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD330
// Name:            .qstat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD330 jmp     cs:off_2C7C180
//
// Resolved target: qstat
// Target address:  0x83EB10
// GOT/IAT slot:    0x2C7C180
// Slot symbol:     off_2C7C180
// Target type:     __int64 __fastcall(char *filename)
// ============================================================

/* see target sig */ .qstat(/* see target signature */)
{
    // Tail-call to qstat via GOT/IAT indirection
    return qstat(/* forwarded args */);
}

