// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_50C8
//
// Resolved target: set_default_dataseg
// Target address:  0x5230
// GOT/IAT slot:    0x50C8
// Slot symbol:     off_50C8
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}

