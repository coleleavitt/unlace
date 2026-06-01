// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB00
// Name:            .chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB00 jmp     cs:off_2C7C568
//
// Resolved target: chdir
// Target address:  0x2D120B0
// GOT/IAT slot:    0x2C7C568
// Slot symbol:     off_2C7C568
// Target type:     int(const char *path)
// ============================================================

/* see target sig */ .chdir(/* see target signature */)
{
    // Tail-call to chdir via GOT/IAT indirection
    return chdir(/* forwarded args */);
}

