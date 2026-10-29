// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA650
// Name:            .dup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA650 jmp     cs:off_2C7AB10
//
// Resolved target: dup
// Target address:  0x2D11980
// GOT/IAT slot:    0x2C7AB10
// Slot symbol:     off_2C7AB10
// Target type:     int(int fd)
// ============================================================

/* see target sig */ .dup(/* see target signature */)
{
    // Tail-call to dup via GOT/IAT indirection
    return dup(/* forwarded args */);
}

