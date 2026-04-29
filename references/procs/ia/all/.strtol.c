// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72F0
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72F0 jmp     cs:off_26160
//
// Resolved target: strtol
// Target address:  0x26420
// GOT/IAT slot:    0x26160
// Slot symbol:     off_26160
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

