// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD320
// Name:            .getrlimit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD320 jmp     cs:off_2C7C178
//
// Resolved target: getrlimit
// Target address:  0x2D11F90
// GOT/IAT slot:    0x2C7C178
// Slot symbol:     off_2C7C178
// Target type:     int(__rlimit_resource_t resource, struct rlimit *rlimits)
// ============================================================

/* see target sig */ .getrlimit(/* see target signature */)
{
    // Tail-call to getrlimit via GOT/IAT indirection
    return getrlimit(/* forwarded args */);
}

