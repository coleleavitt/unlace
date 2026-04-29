// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19290
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19290 jmp     cs:off_75130
//
// Resolved target: set_default_sreg_value
// Target address:  0x75980
// GOT/IAT slot:    0x75130
// Slot symbol:     off_75130
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}

