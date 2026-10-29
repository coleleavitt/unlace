// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1165D0
// Name:            .dup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1165D0 jmp     cs:dup_ptr
//
// Resolved target: dup
// Target address:  0x8D6778
// GOT/IAT slot:    0x8A1F88
// Slot symbol:     dup_ptr
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .dup(/* see target signature */)
{
    // Tail-call to dup via GOT/IAT indirection
    return dup(/* forwarded args */);
}

