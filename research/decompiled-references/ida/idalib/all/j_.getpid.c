// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290900
// Name:            j_.getpid
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2290900 jmp     _getpid
//
// Resolved target: .getpid
// Target address:  0x2AD8D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __pid_t(void)
// ============================================================

/* see target sig */ j_.getpid(/* see target signature */)
{
    // Tail-call to .getpid via direct jump indirection
    return .getpid(/* forwarded args */);
}

