// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A8A0
// Name:            .isupper
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A8A0 jmp     cs:isupper_ptr
//
// Resolved target: isupper
// Target address:  0x8D91B0
// GOT/IAT slot:    0x8A40F0
// Slot symbol:     isupper_ptr
// Target type:     int(int)
// ============================================================

/* see target sig */ .isupper(/* see target signature */)
{
    // Tail-call to isupper via GOT/IAT indirection
    return isupper(/* forwarded args */);
}

