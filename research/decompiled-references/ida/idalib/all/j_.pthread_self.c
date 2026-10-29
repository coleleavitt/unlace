// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2297050
// Name:            j_.pthread_self
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2297050 jmp     _pthread_self
//
// Resolved target: .pthread_self
// Target address:  0x2A91A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     pthread_t(void)
// ============================================================

/* see target sig */ j_.pthread_self(/* see target signature */)
{
    // Tail-call to .pthread_self via direct jump indirection
    return .pthread_self(/* forwarded args */);
}

