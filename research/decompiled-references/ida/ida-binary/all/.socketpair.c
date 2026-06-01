// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1169A0
// Name:            .socketpair
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1169A0 jmp     cs:socketpair_ptr
//
// Resolved target: socketpair
// Target address:  0x8D69F8
// GOT/IAT slot:    0x8A2170
// Slot symbol:     socketpair_ptr
// Target type:     int(int domain, int type, int protocol, int fds[2])
// ============================================================

/* see target sig */ .socketpair(/* see target signature */)
{
    // Tail-call to socketpair via GOT/IAT indirection
    return socketpair(/* forwarded args */);
}

