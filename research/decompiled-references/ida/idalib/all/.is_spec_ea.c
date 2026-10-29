// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB390
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB390 jmp     cs:off_2C7B1B0
//
// Resolved target: is_spec_ea
// Target address:  0x510770
// GOT/IAT slot:    0x2C7B1B0
// Slot symbol:     off_2C7B1B0
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

