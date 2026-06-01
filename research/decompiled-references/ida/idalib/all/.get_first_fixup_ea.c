// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB630
// Name:            .get_first_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB630 jmp     cs:off_2C7B300
//
// Resolved target: get_first_fixup_ea
// Target address:  0x41B9F0
// GOT/IAT slot:    0x2C7B300
// Slot symbol:     off_2C7B300
// Target type:     <no type info>
// ============================================================

void .get_first_fixup_ea(/* see target signature */)
{
    // Tail-call to get_first_fixup_ea via GOT/IAT indirection
    return get_first_fixup_ea(/* forwarded args */);
}

