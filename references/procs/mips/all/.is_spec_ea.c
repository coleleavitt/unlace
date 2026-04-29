// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CA0
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CA0 jmp     cs:off_75638
//
// Resolved target: is_spec_ea
// Target address:  0x75EA0
// GOT/IAT slot:    0x75638
// Slot symbol:     off_75638
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

