// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_8140
//
// Resolved target: set_default_dataseg
// Target address:  0x8328
// GOT/IAT slot:    0x8140
// Slot symbol:     off_8140
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}

