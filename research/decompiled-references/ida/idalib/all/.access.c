// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7570
// Name:            .access
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7570 jmp     cs:off_2C792A0
//
// Resolved target: access
// Target address:  0x2D113C8
// GOT/IAT slot:    0x2C792A0
// Slot symbol:     off_2C792A0
// Target type:     int(const char *name, int type)
// ============================================================

/* see target sig */ .access(/* see target signature */)
{
    // Tail-call to access via GOT/IAT indirection
    return access(/* forwarded args */);
}

