// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117620
// Name:            .close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117620 jmp     cs:close_ptr
//
// Resolved target: close
// Target address:  0x8D71D0
// GOT/IAT slot:    0x8A27B0
// Slot symbol:     close_ptr
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .close(/* see target signature */)
{
    // Tail-call to close via GOT/IAT indirection
    return close(/* forwarded args */);
}

