// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA250
// Name:            .get_next_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA250 jmp     cs:off_2C7A910
//
// Resolved target: get_next_fixup_ea
// Target address:  0x41BAC0
// GOT/IAT slot:    0x2C7A910
// Slot symbol:     off_2C7A910
// Target type:     <no type info>
// ============================================================

void .get_next_fixup_ea(/* see target signature */)
{
    // Tail-call to get_next_fixup_ea via GOT/IAT indirection
    return get_next_fixup_ea(/* forwarded args */);
}

