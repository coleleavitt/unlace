// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_5090
//
// Resolved target: set_default_dataseg
// Target address:  0x53D8
// GOT/IAT slot:    0x5090
// Slot symbol:     off_5090
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}

