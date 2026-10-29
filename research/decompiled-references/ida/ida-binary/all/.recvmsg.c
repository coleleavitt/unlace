// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117250
// Name:            .recvmsg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117250 jmp     cs:recvmsg_ptr
//
// Resolved target: recvmsg
// Target address:  0x8D6F60
// GOT/IAT slot:    0x8A25C8
// Slot symbol:     recvmsg_ptr
// Target type:     ssize_t(int fd, struct msghdr *message, int flags)
// ============================================================

/* see target sig */ .recvmsg(/* see target signature */)
{
    // Tail-call to recvmsg via GOT/IAT indirection
    return recvmsg(/* forwarded args */);
}

