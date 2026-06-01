// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF60
// Name:            .getpwuid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF60 jmp     cs:off_2C7AF98
//
// Resolved target: getpwuid
// Target address:  0x2D11AB8
// GOT/IAT slot:    0x2C7AF98
// Slot symbol:     off_2C7AF98
// Target type:     struct passwd *(__uid_t uid)
// ============================================================

/* see target sig */ .getpwuid(/* see target signature */)
{
    // Tail-call to getpwuid via GOT/IAT indirection
    return getpwuid(/* forwarded args */);
}

