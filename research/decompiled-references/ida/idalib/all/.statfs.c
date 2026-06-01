// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8460
// Name:            .statfs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8460 jmp     cs:off_2C79A18
//
// Resolved target: statfs
// Target address:  0x2D115A0
// GOT/IAT slot:    0x2C79A18
// Slot symbol:     off_2C79A18
// Target type:     int(const char *file, struct statfs *buf)
// ============================================================

/* see target sig */ .statfs(/* see target signature */)
{
    // Tail-call to statfs via GOT/IAT indirection
    return statfs(/* forwarded args */);
}

