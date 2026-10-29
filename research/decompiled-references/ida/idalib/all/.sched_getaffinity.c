// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB470
// Name:            .sched_getaffinity
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB470 jmp     cs:off_2C7B220
//
// Resolved target: sched_getaffinity
// Target address:  0x2D11B60
// GOT/IAT slot:    0x2C7B220
// Slot symbol:     off_2C7B220
// Target type:     int(__pid_t pid, size_t cpusetsize, cpu_set_t *cpuset)
// ============================================================

/* see target sig */ .sched_getaffinity(/* see target signature */)
{
    // Tail-call to sched_getaffinity via GOT/IAT indirection
    return sched_getaffinity(/* forwarded args */);
}

