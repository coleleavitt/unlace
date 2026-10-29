// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB4E0
// Name:            .send
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB4E0 jmp     cs:off_2C7B258
//
// Resolved target: send
// Target address:  0x2D11B68
// GOT/IAT slot:    0x2C7B258
// Slot symbol:     off_2C7B258
// Target type:     ssize_t(int fd, const void *buf, size_t n, int flags)
// ============================================================

/* see target sig */ .send(/* see target signature */)
{
    // Tail-call to send via GOT/IAT indirection
    return send(/* forwarded args */);
}

