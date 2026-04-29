// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D0A0
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D0A0 jmp     cs:off_4EE038
//
// Resolved target: is_spec_ea
// Target address:  0x4F2388
// GOT/IAT slot:    0x4EE038
// Slot symbol:     off_4EE038
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

