// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30C0
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30C0 jmp     cs:off_20048
//
// Resolved target: isxdigit
// Target address:  0x21958
// GOT/IAT slot:    0x20048
// Slot symbol:     off_20048
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

