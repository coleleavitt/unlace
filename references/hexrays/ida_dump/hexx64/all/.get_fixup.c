// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C070
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C070 jmp     cs:off_4ED820
//
// Resolved target: get_fixup
// Target address:  0x4F1B30
// GOT/IAT slot:    0x4ED820
// Slot symbol:     off_4ED820
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

