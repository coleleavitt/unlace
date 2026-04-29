// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_50A8
//
// Resolved target: set_default_dataseg
// Target address:  0x51D0
// GOT/IAT slot:    0x50A8
// Slot symbol:     off_50A8
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}

