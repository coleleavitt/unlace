// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B20
// Name:            .unlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B20 jmp     cs:off_2C79578
//
// Resolved target: unlink
// Target address:  0x2D11468
// GOT/IAT slot:    0x2C79578
// Slot symbol:     off_2C79578
// Target type:     int(const char *name)
// ============================================================

/* see target sig */ .unlink(/* see target signature */)
{
    // Tail-call to unlink via GOT/IAT indirection
    return unlink(/* forwarded args */);
}

