// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114840
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114840 jmp     cs:set_default_sreg_value_ptr
//
// Resolved target: set_default_sreg_value
// Target address:  0x8D54C0
// GOT/IAT slot:    0x8A10C0
// Slot symbol:     set_default_sreg_value_ptr
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}

