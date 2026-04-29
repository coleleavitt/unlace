// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22A0
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22A0 jmp     cs:off_8138
//
// Resolved target: set_default_dataseg
// Target address:  0x8828
// GOT/IAT slot:    0x8138
// Slot symbol:     off_8138
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}

