// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABAC0
// Name:            .ctime_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABAC0 jmp     cs:off_2C7B548
//
// Resolved target: ctime_r
// Target address:  0x2D11C48
// GOT/IAT slot:    0x2C7B548
// Slot symbol:     off_2C7B548
// Target type:     char *(const time_t *timer, char *buf)
// ============================================================

/* see target sig */ .ctime_r(/* see target signature */)
{
    // Tail-call to ctime_r via GOT/IAT indirection
    return ctime_r(/* forwarded args */);
}

