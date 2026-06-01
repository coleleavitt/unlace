// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118410
// Name:            .open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118410 jmp     cs:open_ptr
//
// Resolved target: open
// Target address:  0x8D7A88
// GOT/IAT slot:    0x8A2EA8
// Slot symbol:     open_ptr
// Target type:     int(const char *file, int oflag, ...)
// ============================================================

/* see target sig */ .open(/* see target signature */)
{
    // Tail-call to open via GOT/IAT indirection
    return open(/* forwarded args */);
}

