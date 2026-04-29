// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_80C0
//
// Resolved target: set_fixup
// Target address:  0x82B0
// GOT/IAT slot:    0x80C0
// Slot symbol:     off_80C0
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

