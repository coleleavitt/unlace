// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33B0
// Name:            .get_next_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33B0 jmp     cs:off_131C0
//
// Resolved target: get_next_fixup_ea
// Target address:  0x138B8
// GOT/IAT slot:    0x131C0
// Slot symbol:     off_131C0
// Target type:     <no type info>
// ============================================================

void .get_next_fixup_ea(/* see target signature */)
{
    // Tail-call to get_next_fixup_ea via GOT/IAT indirection
    return get_next_fixup_ea(/* forwarded args */);
}

