// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF30
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF30 jmp     cs:off_4B9F80
//
// Resolved target: is_spec_ea
// Target address:  0x4BC9B0
// GOT/IAT slot:    0x4B9F80
// Slot symbol:     off_4B9F80
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

