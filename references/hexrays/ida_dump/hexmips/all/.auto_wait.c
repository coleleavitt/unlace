// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0A0
// Name:            .auto_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0A0 jmp     cs:off_4CE038
//
// Resolved target: auto_wait
// Target address:  0x4D0A88
// GOT/IAT slot:    0x4CE038
// Slot symbol:     off_4CE038
// Target type:     <no type info>
// ============================================================

void .auto_wait(/* see target signature */)
{
    // Tail-call to auto_wait via GOT/IAT indirection
    return auto_wait(/* forwarded args */);
}

