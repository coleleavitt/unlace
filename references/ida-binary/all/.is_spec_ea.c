// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D00
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D00 jmp     cs:is_spec_ea_ptr
//
// Resolved target: is_spec_ea
// Target address:  0x8D7620
// GOT/IAT slot:    0x8A2B20
// Slot symbol:     is_spec_ea_ptr
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

