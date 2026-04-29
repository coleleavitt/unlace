// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_70B8
//
// Resolved target: set_fixup
// Target address:  0x7270
// GOT/IAT slot:    0x70B8
// Slot symbol:     off_70B8
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

