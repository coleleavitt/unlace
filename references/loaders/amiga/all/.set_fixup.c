// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_5060
//
// Resolved target: set_fixup
// Target address:  0x5198
// GOT/IAT slot:    0x5060
// Slot symbol:     off_5060
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

