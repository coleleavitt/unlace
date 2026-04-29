// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_40A0
//
// Resolved target: set_default_dataseg
// Target address:  0x41D0
// GOT/IAT slot:    0x40A0
// Slot symbol:     off_40A0
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}

