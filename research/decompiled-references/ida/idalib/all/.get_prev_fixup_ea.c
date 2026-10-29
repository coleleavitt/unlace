// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB5E0
// Name:            .get_prev_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB5E0 jmp     cs:off_2C7B2D8
//
// Resolved target: get_prev_fixup_ea
// Target address:  0x41BFB0
// GOT/IAT slot:    0x2C7B2D8
// Slot symbol:     off_2C7B2D8
// Target type:     <no type info>
// ============================================================

void .get_prev_fixup_ea(/* see target signature */)
{
    // Tail-call to get_prev_fixup_ea via GOT/IAT indirection
    return get_prev_fixup_ea(/* forwarded args */);
}

