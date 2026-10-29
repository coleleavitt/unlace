// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC170
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC170 jmp     cs:off_2C7B8A0
//
// Resolved target: set_fixup
// Target address:  0x41CF70
// GOT/IAT slot:    0x2C7B8A0
// Slot symbol:     off_2C7B8A0
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

