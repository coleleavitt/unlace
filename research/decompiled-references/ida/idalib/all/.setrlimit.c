// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC690
// Name:            .setrlimit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC690 jmp     cs:off_2C7BB30
//
// Resolved target: setrlimit
// Target address:  0x2D11DD0
// GOT/IAT slot:    0x2C7BB30
// Slot symbol:     off_2C7BB30
// Target type:     int(__rlimit_resource_t resource, const struct rlimit *rlimits)
// ============================================================

/* see target sig */ .setrlimit(/* see target signature */)
{
    // Tail-call to setrlimit via GOT/IAT indirection
    return setrlimit(/* forwarded args */);
}

