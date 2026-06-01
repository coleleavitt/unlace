// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7990
// Name:            .remove
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7990 jmp     cs:off_2C794B0
//
// Resolved target: remove
// Target address:  0x2D11448
// GOT/IAT slot:    0x2C794B0
// Slot symbol:     off_2C794B0
// Target type:     int(const char *filename)
// ============================================================

/* see target sig */ .remove(/* see target signature */)
{
    // Tail-call to remove via GOT/IAT indirection
    return remove(/* forwarded args */);
}

