// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD70
// Name:            .qpipe_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD70 jmp     cs:off_2C7AEA0
//
// Resolved target: qpipe_close
// Target address:  0x83BF20
// GOT/IAT slot:    0x2C7AEA0
// Slot symbol:     off_2C7AEA0
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .qpipe_close(/* see target signature */)
{
    // Tail-call to qpipe_close via GOT/IAT indirection
    return qpipe_close(/* forwarded args */);
}

