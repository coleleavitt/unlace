// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118AF0
// Name:            .sysconf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118AF0 jmp     cs:sysconf_ptr
//
// Resolved target: sysconf
// Target address:  0x8D7EB8
// GOT/IAT slot:    0x8A3218
// Slot symbol:     sysconf_ptr
// Target type:     __int64(int name)
// ============================================================

/* see target sig */ .sysconf(/* see target signature */)
{
    // Tail-call to sysconf via GOT/IAT indirection
    return sysconf(/* forwarded args */);
}

