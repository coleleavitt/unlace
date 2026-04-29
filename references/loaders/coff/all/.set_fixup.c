// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43B0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43B0 jmp     cs:off_231C0
//
// Resolved target: set_fixup
// Target address:  0x235E0
// GOT/IAT slot:    0x231C0
// Slot symbol:     off_231C0
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

