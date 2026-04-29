// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21C0
// Name:            .set_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21C0 jmp     cs:off_A0C8
//
// Resolved target: set_fixup
// Target address:  0xA378
// GOT/IAT slot:    0xA0C8
// Slot symbol:     off_A0C8
// Target type:     <no type info>
// ============================================================

void .set_fixup(/* see target signature */)
{
    // Tail-call to set_fixup via GOT/IAT indirection
    return set_fixup(/* forwarded args */);
}

