// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF90
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF90 jmp     cs:off_4E9FB0
//
// Resolved target: is_spec_ea
// Target address:  0x4ECA00
// GOT/IAT slot:    0x4E9FB0
// Slot symbol:     off_4E9FB0
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

