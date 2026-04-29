// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B060
// Name:            .time
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B060 jmp     cs:off_4C0818
//
// Resolved target: time
// Target address:  0x4C3810
// GOT/IAT slot:    0x4C0818
// Slot symbol:     off_4C0818
// Target type:     time_t(time_t *timer)
// ============================================================

/* see target sig */ .time(/* see target signature */)
{
    // Tail-call to time via GOT/IAT indirection
    return time(/* forwarded args */);
}

