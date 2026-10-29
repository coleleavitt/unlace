// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C80
// Name:            .gmtime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C80 jmp     cs:off_2C79628
//
// Resolved target: gmtime
// Target address:  0x2D11488
// GOT/IAT slot:    0x2C79628
// Slot symbol:     off_2C79628
// Target type:     struct tm *(const time_t *timer)
// ============================================================

/* see target sig */ .gmtime(/* see target signature */)
{
    // Tail-call to gmtime via GOT/IAT indirection
    return gmtime(/* forwarded args */);
}

