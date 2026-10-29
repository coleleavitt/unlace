// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD20
// Name:            .sysconf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD20 jmp     cs:off_2C7B678
//
// Resolved target: sysconf
// Target address:  0x2D11CA8
// GOT/IAT slot:    0x2C7B678
// Slot symbol:     off_2C7B678
// Target type:     __int64(int name)
// ============================================================

/* see target sig */ .sysconf(/* see target signature */)
{
    // Tail-call to sysconf via GOT/IAT indirection
    return sysconf(/* forwarded args */);
}

