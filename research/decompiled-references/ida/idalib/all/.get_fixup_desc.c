// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9220
// Name:            .get_fixup_desc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9220 jmp     cs:off_2C7A0F8
//
// Resolved target: get_fixup_desc
// Target address:  0x41E730
// GOT/IAT slot:    0x2C7A0F8
// Slot symbol:     off_2C7A0F8
// Target type:     <no type info>
// ============================================================

void .get_fixup_desc(/* see target signature */)
{
    // Tail-call to get_fixup_desc via GOT/IAT indirection
    return get_fixup_desc(/* forwarded args */);
}

